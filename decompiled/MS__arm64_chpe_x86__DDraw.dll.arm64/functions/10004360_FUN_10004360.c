/*
 * FUN_10004360 at 10004360
 * undefined FUN_10004360(void)
 * Address ranges: 10004360-100043f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004360(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_100b1a5c;
  iVar1 = param_1[0x12];
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_100ba020)(iVar1);
    param_1[0x12] = 0;
    param_1[0x17] = 0;
  }
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *param_1 = &PTR_thunk_FUN_100925c0_100b1ab4;
  FUN_100914d0(param_1[3]);
  return;
}

