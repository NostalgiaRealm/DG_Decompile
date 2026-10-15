/*
 * FUN_10112730 at 10112730
 * undefined FUN_10112730(void)
 * Address ranges: 10112730-101127bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10112730(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2);
  *param_2 = *param_2 + ((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x18);
  return param_2;
}

