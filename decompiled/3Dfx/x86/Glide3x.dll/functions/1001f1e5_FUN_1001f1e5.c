/*
 * FUN_1001f1e5 at 1001f1e5
 * undefined4 __thiscall FUN_1001f1e5(void * this, byte param_1, byte param_2)
 * Address ranges: 1001f1e5-1001f291
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001f1e5(void *this,byte param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10 [3];
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3308) + 4);
  uVar3 = (**(code **)(*piVar1 + 0x38))
                    (piVar1,*(undefined4 *)((int)this + 0x208),0,param_1 ^ 1 | 4,0,local_10);
  iVar2 = local_10[0];
  if (-1 < (int)uVar3) {
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3308) + 4);
    iVar4 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x20c),0,param_2 ^ 1 | 4,0,local_10);
    if (-1 < iVar4) {
      uVar5 = FUN_1000ebd3(this,iVar2,local_10[0],param_1,param_2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3308) + 4);
    uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x208),0);
  }
  return uVar3 & 0xffffff00;
}

