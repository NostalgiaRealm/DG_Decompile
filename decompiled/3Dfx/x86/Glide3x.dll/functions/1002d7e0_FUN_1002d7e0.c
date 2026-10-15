/*
 * FUN_1002d7e0 at 1002d7e0
 * int __thiscall FUN_1002d7e0(void * this, int param_1)
 * Address ranges: 1002d7e0-1002d7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002d7e0(void *this,int param_1)

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

