/*
 * FUN_1801bb1e0 at 1801bb1e0
 * undefined FUN_1801bb1e0(void)
 * Address ranges: 1801bb1e0-1801bb22f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801bb1e0(longlong param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_180248468 + (ulonglong)*(uint *)(param_1 + 0x2c) * 0x2c);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = uVar1 >> 0x10 & 0xff;
  *param_5 = uVar1 >> 0x18;
  return;
}

