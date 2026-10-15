/*
 * FUN_10014232 at 10014232
 * undefined __thiscall FUN_10014232(void * this, uint param_1)
 * Address ranges: 10014232-10014295
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014232(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(*(int *)((int)this + 0x174) + uVar2 * 4) == -1) {
      *(uint *)(*(int *)((int)this + 0x174) + uVar2 * 4) = param_1;
      iVar1 = FUN_1000924d((void *)((int)this + 0x148),&param_1);
      if (iVar1 != 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x60))(uVar2,iVar1);
      }
      (**(code **)(**(int **)((int)this + 0x14) + 100))(uVar2,1);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  if (uVar2 == 8) {
    FUN_10003787((void *)((int)this + 0x174),&param_1);
  }
  return;
}

