/*
 * FUN_1003bf70 at 1003bf70
 * undefined FUN_1003bf70(void)
 * Address ranges: 1003bf70-1003c007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003bf70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_1015e79c;
  iVar1 = param_1[0x12];
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_1016c018)(iVar1);
    param_1[0x12] = 0;
    param_1[0x17] = 0;
  }
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *param_1 = &PTR_thunk_FUN_101334e0_1015e838;
  FUN_101322d0(param_1[3]);
  return;
}

