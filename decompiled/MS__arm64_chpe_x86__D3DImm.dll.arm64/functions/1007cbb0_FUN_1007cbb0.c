/*
 * FUN_1007cbb0 at 1007cbb0
 * undefined FUN_1007cbb0(void)
 * Address ranges: 1007cbb0-1007cc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1007cbb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(int *)(param_1 + 4) + 0x50c,param_2,param_3,param_4,param_5);
  uVar1 = (*extraout_w11)(uVar1);
  return uVar1;
}

