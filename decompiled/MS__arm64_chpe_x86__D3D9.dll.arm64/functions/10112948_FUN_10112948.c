/*
 * FUN_10112948 at 10112948
 * undefined FUN_10112948(void)
 * Address ranges: 10112948-101129b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10112948(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5,param_6,
                     param_7);
  uVar2 = (*extraout_w11)(uVar1);
  return ~uVar2 >> 0x1f;
}

