/*
 * FUN_10006b94 at 10006b94
 * undefined __thiscall FUN_10006b94(void * this, uint param_1)
 * Address ranges: 10006b94-10006bd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006b94(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x126)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xcc))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x126) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

