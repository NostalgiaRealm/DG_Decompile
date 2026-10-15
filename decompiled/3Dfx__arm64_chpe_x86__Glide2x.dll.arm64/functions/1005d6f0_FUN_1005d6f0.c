/*
 * FUN_1005d6f0 at 1005d6f0
 * undefined FUN_1005d6f0(void)
 * Address ranges: 1005d6f0-1005d743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005d6f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5);
  (*extraout_w11)(uVar1);
  return;
}

