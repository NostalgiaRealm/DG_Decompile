/*
 * FUN_18006c530 at 18006c530
 * undefined FUN_18006c530(void)
 * Address ranges: 18006c530-18006c553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18006c530(undefined8 param_1,longlong param_2,uint param_3)

{
  if ((*(longlong *)(param_2 + 0x1b8) == 0) && ((param_3 & 0x3f00) != 0)) {
    return;
  }
  FUN_1800f4370(param_2 + 0x20,param_3);
  return;
}

