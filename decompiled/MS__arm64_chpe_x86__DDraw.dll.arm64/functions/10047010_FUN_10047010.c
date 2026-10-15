/*
 * FUN_10047010 at 10047010
 * undefined FUN_10047010(void)
 * Address ranges: 10047010-1004705b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10047010(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 >> 0x11 & 1) == 0) {
    uVar2 = *(uint *)(param_3 + 0x50);
  }
  else {
    uVar2 = -(uint)(*(int *)(param_3 + 8) == 0xff0062);
  }
  uVar1 = 0xffff;
  if (*(int *)(param_1 + 0x1a4) != 0x10) {
    uVar1 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1a4) == 8) {
    uVar1 = 0xff;
  }
  return uVar1 & uVar2;
}

