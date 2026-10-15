/*
 * FUN_1801bb238 at 1801bb238
 * undefined FUN_1801bb238(void)
 * Address ranges: 1801bb238-1801bb247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 * FUN_1801bb238(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x48);
  return param_2;
}

