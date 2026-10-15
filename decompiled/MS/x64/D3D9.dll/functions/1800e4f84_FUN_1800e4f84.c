/*
 * FUN_1800e4f84 at 1800e4f84
 * longlong * __fastcall FUN_1800e4f84(longlong param_1, longlong * param_2, longlong * param_3, longlong * param_4, int * param_5, uint * param_6, uint param_7, uint param_8, int param_9, int param_10)
 * Address ranges: 1800e4f84-1800e52e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800e4f84(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,int *param_5,
             uint *param_6,uint param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  int iVar36;
  char *pcVar37;
  undefined8 *puVar38;
  char *pcVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined8 *local_98;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    return param_2;
  }
  if (param_10 == 0) {
    lVar28 = (**(code **)(*param_3 + 0x50))(param_3);
    param_10 = *(int *)(lVar28 + 0x20);
  }
  uVar29 = FUN_1800e1ee0(param_10);
  iVar35 = (int)uVar29;
  uVar30 = FUN_1800e1f7c(param_10);
  iVar36 = param_5[3] - *param_5;
  uVar40 = (ulonglong)(uint)(param_5[4] - param_5[1]) / (uVar30 & 0xffffffff);
  iVar27 = (int)uVar40;
  uVar31 = FUN_1800e1f30(param_10);
  uVar31 = uVar31 & 0xffffffff;
  uVar29 = FUN_1800e1d60(param_10);
  iVar3 = (int)uVar29;
  if (iVar35 != 0) {
    iVar3 = iVar35;
  }
  uVar31 = (ulonglong)(uint)(iVar3 * iVar36) / (uVar31 & 0xffffffff);
  uVar33 = (uint)uVar31;
  local_a8 = uVar33 + 0xff & 0xffffff00;
  local_a4 = (param_5[5] - param_5[2]) * local_a8 * iVar27;
  local_a0 = param_10;
  if ((param_10 == 0x2c) || (param_10 == 0x2d)) {
    if (param_9 == 0) {
      iVar36 = iVar36 * 4;
      local_a0 = 0x2a;
    }
    else {
      if (param_9 != 1) goto LAB_1800e50bb;
      local_a0 = 0x3e;
    }
    local_a8 = iVar36 + 0xffU & 0xffffff00;
    local_a4 = local_a8 * iVar27;
  }
LAB_1800e50bb:
  bVar26 = FUN_1800e9568(param_4,local_a4,param_2);
  if (bVar26) {
    if (((param_10 == 0x2c) || (param_10 == 0x2d)) && (param_9 == 1)) {
      iVar3 = param_5[3];
      iVar36 = *param_5;
      pcVar37 = (char *)*param_2;
      if (iVar27 != 0) {
        uVar33 = iVar3 - iVar36 & 0xf;
        do {
          puVar34 = param_6;
          pcVar39 = pcVar37;
          for (uVar32 = (uint)(iVar3 - iVar36) >> 4; uVar32 != 0; uVar32 = uVar32 - 1) {
            puVar1 = puVar34 + 8;
            puVar20 = puVar34 + 9;
            puVar21 = puVar34 + 10;
            puVar22 = puVar34 + 0xb;
            auVar43._0_4_ = puVar34[4] >> 0x18;
            auVar43._4_4_ = puVar34[5] >> 0x18;
            auVar43._8_4_ = puVar34[6] >> 0x18;
            auVar43._12_4_ = puVar34[7] >> 0x18;
            auVar44._0_4_ = *puVar34 >> 0x18;
            auVar44._4_4_ = puVar34[1] >> 0x18;
            auVar44._8_4_ = puVar34[2] >> 0x18;
            auVar44._12_4_ = puVar34[3] >> 0x18;
            auVar44 = packssdw(auVar44,auVar43);
            puVar2 = puVar34 + 0xc;
            puVar23 = puVar34 + 0xd;
            puVar24 = puVar34 + 0xe;
            puVar25 = puVar34 + 0xf;
            puVar34 = puVar34 + 0x10;
            auVar42._0_4_ = *puVar1 >> 0x18;
            auVar42._4_4_ = *puVar20 >> 0x18;
            auVar42._8_4_ = *puVar21 >> 0x18;
            auVar42._12_4_ = *puVar22 >> 0x18;
            auVar41._0_4_ = *puVar2 >> 0x18;
            auVar41._4_4_ = *puVar23 >> 0x18;
            auVar41._8_4_ = *puVar24 >> 0x18;
            auVar41._12_4_ = *puVar25 >> 0x18;
            auVar43 = packssdw(auVar42,auVar41);
            sVar4 = auVar44._0_2_;
            sVar5 = auVar44._2_2_;
            sVar6 = auVar44._4_2_;
            sVar7 = auVar44._6_2_;
            sVar8 = auVar44._8_2_;
            sVar9 = auVar44._10_2_;
            sVar10 = auVar44._12_2_;
            sVar11 = auVar44._14_2_;
            sVar12 = auVar43._0_2_;
            sVar13 = auVar43._2_2_;
            sVar14 = auVar43._4_2_;
            sVar15 = auVar43._6_2_;
            sVar16 = auVar43._8_2_;
            sVar17 = auVar43._10_2_;
            sVar18 = auVar43._12_2_;
            sVar19 = auVar43._14_2_;
            *pcVar39 = (0 < sVar4) * (sVar4 < 0x100) * auVar44[0] - (0xff < sVar4);
            pcVar39[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar44[2] - (0xff < sVar5);
            pcVar39[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar44[4] - (0xff < sVar6);
            pcVar39[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar44[6] - (0xff < sVar7);
            pcVar39[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar44[8] - (0xff < sVar8);
            pcVar39[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar44[10] - (0xff < sVar9);
            pcVar39[6] = (0 < sVar10) * (sVar10 < 0x100) * auVar44[0xc] - (0xff < sVar10);
            pcVar39[7] = (0 < sVar11) * (sVar11 < 0x100) * auVar44[0xe] - (0xff < sVar11);
            pcVar39[8] = (0 < sVar12) * (sVar12 < 0x100) * auVar43[0] - (0xff < sVar12);
            pcVar39[9] = (0 < sVar13) * (sVar13 < 0x100) * auVar43[2] - (0xff < sVar13);
            pcVar39[10] = (0 < sVar14) * (sVar14 < 0x100) * auVar43[4] - (0xff < sVar14);
            pcVar39[0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar43[6] - (0xff < sVar15);
            pcVar39[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar43[8] - (0xff < sVar16);
            pcVar39[0xd] = (0 < sVar17) * (sVar17 < 0x100) * auVar43[10] - (0xff < sVar17);
            pcVar39[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar43[0xc] - (0xff < sVar18);
            pcVar39[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar43[0xe] - (0xff < sVar19);
            pcVar39 = pcVar39 + 0x10;
          }
          uVar30 = 0;
          if (uVar33 != 0) {
            do {
              pcVar39[uVar30] = (char)(puVar34[uVar30] >> 0x18);
              uVar32 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar32;
            } while (uVar32 < uVar33);
          }
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7);
          pcVar37 = pcVar37 + local_a8;
          uVar32 = (int)uVar40 - 1;
          uVar40 = (ulonglong)uVar32;
        } while (uVar32 != 0);
      }
    }
    else if ((param_7 == local_a8) && (uVar33 == param_7)) {
      uVar32 = param_5[2];
      puVar38 = (undefined8 *)*param_2;
      if (uVar32 < (uint)param_5[5]) {
        do {
          FUN_1800fbec0(puVar38,(undefined8 *)param_6,
                        (ulonglong)((param_5[4] - param_5[1]) * uVar33) / (uVar30 & 0xffffffff));
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_8);
          puVar38 = (undefined8 *)((longlong)puVar38 + (ulonglong)(local_a8 * iVar27));
          uVar32 = uVar32 + 1;
        } while (uVar32 < (uint)param_5[5]);
      }
    }
    else {
      uVar33 = param_5[2];
      local_98 = (undefined8 *)*param_2;
      if (uVar33 < (uint)param_5[5]) {
        do {
          if (iVar27 != 0) {
            uVar30 = uVar40;
            puVar34 = param_6;
            do {
              FUN_1800fbec0(local_98,(undefined8 *)puVar34,uVar31);
              local_98 = (undefined8 *)((longlong)local_98 + (ulonglong)local_a8);
              puVar34 = (uint *)((longlong)puVar34 + (ulonglong)param_7);
              uVar32 = (int)uVar30 - 1;
              uVar30 = (ulonglong)uVar32;
            } while (uVar32 != 0);
          }
          uVar33 = uVar33 + 1;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_8);
        } while (uVar33 < (uint)param_5[5]);
      }
    }
    *(int *)(param_2 + 5) = local_a0;
    *(uint *)(param_2 + 4) = local_a4;
    *(uint *)((longlong)param_2 + 0x24) = local_a8;
  }
  return param_2;
}

