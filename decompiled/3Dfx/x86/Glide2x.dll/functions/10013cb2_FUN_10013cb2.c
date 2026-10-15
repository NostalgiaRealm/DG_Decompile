/*
 * FUN_10013cb2 at 10013cb2
 * undefined __thiscall FUN_10013cb2(void * this, uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 10013cb2-10013d66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013cb2(void *this,uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(byte *)((int)piVar2 + 0x149)) || (param_2 != *(byte *)((int)piVar2 + 0x14a))
         ) || (param_3 != *(byte *)((int)piVar2 + 0x14b))) ||
       ((param_4 != *(byte *)(piVar2 + 0x53) || (param_5 != *(int *)((int)piVar2 + 0x14d))))) {
      (**(code **)(*piVar2 + 0xbc))(param_1,param_2,param_3,param_4,param_5);
      *(char *)(*(int *)((int)this + 0xc) + 0x149) = (char)param_1;
      *(char *)(*(int *)((int)this + 0xc) + 0x14a) = (char)param_2;
      *(char *)(*(int *)((int)this + 0xc) + 0x14b) = (char)param_3;
      *(char *)(*(int *)((int)this + 0xc) + 0x14c) = (char)param_4;
      *(int *)(*(int *)((int)this + 0xc) + 0x14d) = param_5;
      FUN_10013481((int)this);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

