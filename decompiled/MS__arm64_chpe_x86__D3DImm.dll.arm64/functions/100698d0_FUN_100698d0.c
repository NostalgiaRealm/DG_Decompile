/*
 * FUN_100698d0 at 100698d0
 * undefined FUN_100698d0(void)
 * Address ranges: 100698d0-1006996b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100698d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1,param_3);
  uVar1 = FUN_10064740(*(undefined4 *)(param_1 + 4),&DAT_1009c4b0,param_2,param_1,uVar1,param_3,
                       param_4,0);
  return uVar1;
}

