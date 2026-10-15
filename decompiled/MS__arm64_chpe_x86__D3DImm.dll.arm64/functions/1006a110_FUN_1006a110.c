/*
 * FUN_1006a110 at 1006a110
 * undefined FUN_1006a110(void)
 * Address ranges: 1006a110-1006a18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006a110(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1,param_2);
  uVar1 = FUN_10055930(*(undefined4 *)(param_1 + 4),uVar1,param_2,param_3,0);
  return uVar1;
}

