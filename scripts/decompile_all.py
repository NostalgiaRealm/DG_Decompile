#!/usr/bin/env python3
"""Reproducible Ghidra export driver. Does not execute target PE files.

Run ordinary PE jobs: python3 scripts/decompile_all.py --ordinary
Run prepared hybrid jobs: python3 scripts/decompile_all.py --hybrid
Existing complete exports are retained. Delete that job's summary.json to rerun.
"""
import argparse
import concurrent.futures
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import threading
import time

ROOT=Path(__file__).resolve().parents[1]
GHIDRA=ROOT/'tools/ghidra_12.1.4_PUBLIC/support/analyzeHeadless'
LOCK=threading.Lock()

def safe(s): return re.sub(r'[^A-Za-z0-9_.-]','_',s)
def now(): return time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime())
def digest(path): return hashlib.sha256(Path(path).read_bytes()).hexdigest()

def ordinary_jobs():
    result=[]
    for f in json.loads((ROOT/'inventory/manifest.json').read_text())['files']:
        if 'chpe' in f['path'] or '/arm64x/' in f['path']: continue
        result.append(dict(id=f['path'],source_path=f['path'],input_path=str(ROOT/f['prepared_path']),kind='pe',input_sha256=f['prepared_sha256']))
    # Small direct setup and Glide jobs establish results before heavy renderer DLLs.
    return sorted(result,key=lambda j:(Path(j['input_path']).stat().st_size,j['id']))

def hybrid_jobs():
    data=json.loads((ROOT/'inventory/hybrid_jobs.json').read_text())
    jobs=data if isinstance(data,list) else data['jobs']
    normalized=[]
    for j in jobs:
        normalized.append(dict(j,
            input_path=str(ROOT/'binaries/hybrid'/Path(j['input_path']).name),
            function_starts=str(ROOT/'inventory/hybrid'/Path(j['function_starts']).name),
            code_ranges_path=str(ROOT/'inventory/hybrid'/Path(j['code_ranges_tsv']).name),
            labels_path=str(ROOT/'inventory/hybrid'/Path(j['labels_tsv']).name)))
    return normalized

