/*
 * FUN_100147cb at 100147cb
 * undefined __thiscall FUN_100147cb(void * this, int param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 100147cb-10014855
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100147cb(void *this,int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) &&
       (0 < *(int *)(*(int *)((int)this + 0x1c) + 0x797))) {
      iVar2 = 0;
      do {
        FUN_10019f5f(*(void **)((int)this + 0xc),iVar2,param_1,param_2,param_3,param_4 + 1);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (iVar2,param_1,param_2,param_3,param_4 + 1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(int *)((int)this + 0x1c) + 0x797));
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

