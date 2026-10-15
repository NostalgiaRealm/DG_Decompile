/*
 * FUN_18015de78 at 18015de78
 * undefined FUN_18015de78(void)
 * Address ranges: 18015de78-18015de8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_18015de78(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  return param_2 - 8U < 5;
}

