/*
 * FUN_1801b0a20 at 1801b0a20
 * undefined FUN_1801b0a20(void)
 * Address ranges: 1801b0a20-1801b0a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

uint FUN_1801b0a20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x138) + 0x24);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801b0a34);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x138) + 0x1c) / uVar1;
  }
  return uVar2;
}

