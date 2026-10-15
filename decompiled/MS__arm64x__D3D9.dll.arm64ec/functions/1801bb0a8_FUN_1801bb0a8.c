/*
 * FUN_1801bb0a8 at 1801bb0a8
 * undefined FUN_1801bb0a8(void)
 * Address ranges: 1801bb0a8-1801bb0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 FUN_1801bb0a8(longlong param_1)

{
  return (&DAT_18022dd78)[*(uint *)(param_1 + 0x2c)];
}

