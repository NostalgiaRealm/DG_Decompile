/*
 * FUN_100068b9 at 100068b9
 * undefined __thiscall FUN_100068b9(void * this, int param_1)
 * Address ranges: 100068b9-100068ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100068b9(void *this,int param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)((int)this + 0xc) + 0x121)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xb4))(param_1 == 1);
      *(int *)(*(int *)((int)this + 0xc) + 0x121) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

