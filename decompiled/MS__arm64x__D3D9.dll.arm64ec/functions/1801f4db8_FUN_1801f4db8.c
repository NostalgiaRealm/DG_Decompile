/*
 * FUN_1801f4db8 at 1801f4db8
 * undefined FUN_1801f4db8(void)
 * Address ranges: 1801f4db8-1801f4def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801f4db8(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  undefined8 param_5)

{
  FUN_180222770(*(longlong *)(param_1 + 0x70) +
                (ulonglong)
                *(uint *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8) +
                            (param_3 & 0xffffffff) * 0x28 + 8) + (ulonglong)param_4 * 4),param_5);
  return;
}

