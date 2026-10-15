/*
 * FUN_1000e308 at 1000e308
 * undefined FUN_1000e308(void)
 * Address ranges: 1000e308-1000e3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e308(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  code *extraout_w11;
  
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,2);
  uVar2 = FUN_1000d250(*(undefined4 *)(param_1 + 0x32e0),param_2,param_3,param_4,0,param_5);
  if ((uVar2 & 1) != 0) {
    FUN_10017808(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

