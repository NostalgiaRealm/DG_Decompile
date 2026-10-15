/*
 * FUN_1004c8e4 at 1004c8e4
 * undefined4 __thiscall FUN_1004c8e4(void * this, int * param_1)
 * Address ranges: 1004c8e4-1004c9bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c8e4(void *this,int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (((param_1 != (int *)0x0) && (*param_1 == 0x2c)) &&
     (uVar1 = 0x88760305, *(char *)((int)this + 0xd0) != '\0')) {
    param_1[1] = *(int *)((int)this + 0xa8);
    param_1[2] = *(int *)((int)this + 0xac);
    param_1[3] = *(int *)((int)this + 0xb0);
    param_1[4] = *(int *)((int)this + 0xb4);
    param_1[5] = (int)((float)((double)*(int *)((int)this + 0xb0) +
                              (double)(&DAT_100601f0)[-(*(int *)((int)this + 0xb0) >> 0x1f)]) /
                      *(float *)((int)this + 0xc0));
    param_1[6] = (int)((float)((double)*(int *)((int)this + 0xb4) +
                              (double)(&DAT_100601f0)[-(*(int *)((int)this + 0xb4) >> 0x1f)]) /
                      *(float *)((int)this + 0xc4));
    param_1[7] = (int)(*(float *)((int)this + 0xc0) + *(float *)((int)this + 0xb8));
    param_1[8] = *(int *)((int)this + 0xbc);
    uVar1 = 0;
    param_1[9] = 0;
    param_1[10] = 0x3f800000;
  }
  return uVar1;
}

