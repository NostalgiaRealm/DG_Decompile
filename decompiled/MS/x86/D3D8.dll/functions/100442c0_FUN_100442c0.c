/*
 * FUN_100442c0 at 100442c0
 * undefined __thiscall FUN_100442c0(void * this, int * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 100442c0-10044b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100442c0(void *this,int *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  longlong lVar18;
  longlong lVar19;
  char cStack00000024;
  byte bStack00000027;
  uint local_c;
  
  piVar5 = param_3;
  piVar4 = param_1;
  local_c = ~(*(uint *)(&DAT_100b2430 + (int)param_1 * 4) |
             *(uint *)(&DAT_100b2440 + (int)param_1 * 4)) & *(uint *)((int)this + 0x4cb8);
  iVar10 = (int)param_1 >> 3;
  cVar3 = (char)param_1;
  if (param_3 == (int *)0x0) {
    if (param_4 == (int *)0x0) {
      cVar12 = *(char *)((int)this + (int)param_1 * 4 + 0x5860);
      if ((cVar12 == '\x05') || (cVar12 == '\x06')) {
        pbVar2 = (byte *)((int)this + iVar10 + 0xd974);
        *pbVar2 = *pbVar2 | '\x01' << ((uint)param_1 & 7);
      }
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x5860) = 0;
      uVar13 = *(uint *)((int)this + 0x6a0);
      lVar18 = __allshl(cVar3 * '\x03',0);
      uVar11 = ~(uint)lVar18 & uVar13;
      uVar8 = *(uint *)((int)this + 0x5880) & ~(1 << ((uint)param_1 & 0x1f));
      *(uint *)((int)this + 0x5880) = uVar8;
      *(uint *)((int)this + 0x6a0) = (uVar11 ^ uVar13) & 0xff000000 ^ uVar11;
      *(uint *)((int)this + 0x6a4) =
           (uint)(uVar8 != 0) << 4 | *(uint *)((int)this + 0x6a4) & 0xffffffef;
      goto LAB_10044395;
    }
  }
  else if (param_4 == (int *)0x0) {
    local_c = local_c | *(uint *)(&DAT_100b2440 + (int)param_1 * 4);
    if ((param_3[0xd] == 2) || (param_3[0xd] == 5)) {
      local_c = local_c | *(uint *)(&DAT_100b2430 + (int)param_1 * 4);
    }
    if (*(int *)((int)this + (int)param_1 * 8 + 0x3d4) != param_2) {
      *(int *)((int)this + (int)param_1 * 8 + 0x3d4) = param_2;
      pbVar2 = (byte *)((int)this + iVar10 + 0xd974);
      *pbVar2 = *pbVar2 | '\x01' << ((uint)param_1 & 7);
    }
    uVar6 = (**(code **)(*param_3 + 0x3c))();
    param_4 = (int *)CONCAT13(uVar6,param_4._0_3_);
    uVar6 = (**(code **)(*piVar5 + 0x40))();
    uVar13 = piVar5[0xd];
    param_2 = CONCAT13(uVar6,(undefined3)param_2);
    if (uVar13 == 0) {
      uVar13 = (uint)(*(char *)((int)this + 0x81) != '\0');
    }
    cVar12 = *(char *)((int)this + (int)piVar4 * 4 + 0x5860);
    bVar1 = (&DAT_100b2428)[uVar13];
    if ((cVar12 == '\x05') || (cVar12 == '\x06')) {
      cVar12 = '\x01';
    }
    else {
      cVar12 = '\0';
    }
    if ((bVar1 == 5) || (bVar1 == 6)) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    if (cVar12 != cVar7) {
      pbVar2 = (byte *)((int)this + iVar10 + 0xd974);
      *pbVar2 = *pbVar2 | '\x01' << ((uint)piVar4 & 7);
    }
    *(uint *)((int)this + (int)piVar4 * 4 + 0x5860) = (uint)bVar1;
    lVar18 = __allshl(cVar3 * '\x03',0);
    lVar19 = __allshl(cVar3 * '\x03',0);
    piVar4 = param_1;
    uVar13 = ~(uint)lVar19 & *(uint *)((int)this + 0x6a0) | (uint)lVar18;
    *(uint *)((int)this + 0x6a0) = (uVar13 ^ *(uint *)((int)this + 0x6a0)) & 0xff000000 ^ uVar13;
    *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
    if (cStack00000024 != '\0') {
      if (param_1 < &DAT_00000004) {
        iVar10 = (int)param_1 * 0x70;
        bVar15 = param_4._3_1_ != '\0';
        bVar16 = param_4._3_1_ != '\0';
        param_4 = (int *)0x3f800000;
        if (bVar16) {
          param_4 = (int *)0x0;
        }
        iVar14 = 0x3f800000;
        if (param_2._3_1_ != '\0') {
          iVar14 = 0;
        }
        if ((((-(uint)bVar15 != *(int *)(iVar10 + 0x5680 + (int)this)) ||
             (-(uint)(param_2._3_1_ != '\0') != *(int *)(iVar10 + 0x5684 + (int)this))) ||
            (param_4 != *(int **)(iVar10 + 0x5688 + (int)this))) ||
           (_cStack00000024 = (int *)0x0, iVar14 != *(int *)(iVar10 + 0x568c + (int)this))) {
          _cStack00000024 = (int *)&DAT_01000000;
        }
        *(uint *)(iVar10 + 0x5684 + (int)this) = -(uint)(param_2._3_1_ != '\0');
        *(uint *)(iVar10 + 0x5680 + (int)this) = -(uint)bVar15;
        *(int **)(iVar10 + 0x5688 + (int)this) = param_4;
        *(int *)(iVar10 + 0x568c + (int)this) = iVar14;
        *(byte *)((int)this + 0xd981) = *(byte *)((int)this + 0xd981) | bStack00000027;
      }
      (**(code **)(*param_3 + 0x48))(&stack0x00000024,&param_1);
      if (((((*_cStack00000024 == -1) && (_cStack00000024[1] == -1)) &&
           ((_cStack00000024[2] == -1 && ((_cStack00000024[3] == -1 && (*param_1 == 0)))))) &&
          (param_1[1] == 0)) && ((param_1[2] == 0 && (param_1[3] == 0)))) {
        uVar13 = *(uint *)((int)this + 0x5880) & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = *(uint *)((int)this + 0x5880) | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5880) = uVar13;
      *(undefined4 *)((int)this + 0x6a0) = *(undefined4 *)((int)this + 0x6a0);
      *(uint *)((int)this + 0x6a4) =
           (uint)(uVar13 != 0) << 4 | *(uint *)((int)this + 0x6a4) & 0xffffffef;
      uVar9 = FUN_100418d0((int *)((int)this + (int)piVar4 * 0x20 + 0x4aa0),
                           (int *)((int)this + (int)piVar4 * 0x20 + 0x4ab0),_cStack00000024,param_1)
      ;
      *(byte *)((int)this + 0xd9a8) = *(byte *)((int)this + 0xd9a8) | (byte)uVar9;
    }
    if (*(char *)((int)this + 0x82) != '\0') {
      bVar15 = false;
      uVar13 = 0;
      do {
        iVar10 = *(int *)((int)this + uVar13 * 4 + 0x5860);
        if ((iVar10 == 5) || (iVar10 == 6)) {
          uVar13 = *(uint *)((int)this + 0x494c) | 0x10000;
          bVar15 = true;
          uVar8 = *(uint *)((int)this + 0x4938) | 0x10000;
          goto LAB_100447df;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 8);
      uVar13 = *(uint *)((int)this + 0x494c) & 0xfffeffff;
      uVar8 = *(uint *)((int)this + 0x4938) & 0xfffeffff;
LAB_100447df:
      *(uint *)((int)this + 0x4938) = uVar8;
      iVar10 = (int)piVar4 * 0x30;
      *(uint *)((int)this + 0x494c) = uVar13;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = *(uint *)((int)this + 0x5884) & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = *(uint *)((int)this + 0x5884) | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x497c) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x4968) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x497c) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x4968) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x4968) = uVar11;
      *(uint *)((int)this + 0x497c) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x49ac) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x4998) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x49ac) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x4998) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x4998) = uVar11;
      *(uint *)((int)this + 0x49ac) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x49dc) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x49c8) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x49dc) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x49c8) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x49c8) = uVar11;
      *(uint *)((int)this + 0x49dc) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x4a0c) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x49f8) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x4a0c) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x49f8) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x49f8) = uVar11;
      *(uint *)((int)this + 0x4a0c) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x4a3c) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x4a28) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x4a3c) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x4a28) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x4a28) = uVar11;
      *(uint *)((int)this + 0x4a3c) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x4a6c) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x4a58) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x4a6c) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x4a58) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x4a58) = uVar11;
      *(uint *)((int)this + 0x4a6c) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      if (bVar15) {
        uVar8 = *(uint *)((int)this + 0x4a9c) | 0x10000;
        uVar11 = *(uint *)((int)this + 0x4a88) | 0x10000;
      }
      else {
        uVar8 = *(uint *)((int)this + 0x4a9c) & 0xfffeffff;
        uVar11 = *(uint *)((int)this + 0x4a88) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x4a88) = uVar11;
      *(uint *)((int)this + 0x4a9c) = uVar8;
      if (*(int *)(iVar10 + 0x494c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar4 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar4 & 0x1f);
      }
      *(uint *)((int)this + 0x5884) = uVar13;
      *(undefined1 *)((int)this + 0xd9a8) = 1;
      *(undefined4 *)((int)this + 0x6a0) = *(undefined4 *)((int)this + 0x6a0);
      *(uint *)((int)this + 0x6a4) =
           (uint)(uVar13 != 0) << 5 | *(uint *)((int)this + 0x6a4) & 0xffffffdf;
    }
    iVar14 = (int)piVar4 * 0x30;
    iVar10 = *(int *)((int)this + (int)piVar4 * 4 + 0x5860);
    param_1 = piVar4;
    if ((iVar10 == 5) || (iVar10 == 6)) {
      *(float *)(iVar14 + 0x4940 + (int)this) =
           1.0 / (float)((double)param_3[5] + (double)(&DAT_100b5ce0)[-(param_3[5] >> 0x1f)]);
      *(float *)(iVar14 + 0x4944 + (int)this) =
           1.0 / (float)((double)param_3[6] + (double)(&DAT_100b5ce0)[-(param_3[6] >> 0x1f)]);
      if (param_3[7] == 0x17) {
        fVar17 = 65535.0;
      }
      else {
        fVar17 = 16777215.0;
      }
      *(float *)(iVar14 + 0x4948 + (int)this) = 1.0 / fVar17;
      *(undefined1 *)((int)this + 0xd9a8) = 1;
    }
    goto LAB_10044395;
  }
  if (*(int *)((int)this + (int)param_1 * 8 + 0x3d4) != param_2) {
    *(int *)((int)this + (int)param_1 * 8 + 0x3d4) = param_2;
    pbVar2 = (byte *)((int)this + iVar10 + 0xd974);
    *pbVar2 = *pbVar2 | '\x01' << ((uint)param_1 & 7);
  }
  cVar12 = *(char *)((int)this + (int)param_1 * 4 + 0x5860);
  if ((cVar12 == '\x05') || (cVar12 == '\x06')) {
    pbVar2 = (byte *)((int)this + iVar10 + 0xd974);
    *pbVar2 = *pbVar2 | '\x01' << ((uint)param_1 & 7);
  }
  *(undefined4 *)((int)this + (int)param_1 * 4 + 0x5860) = 3;
  lVar18 = __allshl(cVar3 * '\x03',0);
  lVar19 = __allshl(cVar3 * '\x03',0);
  uVar13 = ~(uint)lVar19 & *(uint *)((int)this + 0x6a0) | (uint)lVar18;
  *(uint *)((int)this + 0x6a0) = (uVar13 ^ *(uint *)((int)this + 0x6a0)) & 0xff000000 ^ uVar13;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  if (cStack00000024 != '\0') {
    (**(code **)(*param_4 + 8))(&stack0x00000024,&param_3);
    piVar4 = param_1;
    if ((((*_cStack00000024 == -1) && (_cStack00000024[1] == -1)) && (_cStack00000024[2] == -1)) &&
       (((_cStack00000024[3] == -1 && (*param_3 == 0)) &&
        ((param_3[1] == 0 && ((param_3[2] == 0 && (param_3[3] == 0)))))))) {
      uVar13 = *(uint *)((int)this + 0x5880) & ~(1 << ((uint)param_1 & 0x1f));
    }
    else {
      uVar13 = *(uint *)((int)this + 0x5880) | 1 << ((uint)param_1 & 0x1f);
    }
    *(uint *)((int)this + 0x5880) = uVar13;
    *(undefined4 *)((int)this + 0x6a0) = *(undefined4 *)((int)this + 0x6a0);
    *(uint *)((int)this + 0x6a4) =
         (uint)(uVar13 != 0) << 4 | *(uint *)((int)this + 0x6a4) & 0xffffffef;
    uVar9 = FUN_100418d0((int *)((int)this + (int)param_1 * 0x20 + 0x4aa0),
                         (int *)((int)this + (int)param_1 * 0x20 + 0x4ab0),_cStack00000024,param_3);
    *(byte *)((int)this + 0xd9a8) = *(byte *)((int)this + 0xd9a8) | (byte)uVar9;
    param_1 = piVar4;
  }
LAB_10044395:
  *(undefined2 *)((int)this + 0xd978) = 0x101;
  pbVar2 = (byte *)((int)this + ((int)param_1 >> 3) + 0xd970);
  *pbVar2 = *pbVar2 | '\x01' << ((uint)param_1 & 7);
  if (local_c != *(uint *)((int)this + 0x4cb8)) {
    *(uint *)((int)this + 0x4cb8) = local_c;
    *(undefined1 *)((int)this + 0xd981) = 1;
  }
  return;
}

