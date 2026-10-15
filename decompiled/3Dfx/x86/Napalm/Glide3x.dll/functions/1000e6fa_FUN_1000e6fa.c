/*
 * FUN_1000e6fa at 1000e6fa
 * undefined __thiscall FUN_1000e6fa(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000e6fa-1000e77a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e6fa(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar3 = FUN_100051b3(this,4);
    if (bVar3) {
      if (7 < param_1) {
        param_1 = 7;
      }
      piVar2 = *(int **)((int)this + 0xc);
      if (((param_1 != *(int *)((int)piVar2 + 0xf1)) ||
          ((char)param_2 != *(char *)((int)piVar2 + 0xf5))) ||
         ((char)param_3 != *(char *)((int)piVar2 + 0xf6))) {
        (**(code **)(*piVar2 + 0x188))(param_1,param_2,param_3);
        *(int *)(*(int *)((int)this + 0xc) + 0xf1) = param_1;
        *(char *)(*(int *)((int)this + 0xc) + 0xf5) = (char)param_2;
        *(char *)(*(int *)((int)this + 0xc) + 0xf6) = (char)param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

