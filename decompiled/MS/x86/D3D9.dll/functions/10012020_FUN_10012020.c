/*
 * FUN_10012020 at 10012020
 * char __thiscall FUN_10012020(void * this, int * param_1)
 * Address ranges: 10012020-100123f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10012020(void *this,int *param_1)

{
  void *pvVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  undefined4 uVar8;
  int extraout_EDX;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  undefined1 local_5;
  
  bVar2 = FUN_10012bd2((int)this);
  local_10 = CONCAT31(extraout_var,bVar2);
  iVar3 = *(int *)((int)this + 0x40);
  local_c = (int *)(*(uint *)((int)this + 0x30) & 3);
  local_5 = local_c != (int *)0x0;
  iVar12 = *(int *)((int)this + 0x44);
  *(int *)((int)this + 0x54) = iVar3;
  *(int *)((int)this + 0x58) = iVar12;
  if (local_c != (int *)0x0) {
    FUN_10007601(*(void **)((int)this + 0x18),&local_24);
    if (param_1 != (int *)0x0) {
      local_24 = *param_1;
      local_20 = param_1[1];
      local_1c = param_1[2];
      local_18 = param_1[3];
      iVar3 = *(int *)((int)this + 0x40);
      iVar12 = *(int *)((int)this + 0x44);
    }
    *(uint *)((int)this + 0x54) = (uint)(iVar3 * local_24) / local_20;
    *(uint *)((int)this + 0x58) = (uint)(iVar12 * local_1c) / local_18;
  }
  iVar3 = FUN_10012c02((int)this);
  if ((((((char)iVar3 == '\0') && (*(int *)((int)this + 0x28) != 0x15)) &&
       (*(int *)((int)this + 0x28) != 0x19)) && (*(int *)((int)this + 0x28) != 0x20)) ||
     (*(int *)((int)this + 0x34) == 1)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0xffffffff;
  }
  piVar6 = (int *)((int)this + 0x34);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = uVar8;
  local_c = *(int **)(*(int *)((int)this + 4) + 0x4c);
  iVar3 = *piVar6;
  if (iVar3 == 3) {
    FUN_10012b5a((int)this);
    uVar9 = (uint)*(ushort *)(*(int *)((int)this + 4) + 0xe) *
            *(int *)(*(int *)((int)this + 4) + 0x10);
    piVar6 = (int *)FUN_10012cb6(uVar9);
    *(int **)((int)this + 0x24) = piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_100cfed0(piVar6,0,uVar9);
    }
    param_1._3_1_ = *(int *)((int)this + 0x24) != 0;
  }
  else {
    if (*(int *)(*(int *)((int)this + 4) + 0x50) == 0) {
      uVar8 = 0;
      if (iVar3 == 1) {
        uVar8 = 2;
      }
      else if (iVar3 == 2) {
        uVar8 = 1;
      }
      if (extraout_EDX == 0) {
        uVar8 = (**(code **)(*local_c + 0x2c))
                          (*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44),
                           *(undefined4 *)((int)this + 0x50),1,local_10,uVar8);
        *(undefined4 *)(*(int *)((int)this + 4) + 0x50) = uVar8;
      }
      else {
        local_14 = FUN_100034a4(*(int *)(*(int *)((int)this + 0x18) + 0xdf0),
                                *(int *)(*(int *)((int)this + 0x18) + 0xdc8),
                                *(int *)((int)this + 0x38),*(int *)((int)this + 0x3c));
        if (((*(char *)(DAT_100dea74 + 0x958) == '\0') &&
            (uVar4 = FUN_1002b17d(*(uint *)((int)this + 0x40)), (char)uVar4 != '\0')) &&
           (uVar4 = FUN_1002b17d(*(uint *)((int)this + 0x44)), (char)uVar4 != '\0')) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        *(uint *)(*(int *)((int)this + 4) + 0xb8) =
             *(uint *)(*(int *)((int)this + 4) + 0xb8) & 0xfffffffe | uVar9;
        iVar3 = local_14;
        if ((*(byte *)(*(int *)((int)this + 4) + 0xb8) & 1) == 0) {
          *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x40);
          *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x44);
          iVar3 = 1;
          if (*(int *)((int)this + 0x38) != 0) {
            iVar3 = *(int *)((int)this + 0x38);
          }
        }
        piVar5 = (int *)(**(code **)(*local_c + 0x28))
                                  (*(undefined4 *)((int)this + 0x54),
                                   *(undefined4 *)((int)this + 0x58),
                                   *(undefined4 *)((int)this + 0x40),
                                   *(undefined4 *)((int)this + 0x44),iVar3,
                                   *(undefined4 *)((int)this + 0x50),1,local_10,uVar8);
        *(int **)(*(int *)((int)this + 4) + 0x50) = piVar5;
        if ((piVar5 != (int *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
          (**(code **)(*piVar5 + 0x44))();
        }
      }
    }
    param_1._3_1_ = '\0';
    if (*(int *)(*(int *)((int)this + 4) + 0x50) != 0) {
      FUN_10012b5a((int)this);
      pvVar1 = *(void **)((int)this + 4);
      param_1._3_1_ = '\x01';
      if (((*(uint *)((int)pvVar1 + 0xb8) >> 10 & 1) != 0) && (*piVar6 != 1)) {
        if ((*piVar6 == 0) &&
           ((*(int *)(*(int *)((int)this + 0x18) + 0xdc8) == 1 &&
            (*(int *)((int)pvVar1 + 0x20) == 0)))) {
          *(uint *)((int)pvVar1 + 0x34) = *(uint *)((int)pvVar1 + 0x34) | 0x10;
        }
        else {
          param_1._3_1_ = FUN_1002e06e(pvVar1);
        }
      }
      if (((((*(uint *)((int)this + 0x30) & 0x400) == 0) || (*(int *)((int)this + 0x48) == 0)) &&
          (*(int *)(*(int *)((int)this + 4) + 0x18) == 0)) && (*(int *)((int)this + 0x28) != 0x51))
      {
        bVar2 = (byte)*(undefined4 *)((int)this + 0x48);
        uVar9 = 1 << (bVar2 & 0x1f);
        if (uVar9 < *(uint *)((int)this + 0x40)) {
          uVar10 = *(uint *)((int)this + 0x40) >> (bVar2 & 0x1f);
        }
        else {
          uVar10 = 1;
        }
        if (uVar9 < *(uint *)((int)this + 0x44)) {
          uVar9 = *(uint *)((int)this + 0x44) >> (bVar2 & 0x1f);
        }
        else {
          uVar9 = 1;
        }
        (**(code **)(*local_c + 0x80))
                  (*(undefined4 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x4c),
                   *(undefined4 *)(*(int *)((int)this + 4) + 0x50),0,0,0,
                   (float)((double)(int)uVar10 + (double)(&DAT_100d97a0)[-((int)uVar10 >> 0x1f)]),
                   (float)((double)(int)uVar9 + (double)(&DAT_100d97a0)[-((int)uVar9 >> 0x1f)]));
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
  cVar7 = '\0';
  if (param_1._3_1_ != '\0') {
    local_40[0] = *(undefined4 *)((int)this + 0x40);
    local_40[1] = *(undefined4 *)((int)this + 0x44);
    local_40[2] = *(undefined4 *)((int)this + 0x48);
    local_40[3] = *(undefined4 *)((int)this + 0x4c);
    local_30 = 1;
    if (*(int *)((int)this + 0x38) != 0) {
      local_30 = *(undefined4 *)((int)this + 0x38);
    }
    local_2c = local_10;
    local_28 = local_5;
    iVar3 = *(int *)((int)this + 0x50);
    if (((iVar3 == 0x28) || (iVar3 == 0x29)) || ((iVar3 == 0x24 || (local_27 = 0, iVar3 == 0x25))))
    {
      local_27 = 1;
    }
    local_26 = 0;
    puVar11 = local_40;
    puVar13 = (undefined4 *)(*(int *)((int)this + 4) + 100);
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    (**(code **)(*local_c + 0x20))(&local_24,*(undefined4 *)((int)this + 0x50));
    iVar3 = *(int *)((int)this + 4);
    *(uint *)(iVar3 + 0x80) = (uint)*(byte *)(iVar3 + 0x1e) << 3;
    *(int *)(iVar3 + 0x84) = local_24;
    *(uint *)(iVar3 + 0x88) = local_20;
    *(int *)(iVar3 + 0x8c) = local_1c;
    cVar7 = param_1._3_1_;
  }
  return cVar7;
}

