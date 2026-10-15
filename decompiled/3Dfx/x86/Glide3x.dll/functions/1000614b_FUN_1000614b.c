/*
 * FUN_1000614b at 1000614b
 * undefined __thiscall FUN_1000614b(void * this, undefined4 param_1)
 * Address ranges: 1000614b-10006185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000614b(void *this,undefined4 param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((char)param_1 != *(char *)((int)*(int **)((int)this + 0xc) + 0x12e)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x78))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x12e) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

