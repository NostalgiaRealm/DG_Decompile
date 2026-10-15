/*
 * FUN_10042a6d at 10042a6d
 * int __thiscall FUN_10042a6d(void * this, int param_1)
 * Address ranges: 10042a6d-10042aa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10042a6d(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(ushort *)((int)this + 4) != 0) {
    do {
      iVar3 = (int)this + uVar2 * 0x1c + 8;
      iVar1 = 0;
      while (*(int *)(param_1 + iVar1 * 4) == *(int *)(iVar3 + iVar1 * 4)) {
        iVar1 = iVar1 + 1;
        if (iVar1 == 4) {
          return iVar3;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((int)this + 4));
  }
  return 0;
}

