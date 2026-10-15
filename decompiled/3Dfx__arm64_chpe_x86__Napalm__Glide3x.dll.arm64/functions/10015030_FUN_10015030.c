/*
 * FUN_10015030 at 10015030
 * undefined FUN_10015030(void)
 * Address ranges: 10015030-100150bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10015030(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  FUN_10014e08(param_1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_100148c8(param_1,1);
  FUN_10017e48(param_1,param_2);
  FUN_100147e0(param_1);
  (*(code *)PTR_FUN_100a8090)(*(int *)(param_1 + 0x3680) + 0x4a0);
  return param_2;
}

