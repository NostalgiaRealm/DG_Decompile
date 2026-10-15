/*
 * FUN_10001fd0 at 10001fd0
 * undefined FUN_10001fd0(void)
 * Address ranges: 10001fd0-10002057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001fd0(undefined8 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    FUN_100fed00(*(undefined4 *)(param_1 + 2));
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

