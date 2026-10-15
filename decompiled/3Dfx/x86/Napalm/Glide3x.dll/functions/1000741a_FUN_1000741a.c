/*
 * FUN_1000741a at 1000741a
 * undefined __thiscall FUN_1000741a(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 1000741a-10007491
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000741a(void *this,int param_1,uint param_2,uint param_3)

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
      iVar3 = param_1 * 0x9d;
      if ((param_2 != *(byte *)(iVar3 + 500 + (int)piVar2)) ||
         (param_3 != *(byte *)(iVar3 + 0x1f5 + (int)piVar2))) {
        (**(code **)(*piVar2 + 0x14c))(param_1,param_2,param_3);
        *(char *)(iVar3 + 500 + *(int *)((int)this + 0xc)) = (char)param_2;
        *(char *)(iVar3 + 0x1f5 + *(int *)((int)this + 0xc)) = (char)param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

