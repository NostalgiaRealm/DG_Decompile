/*
 * FUN_10006186 at 10006186
 * undefined __thiscall FUN_10006186(void * this, uint param_1)
 * Address ranges: 10006186-100061c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006186(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)((int)this + 0xc) + 0x12d)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x80))(param_1);
      *(char *)(*(int *)((int)this + 0xc) + 0x12d) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

