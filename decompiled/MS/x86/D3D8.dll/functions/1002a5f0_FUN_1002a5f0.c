/*
 * FUN_1002a5f0 at 1002a5f0
 * uint __thiscall FUN_1002a5f0(void * this, byte param_1, byte param_2, int param_3)
 * Address ranges: 1002a5f0-1002a7a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002a5f0(void *this,byte param_1,byte param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    bVar2 = FUN_10027eb0((int)this);
    if (bVar2 != 0) {
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d4),0);
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d0),0);
      iVar4 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      if (*(int *)((int)this + 0xdb8c) != *(int *)((int)this + 0xd9d4)) {
        iVar4 = 0x70;
      }
      (**(code **)(*piVar1 + 0x30))
                (piVar1,*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x68),
                 *(undefined4 *)(iVar4 + (int)this));
      FUN_1002a490(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xd9b0) + 0x4a0));
    puVar5 = (undefined4 *)((int)this + 0x20);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    bVar2 = FUN_10027eb0((int)this);
    if (bVar2 != 0) {
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d4),0);
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d0),0);
      iVar4 = 0x50;
      piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
      if (*(int *)((int)this + 0xdb8c) != *(int *)((int)this + 0xd9d4)) {
        iVar4 = 0x70;
      }
      (**(code **)(*piVar1 + 0x34))
                (piVar1,*(undefined4 *)((int)this + 0x54),*(undefined4 *)(iVar4 + (int)this));
      FUN_1002a490(this,param_1,param_2,param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xd9b0) + 0x4a0));
    puVar5 = (undefined4 *)((int)this + 0x20);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),param_1 | param_2);
  if (((param_1 | param_2) != 0) || ((param_3 != 0 && (param_3 != *(int *)((int)this + 0x60))))) {
    piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d4),0);
    piVar1 = *(int **)(*(int *)((int)this + 0xd9b4) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0xd9d0),0);
    uVar3 = FUN_1002a490(this,param_1,param_2,param_3);
  }
  return uVar3 & 0xffffff00;
}

