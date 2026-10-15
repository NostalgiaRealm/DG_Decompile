/*
 * FUN_1001adb0 at 1001adb0
 * undefined FUN_1001adb0(void)
 * Address ranges: 1001adb0-1001ae3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001adb0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x400);
  }
  if ((param_2 != *(int *)(param_1 + 0x28)) || (lVar2 != *(longlong *)(param_1 + 0x20))) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_3);
    *(int *)(param_1 + 0x28) = param_2;
    *(longlong *)(param_1 + 0x20) = lVar2;
  }
  return;
}

