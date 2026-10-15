/*
 * FUN_1801f4e28 at 1801f4e28
 * undefined FUN_1801f4e28(void)
 * Address ranges: 1801f4e28-1801f4e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801f4e28(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  return *(longlong *)(param_1 + 0x70) +
         (ulonglong)
         *(uint *)((param_4 & 0xffffffff) * 8 +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8)
                    + (param_3 & 0xffffffff) * 0x28 + 0x18));
}

