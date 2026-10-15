/*
 * FUN_1006b8c8 at 1006b8c8
 * undefined FUN_1006b8c8(void)
 * Address ranges: 1006b8c8-1006b94b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b8c8(int param_1,int param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  param_1 = param_1 + param_2 * 0x1510;
  if (((*(int *)(param_1 + 0x7c4) != 0) || (*(int *)(param_1 + 0x7c8) != 0)) ||
     (*(int *)(param_1 + 0x7cc) != 0)) {
    *(int *)(param_1 + 0x7c4) = 0;
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,0,0,0);
  }
  return;
}

