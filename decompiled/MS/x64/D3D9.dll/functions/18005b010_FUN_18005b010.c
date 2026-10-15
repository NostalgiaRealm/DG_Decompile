/*
 * FUN_18005b010 at 18005b010
 * undefined __fastcall FUN_18005b010(longlong param_1, uint param_2, float * param_3)
 * Address ranges: 18005b010-18005b0d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b010(longlong param_1,uint param_2,float *param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x699c) == 0) {
    *param_3 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
    param_3[1] = (float)(param_2 >> 8 & 0xff) / 255.0;
    uVar1 = 0xff;
    param_3[2] = (float)(param_2 & 0xff) / 255.0;
  }
  else {
    *param_3 = (float)(param_2 >> 0x10 & *(uint *)(param_1 + 0x69b0)) / 255.0;
    param_3[1] = (float)(param_2 >> 8 & *(uint *)(param_1 + 0x69b4)) / 255.0;
    param_3[2] = (float)(*(uint *)(param_1 + 0x69b8) & param_2) / 255.0;
    uVar1 = *(uint *)(param_1 + 0x69bc);
  }
  param_3[3] = (float)(uVar1 & param_2 >> 0x18) / 255.0;
  return;
}

