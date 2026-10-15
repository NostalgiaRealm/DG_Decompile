/*
 * FUN_180133600 at 180133600
 * undefined FUN_180133600(void)
 * Address ranges: 180133600-180133627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined2 * FUN_180133600(longlong param_1,undefined2 *param_2)

{
  *param_2 = 0x100;
  *(bool *)(param_2 + 1) = 0xa0ff < *(int *)(param_1 + 0xf7e0);
  return param_2;
}

