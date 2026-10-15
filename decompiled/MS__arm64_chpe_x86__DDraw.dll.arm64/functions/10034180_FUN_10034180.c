/*
 * FUN_10034180 at 10034180
 * undefined FUN_10034180(void)
 * Address ranges: 10034180-100341e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034180(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_100bb7a8 + *(int *)(param_1 + 0x1c) * 0x2c);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = uVar1 >> 0x10 & 0xff;
  *param_5 = uVar1 >> 0x18;
  return;
}

