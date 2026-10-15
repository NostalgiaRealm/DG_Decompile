/*
 * FUN_10046a9d at 10046a9d
 * undefined __thiscall FUN_10046a9d(void * this, int param_1, int * param_2)
 * Address ranges: 10046a9d-10046b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046a9d(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  iVar2 = FUN_10047058((void *)(iVar3 + 0x820 + (int)this),param_2);
  if ((iVar2 != *(int *)(iVar3 + 0x534 + (int)this)) || (*(int *)((int)this + iVar3 + 0x538) != 0))
  {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x90))(piVar1,iVar2,0);
    *(int *)(iVar3 + 0x534 + (int)this) = iVar2;
    *(undefined4 *)((int)this + iVar3 + 0x538) = 0;
  }
  return;
}

