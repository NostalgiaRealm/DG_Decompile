/*
 * FUN_1800a2be0 at 1800a2be0
 * undefined FUN_1800a2be0(void)
 * Address ranges: 1800a2be0-1800a2c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2be0(longlong param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_18024a978 + (ulonglong)*(uint *)(param_1 + 0x2c) * 0x2c);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = uVar1 >> 0x10 & 0xff;
  *param_5 = uVar1 >> 0x18;
  return;
}

