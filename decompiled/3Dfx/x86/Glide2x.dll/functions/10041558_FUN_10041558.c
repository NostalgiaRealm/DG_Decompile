/*
 * FUN_10041558 at 10041558
 * undefined __thiscall FUN_10041558(void * this, int param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 10041558-100415c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041558(void *this,int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  iVar2 = FUN_10041ad0((void *)(iVar3 + 0x834 + (int)this),param_2);
  if ((iVar2 != *(int *)(iVar3 + 0x530 + (int)this)) ||
     (param_4 != *(int *)((int)this + iVar3 + 0x53c))) {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x8c))(piVar1,iVar2,0,param_4);
    *(int *)((int)this + iVar3 + 0x53c) = param_4;
    *(int *)(iVar3 + 0x530 + (int)this) = iVar2;
  }
  return;
}

