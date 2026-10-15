/*
 * FUN_10013cbc at 10013cbc
 * undefined __thiscall FUN_10013cbc(void * this, uint param_1)
 * Address ranges: 10013cbc-10013cfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013cbc(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x127)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x90))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x127) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

