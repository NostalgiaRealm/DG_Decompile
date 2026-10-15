/*
 * FUN_101149d0 at 101149d0
 * undefined FUN_101149d0(void)
 * Address ranges: 101149d0-10114a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_101149d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x638),param_2,param_3);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

