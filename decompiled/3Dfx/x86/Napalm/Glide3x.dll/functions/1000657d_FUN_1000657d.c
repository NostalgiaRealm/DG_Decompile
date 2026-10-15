/*
 * FUN_1000657d at 1000657d
 * undefined __thiscall FUN_1000657d(void * this, uint param_1)
 * Address ranges: 1000657d-100065ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000657d(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)(*(int **)((int)this + 0xc) + 0x54)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x7c))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x150) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

