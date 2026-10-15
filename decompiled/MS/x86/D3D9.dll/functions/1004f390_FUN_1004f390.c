/*
 * FUN_1004f390 at 1004f390
 * undefined __thiscall FUN_1004f390(void * this, uint param_1, float * param_2)
 * Address ranges: 1004f390-1004f4d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f390(void *this,uint param_1,float *param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x697c) == 0) {
    *param_2 = ((float)(param_1 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & 0xff) + 0.0) / 255.0;
    uVar1 = 0xff;
    param_2[2] = ((float)(param_1 & 0xff) + 0.0) / 255.0;
  }
  else {
    *param_2 = ((float)(param_1 >> 0x10 & *(uint *)((int)this + 0x6990)) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & *(uint *)((int)this + 0x6994)) + 0.0) / 255.0;
    uVar1 = *(uint *)((int)this + 0x6998) & param_1;
    param_2[2] = (float)((double)(int)uVar1 + (double)(&DAT_100d97a0)[-((int)uVar1 >> 0x1f)]) /
                 255.0;
    uVar1 = *(uint *)((int)this + 0x699c);
  }
  param_2[3] = ((float)(param_1 >> 0x18 & uVar1) + 0.0) / 255.0;
  return;
}

