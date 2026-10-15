/*
 * FUN_1004ad5c at 1004ad5c
 * undefined __thiscall FUN_1004ad5c(void * this, int param_1, int param_2)
 * Address ranges: 1004ad5c-1004ada3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ad5c(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x16c0 + *(int *)((int)this + 4);
  uVar2 = *(uint *)(iVar4 + 0x1d24);
  while (uVar2 != 0) {
    uVar1 = uVar2 - 1;
    iVar3 = uVar2 * 0x20;
    uVar2 = uVar1;
    if (*(int *)(*(int *)(iVar4 + 0x1d1c) + -0x14 + iVar3) == param_2) {
      FUN_10038808((void *)(iVar4 + 0x1d1c),uVar1);
    }
  }
  return;
}

