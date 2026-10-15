/*
 * FUN_10020224 at 10020224
 * undefined __thiscall FUN_10020224(void * this, int param_1, int param_2, byte param_3, int param_4)
 * Address ranges: 10020224-10020279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020224(void *this,int param_1,int param_2,byte param_3,int param_4)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x198))();
  iVar1 = param_1 * 0x250;
  *(float *)(iVar1 + 0x2f80 + (int)this) = (float)param_2;
  *(float *)(iVar1 + 0x2f84 + (int)this) = (float)(1 << (param_3 & 0x1f)) / 255.0;
  *(int *)(iVar1 + 0x2f88 + (int)this) = param_4;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

