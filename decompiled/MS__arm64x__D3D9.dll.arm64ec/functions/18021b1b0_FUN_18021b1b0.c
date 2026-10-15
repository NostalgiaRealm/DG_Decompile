/*
 * FUN_18021b1b0 at 18021b1b0
 * undefined FUN_18021b1b0(void)
 * Address ranges: 18021b1b0-18021b1c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18021b1b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 8) + 0x6d0;
  }
  FUN_1802113d8(lVar1);
  return;
}

