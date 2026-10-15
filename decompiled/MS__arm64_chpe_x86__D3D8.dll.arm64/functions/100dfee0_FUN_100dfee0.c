/*
 * FUN_100dfee0 at 100dfee0
 * undefined FUN_100dfee0(void)
 * Address ranges: 100dfee0-100dff6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100dfee0(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2);
  *param_2 = *param_2 + ((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x18);
  return param_2;
}

