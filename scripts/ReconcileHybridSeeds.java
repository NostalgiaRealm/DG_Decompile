// Prefer an authoritative metadata seed over an inferred function a few prologue bytes later.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;
public class ReconcileHybridSeeds extends GhidraScript {
 public void run() throws Exception {
  TreeMap<Address,String> seeds=new TreeMap<>();
  for(String line:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
   if(line.isBlank()||line.startsWith("#")||line.startsWith("address"))continue;
   String[] p=line.split("\t");seeds.put(toAddr(Long.parseUnsignedLong(p[0].replaceFirst("^0[xX]",""),16)),p.length>1?p[1]:null);
  }
  Path evidence=Paths.get(getScriptArgs()[0]).getParent().resolve(currentProgram.getName()+".seed-repairs.tsv");
  int fixed=0;
  boolean existing=Files.exists(evidence)&&Files.size(evidence)>0;
  try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(evidence,StandardCharsets.UTF_8,StandardOpenOption.CREATE,StandardOpenOption.APPEND))) {
   if(!existing)w.println("metadata_seed\treplaced_inferred_entry\tprefix_bytes\tnote");
   for(Address a:seeds.keySet()) {
    if(getFunctionContaining(a)!=null||getInstructionAt(a)==null)continue;
    Function next=getFunctionAfter(a);if(next==null||next.isExternal()||seeds.containsKey(next.getEntryPoint()))continue;
    long distance=next.getEntryPoint().subtract(a);if(distance<=0||distance>16)continue;
    Address cursor=a;boolean straight=true;
    while(cursor.compareTo(next.getEntryPoint())<0) {
     Instruction i=getInstructionAt(cursor);
     if(i==null||!i.getFlowType().isFallthrough()||i.getFallThrough()==null) {straight=false;break;}
     cursor=i.getFallThrough();
    }
    if(!straight||!cursor.equals(next.getEntryPoint()))continue;
    boolean hasIncomingCall=false;
    for(Reference r:currentProgram.getReferenceManager().getReferencesTo(next.getEntryPoint())) if(r.getReferenceType().isCall()) hasIncomingCall=true;
    if(hasIncomingCall)continue;
    Address old=next.getEntryPoint();AddressSet body=new AddressSet(next.getBody());body.add(a,old.previous());
    currentProgram.getFunctionManager().removeFunction(old);
    Function replacement=currentProgram.getFunctionManager().createFunction(seeds.get(a),a,body,SourceType.IMPORTED);
    replacement.setComment("Authoritative hybrid metadata starts this function at "+a+". Ghidra inferred an entry "+distance+" bytes later at "+old+"; a continuous straight-line prologue with no incoming call to the later entry was merged. Instruction bytes unchanged.");
    w.println(a+"\t"+old+"\t"+distance+"\tMetadata seed reconciled with continuous prologue; no incoming call to displaced inferred entry.");fixed++;
   }
  }
  println("HYBRID SEED RECONCILIATION repaired "+fixed+" entries; evidence="+evidence);
  Path pointerSeeds=Paths.get(getScriptArgs()[0]).getParent().resolve(currentProgram.getName().replace(".mapped.bin", "")+".additional_pointer_seeds.tsv");
  int recovered=0;
  if(Files.exists(pointerSeeds)) {
   Path pointerEvidence=Paths.get(getScriptArgs()[0]).getParent().resolve(currentProgram.getName()+".pointer-recoveries.tsv");
   boolean prior=Files.exists(pointerEvidence)&&Files.size(pointerEvidence)>0;
   try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(pointerEvidence,StandardCharsets.UTF_8,StandardOpenOption.CREATE,StandardOpenOption.APPEND))) {
    if(!prior)w.println("entry\tbody_bytes\tevidence\tnote");
    for(String line:Files.readAllLines(pointerSeeds)) {
     if(line.isBlank()||line.startsWith("#")||line.startsWith("address"))continue;
     String[] p=line.split("\t");Address a=toAddr(Long.parseUnsignedLong(p[0].replaceFirst("^0[xX]",""),16));
     if(!currentProgram.getMemory().getExecuteSet().contains(a)||getInstructionAt(a)==null||getFunctionContaining(a)!=null)continue;
     Function f=createFunction(a,p.length>1?p[1]:null);
     if(f!=null) {
      f.setComment("Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.");
      w.println(a+"\t"+f.getBody().getNumAddresses()+"\t"+pointerSeeds+"\tAlready-decoded orphan with documented aligned data-pointer references."); recovered++;
     }
    }
   }
  }
  println("HYBRID POINTER RECOVERY created "+recovered+" candidate functions from documented data pointers");
 }
}
