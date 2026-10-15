/*
 * FUN_1002bd70 at 1002bd70
 * undefined __thiscall FUN_1002bd70(void * this, uint param_1, int param_2, int * param_3, uint * param_4, uint param_5, uint param_6, int * param_7, undefined4 param_8, int * param_9)
 * Address ranges: 1002bd70-1002c5ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002bd70(void *this,uint param_1,int param_2,int *param_3,uint *param_4,uint param_5,
            uint param_6,int *param_7,undefined4 param_8,int *param_9)

{
  uint *puVar1;
  double dVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  char cVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  uint local_14;
  
  local_14 = ~(*(uint *)(&DAT_1005ed9c + param_1 * 4) | *(uint *)(&DAT_1005edac + param_1 * 4)) &
             *(uint *)((int)this + 0x998);
  iVar3 = (int)param_1 >> 3;
  cVar5 = (char)param_1;
  if (param_3 == (int *)0x0) {
    if (param_4 == (uint *)0x0) {
      cVar15 = *(char *)((int)this + param_1 * 4 + 0x1810);
      if ((cVar15 == '\x05') || (cVar15 == '\x06')) {
        pbVar4 = (byte *)((int)this + iVar3 + 0x1d34);
        *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
      }
      *(undefined4 *)((int)this + param_1 * 4 + 0x1810) = 0;
      uVar18 = *(uint *)((int)this + 0x4a8);
      lVar21 = __allshl(cVar5 * '\x03',0);
      uVar14 = ~(uint)lVar21 & uVar18;
      uVar8 = *(uint *)((int)this + 0x1830) & ~(1 << (param_1 & 0x1f));
      *(uint *)((int)this + 0x1830) = uVar8;
      *(uint *)((int)this + 0x4a8) = (uVar14 ^ uVar18) & 0xff000000 ^ uVar14;
      *(uint *)((int)this + 0x4ac) =
           (uint)(uVar8 != 0) << 0x1c | *(uint *)((int)this + 0x4ac) & 0xefffffff;
      *(undefined1 *)(param_1 + 0x1909 + (int)this) = 0;
      *(uint *)((int)this + 0x4a8) = *(uint *)((int)this + 0x4a8) & 0x3ffffff;
      *(uint *)((int)this + 0x4ac) = *(uint *)((int)this + 0x4ac) & 0xfffffe00;
      goto LAB_1002c57b;
    }
LAB_1002be73:
    if (*(int *)((int)this + param_1 * 8 + 0x224) != param_2) {
      *(int *)((int)this + param_1 * 8 + 0x224) = param_2;
      pbVar4 = (byte *)((int)this + iVar3 + 0x1d34);
      *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
    }
    cVar15 = *(char *)((int)this + param_1 * 4 + 0x1810);
    if ((cVar15 == '\x05') || (cVar15 == '\x06')) {
      pbVar4 = (byte *)((int)this + iVar3 + 0x1d34);
      *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0x1810) = 3;
    lVar21 = __allshl(cVar5 * '\x03',0);
    lVar22 = __allshl(cVar5 * '\x03',0);
    uVar18 = ~(uint)lVar22 & *(uint *)((int)this + 0x4a8) | (uint)lVar21;
    *(uint *)((int)this + 0x4a8) = (uVar18 ^ *(uint *)((int)this + 0x4a8)) & 0xff000000 ^ uVar18;
    *(undefined4 *)((int)this + 0x4ac) = *(undefined4 *)((int)this + 0x4ac);
    if ((char)param_9 == '\0') goto LAB_1002c57b;
    (**(code **)(*param_4 + 8))(&param_7,&param_9);
  }
  else {
    if (param_4 != (uint *)0x0) goto LAB_1002be73;
    local_14 = local_14 | *(uint *)(&DAT_1005edac + param_1 * 4);
    if ((param_3[0xd] == 2) || (param_3[0xd] == 5)) {
      local_14 = local_14 | *(uint *)(&DAT_1005ed9c + param_1 * 4);
    }
    if (*(int *)((int)this + param_1 * 8 + 0x224) != param_2) {
      *(int *)((int)this + param_1 * 8 + 0x224) = param_2;
      pbVar4 = (byte *)((int)this + iVar3 + 0x1d34);
      *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
    }
    *(byte *)(param_1 + 0x1909 + (int)this) = (byte)param_7;
    uVar6 = (**(code **)(*param_3 + 0x54))();
    uVar18 = param_5;
    *(undefined1 *)(param_1 + 0x1911 + (int)this) = uVar6;
    if (param_1 == 0) {
      uVar8 = param_3[8];
      puVar1 = (uint *)(param_3 + 5);
      param_4 = (uint *)(param_3 + 6);
      *(uint *)((int)this + 0x141c) = uVar8;
      if (uVar8 < 4) {
        uVar14 = 0;
      }
      else {
        param_2 = 0;
        uVar10 = 0;
        do {
          bVar13 = (byte)uVar10;
          uVar14 = *puVar1 >> (bVar13 & 0x1f);
          *(float *)((int)this + param_2 + 0x1370) =
               (float)((double)(int)uVar14 + (double)(&DAT_100601f0)[-((int)uVar14 >> 0x1f)]);
          uVar14 = *param_4 >> (bVar13 & 0x1f);
          *(float *)((int)this + uVar10 * 0x10 + 0x1374) =
               (float)((double)(int)uVar14 + (double)(&DAT_100601f0)[-((int)uVar14 >> 0x1f)]);
          uVar14 = *puVar1 >> (bVar13 + 1 & 0x1f);
          *(float *)((int)this + param_2 + 0x1380) =
               (float)((double)(int)uVar14 + (double)(&DAT_100601f0)[-((int)uVar14 >> 0x1f)]);
          uVar14 = *param_4 >> (bVar13 + 1 & 0x1f);
          *(float *)((int)this + uVar10 * 0x10 + 0x1384) =
               (float)((double)(int)uVar14 + (double)(&DAT_100601f0)[-((int)uVar14 >> 0x1f)]);
          uVar14 = *puVar1 >> (bVar13 + 2 & 0x1f);
          *(float *)((int)this + param_2 + 0x1390) =
               (float)((double)(int)uVar14 + (double)(&DAT_100601f0)[-((int)uVar14 >> 0x1f)]);
          uVar9 = *param_4 >> (bVar13 + 2 & 0x1f);
          uVar14 = uVar10 + 4;
          *(float *)((int)this + uVar10 * 0x10 + 0x1394) =
               (float)((double)(int)uVar9 + (double)(&DAT_100601f0)[-((int)uVar9 >> 0x1f)]);
          uVar9 = *puVar1 >> (bVar13 + 3 & 0x1f);
          *(float *)((int)this + param_2 + 0x13a0) =
               (float)((double)(int)uVar9 + (double)(&DAT_100601f0)[-((int)uVar9 >> 0x1f)]);
          uVar9 = *param_4 >> (bVar13 + 3 & 0x1f);
          *(float *)((int)this + uVar10 * 0x10 + 0x13a4) =
               (float)((double)(int)uVar9 + (double)(&DAT_100601f0)[-((int)uVar9 >> 0x1f)]);
          param_2 = param_2 + 0x40;
          uVar10 = uVar14;
        } while (uVar14 < uVar8 - 3);
      }
      for (; uVar14 < uVar8; uVar14 = uVar14 + 1) {
        uVar10 = (uint)param_3[5] >> ((byte)uVar14 & 0x1f);
        *(float *)((int)this + uVar14 * 0x10 + 0x1370) =
             (float)((double)(int)uVar10 + (double)(&DAT_100601f0)[-((int)uVar10 >> 0x1f)]);
        uVar10 = *param_4 >> ((byte)uVar14 & 0x1f);
        *(float *)((int)this + uVar14 * 0x10 + 0x1374) =
             (float)((double)(int)uVar10 + (double)(&DAT_100601f0)[-((int)uVar10 >> 0x1f)]);
      }
      uVar8 = uVar8 - 1;
      uVar14 = (uint)*(byte *)((int)this + 0x223);
      if ((uint)*(byte *)((int)this + 0x223) <= *(uint *)((int)this + 0x224)) {
        uVar14 = *(uint *)((int)this + 0x224);
      }
      uVar10 = uVar8;
      if (uVar14 <= uVar8) {
        uVar10 = uVar14;
      }
      if (*(char *)((int)this + 0x220) == '\x02') {
        uVar8 = uVar10;
      }
      *(uint *)((int)this + 0x148c) = param_6;
      dVar2 = (double)(&DAT_100601f0)[-((int)uVar10 >> 0x1f)];
      *(uint *)((int)this + 0x1488) = param_5 & param_6;
      *(float *)((int)this + 0x1414) = (float)((double)(int)uVar10 + dVar2);
      *(float *)((int)this + 0x1418) =
           (float)((double)(int)uVar8 + (double)(&DAT_100601f0)[-((int)uVar8 >> 0x1f)]);
      uVar8 = (**(code **)(*param_3 + 0x1c))(param_6);
      uVar18 = (**(code **)(*param_3 + 0x18))(uVar18);
      *(uint *)((int)this + 0x144c) = uVar18 & uVar8;
      *(uint *)((int)this + 0x146c) = uVar8;
      (**(code **)(*param_3 + 0x10))(&param_4);
      puVar1 = param_4;
      if (*(char *)((int)this + 0x1911) == '\0') {
        if (((uint)param_4 & 0xff) == 4) {
          uVar18 = 2;
        }
        else {
          uVar18 = (uint)(((uint)param_4 & 0xff) == 2);
        }
      }
      else {
        uVar18 = 3;
      }
      if ((uVar18 == 3) && (((uint)param_4 >> 0x14 & 3) != 0)) {
        param_4 = (uint *)0x40000;
      }
      else {
        param_4 = (uint *)0x0;
      }
      puVar16 = (uint *)(((uint)puVar1 >> 8) << 0x1c |
                        uVar18 << 0x1a | *(uint *)((int)this + 0x4a8) & 0x3ffffff);
      if ((uVar18 == 0) || (uVar18 == 1)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (uint)puVar1 >> 0x16;
      }
      *(uint *)((int)this + 0x4ac) =
           (uVar18 & 1) << 8 |
           ((uint)puVar1 >> 0x10 & 0xf) << 4 |
           ((uint)puVar1 >> 8 & 0xff) >> 4 |
           *(uint *)((int)this + 0x4ac) & 0xfffbfe00 | (uint)param_4;
      *(uint **)((int)this + 0x4a8) = puVar16;
      *(byte *)((int)this + 0x1d41) = *(byte *)((int)this + 0x1d41) | (byte)param_7;
      param_4 = puVar16;
    }
    uVar6 = (**(code **)(*param_3 + 0x3c))();
    param_4 = (uint *)CONCAT13(uVar6,param_4._0_3_);
    uVar6 = (**(code **)(*param_3 + 0x40))();
    uVar18 = param_3[0xd];
    param_7 = (int *)CONCAT13(uVar6,param_7._0_3_);
    if (uVar18 == 0) {
      uVar18 = (uint)(*(char *)((int)this + 0x79) != '\0');
    }
    cVar15 = *(char *)((int)this + param_1 * 4 + 0x1810);
    bVar13 = (&DAT_1005ed94)[uVar18];
    if ((cVar15 == '\x05') || (cVar15 == '\x06')) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
    }
    if ((bVar13 == 5) || (bVar13 == 6)) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    if (cVar15 != cVar7) {
      pbVar4 = (byte *)((int)this + iVar3 + 0x1d34);
      *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
    }
    *(uint *)((int)this + param_1 * 4 + 0x1810) = (uint)bVar13;
    lVar21 = __allshl(cVar5 * '\x03',0);
    lVar22 = __allshl(cVar5 * '\x03',0);
    uVar18 = ~(uint)lVar22 & *(uint *)((int)this + 0x4a8) | (uint)lVar21;
    *(uint *)((int)this + 0x4a8) = (uVar18 ^ *(uint *)((int)this + 0x4a8)) & 0xff000000 ^ uVar18;
    *(undefined4 *)((int)this + 0x4ac) = *(undefined4 *)((int)this + 0x4ac);
    if ((char)param_9 == '\0') goto LAB_1002c57b;
    if (param_1 < 4) {
      iVar11 = param_1 * 0x120;
      iVar19 = 0x3f800000;
      if (param_4._3_1_ != '\0') {
        iVar19 = 0;
      }
      bVar20 = param_7._3_1_ != '\0';
      param_9 = (int *)0x0;
      iVar17 = 0x3f800000;
      if (param_7._3_1_ != '\0') {
        iVar17 = 0;
      }
      if ((((-(uint)(param_4._3_1_ != '\0') != *(int *)(iVar11 + 0x1430 + (int)this)) ||
           (-(uint)bVar20 != *(int *)(iVar11 + 0x1434 + (int)this))) ||
          (iVar19 != *(int *)(iVar11 + 0x1438 + (int)this))) ||
         (param_7 = (int *)((uint)param_7 & 0xffffff),
         iVar17 != *(int *)(iVar11 + 0x143c + (int)this))) {
        param_7 = (int *)CONCAT13(1,param_7._0_3_);
      }
      *(uint *)(iVar11 + 0x1430 + (int)this) = -(uint)(param_4._3_1_ != '\0');
      *(uint *)(iVar11 + 0x1434 + (int)this) = -(uint)bVar20;
      *(int *)(iVar11 + 0x1438 + (int)this) = iVar19;
      *(int *)(iVar11 + 0x143c + (int)this) = iVar17;
      *(byte *)((int)this + 0x1d41) = *(byte *)((int)this + 0x1d41) | param_7._3_1_;
    }
    (**(code **)(*param_3 + 0x48))(&param_7,&param_9);
  }
  if ((((*param_7 == -1) && (param_7[1] == -1)) && (param_7[2] == -1)) &&
     (((param_7[3] == -1 && (*param_9 == 0)) &&
      ((param_9[1] == 0 && ((param_9[2] == 0 && (param_9[3] == 0)))))))) {
    uVar18 = *(uint *)((int)this + 0x1830) & ~(1 << (param_1 & 0x1f));
  }
  else {
    uVar18 = *(uint *)((int)this + 0x1830) | 1 << (param_1 & 0x1f);
  }
  *(uint *)((int)this + 0x1830) = uVar18;
  *(undefined4 *)((int)this + 0x4a8) = *(undefined4 *)((int)this + 0x4a8);
  *(uint *)((int)this + 0x4ac) =
       (uint)(uVar18 != 0) << 0x1c | *(uint *)((int)this + 0x4ac) & 0xefffffff;
  uVar12 = FUN_100292b0((int *)(param_1 * 0x20 + 0x780 + (int)this),
                        (int *)((int)this + param_1 * 0x20 + 0x790),param_7,param_9);
  *(byte *)((int)this + 0x1d48) = *(byte *)((int)this + 0x1d48) | (byte)uVar12;
LAB_1002c57b:
  *(undefined2 *)((int)this + 0x1d38) = 0x101;
  pbVar4 = (byte *)((int)this + iVar3 + 0x1d30);
  *pbVar4 = *pbVar4 | '\x01' << (param_1 & 7);
  if (local_14 != *(uint *)((int)this + 0x998)) {
    *(uint *)((int)this + 0x998) = local_14;
    *(undefined1 *)((int)this + 0x1d41) = 1;
  }
  return;
}

