/*
 * FUN_10014bb0 at 10014bb0
 * undefined FUN_10014bb0(void)
 * Address ranges: 10014bb0-10014c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014bb0(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  FUN_10014978(param_1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_10013830(param_1,1);
  FUN_10017968(param_1,param_2);
  FUN_10013748(param_1);
  (*(code *)PTR_FUN_100a0090)(*(int *)(param_1 + 0x3300) + 0x4a0);
  return param_2;
}

