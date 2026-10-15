/*
 * FUN_100668f8 at 100668f8
 * undefined FUN_100668f8(void)
 * Address ranges: 100668f8-10066953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100668f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5);
  uVar2 = (*extraout_w11)(uVar1);
  return ~uVar2 >> 0x1f;
}

