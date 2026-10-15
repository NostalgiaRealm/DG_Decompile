/*
 * FUN_100b4e84 at 100b4e84
 * undefined __thiscall FUN_100b4e84(void * this, int param_1, int * param_2, int param_3)
 * Address ranges: 100b4e84-100b4ef0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b4e84(void *this,int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x1510;
  iVar2 = FUN_100b5682((void *)(iVar3 + 0x820 + (int)this),param_2);
  if ((iVar2 != *(int *)(iVar3 + 0x534 + (int)this)) ||
     (param_3 != *(int *)((int)this + iVar3 + 0x538))) {
    piVar1 = *(int **)(iVar3 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x90))(piVar1,iVar2,param_3);
    *(int *)((int)this + iVar3 + 0x538) = param_3;
    *(int *)(iVar3 + 0x534 + (int)this) = iVar2;
  }
  return;
}

