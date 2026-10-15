/*
 * FUN_100403d0 at 100403d0
 * undefined FUN_100403d0(void)
 * Address ranges: 100403d0-100404db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100403d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0xdacc) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*(undefined4 *)(param_1 + 0xdae0),*(undefined4 *)(param_1 + 0xdaf0),0);
  }
  if (*(int *)(param_1 + 0xdadc) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*(undefined4 *)(param_1 + 0xdb00),*(undefined4 *)(param_1 + 0xdb04),0);
  }
  FUN_10064518(param_1,param_2,param_3,1,0,param_4,0,param_5,1);
  return;
}

