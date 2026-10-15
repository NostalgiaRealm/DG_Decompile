/*
 * FUN_10013a5c at 10013a5c
 * undefined __thiscall FUN_10013a5c(void * this, uint param_1)
 * Address ranges: 10013a5c-10013aa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013a5c(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (7 < (int)param_1) {
      param_1 = 7;
    }
    if (param_1 != *(byte *)(*(int **)((int)this + 0xc) + 0x41)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x9c))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x104) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

