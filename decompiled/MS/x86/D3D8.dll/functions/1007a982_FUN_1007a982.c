/*
 * FUN_1007a982 at 1007a982
 * undefined __thiscall FUN_1007a982(void * this, int param_1, int param_2)
 * Address ranges: 1007a982-1007a9ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007a982(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x10 + param_2;
  FUN_1008109d(*(int *)((int)this + iVar1 * 4 + 0x88));
  *(undefined4 *)((int)this + iVar1 * 4 + 0x88) = 0;
  return;
}

