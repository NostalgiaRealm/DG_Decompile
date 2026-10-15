/*
 * FUN_10006c8f at 10006c8f
 * undefined __thiscall FUN_10006c8f(void * this, uint param_1)
 * Address ranges: 10006c8f-10006cd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006c8f(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(ushort *)(*(int **)((int)this + 0xc) + 0x55)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xd8))(param_1);
      *(short *)(*(int *)((int)this + 0xc) + 0x154) = (short)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

