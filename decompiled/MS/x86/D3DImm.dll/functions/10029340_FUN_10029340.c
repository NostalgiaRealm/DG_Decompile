/*
 * FUN_10029340 at 10029340
 * undefined __thiscall FUN_10029340(void * this, uint param_1, float * param_2)
 * Address ranges: 10029340-10029486
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10029340(void *this,uint param_1,float *param_2)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x9ec) == 0) {
    *param_2 = ((float)(param_1 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & 0xff) + 0.0) / 255.0;
    uVar1 = 0xff;
    param_2[2] = ((float)(param_1 & 0xff) + 0.0) / 255.0;
  }
  else {
    *param_2 = ((float)(param_1 >> 0x10 & *(uint *)((int)this + 0xa00)) + 0.0) / 255.0;
    param_2[1] = ((float)(param_1 >> 8 & *(uint *)((int)this + 0xa04)) + 0.0) / 255.0;
    uVar1 = *(uint *)((int)this + 0xa08) & param_1;
    param_2[2] = (float)((double)(int)uVar1 + (double)(&DAT_100601f0)[-((int)uVar1 >> 0x1f)]) /
                 255.0;
    uVar1 = *(uint *)((int)this + 0xa0c);
  }
  param_2[3] = ((float)(param_1 >> 0x18 & uVar1) + 0.0) / 255.0;
  return;
}

