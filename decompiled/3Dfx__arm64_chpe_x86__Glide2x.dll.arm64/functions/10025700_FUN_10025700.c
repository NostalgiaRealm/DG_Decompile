/*
 * FUN_10025700 at 10025700
 * undefined FUN_10025700(void)
 * Address ranges: 10025700-1002578f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025700(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  FUN_100254d8(param_1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_100240b8(param_1,1);
  FUN_1002e918(param_1,param_2);
  FUN_10023fd0(param_1);
  (*(code *)PTR_FUN_1009d090)(*(int *)(param_1 + 0x3180) + 0x4a0);
  return param_2;
}

