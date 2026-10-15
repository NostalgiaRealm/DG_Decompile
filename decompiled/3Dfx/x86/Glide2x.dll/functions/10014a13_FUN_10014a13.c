/*
 * FUN_10014a13 at 10014a13
 * undefined __thiscall FUN_10014a13(void * this, int param_1, uint param_2, int param_3)
 * Address ranges: 10014a13-10014a84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014a13(void *this,int param_1,uint param_2,int param_3)

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
      if ((*(byte *)(iVar3 + 0x161 + (int)piVar2) != param_2) ||
         (*(int *)(iVar3 + 0x162 + (int)piVar2) != param_3)) {
        (**(code **)(*piVar2 + 0x14c))(param_1,param_2,param_3);
        *(char *)(iVar3 + 0x161 + *(int *)((int)this + 0xc)) = (char)param_2;
        *(int *)(iVar3 + 0x162 + *(int *)((int)this + 0xc)) = param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

