/*
 * FUN_180083610 at 180083610
 * undefined FUN_180083610(void)
 * Address ranges: 180083610-18008362b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180083610(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_180082250(*(undefined8 *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

