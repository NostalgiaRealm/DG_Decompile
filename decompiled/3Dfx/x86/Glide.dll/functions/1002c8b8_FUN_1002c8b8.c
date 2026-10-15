/*
 * FUN_1002c8b8 at 1002c8b8
 * undefined __thiscall FUN_1002c8b8(void * this, int param_1, int param_2, byte param_3, int param_4)
 * Address ranges: 1002c8b8-1002c90d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c8b8(void *this,int param_1,int param_2,byte param_3,int param_4)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = param_1 * 0x180;
  *(float *)(iVar1 + 0x2d1c + (int)this) = (float)param_2;
  *(float *)(iVar1 + 0x2d20 + (int)this) = (float)(1 << (param_3 & 0x1f)) / 255.0;
  *(int *)(iVar1 + 0x2d24 + (int)this) = param_4;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

