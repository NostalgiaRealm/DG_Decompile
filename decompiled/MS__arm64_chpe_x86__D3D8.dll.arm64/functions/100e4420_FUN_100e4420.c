/*
 * FUN_100e4420 at 100e4420
 * undefined FUN_100e4420(void)
 * Address ranges: 100e4420-100e44d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e4420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_100e0818(param_1);
  FUN_100e09c8(param_1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0x620) = 1;
  FUN_100e0960(param_1);
  return;
}

