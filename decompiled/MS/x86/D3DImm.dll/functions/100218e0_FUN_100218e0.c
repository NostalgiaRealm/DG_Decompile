/*
 * FUN_100218e0 at 100218e0
 * uint __thiscall FUN_100218e0(void * this, byte param_1, byte param_2, uint param_3)
 * Address ranges: 100218e0-10021d1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100218e0(void *this,byte param_1,byte param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      if ((param_1 != 0 || param_2 != 0) ||
         ((param_3 != 0 && (param_3 != *(uint *)((int)this + 0x60))))) {
        if (*(int *)(*(int *)((int)this + 0x1d6c) + 0x2c) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x1d6c) + 0x2c) = 0;
        }
        if (*(int *)(*(int *)((int)this + 0x1d70) + 0x2c) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x1d70) + 0x2c) = 0;
        }
        param_3 = FUN_10021790(this,param_1,param_2,param_3);
      }
      return param_3 & 0xffffff00;
    }
    if (*(int *)(*(int *)((int)this + 0x1d6c) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x1d6c) + 0x2c) = 0;
    }
    if (*(int *)(*(int *)((int)this + 0x1d70) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x1d70) + 0x2c) = 0;
    }
    piVar7 = (int *)(*(int *)((int)this + 0x1d70) + 0x30);
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    *(byte *)((int)this + 0x1d3f) =
         *(byte *)((int)this + 0x1d3f) | *(int *)(*(int *)((int)this + 0x1d70) + 0x58) != 0;
    *(undefined4 *)(*(int *)((int)this + 0x1d70) + 0x58) = 0;
    bVar6 = FUN_1001fc20(this);
    if (bVar6 != 0) {
      iVar8 = 0x50;
      if (*(int *)((int)this + 0x2024) != *(int *)((int)this + 0x1d70)) {
        iVar8 = 0x70;
      }
      uVar1 = *(undefined4 *)(iVar8 + (int)this);
      uVar2 = *(undefined4 *)((int)this + 0x54);
      iVar8 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      iVar9 = *(int *)(iVar8 + 0x8ec);
      if (iVar9 != 0) {
        iVar4 = *(int *)(iVar8 + 0x628);
        uVar3 = *(undefined4 *)(iVar8 + 0x8e8);
        *(int *)(iVar8 + 0x628) = iVar4 + 1;
        if (((iVar4 == 0) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
           (uVar10 = 0, *(int *)(iVar8 + 0x958) != 0)) {
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar8 + 0x954) + uVar10 * 4))();
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(iVar8 + 0x958));
        }
        (**(code **)(**(int **)(iVar8 + 0x638) + 0x68))(*(int **)(iVar8 + 0x638),iVar9,uVar3);
        *(undefined4 *)(iVar8 + 0x8ec) = 0;
      }
      iVar9 = *(int *)(iVar8 + 0x628);
      *(int *)(iVar8 + 0x628) = iVar9 + 1;
      if (((iVar9 == 0) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
         (uVar10 = 0, *(int *)(iVar8 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar8 + 0x954) + uVar10 * 4))();
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar8 + 0x958));
      }
      (**(code **)(**(int **)(iVar8 + 0x638) + 0x30))(*(int **)(iVar8 + 0x638),uVar2,1,uVar1,0);
      iVar9 = 1;
      if (*(char *)(iVar8 + 0x620) != '\0') {
        iVar9 = 8;
      }
      *(undefined1 *)(iVar8 + 0x620) = 0;
      iVar9 = *(int *)(iVar8 + 0x624) + iVar9;
      *(int *)(iVar8 + 0x624) = iVar9;
      if (((*(int *)(iVar8 + 0x630) <= iVar9) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
         (*(int *)(iVar8 + 0x634) == 0)) {
        FUN_10052215((void *)(iVar8 + 4),'\0');
      }
    }
  }
  else {
    if (*(int *)(*(int *)((int)this + 0x1d6c) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x1d6c) + 0x2c) = 0;
    }
    if (*(int *)(*(int *)((int)this + 0x1d70) + 0x2c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x1d70) + 0x2c) = 0;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      piVar7 = (int *)(*(int *)((int)this + 0x1d70) + 0x30);
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      *(byte *)((int)this + 0x1d3f) =
           *(byte *)((int)this + 0x1d3f) | *(int *)(*(int *)((int)this + 0x1d70) + 0x58) != 0;
      *(undefined4 *)(*(int *)((int)this + 0x1d70) + 0x58) = 0;
    }
    piVar7 = (int *)(*(int *)((int)this + 0x1d6c) + 0x30);
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    bVar6 = FUN_1001fc20(this);
    if (bVar6 != 0) {
      iVar8 = 0x50;
      if (*(int *)((int)this + 0x2024) != *(int *)((int)this + 0x1d70)) {
        iVar8 = 0x70;
      }
      uVar1 = *(undefined4 *)(iVar8 + (int)this);
      uVar2 = *(undefined4 *)((int)this + 0x68);
      uVar3 = *(undefined4 *)((int)this + 0x6c);
      iVar8 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      iVar9 = *(int *)(iVar8 + 0x8ec);
      if (iVar9 != 0) {
        iVar4 = *(int *)(iVar8 + 0x628);
        uVar5 = *(undefined4 *)(iVar8 + 0x8e8);
        *(int *)(iVar8 + 0x628) = iVar4 + 1;
        if (((iVar4 == 0) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
           (uVar10 = 0, *(int *)(iVar8 + 0x958) != 0)) {
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar8 + 0x954) + uVar10 * 4))();
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(iVar8 + 0x958));
        }
        (**(code **)(**(int **)(iVar8 + 0x638) + 0x68))(*(int **)(iVar8 + 0x638),iVar9,uVar5);
        *(undefined4 *)(iVar8 + 0x8ec) = 0;
      }
      iVar9 = *(int *)(iVar8 + 0x628);
      *(int *)(iVar8 + 0x628) = iVar9 + 1;
      if (((iVar9 == 0) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
         (uVar10 = 0, *(int *)(iVar8 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar8 + 0x954) + uVar10 * 4))();
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar8 + 0x958));
      }
      (**(code **)(**(int **)(iVar8 + 0x638) + 0x34))
                (*(int **)(iVar8 + 0x638),uVar3,1,uVar2,uVar1,0);
      iVar9 = 1;
      if (*(char *)(iVar8 + 0x620) != '\0') {
        iVar9 = 8;
      }
      *(undefined1 *)(iVar8 + 0x620) = 0;
      iVar9 = *(int *)(iVar8 + 0x624) + iVar9;
      *(int *)(iVar8 + 0x624) = iVar9;
      if (((*(int *)(iVar8 + 0x630) <= iVar9) && (*(int *)(iVar8 + 0x8e0) != 0)) &&
         (*(int *)(iVar8 + 0x634) == 0)) {
        FUN_10052215((void *)(iVar8 + 4),'\0');
      }
    }
  }
  iVar8 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
  piVar7 = (int *)(iVar8 + 0x634);
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (*(int *)(iVar8 + 0x630) <= *(int *)(iVar8 + 0x624))) {
    FUN_10052215((void *)(iVar8 + 4),'\0');
  }
  FUN_10021790(this,param_1,param_2,param_3);
  puVar11 = (undefined4 *)((int)this + 0x20);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  return 0;
}

