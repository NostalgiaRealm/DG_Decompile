/*
 * FUN_1004a26e at 1004a26e
 * undefined4 __thiscall FUN_1004a26e(void * this, int param_1)
 * Address ranges: 1004a26e-1004a2ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004a26e(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x1510;
  uVar2 = *(int *)(param_1 * 0x28 + 0x24 + (int)this) - 1;
  *(uint *)(param_1 * 0x28 + 0x24 + (int)this) = uVar2;
  if (uVar2 == 0) {
    piVar1 = *(int **)(iVar4 + 0x518 + (int)this);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar4 + 0x518 + (int)this) = 0;
    }
    piVar1 = *(int **)(iVar4 + 0x514 + (int)this);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar4 + 0x514 + (int)this) = 0;
    }
    piVar1 = *(int **)(iVar4 + 0x510 + (int)this);
    uVar3 = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar4 + 0x510 + (int)this) = 0;
    }
    uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

