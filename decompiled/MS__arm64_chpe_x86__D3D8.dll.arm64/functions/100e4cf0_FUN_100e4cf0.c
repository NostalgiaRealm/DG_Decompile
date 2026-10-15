/*
 * FUN_100e4cf0 at 100e4cf0
 * undefined FUN_100e4cf0(void)
 * Address ranges: 100e4cf0-100e4d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e4cf0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_100e09c8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

