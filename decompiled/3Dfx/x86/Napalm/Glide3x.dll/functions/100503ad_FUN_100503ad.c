/*
 * FUN_100503ad at 100503ad
 * int __thiscall FUN_100503ad(void * this, int param_1)
 * Address ranges: 100503ad-100503ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100503ad(void *this,int param_1)

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

