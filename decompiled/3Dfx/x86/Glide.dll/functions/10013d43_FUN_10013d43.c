/*
 * FUN_10013d43 at 10013d43
 * undefined __thiscall FUN_10013d43(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10013d43-10013de9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013d43(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (0xf < (int)param_1) {
      param_1 = 0;
    }
    if (0xf < (int)param_2) {
      param_2 = 0;
    }
    piVar2 = *(int **)((int)this + 0xc);
    if ((((param_1 != *(byte *)((int)piVar2 + 0xe2)) || (param_2 != *(byte *)((int)piVar2 + 0xe3)))
        || (param_3 != *(byte *)(piVar2 + 0x39))) || (param_4 != *(byte *)((int)piVar2 + 0xe5))) {
      (**(code **)(*piVar2 + 0x98))(param_1,param_2,param_3,param_4);
      *(char *)(*(int *)((int)this + 0xc) + 0xe2) = (char)param_1;
      *(char *)(*(int *)((int)this + 0xc) + 0xe3) = (char)param_2;
      *(char *)(*(int *)((int)this + 0xc) + 0xe4) = (char)param_3;
      *(char *)(*(int *)((int)this + 0xc) + 0xe5) = (char)param_4;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

