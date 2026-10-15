/*
 * FUN_10052c4f at 10052c4f
 * undefined __thiscall FUN_10052c4f(void * this, int param_1)
 * Address ranges: 10052c4f-10052ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10052c4f(void *this,int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 0xd78) != (int *)0xffffffff) {
    uVar1 = 0;
    FUN_10042298(*(void **)(*(int *)(param_1 + 8) * 0x16c0 + 0x1c9c + (int)this),
                 *(int **)(param_1 + 0xd78),2,(int *)0x0,0,0);
    do {
      FUN_1003f803(*(void **)((int)this + 0x172c0));
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    uVar1 = 0;
    do {
      FUN_10041587(this,*(int **)(param_1 + 0xd70 + uVar1 * 4));
      *(undefined4 *)(param_1 + 0xd70 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    (**(code **)(**(int **)(param_1 + 0xd6c) + 8))(*(int **)(param_1 + 0xd6c));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
  }
  return;
}

