/*
 * FUN_1000e63f at 1000e63f
 * undefined __thiscall FUN_1000e63f(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000e63f-1000e6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e63f(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar3 = FUN_100051b3(this,0);
    if (bVar3) {
      bVar3 = param_1 != 0;
      piVar2 = *(int **)((int)this + 0xc);
      bVar4 = param_2 != 0;
      param_1 = (int)bVar3;
      bVar5 = param_3 != 0;
      bVar6 = param_4 != 0;
      param_3 = (int)bVar5;
      param_2 = (int)bVar6;
      if ((((bVar3 != (bool)(char)piVar2[0x3b]) || (bVar4 != (bool)*(char *)((int)piVar2 + 0xed)))
          || (bVar5 != (bool)*(char *)((int)piVar2 + 0xee))) ||
         (bVar6 != (bool)*(char *)((int)piVar2 + 0xef))) {
        (**(code **)(*piVar2 + 0x180))(param_1,bVar4,param_3,param_2);
        *(bool *)(*(int *)((int)this + 0xc) + 0xec) = bVar3;
        *(bool *)(*(int *)((int)this + 0xc) + 0xed) = bVar4;
        *(bool *)(*(int *)((int)this + 0xc) + 0xee) = bVar5;
        *(bool *)(*(int *)((int)this + 0xc) + 0xef) = bVar6;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

