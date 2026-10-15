/*
 * FUN_10020663 at 10020663
 * undefined __thiscall FUN_10020663(void * this, int param_1, int param_2, byte param_3, int param_4)
 * Address ranges: 10020663-100206b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020663(void *this,int param_1,int param_2,byte param_3,int param_4)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x170))();
  iVar1 = param_1 * 0x1a0;
  *(float *)(iVar1 + 0x2dbc + (int)this) = (float)param_2;
  *(float *)(iVar1 + 0x2dc0 + (int)this) = (float)(1 << (param_3 & 0x1f)) / 255.0;
  *(int *)(iVar1 + 0x2dc4 + (int)this) = param_4;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

