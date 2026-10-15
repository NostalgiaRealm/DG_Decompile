/*
 * FUN_18017f030 at 18017f030
 * undefined FUN_18017f030(void)
 * Address ranges: 18017f030-18017f053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18017f030(undefined8 param_1,longlong param_2,uint param_3)

{
  if ((*(longlong *)(param_2 + 0x1b8) == 0) && ((param_3 & 0x3f00) != 0)) {
    return;
  }
  FUN_180213800(param_2 + 0x20,param_3);
  return;
}

