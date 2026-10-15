// Export all Ghidra-discovered functions and address-based evidence for inspection.
// @category dgVoodoo.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.data.StringDataInstance;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

public class ExportAll extends GhidraScript {
    private Path out;
    private static String tsv(Object x) { return String.valueOf(x).replace("\t", " ").replace("\r", " ").replace("\n", " "); }
    private static String json(String x) { return "\"" + x.replace("\\", "\\\\").replace("\"", "\\\"").replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t") + "\""; }
    private static String safe(String x) { x=x.replaceAll("[^A-Za-z0-9_.-]", "_"); return x.substring(0,Math.min(100,x.length())); }
    private PrintWriter writer(String name) throws IOException { return new PrintWriter(Files.newBufferedWriter(out.resolve(name),StandardCharsets.UTF_8)); }
    private String ranges(AddressSetView body) {
        StringJoiner result=new StringJoiner(";");
        for(AddressRange r:body) result.add(r.getMinAddress()+"-"+r.getMaxAddress());
        return result.toString();
    }
    private void assembly(Function f, Path path) throws IOException {
        try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(path,StandardCharsets.UTF_8))) {
            w.println("; " + f.getEntryPoint()+" "+f.getName(true));
            InstructionIterator it=currentProgram.getListing().getInstructions(f.getBody(),true);
            while(it.hasNext()) { Instruction i=it.next(); StringBuilder b=new StringBuilder();
                try { for(byte v:i.getBytes()) b.append(String.format("%02x",v&255)); } catch(Exception e) { b.append("?"); }
                w.println(i.getAddress()+"\t"+b+"\t"+i.toString());
            }
        }
    }
    @Override public void run() throws Exception {
        String[] args=getScriptArgs(); if(args.length<1) throw new IllegalArgumentException("ExportAll.java OUTPUT_DIRECTORY");
        out=Paths.get(args[0]); Files.createDirectories(out.resolve("functions")); Files.createDirectories(out.resolve("failed-assembly"));
        Listing listing=currentProgram.getListing();
        SymbolTable symbols=currentProgram.getSymbolTable();
        try(PrintWriter w=writer("symbols.tsv")) {
            w.println("address\tname\ttype\tsource\texternal");
            SymbolIterator it=symbols.getAllSymbols(true);
            while(it.hasNext()) { Symbol s=it.next(); w.println(s.getAddress()+"\t"+tsv(s.getName(true))+"\t"+s.getSymbolType()+"\t"+s.getSource()+"\t"+s.isExternal()); }
        }
        try(PrintWriter w=writer("imports.tsv")) {
            w.println("address\tname\ttype"); SymbolIterator it=symbols.getExternalSymbols();
            while(it.hasNext()) {Symbol s=it.next(); w.println(s.getAddress()+"\t"+tsv(s.getName(true))+"\t"+s.getSymbolType());}
        }
        try(PrintWriter w=writer("exports.tsv")) {
            w.println("address\tname"); AddressIterator it=symbols.getExternalEntryPointIterator();
            while(it.hasNext()) {Address a=it.next(); Symbol s=symbols.getPrimarySymbol(a); w.println(a+"\t"+tsv(s==null?"":s.getName(true)));}
        }
        int stringCount=0;
        try(PrintWriter w=writer("strings.tsv")) {
            w.println("address\tlength\ttype\tvalue"); DataIterator it=listing.getDefinedData(true);
            while(it.hasNext()) {Data d=it.next(); if(StringDataInstance.isString(d)) { StringDataInstance s=StringDataInstance.getStringDataInstance(d); w.println(d.getAddress()+"\t"+d.getLength()+"\t"+tsv(d.getDataType().getName())+"\t"+tsv(s.getStringValue())); stringCount++; }}
        }
        AddressSet executable=new AddressSet();
        try(PrintWriter w=writer("memory.tsv")) {
            w.println("name\tstart\tend\tlength\tread\twrite\texecute\tinitialized");
            for(MemoryBlock b:currentProgram.getMemory().getBlocks()) {
                w.println(tsv(b.getName())+"\t"+b.getStart()+"\t"+b.getEnd()+"\t"+b.getSize()+"\t"+b.isRead()+"\t"+b.isWrite()+"\t"+b.isExecute()+"\t"+b.isInitialized());
                if(b.isExecute()&&b.isInitialized()) executable.add(b.getStart(),b.getEnd());
            }
        }
        AddressSet instructionSet=new AddressSet(); long instructionCount=0;
        try(PrintWriter w=writer("assembly.tsv"); PrintWriter calls=writer("calls.tsv")) {
            w.println("address\tbytes\tinstruction\tfunction"); calls.println("function\tcall_site\ttarget\ttarget_name\tflow_type");
            InstructionIterator it=listing.getInstructions(true);
            while(it.hasNext()) {Instruction i=it.next(); instructionCount++; instructionSet.add(i.getMinAddress(),i.getMaxAddress());
                Function f=currentProgram.getFunctionManager().getFunctionContaining(i.getAddress()); String fa=f==null?"":f.getEntryPoint().toString();
                StringBuilder bytes=new StringBuilder(); try {for(byte b:i.getBytes()) bytes.append(String.format("%02x",b&255));} catch(Exception e) {bytes.append("?");}
                w.println(i.getAddress()+"\t"+bytes+"\t"+tsv(i.toString())+"\t"+fa);
                if(i.getFlowType().isCall()) {
                    Address[] targets=i.getFlows();
                    if(targets.length==0) calls.println(fa+"\t"+i.getAddress()+"\t\t<indirect or unresolved>\t"+i.getFlowType());
                    for(Address a:targets) {Symbol s=symbols.getPrimarySymbol(a); calls.println(fa+"\t"+i.getAddress()+"\t"+a+"\t"+tsv(s==null?"":s.getName(true))+"\t"+i.getFlowType());}
                }
            }
        }
        AddressSet noInstructions=executable.subtract(instructionSet);
        try(PrintWriter w=writer("executable_without_instructions.tsv")) {
            w.println("start\tend_inclusive\tlength\tnote");
            for(AddressRange r:noInstructions) w.println(r.getMinAddress()+"\t"+r.getMaxAddress()+"\t"+r.getLength()+"\tMay include padding, embedded data, or undiscovered code; not automatically a function.");
        }
        DecompInterface decompiler=new DecompInterface(); DecompileOptions options=new DecompileOptions();
        options.grabFromProgram(currentProgram); decompiler.setOptions(options); decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(true);
        if(!decompiler.openProgram(currentProgram)) throw new IOException("Decompiler openProgram failed: "+decompiler.getLastMessage());
        int total=0, success=0, failed=0, retries=0, functionsOutsidePcode=0; long originCount=0; boolean restricted=args.length>1&&args[1].equals("restricted"); AddressSet functionBodies=new AddressSet();
        try(PrintWriter index=writer("functions.tsv"); PrintWriter all=writer("full_decompilation.c"); PrintWriter origins=writer("pcode_origins.tsv")) {
            index.println("address\tname\tsignature\tstatus\tbody_ranges\tbody_bytes\tfile\terror\tpcode_origin_count\toutside_pcode_origin_count");
            origins.println("function\tinstruction_origin\tinside_executable_view");
            all.println("/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */");
            FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
            while(it.hasNext()) {
                monitor.checkCancelled(); Function f=it.next(); if(f.isExternal()) continue;
                total++; functionBodies.add(f.getBody()); String error="",code=""; boolean ok=false; int thisOrigins=0,thisOutside=0;
                String file="functions/"+safe(f.getEntryPoint().toString())+"_"+safe(f.getName())+".c";
                try {
                    DecompileResults result=decompiler.decompileFunction(f,45,monitor);
                    if(!result.decompileCompleted() || result.getDecompiledFunction()==null) {retries++; result=decompiler.decompileFunction(f,180,monitor);}
                    error=result.getErrorMessage()==null?"":result.getErrorMessage();
                    if(result.decompileCompleted() && result.getDecompiledFunction()!=null) {
                        code=result.getDecompiledFunction().getC(); ok=code!=null&&!code.isBlank();
                        HighFunction high=result.getHighFunction();
                        if(high!=null) {
                            TreeSet<Address> addresses=new TreeSet<>(); Iterator<PcodeOpAST> ops=high.getPcodeOps();
                            while(ops.hasNext()) {Address a=ops.next().getSeqnum().getTarget(); if(currentProgram.getMemory().contains(a)) addresses.add(a);}
                            for(Address a:addresses) {boolean inside=executable.contains(a); origins.println(f.getEntryPoint()+"\t"+a+"\t"+inside);if(!inside)thisOutside++;}
                            thisOrigins=addresses.size();originCount+=thisOrigins;
                            if(thisOutside>0) {functionsOutsidePcode++; if(restricted) {ok=false;error+=" Rejected C: "+thisOutside+" decompiler instruction origins outside selected architecture; see pcode_origins.tsv.";}}
                        } else if(restricted) {ok=false;error+=" Rejected C: missing HighFunction for architecture-origin validation.";}
                    }
                } catch(Exception e) {error=e.toString();}
                StringBuilder header=new StringBuilder("/*\n * "+tsv(f.getName(true))+" at "+f.getEntryPoint()+"\n * "+tsv(f.getSignature())+"\n * Address ranges: "+ranges(f.getBody())+"\n * Origin: Ghidra decompiler; identifiers and types may be inferred.\n");
                if(f.isThunk()) header.append(" * Thunk: forwards to ").append(tsv(f.getThunkedFunction(true))).append("\n");
                if(f.getComment()!=null&&!f.getComment().isBlank()) header.append(" * Analysis note: ").append(tsv(f.getComment()).replace("*/","* /")).append("\n");
                if(!error.isBlank()) header.append(" * Decompiler message: ").append(tsv(error).replace("*/","* /")).append("\n");
                header.append(" */\n");
                if(ok) {success++;} else {failed++; code="/* Decompilation did not yield C. See failed-assembly/"+safe(f.getEntryPoint().toString())+".asm */\n"; assembly(f,out.resolve("failed-assembly/"+safe(f.getEntryPoint().toString())+".asm"));}
                Files.writeString(out.resolve(file),header.toString()+code,StandardCharsets.UTF_8); all.println(header); all.println(code);
                index.println(f.getEntryPoint()+"\t"+tsv(f.getName(true))+"\t"+tsv(f.getSignature())+"\t"+(ok?"decompiled":"assembly_fallback")+"\t"+ranges(f.getBody())+"\t"+f.getBody().getNumAddresses()+"\t"+file+"\t"+tsv(error)+"\t"+thisOrigins+"\t"+thisOutside);
                if(total%100==0) {index.flush(); all.flush(); println("Exported "+total+" functions; decompiled="+success+", fallback="+failed);}
            }
        } finally {decompiler.dispose();}
        AddressSet outsideFunctions=instructionSet.subtract(functionBodies);
        try(PrintWriter w=writer("instructions_outside_functions.tsv")) {w.println("start\tend_inclusive\tlength"); for(AddressRange r:outsideFunctions) w.println(r.getMinAddress()+"\t"+r.getMaxAddress()+"\t"+r.getLength());}
        try(PrintWriter w=writer("summary.json")) {
            w.println("{\n  \"program\": "+json(currentProgram.getName())+",\n  \"language\": "+json(currentProgram.getLanguageID().toString())+",\n  \"compiler\": "+json(currentProgram.getCompilerSpec().getCompilerSpecID().toString())+",\n  \"image_base\": "+json(currentProgram.getImageBase().toString())+",\n  \"mapped_memory_start\": "+json(currentProgram.getMemory().getMinAddress().toString())+",\n  \"architecture_origin_restriction\": "+restricted+",\n  \"pcode_unique_function_origins\": "+originCount+",\n  \"functions_with_outside_pcode_origins\": "+functionsOutsidePcode+",\n  \"ghidra_version\": "+json(ghidra.framework.Application.getApplicationVersion())+",\n  \"functions\": "+total+",\n  \"decompiled\": "+success+",\n  \"assembly_fallback\": "+failed+",\n  \"retried\": "+retries+",\n  \"strings\": "+stringCount+",\n  \"instructions\": "+instructionCount+",\n  \"executable_bytes\": "+executable.getNumAddresses()+",\n  \"executable_bytes_without_instructions\": "+noInstructions.getNumAddresses()+",\n  \"instruction_bytes_outside_functions\": "+outsideFunctions.getNumAddresses()+"\n}");
        }
        println("EXPORT COMPLETE: functions="+total+" decompiled="+success+" fallback="+failed+" output="+out);
    }
}
