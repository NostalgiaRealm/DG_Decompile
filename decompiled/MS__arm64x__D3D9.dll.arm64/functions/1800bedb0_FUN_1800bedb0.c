/*
 * FUN_1800bedb0 at 1800bedb0
 * undefined FUN_1800bedb0(void)
 * Address ranges: 1800bedb0-1800beddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

int FUN_1800bedb0(longlong param_1)

{
  return ((uint)((&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] << 1) & 0x100000)
         + ((uint)(&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b] & 0xfff00000);
}

