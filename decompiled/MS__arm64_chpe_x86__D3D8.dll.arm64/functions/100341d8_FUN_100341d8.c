/*
 * FUN_100341d8 at 100341d8
 * undefined FUN_100341d8(void)
 * Address ranges: 100341d8-10034263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100341d8(int param_1)

{
  int iVar1;
  code *extraout_w11;
  
  iVar1 = FUN_10033b80(param_1);
  *(bool *)(param_1 + 0x27) = iVar1 != 0;
  FUN_10033cf8(param_1,1,iVar1 != 0);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_1);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_10134240)(iVar1,0x20,0,0);
  }
  return;
}

