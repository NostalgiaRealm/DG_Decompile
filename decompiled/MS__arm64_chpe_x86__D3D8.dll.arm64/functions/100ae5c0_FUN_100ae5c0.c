/*
 * FUN_100ae5c0 at 100ae5c0
 * undefined FUN_100ae5c0(void)
 * Address ranges: 100ae5c0-100ae623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ae5c0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_10136ee8 + *(int *)(param_1 + 0x1c) * 0x2c);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = uVar1 >> 0x10 & 0xff;
  *param_5 = uVar1 >> 0x18;
  return;
}

