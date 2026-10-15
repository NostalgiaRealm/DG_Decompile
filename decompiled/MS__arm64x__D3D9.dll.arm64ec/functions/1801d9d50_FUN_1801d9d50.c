/*
 * FUN_1801d9d50 at 1801d9d50
 * undefined FUN_1801d9d50(void)
 * Address ranges: 1801d9d50-1801d9d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

int FUN_1801d9d50(longlong param_1)

{
  return ((uint)((&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] << 1) & 0x100000)
         + ((uint)(&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] & 0xfff00000);
}

