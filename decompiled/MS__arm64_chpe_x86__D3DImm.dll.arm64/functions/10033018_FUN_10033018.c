/*
 * FUN_10033018 at 10033018
 * undefined FUN_10033018(void)
 * Address ranges: 10033018-100330db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033018(int param_1,uint param_2,float *param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x9ec) == 0) {
    *param_3 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
    param_3[1] = (float)(param_2 >> 8 & 0xff) / 255.0;
    param_3[2] = (float)(param_2 & 0xff) / 255.0;
    uVar1 = 0xff;
  }
  else {
    *param_3 = (float)(*(uint *)(param_1 + 0xa00) & param_2 >> 0x10) / 255.0;
    param_3[1] = (float)(*(uint *)(param_1 + 0xa04) & param_2 >> 8) / 255.0;
    param_3[2] = (float)(*(uint *)(param_1 + 0xa08) & param_2) / 255.0;
    uVar1 = *(uint *)(param_1 + 0xa0c);
  }
  param_3[3] = (float)(uVar1 & param_2 >> 0x18) / 255.0;
  return;
}

