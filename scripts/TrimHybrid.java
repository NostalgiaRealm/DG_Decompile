// Remove cross-architecture autoanalysis discoveries before exporting a projection.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.nio.file.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
public class TrimHybrid extends GhidraScript {
    private Address addr(String s) {return toAddr(Long.parseUnsignedLong(s.replaceFirst("^0[xX]",""),16));}
    @Override public void run() throws Exception {
        AutoAnalysisManager manager=AutoAnalysisManager.getAnalysisManager(currentProgram);
        manager.setIgnoreChanges(true); // Keep saved project consistent with the clipped/exported view.
        AddressSet allowed=new AddressSet();
        for(String line:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
            if(line.isBlank()||line.startsWith("#")||line.startsWith("start")) continue;
            String[] p=line.split("\t"); allowed.add(addr(p[0]),addr(p[1]).previous());
        }
        ArrayList<Address> remove=new ArrayList<>(); FunctionIterator functions=currentProgram.getFunctionManager().getFunctions(true);
        while(functions.hasNext()) {Function f=functions.next(); if(f.isExternal()) continue;
            if(!allowed.contains(f.getEntryPoint())) remove.add(f.getEntryPoint());
            else if(!allowed.contains(f.getBody())) f.setBody(f.getBody().intersect(allowed));
        }
        for(Address a:remove) currentProgram.getFunctionManager().removeFunction(a);
        AddressSet outside=new AddressSet(currentProgram.getMemory()).subtract(allowed);
        AddressSet wrongInstructions=new AddressSet(); InstructionIterator it=currentProgram.getListing().getInstructions(outside,true);
        while(it.hasNext()) {Instruction i=it.next(); wrongInstructions.add(i.getMinAddress(),i.getMaxAddress());}
        for(AddressRange r:wrongInstructions) currentProgram.getListing().clearCodeUnits(r.getMinAddress(),r.getMaxAddress(),false);
        // Decompilation can decode raw bytes beyond the listing/function body. An architecture
        // bridge must therefore be an explicit tail-call boundary, not an in-function branch.
        int bridges=0;
        Path evidence=Paths.get(getScriptArgs()[0]).getParent().resolve(currentProgram.getName()+".boundary-overrides.tsv");
        try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(evidence,StandardCharsets.UTF_8))) {
            w.println("instruction\ttarget\ttarget_name\tanalysis_override\tnote");
            InstructionIterator boundaryInstructions=currentProgram.getListing().getInstructions(allowed,true);
            while(boundaryInstructions.hasNext()) {
                Instruction i=boundaryInstructions.next(); Address[] flows=i.getDefaultFlows();
                if(!i.getPrototype().getFlowType(i.getInstructionContext()).isJump()||i.getPrototype().getFlowType(i.getInstructionContext()).isConditional()||flows.length!=1) continue;
                Address target=flows[0]; if(allowed.contains(target)||!currentProgram.getMemory().contains(target)) continue;
                i.setFlowOverride(FlowOverride.CALL_RETURN);
                String targetName=getSymbolAt(target)==null?"":getSymbolAt(target).getName(true);
                i.setComment(CommentType.EOL,"Architecture boundary: tail-call to "+target+" "+targetName+". CALL_RETURN is an analysis-only override; original instruction bytes are unchanged.");
                w.println(i.getAddress()+"\t"+target+"\t"+targetName+"\tCALL_RETURN\tStops the decompiler decoding a different architecture at the branch target; original bytes unchanged."); bridges++;
            }
        }
        manager.cancelQueuedTasks(); // Do not rediscover the foreign side of tail-call boundaries after export.
        println("HYBRID TRIM removed "+remove.size()+" functions and "+wrongInstructions.getNumAddresses()+" instruction bytes outside architecture ranges");
        println("HYBRID BOUNDARIES applied "+bridges+" analysis-only tail-call overrides; evidence="+evidence);
    }
}
