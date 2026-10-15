/*
 * FUN_1005da48 at 1005da48
 * undefined FUN_1005da48(void)
 * Address ranges: 1005da48-1005daa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005da48(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + param_2 * 0x18),param_3,param_4,param_5);
  uVar2 = (*extraout_w11)(uVar1);
  return ~uVar2 >> 0x1f;
}

