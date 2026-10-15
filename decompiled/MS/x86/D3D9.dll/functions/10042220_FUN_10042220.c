/*
 * FUN_10042220 at 10042220
 * uint __thiscall FUN_10042220(void * this, byte param_1, byte param_2, uint param_3)
 * Address ranges: 10042220-10042521
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10042220(void *this,byte param_1,byte param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      if ((param_1 != 0 || param_2 != 0) ||
         ((param_3 != 0 && (param_3 != *(uint *)((int)this + 0x60))))) {
        if (*(int *)(*(int *)((int)this + 0xf6d0) + 0x2c) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0xf6d0) + 0x2c) = 0;
        }
        if (*(int *)(*(int *)((int)this + 0xf6d4) + 0x2c) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0xf6d4) + 0x2c) = 0;
        }
        param_3 = FUN_100420d0(this,param_1,param_2,param_3);
      }
      return param_3 & 0xffffff00;
    }
    if (*(int *)(*(int *)((int)this + 0xf6d0) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xf6d0) + 0x2c) = 0;
    }
    if (*(int *)(*(int *)((int)this + 0xf6d4) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xf6d4) + 0x2c) = 0;
    }
    piVar6 = (int *)(*(int *)((int)this + 0xf6d4) + 0x30);
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    *(byte *)((int)this + 0xf66f) =
         *(byte *)((int)this + 0xf66f) | *(int *)(*(int *)((int)this + 0xf6d4) + 0x58) != 0;
    *(undefined4 *)(*(int *)((int)this + 0xf6d4) + 0x58) = 0;
    bVar5 = FUN_1003fdb0(this);
    if (bVar5 == 0) goto LAB_10042486;
    iVar7 = 0x50;
    if (*(int *)((int)this + 0xfbd0) != *(int *)((int)this + 0xf6d4)) {
      iVar7 = 0x70;
    }
    uVar1 = *(undefined4 *)(iVar7 + (int)this);
    uVar2 = *(undefined4 *)((int)this + 0x54);
    iVar7 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    iVar8 = *(int *)(iVar7 + 0x8ec);
    if (iVar8 != 0) {
      uVar3 = *(undefined4 *)(iVar7 + 0x8e8);
      FUN_100ba94f(iVar7);
      (**(code **)(**(int **)(iVar7 + 0x638) + 0x68))(*(int **)(iVar7 + 0x638),iVar8,uVar3);
      *(undefined4 *)(iVar7 + 0x8ec) = 0;
    }
    FUN_100ba94f(iVar7);
    (**(code **)(**(int **)(iVar7 + 0x638) + 0x30))(*(int **)(iVar7 + 0x638),uVar2,1,uVar1,0);
  }
  else {
    if (*(int *)(*(int *)((int)this + 0xf6d0) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xf6d0) + 0x2c) = 0;
    }
    if (*(int *)(*(int *)((int)this + 0xf6d4) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xf6d4) + 0x2c) = 0;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      piVar6 = (int *)(*(int *)((int)this + 0xf6d4) + 0x30);
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      *(byte *)((int)this + 0xf66f) =
           *(byte *)((int)this + 0xf66f) | *(int *)(*(int *)((int)this + 0xf6d4) + 0x58) != 0;
      *(undefined4 *)(*(int *)((int)this + 0xf6d4) + 0x58) = 0;
    }
    piVar6 = (int *)(*(int *)((int)this + 0xf6d0) + 0x30);
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    bVar5 = FUN_1003fdb0(this);
    if (bVar5 == 0) goto LAB_10042486;
    iVar7 = 0x50;
    if (*(int *)((int)this + 0xfbd0) != *(int *)((int)this + 0xf6d4)) {
      iVar7 = 0x70;
    }
    uVar1 = *(undefined4 *)(iVar7 + (int)this);
    uVar2 = *(undefined4 *)((int)this + 0x68);
    uVar3 = *(undefined4 *)((int)this + 0x6c);
    iVar7 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    iVar8 = *(int *)(iVar7 + 0x8ec);
    if (iVar8 != 0) {
      uVar4 = *(undefined4 *)(iVar7 + 0x8e8);
      FUN_100ba94f(iVar7);
      (**(code **)(**(int **)(iVar7 + 0x638) + 0x68))(*(int **)(iVar7 + 0x638),iVar8,uVar4);
      *(undefined4 *)(iVar7 + 0x8ec) = 0;
    }
    FUN_100ba94f(iVar7);
    (**(code **)(**(int **)(iVar7 + 0x638) + 0x34))(*(int **)(iVar7 + 0x638),uVar3,1,uVar2,uVar1,0);
  }
  iVar8 = 1;
  if (*(char *)(iVar7 + 0x620) != '\0') {
    iVar8 = 8;
  }
  iVar8 = *(int *)(iVar7 + 0x624) + iVar8;
  *(int *)(iVar7 + 0x624) = iVar8;
  *(undefined1 *)(iVar7 + 0x620) = 0;
  if (((*(int *)(iVar7 + 0x630) <= iVar8) && (*(int *)(iVar7 + 0x8e0) != 0)) &&
     (*(int *)(iVar7 + 0x634) == 0)) {
    FUN_100bad40((void *)(iVar7 + 4),'\0');
  }
LAB_10042486:
  iVar7 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
  piVar6 = (int *)(iVar7 + 0x634);
  *piVar6 = *piVar6 + -1;
  if ((*piVar6 == 0) && (*(int *)(iVar7 + 0x630) <= *(int *)(iVar7 + 0x624))) {
    FUN_100bad40((void *)(iVar7 + 4),'\0');
  }
  FUN_100420d0(this,param_1,param_2,param_3);
  puVar9 = (undefined4 *)((int)this + 0x20);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  return 0;
}

