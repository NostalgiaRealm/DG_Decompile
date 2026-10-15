/*
 * FUN_1801c5348 at 1801c5348
 * undefined FUN_1801c5348(void)
 * Address ranges: 1801c5348-1801c536b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801c5348(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + -0x1f) != '\0') &&
     (uVar1 = 0x88760868, *(char *)(param_1 + -0x1e) != '\0')) {
    uVar1 = 0x88760869;
  }
  return uVar1;
}

