// Explicit register-width prototype inferred from target entry/return instructions.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
public class RepairChpeAbi extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();Function f=getFunctionAt(toAddr(Long.parseUnsignedLong(args[0],16)));
  int count=Integer.parseInt(args[1]),returnBytes=Integer.parseInt(args[2]);
  String before=f.getSignature().toString();int tx=currentProgram.startTransaction("CHPE register prototype");boolean keep=false;
  try {
   for(Variable v:f.getLocalVariables())if(v.getSource()==SourceType.DEFAULT||v.getSource()==SourceType.ANALYSIS)f.removeVariable(v);
   Variable[] params=new Variable[count];
   for(int i=0;i<count;i++)params[i]=new ParameterImpl("arg"+i+"_w"+i,Undefined4DataType.dataType,currentProgram);
   f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.ANALYSIS,params);
   f.setReturnType(returnBytes==0?VoidDataType.dataType:Undefined.getUndefinedDataType(returnBytes),SourceType.ANALYSIS);
   DecompInterface d=new DecompInterface();d.toggleSyntaxTree(true);d.openProgram(currentProgram);
   DecompileResults r=d.decompileFunction(f,180,monitor);keep=r.decompileCompleted()&&r.getDecompiledFunction()!=null;
   println("CHPE ABI REPAIR success="+keep+" "+r.getErrorMessage());
   if(keep) {f.setComment("CHPE ABI inference repair: entry instructions consume 32-bit arguments in w0-w"+(count-1)+"; "+(returnBytes==0?"routine only updates memory, return treated as void":"return instruction sequence produces "+returnBytes+" bytes in x0")+". Explicit inferred prototype avoids a Ghidra ILP32 dynamic-symbol error. Original inferred signature: "+before+". Parameter meanings remain unknown and instruction bytes unchanged.");println(r.getDecompiledFunction().getC());}
   d.dispose();
  } finally {currentProgram.endTransaction(tx,keep);}
 }
}
