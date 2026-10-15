/*
 * FUN_100e2490 at 100e2490
 * undefined FUN_100e2490(void)
 * Address ranges: 100e2490-100e251b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e2490(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_100e09c8(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

