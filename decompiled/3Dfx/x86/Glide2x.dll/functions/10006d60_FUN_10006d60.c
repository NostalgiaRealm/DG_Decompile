/*
 * FUN_10006d60 at 10006d60
 * int __thiscall FUN_10006d60(void * this, int param_1)
 * Address ranges: 10006d60-10006d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10006d60(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x5c) + param_1 * 0x10);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x44) + iVar1;
  }
  return iVar1;
}

