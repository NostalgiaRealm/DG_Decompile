/*
 * FUN_10064420 at 10064420
 * undefined FUN_10064420(void)
 * Address ranges: 10064420-1006446f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10064420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

