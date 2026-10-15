/*
 * FUN_1005ef00 at 1005ef00
 * undefined FUN_1005ef00(void)
 * Address ranges: 1005ef00-1005ef8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1005ef00(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2);
  *param_2 = *param_2 + ((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x18);
  return param_2;
}

