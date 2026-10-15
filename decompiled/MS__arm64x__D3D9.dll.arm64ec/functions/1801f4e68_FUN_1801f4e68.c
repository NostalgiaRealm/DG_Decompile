/*
 * FUN_1801f4e68 at 1801f4e68
 * undefined FUN_1801f4e68(void)
 * Address ranges: 1801f4e68-1801f4e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_1801f4e68(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  return *(longlong *)(param_1 + 0x70) +
         (ulonglong)
         *(uint *)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8) +
                     (param_3 & 0xffffffff) * 0x28 + 0x18) + (ulonglong)param_4 * 8 + 4);
}

