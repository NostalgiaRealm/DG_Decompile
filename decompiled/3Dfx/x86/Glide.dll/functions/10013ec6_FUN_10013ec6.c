/*
 * FUN_10013ec6 at 10013ec6
 * undefined __thiscall FUN_10013ec6(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10013ec6-10013f6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013ec6(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(int *)((int)piVar2 + 0xea)) || (param_2 != *(int *)((int)piVar2 + 0xee))) ||
        (param_3 != *(int *)((int)piVar2 + 0xf2))) || (param_4 != *(int *)((int)piVar2 + 0xf6))) {
      (**(code **)(*piVar2 + 0xb4))(param_1,param_2,param_3,param_4);
      *(int *)(*(int *)((int)this + 0xc) + 0xea) = param_1;
      *(int *)(*(int *)((int)this + 0xc) + 0xee) = param_2;
      *(int *)(*(int *)((int)this + 0xc) + 0xf2) = param_3;
      *(int *)(*(int *)((int)this + 0xc) + 0xf6) = param_4;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

