/*
 * FUN_1006aec0 at 1006aec0
 * undefined FUN_1006aec0(void)
 * Address ranges: 1006aec0-1006af1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006aec0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(*(int *)(param_1 + 4) + 0xa70),param_2);
  uVar1 = (*extraout_w11)(uVar1);
  uVar1 = FUN_10058dd0(*(int *)(param_1 + 4),uVar1);
  return uVar1;
}

