/*
 * FUN_1000682b at 1000682b
 * undefined __thiscall FUN_1000682b(void * this, uint param_1)
 * Address ranges: 1000682b-1000686c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000682b(void *this,uint param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(ushort *)((int)*(int **)((int)this + 0xc) + 0x131)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xe4))(param_1);
      *(short *)(*(int *)((int)this + 0xc) + 0x131) = (short)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

