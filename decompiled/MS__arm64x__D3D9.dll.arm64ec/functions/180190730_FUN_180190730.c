/*
 * FUN_180190730 at 180190730
 * undefined FUN_180190730(void)
 * Address ranges: 180190730-18019074b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_180190730(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0xe0;
  }
  lVar2 = param_2 + -0xe0;
  if (*(int *)(param_2 + 8) == 0) {
    lVar2 = lVar1;
  }
  return lVar2;
}

