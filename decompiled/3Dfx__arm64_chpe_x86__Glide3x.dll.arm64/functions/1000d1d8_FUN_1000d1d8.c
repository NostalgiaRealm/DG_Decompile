/*
 * FUN_1000d1d8 at 1000d1d8
 * undefined FUN_1000d1d8(void)
 * Address ranges: 1000d1d8-1000d24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d1d8(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      FUN_1000d0b8(param_1,param_2,0);
      uVar1 = uVar1 + 1;
      param_2 = param_2 + param_3;
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 0x50;
    } while (uVar1 < param_4);
  }
  return;
}

