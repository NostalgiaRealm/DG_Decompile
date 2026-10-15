/*
 * FUN_10014ab3 at 10014ab3
 * undefined __thiscall FUN_10014ab3(void * this, int param_1, int param_2, undefined4 * param_3, int param_4, int param_5)
 * Address ranges: 10014ab3-10014b58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014ab3(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = FUN_10013805((int)this);
    if ((((&DAT_10058171)[uVar2 * 0x18] == '\0') &&
        (*(char *)(*(int *)((int)this + 0x1c) + 0x7b5) != '\0')) && (param_1 != 0)) {
      if ((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (((param_2 == 0 || (param_2 == 1)) || (param_2 == 2)))) {
        FUN_1001a2ea(*(void **)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5 + 1);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (param_1,param_2,param_3,param_4,param_5 + 1);
      }
    }
    else {
      FUN_10014b59(this,param_2,param_3,param_4,param_5);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

