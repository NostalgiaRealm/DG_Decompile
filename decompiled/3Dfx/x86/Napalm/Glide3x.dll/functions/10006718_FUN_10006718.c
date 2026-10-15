/*
 * FUN_10006718 at 10006718
 * undefined __thiscall FUN_10006718(void * this, uint param_1)
 * Address ranges: 10006718-10006758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006718(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x14a)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x9c))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x14a) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

