/*
 * FUN_100914bc at 100914bc
 * undefined __thiscall FUN_100914bc(void * this, int param_1, int param_2)
 * Address ranges: 100914bc-100914e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100914bc(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x10 + param_2;
  FUN_1009d008(*(int *)((int)this + iVar1 * 4 + 0x88));
  *(undefined4 *)((int)this + iVar1 * 4 + 0x88) = 0;
  return;
}

