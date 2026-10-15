/*
 * FUN_10020637 at 10020637
 * undefined __thiscall FUN_10020637(void * this, int param_1, uint param_2)
 * Address ranges: 10020637-100206d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002069d) */
/* WARNING: Removing unreachable block (ram,0x1002067e) */
/* WARNING: Removing unreachable block (ram,0x100206b7) */
/* WARNING: Removing unreachable block (ram,0x1002065f) */

void __thiscall FUN_10020637(void *this,int param_1,uint param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x198))();
  iVar1 = param_1 * 0x250;
  *(float *)(iVar1 + 0x2f40 + (int)this) = (float)(param_2 >> 0x18);
  *(float *)(iVar1 + 0x2f44 + (int)this) = (float)(param_2 >> 0x10 & 0xff);
  *(float *)(iVar1 + 0x2f48 + (int)this) = (float)(param_2 >> 8 & 0xff);
  *(float *)(iVar1 + 0x2f4c + (int)this) = (float)(param_2 & 0xff);
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

