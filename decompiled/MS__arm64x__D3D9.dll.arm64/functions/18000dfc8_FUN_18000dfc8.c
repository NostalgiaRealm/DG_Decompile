/*
 * FUN_18000dfc8 at 18000dfc8
 * undefined FUN_18000dfc8(void)
 * Address ranges: 18000dfc8-18000e01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000dfc8(longlong param_1)

{
  int iVar1;
  int extraout_w13;
  ulonglong extraout_x14;
  ulonglong extraout_x15;
  
  iVar1 = func_0x000180116ed0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                              *(undefined4 *)(param_1 + 0x50));
  iVar1 = iVar1 * (*(int *)(param_1 + 0x44) + 1);
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = func_0x000180116ed0(extraout_x14 & 0xffffffff,extraout_x15 & 0xffffffff);
    iVar1 = iVar1 + extraout_w13;
  }
  return iVar1;
}

