/*
 * FUN_180053a30 at 180053a30
 * undefined FUN_180053a30(void)
 * Address ranges: 180053a30-180053a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 * FUN_180053a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180233cb8;
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0xf6d0);
  }
  return param_1;
}

