/*
 * FUN_1004fac4 at 1004fac4
 * undefined __thiscall FUN_1004fac4(void * this, int param_1, int * param_2)
 * Address ranges: 1004fac4-1004fb2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004fac4(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  iVar2 = FUN_1005003c((void *)(iVar3 + 0x834 + (int)this),param_2);
  if ((iVar2 != *(int *)(iVar3 + 0x530 + (int)this)) || (*(int *)((int)this + iVar3 + 0x53c) != -1))
  {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x8c))(piVar1,iVar2,0,0xffffffff);
    *(int *)(iVar3 + 0x530 + (int)this) = iVar2;
    *(undefined4 *)((int)this + iVar3 + 0x53c) = 0xffffffff;
  }
  return;
}

