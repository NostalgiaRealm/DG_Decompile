/*
 * FUN_1801fc008 at 1801fc008
 * undefined FUN_1801fc008(void)
 * Address ranges: 1801fc008-1801fc01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801fc008(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x488) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

