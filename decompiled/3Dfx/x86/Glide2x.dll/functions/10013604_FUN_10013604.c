/*
 * FUN_10013604 at 10013604
 * undefined __thiscall FUN_10013604(void * this, undefined4 param_1)
 * Address ranges: 10013604-10013636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013604(void *this,undefined4 param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x58))(param_1);
    *(char *)(*(int *)((int)this + 0xc) + 0xe0) = (char)param_1;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

