/*
 * FUN_10052810 at 10052810
 * undefined __thiscall FUN_10052810(void * this, int * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10052810-1005307f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10052810(void *this,int *param_1,int param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  char cStack00000024;
  byte bStack00000027;
  uint local_c;
  
  piVar4 = param_3;
  piVar3 = param_1;
  local_c = ~(*(uint *)(&DAT_100d5a34 + (int)param_1 * 4) |
             *(uint *)(&DAT_100d5a44 + (int)param_1 * 4)) & *(uint *)((int)this + 0x6928);
  iVar9 = (int)param_1 >> 3;
  cVar2 = (char)param_1;
  if (param_3 == (int *)0x0) {
    if (param_4 == (int *)0x0) {
      cVar10 = *(char *)((int)this + (int)param_1 * 4 + 30000);
      if ((cVar10 == '\x05') || (cVar10 == '\x06')) {
        pbVar1 = (byte *)((int)this + iVar9 + 0xf664);
        *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
      }
      *(undefined4 *)((int)this + (int)param_1 * 4 + 30000) = 0;
      uVar13 = *(uint *)((int)this + 0xfc4);
      lVar17 = __allshl(cVar2 * '\x03',0);
      uVar12 = ~(uint)((ulonglong)lVar17 >> 0x20) & uVar13;
      uVar7 = *(uint *)((int)this + 0x7570) & ~(1 << ((uint)param_1 & 0x1f));
      *(uint *)((int)this + 0x7570) = uVar7;
      *(uint *)((int)this + 0xfc0) = ~(uint)lVar17 & *(uint *)((int)this + 0xfc0);
      *(uint *)((int)this + 0xfc4) =
           (uint)(uVar7 != 0) << 0x1d | ((uVar12 ^ uVar13) & 0xffff0000 ^ uVar12) & 0xdfffffff;
      goto LAB_100528e2;
    }
  }
  else if (param_4 == (int *)0x0) {
    local_c = local_c | *(uint *)(&DAT_100d5a44 + (int)param_1 * 4);
    if ((param_3[0xd] == 2) || (param_3[0xd] == 5)) {
      local_c = local_c | *(uint *)(&DAT_100d5a34 + (int)param_1 * 4);
    }
    if (*(int *)((int)this + (int)param_1 * 8 + 0x714) != param_2) {
      *(int *)((int)this + (int)param_1 * 8 + 0x714) = param_2;
      pbVar1 = (byte *)((int)this + iVar9 + 0xf664);
      *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
    }
    uVar5 = (**(code **)(*param_3 + 0x3c))();
    param_4 = (int *)CONCAT13(uVar5,param_4._0_3_);
    uVar5 = (**(code **)(*piVar4 + 0x40))();
    uVar13 = piVar4[0xd];
    param_2 = CONCAT13(uVar5,(undefined3)param_2);
    if (uVar13 == 0) {
      uVar13 = (uint)(*(char *)((int)this + 0x81) != '\0');
    }
    bVar11 = (&DAT_100d5a2c)[uVar13];
    if ((*(byte *)(piVar4 + 0xc) & 8) == 0) {
      if ((piVar4[7] == 0x21) && (cStack00000024 != '\0')) {
        bVar11 = 7;
      }
    }
    else if (uVar13 == 4) {
      bVar11 = 4;
      param_4 = (int *)CONCAT13(1,param_4._0_3_);
    }
    else if (uVar13 == 5) {
      bVar11 = 2;
      param_4 = (int *)CONCAT13(1,param_4._0_3_);
    }
    cVar10 = *(char *)((int)this + (int)piVar3 * 4 + 30000);
    if ((cVar10 == '\x05') || (cVar10 == '\x06')) {
      cVar10 = '\x01';
    }
    else {
      cVar10 = '\0';
    }
    if ((bVar11 == 5) || (bVar11 == 6)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    if (cVar10 != cVar6) {
      pbVar1 = (byte *)((int)this + iVar9 + 0xf664);
      *pbVar1 = *pbVar1 | '\x01' << ((uint)piVar3 & 7);
    }
    *(uint *)((int)this + (int)piVar3 * 4 + 30000) = (uint)bVar11;
    lVar17 = __allshl(cVar2 * '\x03',0);
    lVar18 = __allshl(cVar2 * '\x03',0);
    piVar3 = param_1;
    uVar13 = ~(uint)((ulonglong)lVar18 >> 0x20) & *(uint *)((int)this + 0xfc4) |
             (uint)((ulonglong)lVar17 >> 0x20);
    *(uint *)((int)this + 0xfc0) = ~(uint)lVar18 & *(uint *)((int)this + 0xfc0) | (uint)lVar17;
    *(uint *)((int)this + 0xfc4) = (uVar13 ^ *(uint *)((int)this + 0xfc4)) & 0xffff0000 ^ uVar13;
    if (cStack00000024 != '\0') {
      if (param_1 < &DAT_00000004) {
        iVar9 = (int)param_1 * 0x80;
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
        if ((((-(uint)bVar15 != *(int *)(iVar9 + 0x7310 + (int)this)) ||
             (-(uint)(param_2._3_1_ != '\0') != *(int *)(iVar9 + 0x7314 + (int)this))) ||
            (param_4 != *(int **)(iVar9 + 0x7318 + (int)this))) ||
           (_cStack00000024 = (int *)0x0, iVar14 != *(int *)(iVar9 + 0x731c + (int)this))) {
          _cStack00000024 = (int *)&DAT_01000000;
        }
        *(uint *)(iVar9 + 0x7314 + (int)this) = -(uint)(param_2._3_1_ != '\0');
        *(uint *)(iVar9 + 0x7310 + (int)this) = -(uint)bVar15;
        *(int **)(iVar9 + 0x7318 + (int)this) = param_4;
        *(int *)(iVar9 + 0x731c + (int)this) = iVar14;
        *(byte *)((int)this + 0xf671) = *(byte *)((int)this + 0xf671) | bStack00000027;
      }
      (**(code **)(*param_3 + 0x48))(&stack0x00000024,&param_1);
      if (((((*_cStack00000024 == -1) && (_cStack00000024[1] == -1)) &&
           ((_cStack00000024[2] == -1 && ((_cStack00000024[3] == -1 && (*param_1 == 0)))))) &&
          (param_1[1] == 0)) && ((param_1[2] == 0 && (param_1[3] == 0)))) {
        uVar13 = *(uint *)((int)this + 0x7570) & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = *(uint *)((int)this + 0x7570) | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7570) = uVar13;
      *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
      *(uint *)((int)this + 0xfc4) =
           (uint)(uVar13 != 0) << 0x1d | *(uint *)((int)this + 0xfc4) & 0xdfffffff;
      uVar8 = FUN_1004f300((int *)((int)this + (int)piVar3 * 0x20 + 0x6700),
                           (int *)((int)this + (int)piVar3 * 0x20 + 0x6710),_cStack00000024,param_1)
      ;
      *(byte *)((int)this + 0xf6a3) = *(byte *)((int)this + 0xf6a3) | (byte)uVar8;
    }
    if (*(char *)((int)this + 0x82) != '\0') {
      bVar15 = false;
      uVar13 = 0;
      do {
        iVar9 = *(int *)((int)this + uVar13 * 4 + 30000);
        if ((iVar9 == 5) || (iVar9 == 6)) {
          uVar13 = *(uint *)((int)this + 0x653c) | 0x10000;
          bVar15 = true;
          uVar7 = *(uint *)((int)this + 0x6518) | 0x10000;
          goto LAB_10052d5b;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 8);
      uVar13 = *(uint *)((int)this + 0x653c) & 0xfffeffff;
      uVar7 = *(uint *)((int)this + 0x6518) & 0xfffeffff;
LAB_10052d5b:
      *(uint *)((int)this + 0x6518) = uVar7;
      iVar9 = (int)piVar3 * 0x40;
      *(uint *)((int)this + 0x653c) = uVar13;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = *(uint *)((int)this + 0x7574) & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = *(uint *)((int)this + 0x7574) | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x657c) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x6558) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x657c) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x6558) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x6558) = uVar12;
      *(uint *)((int)this + 0x657c) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x65bc) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x6598) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x65bc) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x6598) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x6598) = uVar12;
      *(uint *)((int)this + 0x65bc) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x65fc) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x65d8) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x65fc) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x65d8) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x65d8) = uVar12;
      *(uint *)((int)this + 0x65fc) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x663c) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x6618) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x663c) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x6618) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x6618) = uVar12;
      *(uint *)((int)this + 0x663c) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x667c) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x6658) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x667c) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x6658) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x6658) = uVar12;
      *(uint *)((int)this + 0x667c) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x66bc) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x6698) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x66bc) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x6698) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x6698) = uVar12;
      *(uint *)((int)this + 0x66bc) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      if (bVar15) {
        uVar7 = *(uint *)((int)this + 0x66fc) | 0x10000;
        uVar12 = *(uint *)((int)this + 0x66d8) | 0x10000;
      }
      else {
        uVar7 = *(uint *)((int)this + 0x66fc) & 0xfffeffff;
        uVar12 = *(uint *)((int)this + 0x66d8) & 0xfffeffff;
      }
      *(uint *)((int)this + 0x66d8) = uVar12;
      *(uint *)((int)this + 0x66fc) = uVar7;
      if (*(int *)(iVar9 + 0x653c + (int)this) == 0) {
        uVar13 = uVar13 & ~(1 << ((uint)piVar3 & 0x1f));
      }
      else {
        uVar13 = uVar13 | 1 << ((uint)piVar3 & 0x1f);
      }
      *(uint *)((int)this + 0x7574) = uVar13;
      *(undefined1 *)((int)this + 0xf6a3) = 1;
      *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
      *(uint *)((int)this + 0xfc4) =
           (uint)(uVar13 != 0) << 0x1e | *(uint *)((int)this + 0xfc4) & 0xbfffffff;
    }
    iVar9 = (int)piVar3 * 0x40;
    param_1 = piVar3;
    if ((piVar3 < &DAT_00000008) &&
       ((iVar14 = *(int *)((int)this + (int)piVar3 * 4 + 30000), iVar14 == 5 || (iVar14 == 6)))) {
      *(float *)(iVar9 + 0x6530 + (int)this) =
           1.0 / (float)((double)param_3[5] + (double)(&DAT_100d97a0)[-(param_3[5] >> 0x1f)]);
      iVar14 = param_3[6];
      *(undefined4 *)(iVar9 + 0x6538 + (int)this) = 0x3f800000;
      *(float *)(iVar9 + 0x6534 + (int)this) =
           1.0 / (float)((double)iVar14 + (double)(&DAT_100d97a0)[-(iVar14 >> 0x1f)]);
      *(undefined1 *)((int)this + 0xf6a3) = 1;
    }
    goto LAB_100528e2;
  }
  if (*(int *)((int)this + (int)param_1 * 8 + 0x714) != param_2) {
    *(int *)((int)this + (int)param_1 * 8 + 0x714) = param_2;
    pbVar1 = (byte *)((int)this + iVar9 + 0xf664);
    *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
  }
  cVar10 = *(char *)((int)this + (int)param_1 * 4 + 30000);
  if ((cVar10 == '\x05') || (cVar10 == '\x06')) {
    pbVar1 = (byte *)((int)this + iVar9 + 0xf664);
    *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
  }
  *(undefined4 *)((int)this + (int)param_1 * 4 + 30000) = 3;
  lVar17 = __allshl(cVar2 * '\x03',0);
  lVar18 = __allshl(cVar2 * '\x03',0);
  uVar13 = ~(uint)((ulonglong)lVar18 >> 0x20) & *(uint *)((int)this + 0xfc4) |
           (uint)((ulonglong)lVar17 >> 0x20);
  *(uint *)((int)this + 0xfc0) = ~(uint)lVar18 & *(uint *)((int)this + 0xfc0) | (uint)lVar17;
  *(uint *)((int)this + 0xfc4) = (uVar13 ^ *(uint *)((int)this + 0xfc4)) & 0xffff0000 ^ uVar13;
  if (cStack00000024 != '\0') {
    (**(code **)(*param_4 + 8))(&stack0x00000024,&param_3);
    piVar3 = param_1;
    if ((((*_cStack00000024 == -1) && (_cStack00000024[1] == -1)) && (_cStack00000024[2] == -1)) &&
       (((_cStack00000024[3] == -1 && (*param_3 == 0)) &&
        ((param_3[1] == 0 && ((param_3[2] == 0 && (param_3[3] == 0)))))))) {
      uVar13 = *(uint *)((int)this + 0x7570) & ~(1 << ((uint)param_1 & 0x1f));
    }
    else {
      uVar13 = *(uint *)((int)this + 0x7570) | 1 << ((uint)param_1 & 0x1f);
    }
    *(uint *)((int)this + 0x7570) = uVar13;
    *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
    *(uint *)((int)this + 0xfc4) =
         (uint)(uVar13 != 0) << 0x1d | *(uint *)((int)this + 0xfc4) & 0xdfffffff;
    uVar8 = FUN_1004f300((int *)((int)this + (int)param_1 * 0x20 + 0x6700),
                         (int *)((int)this + (int)param_1 * 0x20 + 0x6710),_cStack00000024,param_3);
    *(byte *)((int)this + 0xf6a3) = *(byte *)((int)this + 0xf6a3) | (byte)uVar8;
    param_1 = piVar3;
  }
LAB_100528e2:
  *(undefined2 *)((int)this + 0xf668) = 0x101;
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0xf660);
  *pbVar1 = *pbVar1 | '\x01' << ((uint)param_1 & 7);
  if (local_c != *(uint *)((int)this + 0x6928)) {
    *(uint *)((int)this + 0x6928) = local_c;
    *(undefined1 *)((int)this + 0xf671) = 1;
  }
  return;
}

