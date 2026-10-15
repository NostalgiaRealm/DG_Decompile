/*
 * FUN_1800a2b00 at 1800a2b00
 * undefined FUN_1800a2b00(void)
 * Address ranges: 1800a2b00-1800a2b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 FUN_1800a2b00(longlong param_1)

{
  return (&DAT_180231818)[*(uint *)(param_1 + 0x2c)];
}

