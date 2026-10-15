/*
 * FUN_1005ada1 at 1005ada1
 * undefined __thiscall FUN_1005ada1(void * this, int param_1)
 * Address ranges: 1005ada1-1005ae39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005ada1(void *this,int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0xd78) != 0xffffffff) {
    uVar1 = 0;
    FUN_10051a23(*(void **)(*(int *)(param_1 + 8) * 0x16c0 + 0x1c9c + (int)this),
                 *(uint *)(param_1 + 0xd78),2,(int *)0x0,0,0);
    do {
      FUN_10055e7e(*(void **)((int)this + 0x172c0));
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    uVar1 = 0;
    do {
      FUN_10053347(this,*(int **)(param_1 + 0xd70 + uVar1 * 4));
      *(undefined4 *)(param_1 + 0xd70 + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
    (**(code **)(**(int **)(param_1 + 0xd6c) + 8))(*(int **)(param_1 + 0xd6c));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd78) = 0xffffffff;
  }
  return;
}

