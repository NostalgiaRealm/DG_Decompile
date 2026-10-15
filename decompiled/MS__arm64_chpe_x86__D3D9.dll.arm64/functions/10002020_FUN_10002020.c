/*
 * FUN_10002020 at 10002020
 * undefined FUN_10002020(void)
 * Address ranges: 10002020-100020a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002020(undefined8 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    FUN_101322d0(*(undefined4 *)(param_1 + 2));
  }
  else {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(uint *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

