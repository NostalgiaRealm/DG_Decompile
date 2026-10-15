/*
 * FUN_10006365 at 10006365
 * undefined __thiscall FUN_10006365(void * this, int param_1)
 * Address ranges: 10006365-100063aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006365(void *this,int param_1)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)((int)this + 0xc) + 0x129)) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xa4))(param_1 != 0);
      *(int *)(*(int *)((int)this + 0xc) + 0x129) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

