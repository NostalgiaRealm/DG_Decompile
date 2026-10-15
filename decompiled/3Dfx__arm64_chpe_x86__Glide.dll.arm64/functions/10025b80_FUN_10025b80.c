/*
 * FUN_10025b80 at 10025b80
 * undefined FUN_10025b80(void)
 * Address ranges: 10025b80-10025c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025b80(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  FUN_10025958(param_1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_10024538(param_1,1);
  FUN_1002ed98(param_1,param_2);
  FUN_10024450(param_1);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return param_2;
}

