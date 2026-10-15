/*
 * FUN_1801638a0 at 1801638a0
 * undefined FUN_1801638a0(void)
 * Address ranges: 1801638a0-1801638af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 * FUN_1801638a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_18022ac48;
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0xf6d0);
  }
  return param_1;
}

