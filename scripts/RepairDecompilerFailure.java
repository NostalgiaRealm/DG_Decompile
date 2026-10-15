// Retry failed decompilation after relaxing only inferred variable information.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
public class RepairDecompilerFailure extends GhidraScript {
 public void run() throws Exception {
  Function f=getFunctionAt(toAddr(Long.parseUnsignedLong(getScriptArgs()[0],16)));
  DecompInterface initial=new DecompInterface(); initial.openProgram(currentProgram);
  DecompileResults existing=initial.decompileFunction(f,180,monitor);
  boolean alreadyWorks=existing.decompileCompleted()&&existing.getDecompiledFunction()!=null&&!existing.getDecompiledFunction().getC().isBlank();
  String originalError=existing.getErrorMessage()==null?"unspecified decompiler error":existing.getErrorMessage().trim();
  initial.dispose();
  if(alreadyWorks) {println("REPAIR unnecessary: function already decompiles");return;}
  if(f.getSignatureSource()!=SourceType.ANALYSIS && f.getSignatureSource()!=SourceType.DEFAULT) throw new IllegalStateException("Refusing to change imported/user signature");
  String before=f.getSignature().toString();
  for(int method=0;method<3;method++) {
   int tx=currentProgram.startTransaction("Relax inferred decompiler variables"); boolean keep=false;
   try {
    f.setSignatureSource(SourceType.DEFAULT);
    if(method>=1) for(Variable v:f.getLocalVariables()) if(v.getSource()==SourceType.DEFAULT||v.getSource()==SourceType.ANALYSIS) f.removeVariable(v);
    if(method>=2) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,true,SourceType.DEFAULT,new Variable[0]);
    DecompInterface d=new DecompInterface();d.toggleCCode(true);d.openProgram(currentProgram);
    DecompileResults r=d.decompileFunction(f,180,monitor);
    keep=r.decompileCompleted()&&r.getDecompiledFunction()!=null&&!r.getDecompiledFunction().getC().isBlank();
    println("REPAIR method="+method+" success="+keep+" message="+r.getErrorMessage());
    if(keep) {f.setComment("Inspection export repair: Ghidra originally failed with "+originalError+". Relaxed inferred signature source"+(method>=1?" and removed inferred local-variable declarations":"")+(method>=2?" and cleared inferred parameter declarations":"")+". Original inferred signature: "+before+". Machine code unchanged; new types remain inferred.");println(r.getDecompiledFunction().getC());}
    d.dispose();
   } finally {currentProgram.endTransaction(tx,keep);}
   if(keep) return;
  }
 }
}
