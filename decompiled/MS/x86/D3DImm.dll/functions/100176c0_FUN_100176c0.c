/*
 * FUN_100176c0 at 100176c0
 * undefined4 __thiscall FUN_100176c0(void * this, byte param_1, byte param_2, int param_3)
 * Address ranges: 100176c0-10017814
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100176c0(void *this,byte param_1,byte param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_10 [3];
  
  piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
  uVar2 = (**(code **)(*piVar1 + 0x38))
                    (piVar1,*(undefined4 *)((int)this + 0x1d74),0,param_1 ^ 1 | 4,0,local_10);
  iVar4 = local_10[0];
  if (-1 < (int)uVar2) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x1d70),0,param_2 ^ 1 | 4,0,local_10);
    if (-1 < iVar3) {
      if (*(int *)((int)this + 0x4c) != *(int *)((int)this + 0x48)) {
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x4c) - *(int *)((int)this + 0x44);
      }
      *(int *)((int)this + 0x4c) = iVar4;
      *(int *)((int)this + 0x44) = iVar4;
      *(int *)((int)this + 100) = local_10[0];
      if (param_1 == 0) {
        iVar5 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
        uVar2 = *(uint *)((int)this + 0x58);
        *(int *)((int)this + 0x50) = iVar5;
        uVar6 = uVar2;
        if ((param_3 != 0) && (param_3 != *(int *)((int)this + 0x60))) {
          uVar6 = iVar5 * param_3;
          if (uVar6 < uVar2) {
            iVar3 = uVar2 - uVar6;
            *(int *)((int)this + 0x5c) = iVar3;
            uVar6 = uVar2;
          }
          else {
            *(undefined4 *)((int)this + 0x5c) = 0;
          }
        }
        iVar4 = iVar4 + uVar6;
        *(int *)((int)this + 0x4c) = iVar4;
      }
      else {
        *(undefined4 *)((int)this + 0x50) = 0;
        *(undefined4 *)((int)this + 0x5c) = 0;
        *(undefined4 *)((int)this + 0x58) = 0;
      }
      if (param_3 != 0) {
        *(int *)((int)this + 0x60) = param_3;
      }
      *(int *)((int)this + 0x48) = iVar4;
      *(undefined4 *)((int)this + 0x54) = 0;
      if (param_2 != 0) {
        *(undefined4 *)((int)this + 0x68) = 0;
        *(undefined4 *)((int)this + 0x6c) = 0;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      iVar4 = *(int *)((int)this + 0x68) + *(int *)((int)this + 0x6c);
      *(int *)((int)this + 0x68) = iVar4;
      *(undefined4 *)((int)this + 0x6c) = 0;
      local_10[0] = local_10[0] + iVar4 * 4;
      *(int *)((int)this + 100) = local_10[0];
      return CONCAT31((int3)((uint)local_10[0] >> 8),1);
    }
    piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
    uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d74),0);
  }
  return uVar2 & 0xffffff00;
}

