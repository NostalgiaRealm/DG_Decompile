/*
 * FUN_100362a0 at 100362a0
 * undefined FUN_100362a0(void)
 * Address ranges: 100362a0-1003631f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100362a0(undefined4 *param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *param_1 = &PTR_FUN_100b2534;
  (*(code *)PTR_FUN_100ba020)(param_1[0x14]);
  FUN_100914d0(param_1[0x15]);
  param_1[0x15] = 0;
  if (param_1[0x11] != 0) {
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1);
  }
  return;
}

