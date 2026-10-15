/*
 * FUN_10038558 at 10038558
 * undefined FUN_10038558(void)
 * Address ranges: 10038558-10038673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038558(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  FUN_1006a700(param_1[0x29],*param_1,param_1[0x3c]);
  param_1[0x3c] = 0;
  FUN_1006a700(param_1[0x29],*param_1,param_1[0x3b]);
  param_1[0x3b] = 0;
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar2);
  param_1[0x3a] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_00)(uVar2);
  param_1[0x39] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_01)(uVar2);
  param_1[0x38] = 0;
  uVar2 = (*pcVar1)();
  (*extraout_w11_02)(uVar2);
  param_1[0x37] = 0;
  return;
}

