/*
 * FUN_100a4431 at 100a4431
 * undefined4 __thiscall FUN_100a4431(void * this, int param_1, int param_2)
 * Address ranges: 100a4431-100a4766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __thiscall FUN_100a4431(void *this,int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uStack_258;
  int *piVar10;
  undefined8 uStack_234;
  undefined4 uStack_22c;
  int *piVar11;
  int iVar12;
  undefined8 uStack_1f4;
  int *piStack_1ec;
  int *piStack_1e8;
  uint *puStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  undefined *puStack_1d8;
  uint *puStack_1d4;
  int iStack_1b8;
  undefined4 *local_1b4;
  undefined4 uStack_cc;
  uint *puStack_58;
  int iStack_54;
  
  puVar9 = (undefined4 *)(param_1 * 0x28);
  puVar8 = (uint *)(param_1 * 0x18 + 0x520 + (int)this);
  iVar3 = *(int *)((int)(puVar9 + 9) + (int)this) + 1;
  *(int *)((int)(puVar9 + 9) + (int)this) = iVar3;
  if (iVar3 != 1) goto LAB_100a475c;
  puStack_1d8 = &DAT_100b57f8;
  iStack_1dc = param_2;
  iStack_1e0 = *(undefined4 *)((int)(puVar9 + 6) + (int)this);
  puStack_1e4 = (uint *)0x100a4488;
  puStack_1d4 = puVar8;
  local_1b4 = puVar9;
  uVar4 = (**(code **)((int)this + 700))();
  if (-1 < (int)uVar4) {
    piStack_1ec = *(int **)((int)(puVar9 + 6) + (int)this);
    puStack_1e4 = puVar8 + 1;
    piStack_1e8 = (int *)&DAT_100af410;
    uStack_1f4 = CONCAT44(0x100a44a2,(int *)uStack_1f4);
    (**(code **)*piStack_1ec)();
    *(undefined1 *)((int)puVar8 + 0x15) = 0;
    uStack_1f4 = CONCAT44(&iStack_1dc,&DAT_100af400);
    iStack_1dc = 0;
    (**(code **)**(undefined4 **)((int)this + 0x2c0))();
    iStack_1e0 = 0;
    iVar3 = (**(code **)(*piStack_1e8 + 0x6c))();
    if (-1 < iVar3) {
      (**(code **)(*piStack_1ec + 0x20))();
      (**(code **)(*(int *)*puVar8 + 0xac))();
      if ((puStack_1e4 == puStack_58) && (iStack_1e0 == iStack_54)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)((int)puVar8 + 0x15) = uVar1;
      (**(code **)(iStack_1e0 + 8))();
    }
    (**(code **)(*(int *)uStack_1f4 + 8))();
    (**(code **)(*(int *)*puVar8 + 0x1c))();
    (**(code **)(*(int *)*puVar8 + 0x34))();
    _uStack_22c = CONCAT44(&iStack_1b8,0x100a456d);
    FUN_100ada8e(&iStack_1b8,0,0x3c);
    piVar11 = &iStack_1b8;
    iVar12 = 0x3c;
    _uStack_22c = ZEXT48((int *)*puVar8);
    uStack_234 = CONCAT44(0x100a4581,(undefined4)uStack_234);
    (**(code **)(*(int *)*puVar8 + 0x34))();
    uStack_234 = CONCAT44(8,&uStack_1f4);
    uStack_1f4 = 0;
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x12);
    piStack_1ec = (int *)0x0;
    piStack_1e8 = (int *)0x0;
    puStack_1e4 = (uint *)0x0;
    iStack_1e0 = 0;
    iStack_1dc = 0;
    piVar10 = (int *)*puVar8;
    (**(code **)(*piVar10 + 0x34))(piVar10,0x15,&piStack_1ec);
    puVar9 = &uStack_22c;
    _uStack_22c = 0;
    (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8);
    uStack_234 = 0;
    iVar5 = (**(code **)(*(int *)*puVar8 + 0x34))((int *)*puVar8,0x2d,&uStack_234,8);
    iVar3 = 0x14;
    if (iVar5 < 0) {
      iVar3 = 0;
    }
    if ((piVar11 == (int *)0x0) || (iVar12 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(puVar8 + 4) = uVar1;
    *(bool *)((int)puVar8 + 0x11) = (int *)uStack_1f4 != (int *)0x0;
    *(bool *)((int)puVar8 + 0x12) = 0 < uStack_234._4_4_;
    puVar8[3] = (uint)&stack0xfffffe34;
    *(bool *)((int)puVar8 + 0x13) = 0xbfff < param_2 && piVar10 != (int *)0x0;
    *(bool *)(puVar8 + 5) = iVar3 != 0;
    puVar6 = (undefined4 *)((int)this + 0x18ac);
    cVar2 = FUN_100ac170(puVar6);
    if (cVar2 != '\0') {
      uVar4 = FUN_100a3d7b(this,param_1);
      if ((char)uVar4 != '\0') {
        if ((*(int *)((int)this + 0x2b8) == 0) ||
           (uVar7 = FUN_100a1c4c(FUN_100a1e17), (char)uVar7 == '\0')) {
          *(undefined4 *)((int)this + 0x38) = 0;
          *(undefined4 *)((int)this + 0x3c) = 0;
        }
        (**(code **)(**(int **)((int)this + 0x20) + 0x20))
                  (*(int **)((int)this + 0x20),&stack0xfffffe34);
        *(undefined4 *)((int)this + 0x6f0) = uStack_cc;
        *(int *)((int)this + 0x6ec) = param_2;
        iVar3 = CONCAT31((int3)((uint)param_2 >> 8),1);
        uStack_258 = 0;
        if (*(int *)((int)this + 0x518) == 0) {
LAB_100a475c:
          return CONCAT31((int3)((uint)iVar3 >> 8),1);
        }
        do {
          if ((char)iVar3 == '\0') goto LAB_100a4729;
          iVar3 = (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uStack_258 * 4) + 8))
                            (param_1);
          uStack_258 = uStack_258 + 1;
        } while (uStack_258 < *(uint *)((int)this + 0x518));
        if ((char)iVar3 != '\0') goto LAB_100a475c;
LAB_100a4729:
        FUN_100a4260(this,param_1);
        FUN_100a4341(this,param_1);
      }
      FUN_100ac5a0((int)puVar6);
    }
    uVar4 = (**(code **)(*(int *)*puVar8 + 8))((int *)*puVar8);
    *puVar8 = 0;
  }
  *(int *)((int)(puVar9 + 9) + (int)this) = *(int *)((int)(puVar9 + 9) + (int)this) + -1;
  return uVar4 & 0xffffff00;
}

