/*
 * FUN_1000e2fc at 1000e2fc
 * char __thiscall FUN_1000e2fc(void * this, int * param_1)
 * Address ranges: 1000e2fc-1000e66e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1000e2fc(void *this,int *param_1)

{
  void *pvVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  undefined4 local_c;
  bool local_5;
  
  bVar2 = FUN_1000ee28((int)this);
  iVar3 = *(int *)((int)this + 0x40);
  local_10 = (int *)(*(uint *)((int)this + 0x30) & 3);
  iVar11 = *(int *)((int)this + 0x44);
  local_5 = local_10 != (int *)0x0;
  local_c = CONCAT31(extraout_var,bVar2);
  *(int *)((int)this + 0x54) = iVar3;
  *(int *)((int)this + 0x58) = iVar11;
  piVar5 = local_10;
  if (local_10 != (int *)0x0) {
    FUN_10006c2f(*(void **)((int)this + 0x18),&local_20);
    if (param_1 != (int *)0x0) {
      local_20 = *param_1;
      local_1c = param_1[1];
      local_18 = param_1[2];
      local_14 = param_1[3];
      iVar3 = *(int *)((int)this + 0x40);
      iVar11 = *(int *)((int)this + 0x44);
    }
    *(uint *)((int)this + 0x54) = (uint)(iVar3 * local_20) / local_1c;
    *(uint *)((int)this + 0x58) = (uint)(iVar11 * local_18) / local_14;
    piVar5 = local_10;
  }
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = 0;
  iVar3 = *(int *)((int)this + 0x34);
  piVar12 = *(int **)(*(int *)((int)this + 4) + 0x4c);
  local_10 = piVar12;
  if (iVar3 == 3) {
    FUN_1000ed88((int)this);
    uVar7 = (uint)*(ushort *)(*(int *)((int)this + 4) + 0xe) *
            *(int *)(*(int *)((int)this + 4) + 0x10);
    piVar5 = (int *)FUN_1000eeed(uVar7);
    *(int **)((int)this + 0x24) = piVar5;
    if (piVar5 != (int *)0x0) {
      FUN_100ada8e(piVar5,0,uVar7);
    }
    param_1._3_1_ = *(int *)((int)this + 0x24) != 0;
  }
  else {
    if (*(int *)(*(int *)((int)this + 4) + 0x50) == 0) {
      uVar9 = 0;
      if (iVar3 == 1) {
        uVar9 = 2;
      }
      else if (iVar3 == 2) {
        uVar9 = 1;
      }
      if (piVar5 == (int *)0x0) {
        uVar9 = (**(code **)(*piVar12 + 0x2c))
                          (*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44),
                           *(undefined4 *)((int)this + 0x50),1,local_c,uVar9);
        *(undefined4 *)(*(int *)((int)this + 4) + 0x50) = uVar9;
      }
      else {
        iVar3 = FUN_100030b6(piVar5,piVar5,*(int *)((int)this + 0x3c));
        if (((*(char *)(DAT_100ba2b4 + 0x958) == '\0') &&
            (uVar4 = FUN_10023b0b(*(uint *)((int)this + 0x40)), (char)uVar4 != '\0')) &&
           (uVar4 = FUN_10023b0b(*(uint *)((int)this + 0x44)), (char)uVar4 != '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        piVar12 = local_10;
        *(uint *)(*(int *)((int)this + 4) + 0xb8) =
             *(uint *)(*(int *)((int)this + 4) + 0xb8) & 0xfffffffe | uVar7;
        if ((*(byte *)(*(int *)((int)this + 4) + 0xb8) & 1) == 0) {
          *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x40);
          iVar3 = 1;
          if (*(int *)((int)this + 0x3c) != 0) {
            iVar3 = *(int *)((int)this + 0x3c);
          }
          *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x44);
        }
        piVar5 = (int *)(**(code **)(*local_10 + 0x28))
                                  (*(undefined4 *)((int)this + 0x54),
                                   *(undefined4 *)((int)this + 0x58),
                                   *(undefined4 *)((int)this + 0x40),
                                   *(undefined4 *)((int)this + 0x44),iVar3,
                                   *(undefined4 *)((int)this + 0x50),1,local_c,uVar9);
        *(int **)(*(int *)((int)this + 4) + 0x50) = piVar5;
        if ((piVar5 != (int *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
          (**(code **)(*piVar5 + 0x44))();
        }
      }
    }
    param_1._3_1_ = '\0';
    if (*(int *)(*(int *)((int)this + 4) + 0x50) != 0) {
      FUN_1000ed88((int)this);
      pvVar1 = *(void **)((int)this + 4);
      param_1._3_1_ = '\x01';
      if (((*(uint *)((int)pvVar1 + 0xb8) >> 10 & 1) != 0) && (*(int *)((int)this + 0x34) != 1)) {
        if ((*(int *)((int)this + 0x34) == 0) &&
           ((*(int *)(*(int *)((int)this + 0x18) + 0xb04) == 1 &&
            (*(int *)((int)pvVar1 + 0x20) == 0)))) {
          *(uint *)((int)pvVar1 + 0x34) = *(uint *)((int)pvVar1 + 0x34) | 0x10;
        }
        else {
          param_1._3_1_ = FUN_1002680b(pvVar1);
        }
      }
      if (*(int *)(*(int *)((int)this + 4) + 0x18) == 0) {
        bVar2 = (byte)*(undefined4 *)((int)this + 0x48);
        uVar7 = 1 << (bVar2 & 0x1f);
        if (uVar7 < *(uint *)((int)this + 0x40)) {
          uVar8 = *(uint *)((int)this + 0x40) >> (bVar2 & 0x1f);
        }
        else {
          uVar8 = 1;
        }
        if (uVar7 < *(uint *)((int)this + 0x44)) {
          uVar7 = *(uint *)((int)this + 0x44) >> (bVar2 & 0x1f);
        }
        else {
          uVar7 = 1;
        }
        (**(code **)(*piVar12 + 0x80))
                  (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x4c),
                   *(undefined4 *)(*(int *)((int)this + 4) + 0x50),0,0,0,
                   (float)((double)(int)uVar8 + (double)(&DAT_100b5ce0)[-((int)uVar8 >> 0x1f)]),
                   (float)((double)(int)uVar7 + (double)(&DAT_100b5ce0)[-((int)uVar7 >> 0x1f)]));
      }
      iVar3 = *(int *)((int)this + 4);
      if (*(char *)(iVar3 + 0x48) != '\0') {
        *(undefined4 *)(iVar3 + 0x38) = 0x102;
        *(undefined4 *)(iVar3 + 0x3c) = 3;
        *(undefined4 *)(iVar3 + 0x40) = 0x102;
        *(undefined4 *)(iVar3 + 0x44) = 4;
      }
    }
  }
  cVar6 = '\0';
  if (param_1._3_1_ != '\0') {
    local_3c[0] = *(undefined4 *)((int)this + 0x40);
    local_3c[1] = *(undefined4 *)((int)this + 0x44);
    local_3c[2] = *(undefined4 *)((int)this + 0x48);
    local_3c[3] = *(undefined4 *)((int)this + 0x4c);
    local_2c = 1;
    if (*(int *)((int)this + 0x3c) != 0) {
      local_2c = *(undefined4 *)((int)this + 0x3c);
    }
    local_28 = local_c;
    local_24 = local_5;
    if ((*(int *)((int)this + 0x50) == 0x19) || (local_23 = 0, *(int *)((int)this + 0x50) == 0x1a))
    {
      local_23 = 1;
    }
    local_22 = 0;
    puVar10 = local_3c;
    puVar13 = (undefined4 *)(*(int *)((int)this + 4) + 100);
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    (**(code **)(*local_10 + 0x20))(&local_20,*(undefined4 *)((int)this + 0x50));
    iVar3 = *(int *)((int)this + 4);
    *(uint *)(iVar3 + 0x80) = (uint)*(byte *)(iVar3 + 0x1e) << 3;
    *(int *)(iVar3 + 0x84) = local_20;
    *(uint *)(iVar3 + 0x88) = local_1c;
    *(int *)(iVar3 + 0x8c) = local_18;
    cVar6 = param_1._3_1_;
  }
  return cVar6;
}

