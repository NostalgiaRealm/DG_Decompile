/*
 * FUN_10075798 at 10075798
 * undefined FUN_10075798(void)
 * Address ranges: 10075798-1007584b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075798(int param_1,uint param_2,float *param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x697c) == 0) {
    *param_3 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
    param_3[1] = (float)(param_2 >> 8 & 0xff) / 255.0;
    param_3[2] = (float)(param_2 & 0xff) / 255.0;
    uVar1 = 0xff;
  }
  else {
    *param_3 = (float)(*(uint *)(param_1 + 0x6990) & param_2 >> 0x10) / 255.0;
    param_3[1] = (float)(*(uint *)(param_1 + 0x6994) & param_2 >> 8) / 255.0;
    param_3[2] = (float)(*(uint *)(param_1 + 0x6998) & param_2) / 255.0;
    uVar1 = *(uint *)(param_1 + 0x699c);
  }
  param_3[3] = (float)(uVar1 & param_2 >> 0x18) / 255.0;
  return;
}

