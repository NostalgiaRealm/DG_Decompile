/*
 * FUN_10013bdd at 10013bdd
 * undefined __thiscall FUN_10013bdd(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined4 param_6)
 * Address ranges: 10013bdd-10013cb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013bdd(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(byte *)((int)piVar2 + 0x141)) || (param_2 != *(byte *)((int)piVar2 + 0x142))
         ) || (param_3 != *(byte *)((int)piVar2 + 0x143))) ||
       (((param_4 != *(byte *)(piVar2 + 0x51) || (param_5 != *(uint *)((int)piVar2 + 0x145))) ||
        ((char)param_6 != (char)piVar2[0x85])))) {
      (**(code **)(*piVar2 + 0xb8))(param_1,param_2,param_3,param_4,param_5,param_6);
      *(char *)(*(int *)((int)this + 0xc) + 0x141) = (char)param_1;
      *(char *)(*(int *)((int)this + 0xc) + 0x142) = (char)param_2;
      *(char *)(*(int *)((int)this + 0xc) + 0x143) = (char)param_3;
      *(char *)(*(int *)((int)this + 0xc) + 0x144) = (char)param_4;
      *(uint *)(*(int *)((int)this + 0xc) + 0x145) = param_5 & 0xff;
      *(char *)(*(int *)((int)this + 0xc) + 0x214) = (char)param_6;
      FUN_10013481((int)this);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

