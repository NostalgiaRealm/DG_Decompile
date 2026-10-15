/*
 * FUN_1801f4cf8 at 1801f4cf8
 * undefined FUN_1801f4cf8(void)
 * Address ranges: 1801f4cf8-1801f4d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801f4cf8(longlong param_1,ulonglong param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 0x10);
}

