/*
 * FUN_1801fb700 at 1801fb700
 * undefined FUN_1801fb700(void)
 * Address ranges: 1801fb700-1801fb70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801fb700(longlong param_1,uint param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 800) + (ulonglong)param_2 * 4);
}

