/*
 * FUN_10014683 at 10014683
 * undefined __thiscall FUN_10014683(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10014683-100146f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014683(void *this,int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
      piVar2 = *(int **)((int)this + 0xc);
      iVar3 = param_1 * 0x41;
      if ((param_2 != *(byte *)(iVar3 + 0x153 + (int)piVar2)) ||
         (param_3 != *(byte *)(iVar3 + 0x154 + (int)piVar2))) {
        (**(code **)(*piVar2 + 0x138))(param_1,param_2,param_3);
        *(char *)(iVar3 + 0x153 + *(int *)((int)this + 0xc)) = (char)param_2;
        *(char *)(iVar3 + 0x154 + *(int *)((int)this + 0xc)) = (char)param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

