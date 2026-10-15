/*
 * FUN_100386f0 at 100386f0
 * undefined FUN_100386f0(void)
 * Address ranges: 100386f0-1003880b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100386f0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  FUN_1006fda0(param_1[0x29],*param_1,param_1[0x2f]);
  param_1[0x2f] = 0;
  FUN_1006fda0(param_1[0x29],*param_1,param_1[0x30]);
  param_1[0x30] = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  param_1[0x2e] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  param_1[0x2d] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_01)(uVar2);
  param_1[0x2c] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_02)(uVar2);
  param_1[0x2b] = 0;
  return;
}

