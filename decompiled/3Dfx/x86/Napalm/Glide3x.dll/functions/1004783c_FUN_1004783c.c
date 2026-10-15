/*
 * FUN_1004783c at 1004783c
 * undefined __thiscall FUN_1004783c(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1004783c-1004790a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004783c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x1510;
  if (param_2 != *(int *)(iVar2 + 0x7e8 + (int)this)) {
    piVar1 = *(int **)((int)this + iVar2 + 0x514);
    (**(code **)(*piVar1 + 0x60))(piVar1,param_2);
    *(int *)(iVar2 + 0x7e8 + (int)this) = param_2;
  }
  if (param_3 != *(int *)(iVar2 + 0x7ec + (int)this)) {
    piVar1 = *(int **)((int)this + iVar2 + 0x514);
    (**(code **)(*piVar1 + 0x44))(piVar1,param_3);
    *(int *)(iVar2 + 0x7ec + (int)this) = param_3;
  }
  if (param_4 != *(int *)(iVar2 + 0x7f0 + (int)this)) {
    piVar1 = *(int **)((int)this + iVar2 + 0x514);
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_4,0,0);
    *(int *)(iVar2 + 0x7f0 + (int)this) = param_4;
  }
  if (param_5 != *(int *)(iVar2 + 0x7f4 + (int)this)) {
    piVar1 = *(int **)((int)this + iVar2 + 0x514);
    (**(code **)(*piVar1 + 0x24))(piVar1,param_5,0,0);
    *(int *)(iVar2 + 0x7f4 + (int)this) = param_5;
  }
  if (*(int *)(iVar2 + 0x7f8 + (int)this) != 0) {
    piVar1 = *(int **)(iVar2 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x5c))(piVar1,0,0,0);
    *(undefined4 *)(iVar2 + 0x7f8 + (int)this) = 0;
  }
  return;
}

