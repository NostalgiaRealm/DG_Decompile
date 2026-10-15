#!/usr/bin/env python3
"""Decode the shipped extended dialog templates, without running either EXE.

Reads raw resources emitted by extract_resources.py; asserts every byte range and
records resource-relative offsets and control identifiers for code navigation.
"""
import argparse
import json
import struct
from pathlib import Path

STANDARD_CLASSES = {0x80:'BUTTON',0x81:'EDIT',0x82:'STATIC',0x83:'LISTBOX',0x84:'SCROLLBAR',0x85:'COMBOBOX'}

class Reader:
    def __init__(self,data): self.data=data; self.offset=0
    def unpack(self,fmt):
        count=struct.calcsize(fmt)
        if self.offset+count>len(self.data): raise ValueError(f'Truncated dialog at {self.offset:#x}')
        values=struct.unpack_from(fmt,self.data,self.offset); self.offset+=count
        return values
    def variable(self):
        start=self.offset; first=self.unpack('<H')[0]
        if first==0:return ''
        if first==0xffff:return {'ordinal':self.unpack('<H')[0]}
        while self.unpack('<H')[0]:pass
        return self.data[start:self.offset-2].decode('utf-16-le')
    def align(self):self.offset=(self.offset+3)&~3


def decode(raw):
    r=Reader(raw)
    version,signature,helpid,exstyle,style,count,x,y,cx,cy=r.unpack('<HHIIIHhhhh')
    if version!=1 or signature!=0xffff: raise ValueError('Not a version-1 extended dialog')
    out={'kind':'DLGTEMPLATEEX','version':version,'help_id':helpid,
         'extended_style':hex(exstyle),'style':hex(style),'item_count':count,
         'x':x,'y':y,'width':cx,'height':cy,
         'menu':r.variable(),'window_class':r.variable(),'title':r.variable()}
    if style&0x40:
        point,weight,italic,charset=r.unpack('<HHBB')
        out['font']={'point_size':point,'weight':weight,'italic':italic,
                     'charset':charset,'typeface':r.variable()}
    out['controls']=[]
    for i in range(count):
        r.align();start=r.offset
        helpid,exstyle,style,x,y,cx,cy,ident=r.unpack('<IIIhhhhI')
        klass=r.variable();title=r.variable();size=r.unpack('<H')[0]
        if r.offset+size>len(raw): raise ValueError('Truncated extra data')
        extra=raw[r.offset:r.offset+size];r.offset+=size
        class_name=STANDARD_CLASSES.get(klass['ordinal'],klass) if isinstance(klass,dict) else klass
        out['controls'].append({'index':i,'template_offset':hex(start),'id':ident,
            'id_hex':hex(ident),'help_id':helpid,'class':klass,'class_name':class_name,
            'title':title,'extended_style':hex(exstyle),'style':hex(style),
            'x':x,'y':y,'width':cx,'height':cy,'extra_hex':extra.hex()})
    tail=raw[r.offset:]
    if any(tail): raise ValueError(f'Unparsed nonzero dialog bytes: {len(tail)}')
    out['parsed_bytes']=r.offset;out['trailing_zero_bytes']=len(tail)
    return out


def write_generated(path, value):
    if path.exists() and (path.is_symlink() or path.read_text()!=value):
        raise RuntimeError(f'Refusing conflicting generated output: {path}')
    if not path.exists():
        with path.open('x') as target: target.write(value)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    args=parser.parse_args();root=args.root.resolve()
    base=root/'notes/control-panel'
    for binary in ('dgVoodooCpl.exe','Cpl/arm64/dgVoodooCpl.exe'):
        manifest=json.loads((root/'resources'/binary/'manifest.json').read_text())
        decoded=[]
        for item in manifest['resources']:
            if item['type']!='5':continue
            dialog=decode((root/'resources'/binary/item['file']).read_bytes())
            decoded.append({'resource':item,**dialog})
        target=base/binary;target.mkdir(parents=True,exist_ok=True)
        write_generated(target/'dialogs.json',json.dumps({'binary':binary,'sha256':manifest['sha256'],
            'evidence':'Static RT_DIALOG resources; no UI execution observed','dialogs':decoded},indent=2)+'\n')
        lines=['dialog_id\tlanguage\tcontrol_id\tclass\ttitle_json\ttemplate_offset']
        for dialog in decoded:
            for control in dialog['controls']:
                lines.append('\t'.join([dialog['resource']['name'],dialog['resource']['language'],str(control['id']),
                            str(control['class_name']),json.dumps(control['title']),control['template_offset']]))
        write_generated(target/'controls.tsv','\n'.join(lines)+'\n')
        print(binary, len(decoded),'dialogs',sum(d['item_count'] for d in decoded),'controls')

if __name__=='__main__':main()
