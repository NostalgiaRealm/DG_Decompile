/*
 * FUN_1801acf08 at 1801acf08
 * undefined FUN_1801acf08(void)
 * Address ranges: 1801acf08-1801acf1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801acf08(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24d) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1a0);
  }
  return uVar1;
}

