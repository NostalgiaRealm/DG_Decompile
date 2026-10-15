/*
 * FUN_1004a4de at 1004a4de
 * int __thiscall FUN_1004a4de(void * this, int param_1)
 * Address ranges: 1004a4de-1004a4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a4de(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 * 0x16c0 + 0x19cc + *(int *)((int)this + 4));
  iVar2 = iVar1 + 4;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

