/*
 * FUN_1801accf8 at 1801accf8
 * undefined FUN_1801accf8(void)
 * Address ranges: 1801accf8-1801acd0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801accf8(longlong param_1)

{
  if (*(char *)(param_1 + 0x4d) == '\x01') {
    *(undefined1 *)(param_1 + 0x4d) = 2;
  }
  return;
}

