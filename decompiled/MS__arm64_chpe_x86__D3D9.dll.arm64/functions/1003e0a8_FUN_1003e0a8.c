/*
 * FUN_1003e0a8 at 1003e0a8
 * undefined FUN_1003e0a8(void)
 * Address ranges: 1003e0a8-1003e133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e0a8(int param_1)

{
  int iVar1;
  code *extraout_w11;
  
  iVar1 = FUN_1003da50(param_1);
  *(bool *)(param_1 + 0x27) = iVar1 != 0;
  FUN_1003dbc8(param_1,1,iVar1 != 0);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar1 = (*extraout_w11)(param_1);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_1016c240)(iVar1,0x20,0,0);
  }
  return;
}

