/*
 * FUN_100cefe0 at 100cefe0
 * undefined FUN_100cefe0(void)
 * Address ranges: 100cefe0-100cf043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cefe0(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_1016f238 + *(int *)(param_1 + 0x1c) * 0x2c);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = uVar1 >> 0x10 & 0xff;
  *param_5 = uVar1 >> 0x18;
  return;
}

