// Recover only explicit entry points or direct-call targets already decoded as code.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.util.*;
public class RecoverFunctions extends GhidraScript {
    @Override public void run() throws Exception {
        TreeSet<Address> targets=new TreeSet<>();
        AddressIterator exports=currentProgram.getSymbolTable().getExternalEntryPointIterator();
        while(exports.hasNext()) targets.add(exports.next());
        InstructionIterator it=currentProgram.getListing().getInstructions(true);
        while(it.hasNext()) {Instruction i=it.next(); if(i.getFlowType().isCall()) for(Address a:i.getFlows()) targets.add(a);}
        int recovered=0;
        for(Address a:targets) {
            if(currentProgram.getListing().getInstructionAt(a)==null||!currentProgram.getMemory().getExecuteSet().contains(a)) continue;
            if(currentProgram.getFunctionManager().getFunctionContaining(a)==null) {Function f=createFunction(a,null); if(f!=null) recovered++;}
        }
        println("RECOVERED "+recovered+" explicit entry/direct-call functions");
    }
}
