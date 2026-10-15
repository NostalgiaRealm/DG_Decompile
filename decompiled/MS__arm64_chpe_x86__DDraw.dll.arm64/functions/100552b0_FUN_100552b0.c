/*
 * FUN_100552b0 at 100552b0
 * undefined FUN_100552b0(void)
 * Address ranges: 100552b0-100552fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100552b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

