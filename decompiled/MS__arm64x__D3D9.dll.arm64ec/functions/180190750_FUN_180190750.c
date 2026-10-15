/*
 * FUN_180190750 at 180190750
 * undefined FUN_180190750(void)
 * Address ranges: 180190750-18019075f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

longlong FUN_180190750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0xe0;
  }
  return lVar1;
}

