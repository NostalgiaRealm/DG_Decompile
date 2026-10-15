/*
 * FUN_10069430 at 10069430
 * undefined FUN_10069430(void)
 * Address ranges: 10069430-100694c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1,param_3);
  uVar1 = FUN_10064740(*(undefined4 *)(param_1 + 4),&DAT_1009c490,param_2,0,uVar1,param_3,param_4,0)
  ;
  return uVar1;
}

