/*
 * FUN_10117540 at 10117540
 * undefined FUN_10117540(void)
 * Address ranges: 10117540-101175cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10117540(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_10113218(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

