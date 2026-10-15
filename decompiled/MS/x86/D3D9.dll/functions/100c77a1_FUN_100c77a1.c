/*
 * FUN_100c77a1 at 100c77a1
 * undefined __thiscall FUN_100c77a1(void * this, int param_1)
 * Address ranges: 100c77a1-100c782a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c77a1(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 8);
  do {
    iVar2 = *(int *)(param_1 + 0xd8c + uVar3 * 4);
    if (iVar2 != 0) {
      FUN_100ca5fd((void *)((int)this + iVar1 * 0x16c0 + 0x1c40),iVar2);
      *(undefined4 *)(param_1 + 0xd8c + uVar3 * 4) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  if (*(int **)(param_1 + 0xd94) != (int *)0xffffffff) {
    FUN_100b9fca(*(void **)(*(int *)(param_1 + 8) * 0x16c0 + 0x1c98 + (int)this),
                 *(int **)(param_1 + 0xd94),2,(int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd94) = 0xffffffff;
  }
  return;
}

