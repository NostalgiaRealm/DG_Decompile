/*
 * FUN_1005fcb8 at 1005fcb8
 * undefined FUN_1005fcb8(void)
 * Address ranges: 1005fcb8-1005fd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005fcb8(int param_1,uint param_2,float *param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x4d0c) == 0) {
    *param_3 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
    param_3[1] = (float)(param_2 >> 8 & 0xff) / 255.0;
    param_3[2] = (float)(param_2 & 0xff) / 255.0;
    uVar1 = 0xff;
  }
  else {
    *param_3 = (float)(*(uint *)(param_1 + 0x4d20) & param_2 >> 0x10) / 255.0;
    param_3[1] = (float)(*(uint *)(param_1 + 0x4d24) & param_2 >> 8) / 255.0;
    param_3[2] = (float)(*(uint *)(param_1 + 0x4d28) & param_2) / 255.0;
    uVar1 = *(uint *)(param_1 + 0x4d2c);
  }
  param_3[3] = (float)(uVar1 & param_2 >> 0x18) / 255.0;
  return;
}

