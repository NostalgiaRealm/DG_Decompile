/*
 * FUN_10041960 at 10041960
 * undefined __thiscall FUN_10041960(void * this, uint param_1, float * param_2)
 * Address ranges: 10041960-10041aa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041960(void *this,uint param_1,float *param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x4d0c) == 0) {
    *param_2 = ((float)(param_1 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & 0xff) + 0.0) / 255.0;
    uVar1 = 0xff;
    param_2[2] = ((float)(param_1 & 0xff) + 0.0) / 255.0;
  }
  else {
    *param_2 = ((float)(param_1 >> 0x10 & *(uint *)((int)this + 0x4d20)) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & *(uint *)((int)this + 0x4d24)) + 0.0) / 255.0;
    uVar1 = *(uint *)((int)this + 0x4d28) & param_1;
    param_2[2] = (float)((double)(int)uVar1 + (double)(&DAT_100b5ce0)[-((int)uVar1 >> 0x1f)]) /
                 255.0;
    uVar1 = *(uint *)((int)this + 0x4d2c);
  }
  param_2[3] = ((float)(param_1 >> 0x18 & uVar1) + 0.0) / 255.0;
  return;
}

