// Restrict each hybrid architecture view to documented code-map ranges.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.util.*;

public class PrepareHybrid extends GhidraScript {
    private Address addr(String s) {return toAddr(Long.parseUnsignedLong(s.replaceFirst("^0[xX]",""),16));}
    @Override public void run() throws Exception {
        String[] args=getScriptArgs(); AddressSet allowed=new AddressSet();
        TreeSet<Address> boundaries=new TreeSet<>();
        for(String line:Files.readAllLines(Paths.get(args[0]))) {
            if(line.isBlank()||line.startsWith("#")||line.startsWith("start")) continue;
            String[] p=line.split("\t"); Address start=addr(p[0]),end=addr(p[1]);
            allowed.add(start,end.previous()); boundaries.add(start); boundaries.add(end);
        }
        Memory memory=currentProgram.getMemory();
        for(Address boundary:boundaries) {MemoryBlock b=memory.getBlock(boundary); if(b!=null&&!b.getStart().equals(boundary)) memory.split(b,boundary);}
        int n=0;
        for(MemoryBlock b:memory.getBlocks()) {
            b.setExecute(allowed.contains(b.getStart())); b.setRead(true); b.setWrite(!b.isExecute());
            b.setName((b.isExecute()?"arch_code_":"mapped_data_")+(n++));
        }
        if(args.length>2&&!args[2].equals("-")) for(String line:Files.readAllLines(Paths.get(args[2]))) {
            if(line.isBlank()||line.startsWith("#")||line.startsWith("address")) continue;
            String[] p=line.split("\t"); if(p.length<2) continue;
            try {currentProgram.getSymbolTable().createLabel(addr(p[0]),p[1].replaceAll("[^A-Za-z0-9_.$@?]","_"),SourceType.IMPORTED);} catch(Exception e) {println("Label skipped: "+line+" "+e.getMessage());}
        }
        int seeded=0;
        for(String line:Files.readAllLines(Paths.get(args[1]))) {
            monitor.checkCancelled();
            if(line.isBlank()||line.startsWith("#")||line.startsWith("address")) continue;
            String[] p=line.split("\t"); Address a=addr(p[0]); if(!allowed.contains(a)) continue;
            DisassembleCommand cmd=new DisassembleCommand(a,allowed,true); cmd.applyTo(currentProgram,monitor);
            if(currentProgram.getListing().getInstructionAt(a)!=null) {
                Function f=currentProgram.getFunctionManager().getFunctionAt(a);
                if(f==null) f=createFunction(a,null);
                if(f!=null && p.length>1) try {f.setName(p[1].replaceAll("[^A-Za-z0-9_.$@?]","_"),SourceType.IMPORTED);} catch(Exception e) {}
                if(f!=null) seeded++;
            }
        }
        println("HYBRID SEEDED "+seeded+" functions within "+allowed.getNumAddresses()+" architecture code bytes");
    }
}
