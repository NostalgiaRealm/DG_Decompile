/*
 * FUN_10006870 at 10006870
 * undefined __thiscall FUN_10006870(void * this, uint param_1)
 * Address ranges: 10006870-100068b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006870(void *this,uint param_1)

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
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x127)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xa8))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x127) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

