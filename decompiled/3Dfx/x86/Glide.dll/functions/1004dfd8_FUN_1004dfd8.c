/*
 * FUN_1004dfd8 at 1004dfd8
 * undefined __thiscall FUN_1004dfd8(void * this, int param_1)
 * Address ranges: 1004dfd8-1004e114
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004dfd8(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x1510;
  if (*(int *)(iVar2 + 0x19ec + (int)this) != 0) {
    piVar1 = *(int **)(iVar2 + 0x19f0 + (int)this);
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19e4 + (int)this);
    *(undefined4 *)(iVar2 + 0x19f0 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19f4 + (int)this);
    *(undefined4 *)(iVar2 + 0x19e4 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19e8 + (int)this);
    *(undefined4 *)(iVar2 + 0x19f4 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19ec + (int)this);
    *(undefined4 *)(iVar2 + 0x19e8 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19e0 + (int)this);
    *(undefined4 *)(iVar2 + 0x19ec + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a14 + (int)this);
    *(undefined4 *)(iVar2 + 0x19e0 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a0c + (int)this);
    *(undefined4 *)(iVar2 + 0x1a14 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a10 + (int)this);
    *(undefined4 *)(iVar2 + 0x1a0c + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a08 + (int)this);
    *(undefined4 *)(iVar2 + 0x1a10 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a04 + (int)this);
    *(undefined4 *)(iVar2 + 0x1a08 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x1a00 + (int)this);
    *(undefined4 *)(iVar2 + 0x1a04 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19fc + (int)this);
    *(undefined4 *)(iVar2 + 0x1a00 + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(iVar2 + 0x19f8 + (int)this);
    *(undefined4 *)(iVar2 + 0x19fc + (int)this) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(iVar2 + 0x19f8 + (int)this) = 0;
  }
  return;
}

