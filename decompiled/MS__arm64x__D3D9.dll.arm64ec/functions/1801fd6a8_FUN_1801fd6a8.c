/*
 * FUN_1801fd6a8 at 1801fd6a8
 * undefined FUN_1801fd6a8(void)
 * Address ranges: 1801fd6a8-1801fd6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_1801fd6a8(longlong param_1,uint param_2)

{
  return *(int *)(param_1 + (ulonglong)param_2 * 0x18c0 + 0x6c8) == 5;
}