def run_job(j):
    actual_input_sha256=digest(j['input_path'])
    if actual_input_sha256!=j['input_sha256']: raise ValueError(f"Input digest mismatch for {j['id']}; regenerate and inspect preparation manifest")
    key=safe(j['id'])
    output=ROOT/'decompiled'/j['id']
    project=ROOT/'analysis-projects'/key
    logdir=ROOT/'logs/decompile'
    project.mkdir(parents=True,exist_ok=True); output.mkdir(parents=True,exist_ok=True)
    script_names=['ExportAll.java','RecoverFunctions.java']
    known_repairs={
        ('MS__arm64_chpe_x86__D3D9.dll.arm64','c978f69ea9f24a2c16151f18794dbf04732d241847b415474c7b9e38665e78bf'):['10014800'],
        ('dgVoodooCpl.exe','87fb878166dcaef3e75ff170de030527c73f5c9b164c5943da13f8a97b0b75c6'):['140002910'],
        ('MS__arm64_chpe_x86__D3D8.dll.arm64','3e4e54e64dd1d46f19ef3060f5c3a613650099731353d353266c33e6df64953b'):['10012968'],
        ('MS__arm64_chpe_x86__D3DImm.dll.arm64','a75bc8ed43337c6c29839b063c8adf76763c9b9cbcd7a31ea32c87ab0b67f34d'):['1007b170'],
    }
    repair_addresses=known_repairs.get((j['id'],j.get('input_sha256')),[])
    if repair_addresses: script_names+=['RepairDecompilerFailure.java']
    switch_repairs={
        'MS__arm64_chpe_x86__D3D8.dll.arm64':['10012968','10012c4c','10012d08','3'],
        'MS__arm64_chpe_x86__D3D9.dll.arm64':['10014800','10014b2c','10014bf0','3'],
        'MS__arm64_chpe_x86__D3DImm.dll.arm64':['1007b170','1007b190','1007b1c0','4'],
    }
    switch_repair=switch_repairs.get(j['id']) if repair_addresses else None
    if switch_repair: script_names+=['RepairSwitchTable.java']
    if j.get('language_id'): script_names+=['PrepareHybrid.java','ReconcileHybridSeeds.java','TrimHybrid.java']
    current_scripts={name:digest(ROOT/'scripts'/name) for name in script_names}
    previous_path=logdir/(key+'-job.json')
    previous=json.loads(previous_path.read_text()) if previous_path.exists() else {}
    same_input=previous.get('input_sha256')==actual_input_sha256
    auxiliary_names=['code_ranges_path','function_starts','labels_path'] if j.get('language_id') else []
    auxiliary_sha256={name:digest(j[name]) for name in auxiliary_names}
    same_auxiliary=previous.get('auxiliary_sha256',{})==auxiliary_sha256
    have_project=(project/'analysis.gpr').exists()
    if (output/'summary.json').exists() and have_project and same_input and same_auxiliary and previous.get('scripts_sha256')==current_scripts and previous.get('exit_code')==0:
        print(f"SKIP completed {j['id']}",flush=True)
        return dict(**j,state='complete_existing',output_path=str(output),project_path=str(project/'analysis.gpr'),summary=json.loads((output/'summary.json').read_text()))
    reuse=have_project and same_input and same_auxiliary and previous.get('language_id')==j.get('language_id')
    if j.get('language_id') and previous.get('scripts_sha256',{}).get('PrepareHybrid.java')!=current_scripts['PrepareHybrid.java']: reuse=False
    action=['-process',Path(j['input_path']).name,'-noanalysis'] if reuse else ['-import',str(j['input_path']),'-overwrite']
    cmd=[str(GHIDRA),str(project),'analysis',*action,'-scriptPath',str(ROOT/'scripts'),'-max-cpu','4','-analysisTimeoutPerFile','1800','-log',str(logdir/(key+'-ghidra.log')),'-scriptlog',str(logdir/(key+'-script.log'))]
    if j.get('kind')=='raw' or j.get('language_id'):
        if not reuse:
            cmd+=['-loader','BinaryLoader','-processor',j['language_id'],'-cspec',j.get('compiler_spec','default'),'-loader-baseAddr',j['image_base']]
            cmd+=['-preScript','PrepareHybrid.java',j['code_ranges_path'],j['function_starts'],j.get('labels_path','-')]
        cmd+=['-postScript','ReconcileHybridSeeds.java',j['function_starts'],'-postScript','TrimHybrid.java',j['code_ranges_path']]
    if switch_repair: cmd+=['-postScript','RepairSwitchTable.java',*switch_repair]
    for address in repair_addresses: cmd+=['-postScript','RepairDecompilerFailure.java',address]
    cmd+=['-postScript','RecoverFunctions.java','-postScript','ExportAll.java',str(output)]
    if j.get('language_id'): cmd+=['restricted']
    env=os.environ.copy(); env['GHIDRA_HEADLESS_MAXMEM']='4G'
    for sub in ('functions','failed-assembly'):
        if (output/sub).exists(): shutil.rmtree(output/sub)
    if (output/'summary.json').exists(): (output/'summary.json').unlink()
    record=dict(**j,state='running',started_utc=now(),command=cmd,output_path=str(output),project_path=str(project/'analysis.gpr'),scripts_sha256=current_scripts,auxiliary_sha256=auxiliary_sha256,reused_analyzed_project=reuse)
    (logdir/(key+'-job.json')).write_text(json.dumps(record,indent=2)+'\n')
    print(f"START {j['id']}",flush=True)
    start=time.monotonic()
    with (logdir/(key+'-console.log')).open('w') as log:
        proc=subprocess.run(cmd,env=env,cwd=ROOT,stdout=log,stderr=subprocess.STDOUT)
    record.update(exit_code=proc.returncode,finished_utc=now(),elapsed_seconds=round(time.monotonic()-start,2))
    if proc.returncode==0 and (output/'summary.json').exists() and (project/'analysis.gpr').exists(): record.update(state='complete',summary=json.loads((output/'summary.json').read_text()))
    else: record.update(state='failed')
    (logdir/(key+'-job.json')).write_text(json.dumps(record,indent=2)+'\n')
    print(f"{record['state'].upper()} {j['id']} {record['elapsed_seconds']}s {record.get('summary',{}).get('functions','?')} functions",flush=True)
    return record

def main():
    p=argparse.ArgumentParser(); p.add_argument('--ordinary',action='store_true'); p.add_argument('--hybrid',action='store_true'); p.add_argument('--workers',type=int,default=2); p.add_argument('--only',default=''); a=p.parse_args()
    jobs=(ordinary_jobs() if a.ordinary else [])+(hybrid_jobs() if a.hybrid else [])
    if a.only: jobs=[j for j in jobs if a.only in j['id']]
    if not jobs: p.error('Select --ordinary and/or --hybrid, with optional --only substring')
    if not 1<=a.workers<=2: p.error('--workers must be 1 or 2')
    results=[]
    with concurrent.futures.ThreadPoolExecutor(max_workers=a.workers) as pool:
        futures=[pool.submit(run_job,j) for j in jobs]
        for f in concurrent.futures.as_completed(futures): results.append(f.result())
    name='ordinary-jobs.json' if a.ordinary and not a.hybrid else 'hybrid-jobs.json' if a.hybrid and not a.ordinary else 'all-jobs.json'
    (ROOT/'logs/decompile'/name).write_text(json.dumps(sorted(results,key=lambda r:r['id']),indent=2)+'\n')
    raise SystemExit(1 if any(r['state']=='failed' for r in results) else 0)

if __name__=='__main__': main()
