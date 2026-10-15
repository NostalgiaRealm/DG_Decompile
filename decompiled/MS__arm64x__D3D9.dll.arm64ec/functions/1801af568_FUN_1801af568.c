/*
 * FUN_1801af568 at 1801af568
 * undefined FUN_1801af568(void)
 * Address ranges: 1801af568-1801af583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801af568(longlong param_1)

{
  if ((*(char *)(param_1 + 0x24d) != '\0') && (*(char *)(param_1 + 0x24e) != '\0')) {
    FUN_1801adfc0();
    return;
  }
  FUN_1801a8fb8();
  return;
}

