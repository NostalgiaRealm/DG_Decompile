/*
 * FUN_1001fd00 at 1001fd00
 * undefined FUN_1001fd00(void)
 * Address ranges: 1001fd00-1001fd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fd00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined8 local_14;
  
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  local_20 = FUN_1001f768(param_1);
  local_14 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  local_28 = param_5;
  uStack_24 = param_6;
  uStack_1c = param_7;
  local_18 = param_8;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,&local_30);
  return;
}

