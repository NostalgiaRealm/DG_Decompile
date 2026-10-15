/*
 * FUN_10013ec8 at 10013ec8
 * undefined __thiscall FUN_10013ec8(void * this, uint param_1)
 * Address ranges: 10013ec8-10013f09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013ec8(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(ushort *)((int)*(int **)((int)this + 0xc) + 0x131)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xd4))(param_1);
      *(short *)(*(int *)((int)this + 0xc) + 0x131) = (short)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

