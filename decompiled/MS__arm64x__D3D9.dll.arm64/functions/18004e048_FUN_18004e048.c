/*
 * FUN_18004e048 at 18004e048
 * undefined FUN_18004e048(void)
 * Address ranges: 18004e048-18004e067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18004e048(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x10)
  ;
                    /* WARNING: Could not recover jumptable at 0x00018004e064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x28))(lVar1 + 0x40);
  return;
}

