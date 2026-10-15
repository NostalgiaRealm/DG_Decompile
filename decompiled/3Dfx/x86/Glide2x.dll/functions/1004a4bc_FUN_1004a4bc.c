/*
 * FUN_1004a4bc at 1004a4bc
 * int __thiscall FUN_1004a4bc(void * this, int param_1)
 * Address ranges: 1004a4bc-1004a4dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a4bc(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 * 0x16c0 + 0x19c4 + *(int *)((int)this + 4));
  iVar2 = iVar1 + 4;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

