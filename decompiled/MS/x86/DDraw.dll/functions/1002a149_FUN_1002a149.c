/*
 * FUN_1002a149 at 1002a149
 * int __thiscall FUN_1002a149(void * this, int param_1)
 * Address ranges: 1002a149-1002a192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002a149(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0xb8);
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(int *)((int)this + 4) + 0xb4);
    do {
      iVar3 = uVar4 * 0x18;
      if ((*(void **)(iVar3 + iVar2) == this) &&
         ((*(int *)(iVar3 + 4 + iVar2) == param_1 || (*(int *)(iVar3 + 4 + iVar2) == -1)))) {
        return iVar2 + 8 + iVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}

