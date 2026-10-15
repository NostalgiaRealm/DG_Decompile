/*
 * FUN_1001415b at 1001415b
 * undefined __thiscall FUN_1001415b(void * this, uint param_1)
 * Address ranges: 1001415b-1001419b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001415b(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x103)) {
      (**(code **)(**(int **)((int)this + 0xc) + 200))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x103) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

