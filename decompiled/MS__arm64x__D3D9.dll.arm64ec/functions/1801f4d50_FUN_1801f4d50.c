/*
 * FUN_1801f4d50 at 1801f4d50
 * undefined FUN_1801f4d50(void)
 * Address ranges: 1801f4d50-1801f4d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801f4d50(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8) +
           (param_3 & 0xffffffff) * 0x28 + 0x10);
}

