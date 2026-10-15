/*
 * FUN_18021b128 at 18021b128
 * undefined FUN_18021b128(void)
 * Address ranges: 18021b128-18021b18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_18021b128(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 == 1) {
    lVar1 = 0x1e20;
  }
  else if (param_3 == 2) {
    lVar1 = 0x1eb0;
  }
  else if (param_3 == 3) {
    lVar1 = 8000;
  }
  else if (param_3 == 4) {
    lVar1 = 0x1fd0;
  }
  else {
    if (param_3 != 5) {
      return 0;
    }
    lVar1 = 0x2060;
  }
  return *(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0 + lVar1;
}

