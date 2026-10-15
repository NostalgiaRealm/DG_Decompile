/*
 * FUN_1002b5f6 at 1002b5f6
 * undefined4 __thiscall FUN_1002b5f6(void * this, byte param_1, byte param_2)
 * Address ranges: 1002b5f6-1002b690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002b5f6(void *this,byte param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10 [3];
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 4);
  uVar3 = (**(code **)(*piVar1 + 0x38))
                    (piVar1,*(undefined4 *)((int)this + 0x54),0,param_1 ^ 1 | 4,0,local_10);
  iVar2 = local_10[0];
  if (-1 < (int)uVar3) {
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 4);
    iVar4 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x58),0,param_2 ^ 1 | 4,0,local_10);
    if (-1 < iVar4) {
      uVar5 = FUN_1002c6f1(this,iVar2,local_10[0],param_1,param_2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 4);
    uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x54),0);
  }
  return uVar3 & 0xffffff00;
}

