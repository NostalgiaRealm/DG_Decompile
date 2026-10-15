/*
 * FUN_10006b2e at 10006b2e
 * undefined __thiscall FUN_10006b2e(void * this, int param_1, int param_2)
 * Address ranges: 10006b2e-10006b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006b2e(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((param_1 != *(int *)((int)piVar2 + 0x13e)) || (param_2 != *(int *)((int)piVar2 + 0x142))) {
      (**(code **)(*piVar2 + 0xc4))(param_1 != 0,param_2 != 0);
      *(int *)(*(int *)((int)this + 0xc) + 0x13e) = param_1;
      *(int *)(*(int *)((int)this + 0xc) + 0x142) = param_2;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

