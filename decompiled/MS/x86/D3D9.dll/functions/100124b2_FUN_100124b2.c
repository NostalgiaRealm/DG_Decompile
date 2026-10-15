/*
 * FUN_100124b2 at 100124b2
 * undefined __thiscall FUN_100124b2(void * this, int param_1)
 * Address ranges: 100124b2-10012510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100124b2(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_10007305(*(void **)((int)this + 0x18),param_1);
    FUN_1002dfa1(*(void **)(param_1 + 4));
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x50) != 0) {
    FUN_10007305(*(void **)((int)this + 0x18),(int)this);
    FUN_1002d836((undefined4 *)(*(int *)((int)this + 4) + 0x4c));
    FUN_1002dfa1(*(void **)((int)this + 4));
    iVar1 = *(int *)((int)this + 4);
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x18))
              (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),1);
  }
  return;
}

