/*
 * FUN_1801a8b70 at 1801a8b70
 * undefined FUN_1801a8b70(void)
 * Address ranges: 1801a8b70-1801a8b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

int FUN_1801a8b70(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 0x90) + param_2;
}

