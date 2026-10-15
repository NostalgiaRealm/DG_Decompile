/*
 * FUN_1000e72b at 1000e72b
 * undefined __thiscall FUN_1000e72b(void * this, int param_1)
 * Address ranges: 1000e72b-1000e789
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e72b(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_10006945(*(void **)((int)this + 0x18),param_1);
    FUN_1002673e(*(void **)(param_1 + 4));
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x50) != 0) {
    FUN_10006945(*(void **)((int)this + 0x18),(int)this);
    FUN_100260d7((undefined4 *)(*(int *)((int)this + 4) + 0x4c));
    FUN_1002673e(*(void **)((int)this + 4));
    iVar1 = *(int *)((int)this + 4);
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x18))
              (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),1);
  }
  return;
}

