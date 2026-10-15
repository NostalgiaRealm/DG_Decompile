/*
 * FUN_100b52b7 at 100b52b7
 * undefined __thiscall FUN_100b52b7(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100b52b7-100b5312
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b52b7(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x1510;
  if (((param_2 != *(int *)(iVar2 + 0x7c4 + (int)this)) ||
      (param_3 != *(int *)(iVar2 + 0x7c8 + (int)this))) ||
     (*(int *)(iVar2 + 0x7cc + (int)this) != 0)) {
    *(int *)(iVar2 + 0x7c4 + (int)this) = param_2;
    *(int *)(iVar2 + 0x7c8 + (int)this) = param_3;
    *(undefined4 *)(iVar2 + 0x7cc + (int)this) = 0;
    piVar1 = *(int **)(iVar2 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x4c))(piVar1,param_2,param_3,0);
  }
  return;
}

