/*
 * FUN_1800714a0 at 1800714a0
 * undefined FUN_1800714a0(void)
 * Address ranges: 1800714a0-1800714bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800714a0(undefined8 param_1,longlong param_2,uint param_3)

{
  if ((param_3 & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20,param_3);
    return;
  }
  return;
}

