/*
 * FUN_1001b1d0 at 1001b1d0
 * undefined FUN_1001b1d0(void)
 * Address ranges: 1001b1d0-1001b263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001b1d0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  
  local_14 = 0;
  local_c = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x10) * 0x1510 + 0x510;
  local_20 = *(undefined4 *)(param_1 + 0x14);
  local_1c = 0x100000000;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(uVar1,&local_20,0);
  return ~uVar2 >> 0x1f;
}

