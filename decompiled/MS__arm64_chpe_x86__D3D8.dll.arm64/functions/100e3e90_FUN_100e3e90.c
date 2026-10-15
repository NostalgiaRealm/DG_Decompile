/*
 * FUN_100e3e90 at 100e3e90
 * undefined FUN_100e3e90(void)
 * Address ranges: 100e3e90-100e3f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e3e90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_100ff690(param_1 + 0x10,0,0x620);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x618) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x614) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x610) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x60c) = 0x7ff00000;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2);
  return;
}

