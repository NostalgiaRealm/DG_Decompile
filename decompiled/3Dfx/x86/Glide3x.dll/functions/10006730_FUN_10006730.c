/*
 * FUN_10006730 at 10006730
 * undefined __thiscall FUN_10006730(void * this, uint param_1)
 * Address ranges: 10006730-10006770
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006730(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x103)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xd8))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x103) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

