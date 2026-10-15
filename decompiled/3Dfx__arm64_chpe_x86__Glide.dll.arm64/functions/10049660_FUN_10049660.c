/*
 * FUN_10049660 at 10049660
 * undefined FUN_10049660(void)
 * Address ranges: 10049660-1004977b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049660(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  FUN_10066ee0(param_1[0x29],*param_1,param_1[0x3c]);
  param_1[0x3c] = 0;
  FUN_10066ee0(param_1[0x29],*param_1,param_1[0x3b]);
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

