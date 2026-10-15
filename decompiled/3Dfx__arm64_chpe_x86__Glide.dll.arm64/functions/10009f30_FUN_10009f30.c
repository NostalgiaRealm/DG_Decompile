/*
 * FUN_10009f30 at 10009f30
 * undefined FUN_10009f30(void)
 * Address ranges: 10009f30-10009f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

