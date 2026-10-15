/*
 * FUN_1006b160 at 1006b160
 * undefined FUN_1006b160(void)
 * Address ranges: 1006b160-1006b1d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b160(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1,param_3);
  uVar1 = FUN_100575f0(*(undefined4 *)(param_1 + 4),param_2,uVar1,param_3);
  return uVar1;
}

