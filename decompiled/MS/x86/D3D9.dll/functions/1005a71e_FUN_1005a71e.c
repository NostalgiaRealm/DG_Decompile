/*
 * FUN_1005a71e at 1005a71e
 * uint * __stdcall FUN_1005a71e(uint * param_1, int param_2, uint param_3, undefined1 param_4, byte param_5)
 * Address ranges: 1005a71e-1005a773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1005a71e(uint *param_1,int param_2,uint param_3,undefined1 param_4,byte param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 1) = param_4;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = (uint)param_5 << 0x1f | uVar1;
  param_1[4] = param_3;
  return param_1;
}

