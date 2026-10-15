/*
 * FUN_1001b2c0 at 1001b2c0
 * undefined FUN_1001b2c0(void)
 * Address ranges: 1001b2c0-1001b343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001b2c0(int param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  int local_20 [4];
  undefined8 local_10;
  
  local_20[3] = param_3 + param_4;
  local_10 = 0x100000001;
  local_20[1] = 0;
  local_20[2] = 0;
  puVar2 = (undefined4 *)(param_1 + 0xc);
  local_20[0] = param_3;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,*puVar2,0,local_20);
  return 1;
}

