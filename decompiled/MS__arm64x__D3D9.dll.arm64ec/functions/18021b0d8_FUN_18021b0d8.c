/*
 * FUN_18021b0d8 at 18021b0d8
 * undefined FUN_18021b0d8(void)
 * Address ranges: 18021b0d8-18021b0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_18021b0d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0 + 0x1e08);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}

