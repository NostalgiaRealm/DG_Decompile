/*
 * FUN_1801acf68 at 1801acf68
 * undefined FUN_1801acf68(void)
 * Address ranges: 1801acf68-1801acf83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801acf68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x24;
  if (*(char *)(param_1 + 0x24d) != '\0') {
    lVar1 = 0x198;
  }
  return *(undefined4 *)(param_1 + lVar1);
}

