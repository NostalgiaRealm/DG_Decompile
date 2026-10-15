/*
 * FUN_100c988c at 100c988c
 * int __thiscall FUN_100c988c(void * this, int param_1)
 * Address ranges: 100c988c-100c98ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100c988c(void *this,int param_1)

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

