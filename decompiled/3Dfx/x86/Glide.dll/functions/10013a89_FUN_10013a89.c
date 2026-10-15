/*
 * FUN_10013a89 at 10013a89
 * undefined __thiscall FUN_10013a89(void * this, uint param_1)
 * Address ranges: 10013a89-10013ac6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013a89(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x12d)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x70))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x12d) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

