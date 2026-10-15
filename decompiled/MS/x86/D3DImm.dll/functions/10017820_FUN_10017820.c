/*
 * FUN_10017820 at 10017820
 * uint __thiscall FUN_10017820(void * this, byte param_1, byte param_2, int param_3)
 * Address ranges: 10017820-100179d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10017820(void *this,byte param_1,byte param_2,int param_3)

{
  int *piVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar2 = FUN_100151d0(this);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d74),0);
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d70),0);
      iVar4 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      if (*(int *)((int)this + 0x1ef8) != *(int *)((int)this + 0x1d74)) {
        iVar4 = 0x70;
      }
      (**(code **)(*piVar1 + 0x30))
                (piVar1,*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x68),
                 *(undefined4 *)(iVar4 + (int)this));
      FUN_100176c0(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1d50) + 0x4a0));
    puVar5 = (undefined4 *)((int)this + 0x20);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = FUN_100151d0(this);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d74),0);
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d70),0);
      iVar4 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
      if (*(int *)((int)this + 0x1ef8) != *(int *)((int)this + 0x1d74)) {
        iVar4 = 0x70;
      }
      (**(code **)(*piVar1 + 0x34))
                (piVar1,*(undefined4 *)((int)this + 0x54),*(undefined4 *)(iVar4 + (int)this));
      FUN_100176c0(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1d50) + 0x4a0));
    puVar5 = (undefined4 *)((int)this + 0x20);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),param_1 | param_2);
  if (((param_1 | param_2) != 0) || ((param_3 != 0 && (param_3 != *(int *)((int)this + 0x60))))) {
    piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d74),0);
    piVar1 = *(int **)(*(int *)((int)this + 0x1d54) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x1d70),0);
    uVar3 = FUN_100176c0(this,param_1,param_2,param_3);
  }
  return uVar3 & 0xffffff00;
}

