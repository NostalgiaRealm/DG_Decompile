/*
 * FUN_18020d1f0 at 18020d1f0
 * undefined FUN_18020d1f0(void)
 * Address ranges: 18020d1f0-18020d203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_18020d1f0(longlong param_1,ulonglong param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (param_2 >> 0x10 & 0xffff) * 0x10);
}

