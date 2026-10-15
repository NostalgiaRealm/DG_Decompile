/*
 * FUN_101129b8 at 101129b8
 * undefined FUN_101129b8(void)
 * Address ranges: 101129b8-10112a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101129b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5);
  (*extraout_w11)(uVar1);
  return;
}

