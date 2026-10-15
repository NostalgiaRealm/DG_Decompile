/*
 * FUN_100320a0 at 100320a0
 * undefined FUN_100320a0(void)
 * Address ranges: 100320a0-10032137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100320a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_101293ac;
  iVar1 = param_1[0x12];
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_10134018)(iVar1);
    param_1[0x12] = 0;
    param_1[0x17] = 0;
  }
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  *param_1 = &PTR_thunk_FUN_100fffb0_10129448;
  FUN_100fed00(param_1[3]);
  return;
}

