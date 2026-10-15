/*
 * FUN_180215f18 at 180215f18
 * undefined FUN_180215f18(void)
 * Address ranges: 180215f18-180215f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined1 FUN_180215f18(longlong param_1,ulonglong param_2)

{
  return *(undefined1 *)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x6ed);
}

