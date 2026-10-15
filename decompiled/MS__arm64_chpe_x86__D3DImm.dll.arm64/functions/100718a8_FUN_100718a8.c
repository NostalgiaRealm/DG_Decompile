/*
 * FUN_100718a8 at 100718a8
 * undefined FUN_100718a8(void)
 * Address ranges: 100718a8-100718fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100718a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5);
  (*extraout_w11)(uVar1);
  return;
}

