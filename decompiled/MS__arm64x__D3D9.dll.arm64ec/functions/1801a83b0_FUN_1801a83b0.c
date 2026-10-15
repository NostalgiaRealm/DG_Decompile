/*
 * FUN_1801a83b0 at 1801a83b0
 * undefined FUN_1801a83b0(void)
 * Address ranges: 1801a83b0-1801a83cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801a83b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_1801a4380(*(undefined8 *)(param_1 + 0x130),1,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

