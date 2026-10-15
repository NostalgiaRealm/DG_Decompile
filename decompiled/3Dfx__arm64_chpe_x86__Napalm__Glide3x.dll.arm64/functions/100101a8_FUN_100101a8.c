/*
 * FUN_100101a8 at 100101a8
 * undefined FUN_100101a8(void)
 * Address ranges: 100101a8-10010257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100101a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  code *extraout_w11;
  
  FUN_1001c528(*(undefined4 *)(param_1 + 0x365c),0,2);
  uVar2 = FUN_1000f0f0(*(undefined4 *)(param_1 + 0x3660),param_2,param_3,param_4,0,param_5);
  if ((uVar2 & 1) != 0) {
    FUN_10017ce8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

