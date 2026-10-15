/*
 * FUN_100c1f20 at 100c1f20
 * undefined FUN_100c1f20(void)
 * Address ranges: 100c1f20-100c1f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c1f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

