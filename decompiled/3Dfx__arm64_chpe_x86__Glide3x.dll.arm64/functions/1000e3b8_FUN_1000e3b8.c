/*
 * FUN_1000e3b8 at 1000e3b8
 * undefined FUN_1000e3b8(void)
 * Address ranges: 1000e3b8-1000e46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e3b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined1 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  code *extraout_w11;
  undefined4 local_40 [4];
  
  if (param_5 != 0) {
    local_40[0] = param_4;
    FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,2);
    uVar2 = FUN_1000d250(*(undefined4 *)(param_1 + 0x32e0),param_2,param_3,local_40,param_5,param_6)
    ;
    if ((uVar2 & 1) != 0) {
      FUN_10017808(param_1);
      uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar1);
    }
  }
  return;
}

