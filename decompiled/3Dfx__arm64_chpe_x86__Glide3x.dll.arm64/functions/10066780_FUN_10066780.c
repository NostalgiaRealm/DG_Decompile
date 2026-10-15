/*
 * FUN_10066780 at 10066780
 * undefined FUN_10066780(void)
 * Address ranges: 10066780-10066837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  FUN_100630b8(param_1);
  FUN_10063268(param_1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0x620) = 1;
  FUN_10063200(param_1);
  return;
}

