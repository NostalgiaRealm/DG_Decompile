/*
 * FUN_10006759 at 10006759
 * undefined __thiscall FUN_10006759(void * this, int param_1)
 * Address ranges: 10006759-1000679e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006759(void *this,int param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != (*(int **)((int)this + 0xc))[0x53]) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xa0))(param_1 != 0);
      *(int *)(*(int *)((int)this + 0xc) + 0x14c) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

