/*
 * FUN_1007e5f0 at 1007e5f0
 * undefined FUN_1007e5f0(void)
 * Address ranges: 1007e5f0-1007e67b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e5f0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_1007c918(param_1);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,param_2);
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

