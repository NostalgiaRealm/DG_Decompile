/*
 * FUN_1801acf28 at 1801acf28
 * undefined FUN_1801acf28(void)
 * Address ranges: 1801acf28-1801acf3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801acf28(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24d) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x244);
  }
  return uVar1;
}

