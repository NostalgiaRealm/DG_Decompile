/*
 * FUN_10006542 at 10006542
 * undefined __thiscall FUN_10006542(void * this, undefined4 param_1)
 * Address ranges: 10006542-1000657c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006542(void *this,undefined4 param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((char)param_1 != *(char *)((int)*(int **)((int)this + 0xc) + 0x151)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x74))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x151) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

