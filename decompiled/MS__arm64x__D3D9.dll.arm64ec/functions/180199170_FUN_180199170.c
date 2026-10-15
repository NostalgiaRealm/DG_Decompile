/*
 * FUN_180199170 at 180199170
 * undefined FUN_180199170(void)
 * Address ranges: 180199170-18019918b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180199170(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_180197918(*(undefined8 *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

