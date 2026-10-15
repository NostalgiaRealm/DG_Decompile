// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.util.*;
public class DiagnoseDecompile extends GhidraScript {
 public void run() throws Exception {
  Function f=getFunctionAt(toAddr(Long.parseUnsignedLong(getScriptArgs()[0],16)));
  println("FUNCTION "+f.getSignature()+" custom="+f.hasCustomVariableStorage()+" source="+f.getSignatureSource());
  ArrayList<Function> fs=new ArrayList<>();fs.add(f);fs.addAll(f.getCalledFunctions(monitor));
  for(Function v:fs) {println("DETAIL "+v.getEntryPoint()+" "+v.getSignature()+" "+v.getSignatureSource()); for(Variable x:v.getAllVariables()) println("VAR "+x.getName()+" "+x.getDataType()+" "+x.getVariableStorage()+" "+x.getSource());}
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
  for(String style:new String[]{"decompile","normalize","firstpass"}) {d.setSimplificationStyle(style);DecompileResults r=d.decompileFunction(f,120,monitor);println("ATTEMPT "+style+" "+r.decompileCompleted()+" "+r.getErrorMessage());if(r.getDecompiledFunction()!=null)println(r.getDecompiledFunction().getC());}
  d.dispose();
 }
}
