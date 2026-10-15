/*
 * FUN_10013e33 at 10013e33
 * undefined __thiscall FUN_10013e33(void * this, int param_1)
 * Address ranges: 10013e33-10013e79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013e33(void *this,int param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)((int)this + 0xc) + 0xfe)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xa8))(param_1 == 1);
      *(int *)(*(int *)((int)this + 0xc) + 0xfe) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

