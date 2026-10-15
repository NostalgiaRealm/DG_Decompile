/*
 * FUN_180184658 at 180184658
 * undefined FUN_180184658(void)
 * Address ranges: 180184658-180184673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180184658(undefined8 param_1,longlong param_2,uint param_3)

{
  if ((param_3 & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20,param_3);
    return;
  }
  return;
}

