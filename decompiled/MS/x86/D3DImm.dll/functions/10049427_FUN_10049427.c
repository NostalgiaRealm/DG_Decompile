/*
 * FUN_10049427 at 10049427
 * undefined __thiscall FUN_10049427(void * this, int param_1)
 * Address ranges: 10049427-1004948e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049427(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x1efc) != '\0') &&
      (((iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(),
        *(char *)(iVar1 + 0x7e9) != *(char *)(param_1 + 0x85) ||
        (*(int *)(iVar1 + 0x7dc) != *(int *)(param_1 + 0x78))) ||
       (*(int *)(iVar1 + 0x7e0) != *(int *)(param_1 + 0x7c))))) &&
     (uVar2 = 0, *(int *)((int)this + 0xa0) != 0)) {
    do {
      (**(code **)**(undefined4 **)(*(int *)((int)this + 0x9c) + uVar2 * 4))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0xa0));
  }
  return;
}

