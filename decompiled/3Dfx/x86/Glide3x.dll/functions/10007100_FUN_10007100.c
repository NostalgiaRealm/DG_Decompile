/*
 * FUN_10007100 at 10007100
 * undefined __thiscall FUN_10007100(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 10007100-10007205
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10007100(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
            int param_7)

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
      iVar3 = param_1 * 0x55;
      if ((((param_2 != *(byte *)(iVar3 + 0x193 + (int)piVar2)) ||
           (param_3 != *(byte *)(iVar3 + 0x194 + (int)piVar2))) ||
          (param_4 != *(byte *)(iVar3 + 0x195 + (int)piVar2))) ||
         (((param_5 != *(byte *)(iVar3 + 0x196 + (int)piVar2) ||
           (param_6 != *(int *)(iVar3 + 0x197 + (int)piVar2))) ||
          (param_7 != *(int *)(iVar3 + 0x19b + (int)piVar2))))) {
        (**(code **)(*piVar2 + 0x164))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        *(char *)(iVar3 + 0x193 + *(int *)((int)this + 0xc)) = (char)param_2;
        *(char *)(iVar3 + 0x194 + *(int *)((int)this + 0xc)) = (char)param_3;
        *(char *)(iVar3 + 0x195 + *(int *)((int)this + 0xc)) = (char)param_4;
        *(char *)(iVar3 + 0x196 + *(int *)((int)this + 0xc)) = (char)param_5;
        *(int *)(iVar3 + 0x197 + *(int *)((int)this + 0xc)) = param_6;
        *(int *)(iVar3 + 0x19b + *(int *)((int)this + 0xc)) = param_7;
      }
      FUN_10005d7a((int)this);
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0x294) = 0;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

