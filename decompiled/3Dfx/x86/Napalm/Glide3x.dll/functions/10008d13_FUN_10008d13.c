/*
 * FUN_10008d13 at 10008d13
 * undefined __thiscall FUN_10008d13(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10008d13-10008d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008d13(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + param_1 * 4 + 0x2b7c) != 0) {
    (**(code **)(*(int *)this + 0x198))();
  }
  iVar1 = param_1 * 0x250;
  *(uint *)(iVar1 + 0x2f90 + (int)this) = param_2 >> 0x18;
  *(uint *)(iVar1 + 0x2f94 + (int)this) = param_2 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2f98 + (int)this) = param_2 >> 8 & 0xff;
  *(uint *)(iVar1 + 0x2fa0 + (int)this) = param_3 >> 0x18;
  *(uint *)(iVar1 + 0x2fa4 + (int)this) = param_3 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2fa8 + (int)this) = param_3 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

