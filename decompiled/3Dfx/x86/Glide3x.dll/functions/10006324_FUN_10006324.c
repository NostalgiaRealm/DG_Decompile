/*
 * FUN_10006324 at 10006324
 * undefined __thiscall FUN_10006324(void * this, uint param_1)
 * Address ranges: 10006324-10006364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006324(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x127)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xa0))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x127) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

