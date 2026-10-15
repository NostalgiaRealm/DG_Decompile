/*
 * FUN_10038438 at 10038438
 * undefined FUN_10038438(void)
 * Address ranges: 10038438-10038553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038438(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  FUN_1006a700(param_1[0x29],*param_1,param_1[0x36]);
  param_1[0x36] = 0;
  FUN_1006a700(param_1[0x29],*param_1,param_1[0x35]);
  param_1[0x35] = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  param_1[0x34] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  param_1[0x33] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_01)(uVar2);
  param_1[0x32] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_02)(uVar2);
  param_1[0x31] = 0;
  return;
}

