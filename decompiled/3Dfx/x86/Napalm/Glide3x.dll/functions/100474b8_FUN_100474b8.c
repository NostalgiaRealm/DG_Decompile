/*
 * FUN_100474b8 at 100474b8
 * undefined __thiscall FUN_100474b8(void * this, int param_1, int * param_2, int param_3)
 * Address ranges: 100474b8-10047524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100474b8(void *this,int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  iVar2 = FUN_10047a70((void *)(iVar3 + 0x820 + (int)this),param_2);
  if ((iVar2 != *(int *)(iVar3 + 0x534 + (int)this)) ||
     (param_3 != *(int *)((int)this + iVar3 + 0x538))) {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x90))(piVar1,iVar2,param_3);
    *(int *)((int)this + iVar3 + 0x538) = param_3;
    *(int *)(iVar3 + 0x534 + (int)this) = iVar2;
  }
  return;
}

