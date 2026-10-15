/*
 * FUN_100459d0 at 100459d0
 * undefined FUN_100459d0(void)
 * Address ranges: 100459d0-10045a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100459d0(undefined8 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    FUN_100914d0(*(undefined4 *)(param_1 + 2));
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
  *(undefined1 *)((int)param_1 + 0x1c) = 0;
  return;
}

