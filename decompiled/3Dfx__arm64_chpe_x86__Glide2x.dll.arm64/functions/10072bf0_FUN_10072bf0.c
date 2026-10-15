/*
 * FUN_10072bf0 at 10072bf0
 * undefined FUN_10072bf0(void)
 * Address ranges: 10072bf0-10072c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10072bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(int *)(param_1 + 4) + 0x50c,param_2,param_3,param_4,param_5);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

