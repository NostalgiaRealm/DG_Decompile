/*
 * FUN_10114a30 at 10114a30
 * undefined FUN_10114a30(void)
 * Address ranges: 10114a30-10114a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10114a30(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

