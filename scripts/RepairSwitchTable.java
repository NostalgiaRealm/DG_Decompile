// Recover signed-byte-times-four ARM64 switch destinations from the actual table bytes.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.address.*;
import java.util.*;
public class RepairSwitchTable extends GhidraScript {
 private Address addr(String s){return toAddr(Long.parseUnsignedLong(s,16));}
 public void run() throws Exception {
  String[] a=getScriptArgs();Function f=getFunctionAt(addr(a[0]));Address branch=addr(a[1]),table=addr(a[2]);int count=Integer.parseInt(a[3]);
  ArrayList<Address> targets=new ArrayList<>();StringJoiner evidence=new StringJoiner(", ");
  for(int i=0;i<count;i++){int offset=currentProgram.getMemory().getByte(table.add(i));Address target=table.add(4L*offset);if(!f.getBody().contains(target)||getInstructionAt(target)==null)throw new IllegalArgumentException("Switch destination outside known function code");targets.add(target);evidence.add(i+" -> "+target+" (signed byte "+offset+")");}
  int tx=currentProgram.startTransaction("Evidence based compact switch override");boolean keep=false;
  try {
   new JumpTable(branch,targets,true,0).writeOverride(f);
   DecompInterface d=new DecompInterface();d.toggleSyntaxTree(true);d.openProgram(currentProgram);
   DecompileResults r=d.decompileFunction(f,180,monitor);keep=r.decompileCompleted()&&r.getDecompiledFunction()!=null&&r.getHighFunction()!=null;
   println("SWITCH REPAIR success="+keep+" "+r.getErrorMessage());
   if(keep){f.setComment("Inspection switch repair: indirect branch "+branch+" uses signed-byte displacements from table "+table+", multiplied by four and added to the table address. Explicit destinations from unchanged bytes: "+evidence+". This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error; types remain inferred.");println(r.getDecompiledFunction().getC());}
   d.dispose();
  }finally{currentProgram.endTransaction(tx,keep);}
 }
}
