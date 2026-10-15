/*
 * FUN_100070b2 at 100070b2
 * int __thiscall FUN_100070b2(void * this, int param_1)
 * Address ranges: 100070b2-100070d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100070b2(void *this,int param_1)

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

