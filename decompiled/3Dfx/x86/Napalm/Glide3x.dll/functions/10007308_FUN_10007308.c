/*
 * FUN_10007308 at 10007308
 * undefined __thiscall FUN_10007308(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10007308-1000737f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007308(void *this,int param_1,uint param_2,uint param_3)

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
      if ((param_2 != *(byte *)(iVar3 + 0x1f2 + (int)piVar2)) ||
         (param_3 != *(byte *)(iVar3 + 499 + (int)piVar2))) {
        (**(code **)(*piVar2 + 0x144))(param_1,param_2,param_3);
        *(char *)(iVar3 + 0x1f2 + *(int *)((int)this + 0xc)) = (char)param_2;
        *(char *)(iVar3 + 499 + *(int *)((int)this + 0xc)) = (char)param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

