/*
 * FUN_1000defe at 1000defe
 * undefined __thiscall FUN_1000defe(void * this, undefined4 param_1)
 * Address ranges: 1000defe-1000df33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000defe(void *this,undefined4 param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x168))(param_1);
    *(undefined4 *)(*(int *)((int)this + 0xc) + 0x105) = param_1;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

