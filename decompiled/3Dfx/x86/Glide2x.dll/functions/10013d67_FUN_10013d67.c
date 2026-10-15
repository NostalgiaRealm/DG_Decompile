/*
 * FUN_10013d67 at 10013d67
 * undefined __thiscall FUN_10013d67(void * this, int param_1, int param_2)
 * Address ranges: 10013d67-10013dcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013d67(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((param_1 != *(int *)((int)piVar2 + 0x11b)) || (param_2 != *(int *)((int)piVar2 + 0x11f))) {
      (**(code **)(*piVar2 + 0xc0))(param_1 != 0,param_2 != 0);
      *(int *)(*(int *)((int)this + 0xc) + 0x11b) = param_1;
      *(int *)(*(int *)((int)this + 0xc) + 0x11f) = param_2;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

