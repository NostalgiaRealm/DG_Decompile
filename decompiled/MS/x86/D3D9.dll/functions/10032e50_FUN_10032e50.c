/*
 * FUN_10032e50 at 10032e50
 * uint __thiscall FUN_10032e50(void * this, byte param_1, byte param_2, int param_3)
 * Address ranges: 10032e50-10033005
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10032e50(void *this,byte param_1,byte param_2,int param_3)

{
  int *piVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar2 = FUN_1002fb10(this);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d4),0);
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d0),0);
      iVar3 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      if (*(int *)((int)this + 0xf9d8) != *(int *)((int)this + 0xf6d4)) {
        iVar3 = 0x70;
      }
      (**(code **)(*piVar1 + 0x30))
                (piVar1,*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x68),
                 *(undefined4 *)(iVar3 + (int)this));
      FUN_10032cf0(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xf6b0) + 0x4a0));
    puVar4 = (undefined4 *)((int)this + 0x20);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = FUN_1002fb10(this);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d4),0);
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d0),0);
      iVar3 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
      if (*(int *)((int)this + 0xf9d8) != *(int *)((int)this + 0xf6d4)) {
        iVar3 = 0x70;
      }
      (**(code **)(*piVar1 + 0x34))
                (piVar1,*(undefined4 *)((int)this + 0x54),*(undefined4 *)(iVar3 + (int)this));
      FUN_10032cf0(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xf6b0) + 0x4a0));
    puVar4 = (undefined4 *)((int)this + 0x20);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),param_1 | param_2);
  if (((param_1 | param_2) != 0) || ((param_3 != 0 && (param_3 != *(int *)((int)this + 0x60))))) {
    piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d4),0);
    piVar1 = *(int **)(*(int *)((int)this + 0xf6b4) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xf6d0),0);
    uVar2 = FUN_10032cf0(this,param_1,param_2,param_3);
  }
  return uVar2 & 0xffffff00;
}

