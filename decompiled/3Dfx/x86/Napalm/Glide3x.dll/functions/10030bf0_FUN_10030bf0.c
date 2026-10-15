/*
 * FUN_10030bf0 at 10030bf0
 * int __thiscall FUN_10030bf0(void * this, int param_1)
 * Address ranges: 10030bf0-10030c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10030bf0(void *this,int param_1)

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

