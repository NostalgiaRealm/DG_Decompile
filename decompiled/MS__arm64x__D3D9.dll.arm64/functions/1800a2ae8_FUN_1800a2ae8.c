/*
 * FUN_1800a2ae8 at 1800a2ae8
 * undefined FUN_1800a2ae8(void)
 * Address ranges: 1800a2ae8-1800a2afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 FUN_1800a2ae8(longlong param_1)

{
  return (&DAT_180231518)[*(uint *)(param_1 + 0x2c)];
}

