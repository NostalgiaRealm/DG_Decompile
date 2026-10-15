/*
 * FUN_18002832c at 18002832c
 * undefined __fastcall FUN_18002832c(longlong param_1, longlong * param_2, undefined8 param_3, uint param_4)
 * Address ranges: 18002832c-18002aef1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002832c(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong *plVar31;
  ulonglong *puVar32;
  float *pfVar33;
  uint *puVar34;
  float *pfVar35;
  uint uVar36;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Db;
  undefined8 uVar37;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar55;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  ulonglong uVar38;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float extraout_XMM0_Db_06;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [12];
  float fVar86;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar72 [12];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_12c;
  
  puVar34 = (uint *)param_2[0xb];
  if (puVar34 == (uint *)0x0) {
    puVar34 = (uint *)(param_1 + 0x58);
    param_2[0xb] = (longlong)puVar34;
  }
  uVar30 = puVar34[3];
  fVar14 = (float)puVar34[4];
  fVar15 = (float)puVar34[5];
  fVar59 = (float)puVar34[1];
  fVar100 = (float)*puVar34;
  fVar60 = (float)(uVar30 + puVar34[1]);
  fVar106 = (float)(*puVar34 + puVar34[2]);
  lVar24 = param_2[0xd];
  fVar97 = *(float *)(lVar24 + 0xc);
  auVar58._0_8_ = CONCAT44(*(undefined4 *)(lVar24 + 0x10),*(undefined4 *)(lVar24 + 8));
  fVar98 = *(float *)(lVar24 + 0x14);
  auVar58._8_4_ = *(undefined4 *)(lVar24 + 0x18);
  auVar58._12_4_ = 0;
  fVar99 = *(float *)(lVar24 + 0x1c);
  auVar52._0_8_ = CONCAT44(fVar98,fVar97);
  auVar52._8_4_ = fVar99;
  auVar52._12_4_ = 0;
  if (*(char *)((longlong)param_2 + 0x52) == '\0') {
    cVar21 = *(char *)((longlong)param_2 + 0x54);
    if ((cVar21 == '\0') && (*(char *)((longlong)param_2 + 0x53) == '\0')) {
      return;
    }
    uVar36 = 0;
    if (param_4 == 0) goto LAB_18002ae6c;
    do {
      auVar75 = *(undefined1 (*) [16])((ulonglong)(uVar36 * (int)param_2[6]) + *param_2);
      if (*(char *)((longlong)param_2 + 0x53) != '\0') {
        auVar53._4_4_ = -(uint)(auVar75._4_4_ < fVar59);
        auVar53._0_4_ = -(uint)(auVar75._0_4_ < fVar100);
        auVar53._8_4_ = -(uint)(auVar75._8_4_ < fVar14);
        auVar53._12_4_ = -(uint)(auVar75._12_4_ < 0.0);
        uVar23 = movmskps(uVar30,auVar53);
        auVar54._4_4_ = -(uint)(fVar60 <= auVar75._4_4_);
        auVar54._0_4_ = -(uint)(fVar106 <= auVar75._0_4_);
        auVar54._8_4_ = -(uint)(fVar15 <= auVar75._8_4_);
        auVar54._12_4_ = -(uint)(0.0 <= auVar75._12_4_);
        uVar22 = movmskps((int)*param_2,auVar54);
        uVar30 = uVar23 & 4;
        uVar23 = *(uint *)(&DAT_1800fdf10 +
                          (ulonglong)(((uVar22 & 2) * 2 | uVar23 & 3) * 2 | uVar22 & 1) * 4);
        *(uint *)param_2[0xd] = *(uint *)param_2[0xd] | uVar23;
        *(uint *)(param_2[0xd] + 4) = *(uint *)(param_2[0xd] + 4) & (uVar23 | 0x2a);
        uVar23 = *(uint *)(&DAT_1800fdef8 + (ulonglong)(((uVar22 & 7) >> 1 | uVar30) >> 1) * 4);
        *(uint *)param_2[0xd] = *(uint *)param_2[0xd] | uVar23;
        *(uint *)(param_2[0xd] + 4) = *(uint *)(param_2[0xd] + 4) & (uVar23 | 0x15);
      }
      uVar36 = uVar36 + 1;
      auVar58 = minps(auVar58,auVar75);
      auVar52 = maxps(auVar52,auVar75);
    } while (uVar36 < param_4);
  }
  else {
    param_2[0x12] = CONCAT44((float)uVar30 * -0.5,(float)puVar34[2] * 0.5);
    param_2[0x13] = CONCAT44(0x3f800000,fVar15 - fVar14);
    auVar75._0_4_ = (float)puVar34[2] * 0.5 + (float)*puVar34;
    auVar75._4_4_ = (float)puVar34[3] * 0.5 + (float)puVar34[1];
    auVar75._8_4_ = puVar34[4];
    auVar75._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 0x14) = auVar75;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    uVar30 = *(uint *)(param_1 + 0x6d8) & 0x3f;
    *(bool *)(param_2 + 0x2a) = uVar30 != 0;
    if (*(char *)((longlong)param_2 + 0x53) != '\0') {
      if (uVar30 == 0) {
        *(uint *)(lVar24 + 4) = *(uint *)(lVar24 + 4) & 0xfffff03f;
      }
      else {
        lVar24 = *(longlong *)(param_1 + 0x420);
        param_2[0x1a] = *(longlong *)(param_1 + 0x418);
        param_2[0x1b] = lVar24;
        lVar24 = *(longlong *)(param_1 + 0x430);
        param_2[0x1c] = *(longlong *)(param_1 + 0x428);
        param_2[0x1d] = lVar24;
        lVar24 = *(longlong *)(param_1 + 0x440);
        param_2[0x1e] = *(longlong *)(param_1 + 0x438);
        param_2[0x1f] = lVar24;
        lVar24 = *(longlong *)(param_1 + 0x450);
        param_2[0x20] = *(longlong *)(param_1 + 0x448);
        param_2[0x21] = lVar24;
        lVar24 = *(longlong *)(param_1 + 0x460);
        param_2[0x22] = *(longlong *)(param_1 + 0x458);
        param_2[0x23] = lVar24;
        lVar24 = *(longlong *)(param_1 + 0x470);
        param_2[0x24] = *(longlong *)(param_1 + 0x468);
        param_2[0x25] = lVar24;
      }
    }
    if ((param_2[0xe] == 0) && ((char)param_2[0x2a] == '\0')) {
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
    *(undefined1 *)((longlong)param_2 + 0x151) = uVar20;
    *(bool *)((longlong)param_2 + 0x152) = param_2[1] != 0;
    uVar30 = *(uint *)(param_1 + 0x6d4);
    if (uVar30 == 0) {
LAB_1800285ed:
      if (*(uint *)(param_2 + 9) <= uVar30) {
        uVar30 = *(uint *)(param_2 + 9);
      }
      if (uVar30 != 0) goto LAB_1800285f8;
      if (param_2[0xc] == 0) {
        FUN_18001e568(param_1);
        param_2[0xc] = *(longlong *)(param_1 + 0xe10) + 0x8600;
      }
    }
    else {
      if (uVar30 == 0xff) {
        fVar103 = *(float *)(param_1 + 0x720);
        fVar101 = 1.0 - fVar103;
        uVar30 = 0x20;
        *(float *)(param_2 + 0x26) = fVar103;
        *(float *)((longlong)param_2 + 0x134) = fVar103;
        *(float *)(param_2 + 0x27) = fVar103;
        *(float *)((longlong)param_2 + 0x13c) = fVar103;
        *(float *)(param_2 + 0x28) = fVar101;
        *(float *)((longlong)param_2 + 0x144) = fVar101;
        *(float *)(param_2 + 0x29) = fVar101;
        *(float *)((longlong)param_2 + 0x14c) = fVar101;
      }
      else {
        if (uVar30 != 0x100) goto LAB_1800285ed;
        uVar30 = 0x10;
      }
LAB_1800285f8:
      FUN_18001e410(param_1);
    }
    plVar31 = param_2 + 0xc;
    if (uVar30 == 0) {
      if (param_4 != 0) {
        uVar30 = 0;
        do {
          puVar34 = (uint *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
          if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
            fVar97 = (float)puVar34[2];
            fVar98 = (float)*(undefined8 *)puVar34;
            fVar99 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
            fVar103 = 1.0;
          }
          else {
            uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4c));
            fVar98 = (float)uVar37;
            fVar99 = (float)((ulonglong)uVar37 >> 0x20);
            fVar97 = (float)extraout_XMM0_Qb_11;
            fVar103 = (float)((ulonglong)extraout_XMM0_Qb_11 >> 0x20);
          }
          if (*(char *)((longlong)param_2 + 0x152) != '\0') {
            puVar34 = (uint *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) + param_2[1]
                              );
            if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
              fStack_150 = (float)puVar34[2];
              local_158 = (float)*(undefined8 *)puVar34;
              fStack_154 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
              fStack_14c = 1.0;
            }
            else {
              uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4d));
              local_158 = (float)uVar37;
              fStack_154 = (float)((ulonglong)uVar37 >> 0x20);
              fStack_150 = (float)extraout_XMM0_Qb_12;
              fStack_14c = (float)((ulonglong)extraout_XMM0_Qb_12 >> 0x20);
            }
          }
          if (*(char *)((longlong)param_2 + 0x51) != '\x05') {
            FUN_18002b6bc((float *)((ulonglong)(uVar30 * (int)param_2[8]) + param_2[5]),
                          (uint)*(byte *)((longlong)param_2 + 0x51));
          }
          fVar108 = 0.0;
          fVar109 = 0.0;
          fVar110 = 0.0;
          fVar111 = 0.0;
          fVar101 = 0.0;
          fVar102 = 0.0;
          fVar104 = 0.0;
          fVar107 = 0.0;
          if (*(char *)((longlong)param_2 + 0x151) != '\0') {
            lVar24 = *(longlong *)(param_1 + 0xe10);
            fVar108 = fVar103 * *(float *)(lVar24 + 0x28c) + fVar99 * *(float *)(lVar24 + 0x284) +
                      fVar97 * *(float *)(lVar24 + 0x288) + fVar98 * *(float *)(lVar24 + 0x280);
            fVar109 = *(float *)(lVar24 + 0x29c) * fVar103 + *(float *)(lVar24 + 0x294) * fVar99 +
                      *(float *)(lVar24 + 0x298) * fVar97 + *(float *)(lVar24 + 0x290) * fVar98;
            fVar110 = *(float *)(lVar24 + 0x2ac) * fVar103 + *(float *)(lVar24 + 0x2a4) * fVar99 +
                      *(float *)(lVar24 + 0x2a8) * fVar97 + *(float *)(lVar24 + 0x2a0) * fVar98;
            fVar111 = *(float *)(lVar24 + 700) * fVar103 + *(float *)(lVar24 + 0x2b4) * fVar99 +
                      *(float *)(lVar24 + 0x2b8) * fVar97 + *(float *)(lVar24 + 0x2b0) * fVar98;
          }
          if (*(char *)((longlong)param_2 + 0x152) != '\0') {
            FUN_18001e3ac(param_1,10);
            lVar24 = *(longlong *)(param_1 + 0xe10);
            fVar101 = *(float *)(lVar24 + 0x450c) * fStack_14c +
                      *(float *)(lVar24 + 0x4504) * fStack_154 +
                      *(float *)(lVar24 + 0x4508) * fStack_150 +
                      *(float *)(lVar24 + 0x4500) * local_158;
            fVar102 = *(float *)(lVar24 + 0x451c) * fStack_14c +
                      *(float *)(lVar24 + 0x4514) * fStack_154 +
                      *(float *)(lVar24 + 0x4518) * fStack_150 +
                      *(float *)(lVar24 + 0x4510) * local_158;
            fVar104 = *(float *)(lVar24 + 0x452c) * fStack_14c +
                      *(float *)(lVar24 + 0x4524) * fStack_154 +
                      *(float *)(lVar24 + 0x4528) * fStack_150 +
                      *(float *)(lVar24 + 0x4520) * local_158;
            fVar107 = *(float *)(lVar24 + 0x453c) * fStack_14c +
                      *(float *)(lVar24 + 0x4534) * fStack_154 +
                      *(float *)(lVar24 + 0x4538) * fStack_150 +
                      *(float *)(lVar24 + 0x4530) * local_158;
          }
          pfVar35 = (float *)*plVar31;
          fVar112 = fVar103 * pfVar35[3] + fVar99 * pfVar35[1] +
                    fVar97 * pfVar35[2] + fVar98 * *pfVar35;
          fVar113 = pfVar35[7] * fVar103 + pfVar35[5] * fVar99 +
                    pfVar35[6] * fVar97 + pfVar35[4] * fVar98;
          auVar70._4_4_ = fVar113;
          auVar70._0_4_ = fVar112;
          fVar114 = pfVar35[0xb] * fVar103 + pfVar35[9] * fVar99 +
                    pfVar35[10] * fVar97 + pfVar35[8] * fVar98;
          fVar97 = pfVar35[0xf] * fVar103 + pfVar35[0xd] * fVar99 +
                   pfVar35[0xe] * fVar97 + pfVar35[0xc] * fVar98;
          if (param_2[0xe] != 0) {
            pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
            *pfVar35 = fVar108;
            pfVar35[1] = fVar109;
            pfVar35[2] = fVar110;
            pfVar35[3] = fVar111;
            pfVar35 = (float *)param_2[0xe];
            pfVar33 = pfVar35 + (ulonglong)(uVar30 * 2 + 1) * 4;
            *pfVar33 = fVar101;
            pfVar33[1] = fVar102;
            pfVar33[2] = fVar104;
            pfVar33[3] = fVar107;
          }
          uVar36 = 0;
          auVar96._4_4_ = fVar97;
          auVar96._0_4_ = fVar97;
          auVar96._8_4_ = fVar97;
          auVar96._12_4_ = fVar97;
          if (*(char *)((longlong)param_2 + 0x53) != '\0') {
            cVar21 = (char)param_2[0x2a];
            puVar34 = (uint *)param_2[0xd];
            pfVar35 = (float *)CONCAT71((int7)((ulonglong)pfVar35 >> 8),-cVar21);
            uVar23 = (uint)pfVar35;
            pfVar33 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)(param_2 + 0x1a));
            if (pfVar33 == (float *)0x0) {
              uVar36 = 0;
              puVar34[1] = puVar34[1] & 0xfffff03f;
            }
            else {
              uVar36 = *(uint *)(param_1 + 0x6d8);
              fVar98 = 0.0;
              if ((uVar36 & 1) == 0) {
                fVar99 = 0.0;
              }
              else {
                fVar99 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                         pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              fVar103 = 0.0;
              if ((uVar36 & 2) != 0) {
                pfVar35 = (float *)(param_2 + 0x26);
                pfVar33 = (float *)&DAT_00000060;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar103 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                          pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              fVar101 = 0.0;
              if ((uVar36 & 4) != 0) {
                pfVar35 = (float *)(param_2 + 0x32);
                pfVar33 = (float *)&DAT_000000c0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar101 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                          pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              fVar102 = 0.0;
              if ((uVar36 & 8) != 0) {
                pfVar35 = (float *)(param_2 + 0x3e);
                pfVar33 = (float *)&DAT_00000120;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar102 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                          pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              if ((uVar36 & 0x10) != 0) {
                pfVar35 = (float *)(param_2 + 0x4a);
                pfVar33 = (float *)&DAT_00000180;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar98 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                         pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              fVar104 = 0.0;
              if ((uVar36 & 0x20) != 0) {
                pfVar35 = (float *)(param_2 + 0x56);
                pfVar33 = (float *)&DAT_000001e0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar104 = pfVar33[2] * fVar110 + *pfVar33 * fVar108 +
                          pfVar33[3] * fVar111 + pfVar33[1] * fVar109;
              }
              auVar68._4_4_ = -(uint)(fVar103 < 0.0);
              auVar68._0_4_ = -(uint)(fVar99 < 0.0);
              auVar68._8_4_ = -(uint)(fVar101 < 0.0);
              auVar68._12_4_ = -(uint)(fVar102 < 0.0);
              uVar22 = movmskps((int)pfVar35,auVar68);
              auVar85._4_4_ = -(uint)(fVar104 < 0.0);
              auVar85._0_4_ = -(uint)(fVar98 < 0.0);
              auVar85._8_8_ = 0;
              uVar23 = movmskps(uVar22 & 0xf,auVar85);
              uVar23 = uVar23 & 3;
              uVar36 = *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4) |
                       *(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4);
              puVar34[1] = puVar34[1] &
                           (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4) | 0xc3f) &
                           (*(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4) | 0x3ff);
            }
            auVar49._4_4_ = -(uint)(fVar112 * 1.0 + fVar97 < 0.0);
            auVar49._0_4_ = -(uint)(fVar112 * -1.0 + fVar97 < 0.0);
            auVar49._8_4_ = -(uint)(fVar113 * -1.0 + fVar97 < 0.0);
            auVar49._12_4_ = -(uint)(fVar113 * 1.0 + fVar97 < 0.0);
            uVar23 = movmskps(uVar23,auVar49);
            auVar50._4_4_ = -(uint)(fVar114 * 1.0 < 0.0);
            auVar50._0_4_ = -(uint)(fVar114 * -1.0 + fVar97 < 0.0);
            auVar50._8_4_ = -(uint)(fVar114 * -1.0 < 0.0);
            auVar50._12_4_ = -(uint)(fVar114 * 1.0 < 0.0);
            uVar22 = movmskps(uVar23 & 0xf,auVar50);
            uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                     *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
            puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                         (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                         puVar34[1];
            *puVar34 = *puVar34 | uVar36;
          }
          if (*(char *)((longlong)param_2 + 0x56) == '\0') {
            auVar69._0_4_ = fVar112 + 0.0;
            auVar69._4_4_ = fVar113 + 0.0;
            auVar69._8_4_ = fVar114 + 0.0;
            auVar69._12_4_ = 0x3f800000;
            auVar75 = divps(auVar69,auVar96);
            auVar70._0_4_ = auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
            auVar70._4_4_ =
                 auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                 *(float *)((longlong)param_2 + 0xa4);
            auVar70._8_4_ = auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
            auVar70._12_4_ =
                 auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                 *(float *)((longlong)param_2 + 0xac);
            if (uVar30 == 0) {
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar70;
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar70;
            }
            else {
              auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar70);
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
              auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar70);
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
            }
          }
          else {
            auVar70._8_4_ = fVar114;
            auVar70._12_4_ = fVar97;
          }
          pauVar17 = (undefined1 (*) [16])param_2[0xf];
          if (pauVar17 != (undefined1 (*) [16])0x0) {
            if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
              *pauVar17 = auVar70;
            }
            else {
              *(int *)(*pauVar17 + 0xc) = auVar70._12_4_;
            }
            param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < param_4);
        goto LAB_18002ad5d;
      }
    }
    else if (uVar30 == 1) {
      if (param_4 != 0) {
        uVar30 = 0;
        do {
          puVar34 = (uint *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
          if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
            fVar97 = (float)puVar34[2];
            fVar98 = (float)*(undefined8 *)puVar34;
            fVar99 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
            fVar103 = 1.0;
          }
          else {
            uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4c));
            fVar98 = (float)uVar37;
            fVar99 = (float)((ulonglong)uVar37 >> 0x20);
            fVar97 = (float)extraout_XMM0_Qb_09;
            fVar103 = (float)((ulonglong)extraout_XMM0_Qb_09 >> 0x20);
          }
          if (*(char *)((longlong)param_2 + 0x152) != '\0') {
            pfVar35 = (float *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) +
                               param_2[1]);
            if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
              fStack_150 = pfVar35[2];
              local_158 = *pfVar35;
              fStack_154 = pfVar35[1];
              fStack_14c = 1.0;
            }
            else {
              FUN_18002aef4((uint *)pfVar35,(uint)*(byte *)((longlong)param_2 + 0x4d));
              fStack_150 = (float)extraout_XMM0_Qb_10;
              fStack_14c = (float)((ulonglong)extraout_XMM0_Qb_10 >> 0x20);
              local_158 = extraout_XMM0_Da_06;
              fStack_154 = extraout_XMM0_Db_06;
            }
          }
          uVar38 = (ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x44));
          lVar24 = param_2[2];
          pfVar35 = (float *)(param_2[5] + (ulonglong)(uVar30 * (int)param_2[8]));
          if (*(char *)((longlong)param_2 + 0x51) == '\x05') {
            fVar101 = *pfVar35;
          }
          else {
            fVar101 = FUN_18002b6bc(pfVar35,(uint)*(byte *)((longlong)param_2 + 0x51));
          }
          lVar28 = (ulonglong)((uint)fVar101 & 0xff) * 0x40;
          uVar36 = (uint)fVar101 >> 8 & 0xff;
          lVar26 = *(longlong *)(param_1 + 0xe10);
          fVar102 = *(float *)(uVar38 + lVar24);
          lVar27 = (ulonglong)uVar36 * 0x40;
          pfVar35 = (float *)(lVar26 + 0x280 + lVar27);
          pfVar33 = (float *)(lVar26 + 0x290 + lVar27);
          pfVar25 = (float *)(lVar26 + 0x2a0 + lVar27);
          pfVar1 = (float *)(lVar26 + 0x2b0 + lVar27);
          pfVar2 = (float *)(lVar28 + 0x290 + lVar26);
          pfVar3 = (float *)(lVar28 + 0x280 + lVar26);
          pfVar4 = (float *)(lVar28 + 0x2b0 + lVar26);
          pfVar5 = (float *)(lVar28 + 0x2a0 + lVar26);
          fVar104 = (pfVar35[3] * fVar103 + pfVar35[1] * fVar99 +
                    pfVar35[2] * fVar97 + *pfVar35 * fVar98) * (1.0 - fVar102) +
                    (pfVar3[3] * fVar103 + pfVar3[1] * fVar99 +
                    pfVar3[2] * fVar97 + *pfVar3 * fVar98) * fVar102;
          fVar107 = (pfVar33[3] * fVar103 + pfVar33[1] * fVar99 +
                    pfVar33[2] * fVar97 + *pfVar33 * fVar98) * (1.0 - fVar102) +
                    (pfVar2[3] * fVar103 + pfVar2[1] * fVar99 +
                    pfVar2[2] * fVar97 + *pfVar2 * fVar98) * fVar102;
          fVar108 = (pfVar25[3] * fVar103 + pfVar25[1] * fVar99 +
                    pfVar25[2] * fVar97 + *pfVar25 * fVar98) * (1.0 - fVar102) +
                    (pfVar5[3] * fVar103 + pfVar5[1] * fVar99 +
                    pfVar5[2] * fVar97 + *pfVar5 * fVar98) * fVar102;
          fVar97 = (pfVar1[3] * fVar103 + pfVar1[1] * fVar99 + pfVar1[2] * fVar97 + *pfVar1 * fVar98
                   ) * (1.0 - fVar102) +
                   (pfVar4[3] * fVar103 + pfVar4[1] * fVar99 + pfVar4[2] * fVar97 + *pfVar4 * fVar98
                   ) * fVar102;
          if (*(char *)((longlong)param_2 + 0x152) == '\0') {
            fVar98 = 0.0;
            fVar99 = 0.0;
            fVar103 = 0.0;
            fVar101 = 0.0;
          }
          else {
            FUN_18001e3ac(param_1,((uint)fVar101 & 0xff) + 10);
            FUN_18001e3ac(param_1,uVar36 + 10);
            fVar101 = *(float *)(lVar24 + uVar38);
            lVar24 = *(longlong *)(param_1 + 0xe10);
            pfVar35 = (float *)(lVar24 + 0x4500 + lVar27);
            pfVar33 = (float *)(lVar24 + 0x4510 + lVar27);
            pfVar25 = (float *)(lVar24 + 0x4520 + lVar27);
            pfVar1 = (float *)(lVar24 + 0x4530 + lVar27);
            pfVar2 = (float *)(lVar28 + 0x4510 + lVar24);
            pfVar3 = (float *)(lVar28 + 0x4500 + lVar24);
            pfVar4 = (float *)(lVar28 + 0x4530 + lVar24);
            pfVar5 = (float *)(lVar28 + 0x4520 + lVar24);
            fVar98 = (fStack_14c * pfVar35[3] + fStack_154 * pfVar35[1] +
                     fStack_150 * pfVar35[2] + local_158 * *pfVar35) * (1.0 - fVar101) +
                     (fStack_14c * pfVar3[3] + fStack_154 * pfVar3[1] +
                     fStack_150 * pfVar3[2] + local_158 * *pfVar3) * fVar101;
            fVar99 = (pfVar33[3] * fStack_14c + pfVar33[1] * fStack_154 +
                     pfVar33[2] * fStack_150 + *pfVar33 * local_158) * (1.0 - fVar101) +
                     (pfVar2[3] * fStack_14c + pfVar2[1] * fStack_154 +
                     pfVar2[2] * fStack_150 + *pfVar2 * local_158) * fVar101;
            fVar103 = (pfVar25[3] * fStack_14c + pfVar25[1] * fStack_154 +
                      pfVar25[2] * fStack_150 + *pfVar25 * local_158) * (1.0 - fVar101) +
                      (pfVar5[3] * fStack_14c + pfVar5[1] * fStack_154 +
                      pfVar5[2] * fStack_150 + *pfVar5 * local_158) * fVar101;
            fVar101 = (pfVar1[3] * fStack_14c + pfVar1[1] * fStack_154 +
                      pfVar1[2] * fStack_150 + *pfVar1 * local_158) * (1.0 - fVar101) +
                      (pfVar4[3] * fStack_14c + pfVar4[1] * fStack_154 +
                      pfVar4[2] * fStack_150 + *pfVar4 * local_158) * fVar101;
          }
          lVar24 = *(longlong *)(param_1 + 0xe10);
          auVar83._0_4_ =
               *(float *)(lVar24 + 0x858c) * fVar97 + *(float *)(lVar24 + 0x8584) * fVar107 +
               *(float *)(lVar24 + 0x8588) * fVar108 + *(float *)(lVar24 + 0x8580) * fVar104;
          auVar83._4_4_ =
               *(float *)(lVar24 + 0x859c) * fVar97 + *(float *)(lVar24 + 0x8594) * fVar107 +
               *(float *)(lVar24 + 0x8598) * fVar108 + *(float *)(lVar24 + 0x8590) * fVar104;
          auVar83._8_4_ =
               *(float *)(lVar24 + 0x85ac) * fVar97 + *(float *)(lVar24 + 0x85a4) * fVar107 +
               *(float *)(lVar24 + 0x85a8) * fVar108 + *(float *)(lVar24 + 0x85a0) * fVar104;
          auVar83._12_4_ =
               *(float *)(lVar24 + 0x85bc) * fVar97 + *(float *)(lVar24 + 0x85b4) * fVar107 +
               *(float *)(lVar24 + 0x85b8) * fVar108 + *(float *)(lVar24 + 0x85b0) * fVar104;
          if (param_2[0xe] != 0) {
            pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
            *pfVar35 = fVar104;
            pfVar35[1] = fVar107;
            pfVar35[2] = fVar108;
            pfVar35[3] = fVar97;
            pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2 + 1) * 0x10);
            *pfVar35 = fVar98;
            pfVar35[1] = fVar99;
            pfVar35[2] = fVar103;
            pfVar35[3] = fVar101;
          }
          uVar36 = 0;
          auVar95._4_4_ = auVar83._12_4_;
          auVar95._0_4_ = auVar83._12_4_;
          auVar95._8_4_ = auVar83._12_4_;
          auVar95._12_4_ = auVar83._12_4_;
          if (*(char *)((longlong)param_2 + 0x53) != '\0') {
            cVar21 = (char)param_2[0x2a];
            puVar34 = (uint *)param_2[0xd];
            pfVar35 = (float *)(param_2 + 0x1a);
            pfVar33 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)pfVar35);
            if (pfVar33 == (float *)0x0) {
              uVar36 = 0;
              puVar34[1] = puVar34[1] & 0xfffff03f;
            }
            else {
              uVar36 = *(uint *)(param_1 + 0x6d8);
              fVar98 = 0.0;
              if ((uVar36 & 1) == 0) {
                fVar99 = 0.0;
              }
              else {
                fVar99 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                         pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              fVar103 = 0.0;
              if ((uVar36 & 2) != 0) {
                pfVar35 = (float *)(param_2 + 0x26);
                pfVar33 = (float *)&DAT_00000060;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar103 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              fVar101 = 0.0;
              if ((uVar36 & 4) != 0) {
                pfVar35 = (float *)(param_2 + 0x32);
                pfVar33 = (float *)&DAT_000000c0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar101 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              fVar102 = 0.0;
              if ((uVar36 & 8) != 0) {
                pfVar35 = (float *)(param_2 + 0x3e);
                pfVar33 = (float *)&DAT_00000120;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar102 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              if ((uVar36 & 0x10) != 0) {
                pfVar35 = (float *)(param_2 + 0x4a);
                pfVar33 = (float *)&DAT_00000180;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar98 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                         pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              fVar109 = 0.0;
              if ((uVar36 & 0x20) != 0) {
                pfVar35 = (float *)(param_2 + 0x56);
                pfVar33 = (float *)&DAT_000001e0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar109 = pfVar33[2] * fVar108 + *pfVar33 * fVar104 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar107;
              }
              auVar67._4_4_ = -(uint)(fVar103 < 0.0);
              auVar67._0_4_ = -(uint)(fVar99 < 0.0);
              auVar67._8_4_ = -(uint)(fVar101 < 0.0);
              auVar67._12_4_ = -(uint)(fVar102 < 0.0);
              uVar23 = movmskps((int)pfVar35,auVar67);
              auVar90._4_4_ = -(uint)(fVar109 < 0.0);
              auVar90._0_4_ = -(uint)(fVar98 < 0.0);
              auVar90._8_8_ = 0;
              uVar36 = movmskps(uVar23 & 0xf,auVar90);
              pfVar35 = (float *)(ulonglong)(uVar36 & 3);
              uVar36 = *(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4) |
                       *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4);
              puVar34[1] = puVar34[1] &
                           (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4) | 0xc3f) &
                           (*(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4) | 0x3ff);
            }
            auVar47._4_4_ = -(uint)(auVar83._0_4_ * 1.0 + auVar83._12_4_ < 0.0);
            auVar47._0_4_ = -(uint)(auVar83._0_4_ * -1.0 + auVar83._12_4_ < 0.0);
            auVar47._8_4_ = -(uint)(auVar83._4_4_ * -1.0 + auVar83._12_4_ < 0.0);
            auVar47._12_4_ = -(uint)(auVar83._4_4_ * 1.0 + auVar83._12_4_ < 0.0);
            uVar23 = movmskps((int)pfVar35,auVar47);
            auVar48._4_4_ = -(uint)(auVar83._8_4_ * 1.0 < 0.0);
            auVar48._0_4_ = -(uint)(auVar83._8_4_ * -1.0 + auVar83._12_4_ < 0.0);
            auVar48._8_4_ = -(uint)(auVar83._8_4_ * -1.0 < 0.0);
            auVar48._12_4_ = -(uint)(auVar83._8_4_ * 1.0 < 0.0);
            uVar22 = movmskps(uVar23 & 0xf,auVar48);
            uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                     *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
            puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                         (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                         puVar34[1];
            *puVar34 = *puVar34 | uVar36;
          }
          if (*(char *)((longlong)param_2 + 0x56) == '\0') {
            auVar84._0_4_ = auVar83._0_4_ + 0.0;
            auVar84._4_4_ = auVar83._4_4_ + 0.0;
            auVar84._8_4_ = auVar83._8_4_ + 0.0;
            auVar84._12_4_ = 0x3f800000;
            auVar75 = divps(auVar84,auVar95);
            auVar83._0_4_ = auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
            auVar83._4_4_ =
                 auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                 *(float *)((longlong)param_2 + 0xa4);
            auVar83._8_4_ = auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
            auVar83._12_4_ =
                 auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                 *(float *)((longlong)param_2 + 0xac);
            if (uVar30 == 0) {
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar83;
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar83;
            }
            else {
              auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar83);
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
              auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar83);
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
            }
          }
          pauVar17 = (undefined1 (*) [16])param_2[0xf];
          if (pauVar17 != (undefined1 (*) [16])0x0) {
            if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
              *pauVar17 = auVar83;
            }
            else {
              *(int *)(*pauVar17 + 0xc) = auVar83._12_4_;
            }
            param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < param_4);
        goto LAB_18002ad5d;
      }
    }
    else if (uVar30 == 2) {
      if (param_4 != 0) {
        uVar30 = 0;
        do {
          pfVar35 = (float *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
          if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
            fVar97 = pfVar35[2];
            fVar98 = *pfVar35;
            fVar99 = pfVar35[1];
            fVar103 = 1.0;
          }
          else {
            FUN_18002aef4((uint *)pfVar35,(uint)*(byte *)((longlong)param_2 + 0x4c));
            fVar97 = (float)extraout_XMM0_Qb_07;
            fVar103 = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
            fVar98 = extraout_XMM0_Da_04;
            fVar99 = extraout_XMM0_Db_04;
          }
          if (*(char *)((longlong)param_2 + 0x152) != '\0') {
            pfVar35 = (float *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) +
                               param_2[1]);
            if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
              fStack_150 = pfVar35[2];
              local_158 = *pfVar35;
              fStack_154 = pfVar35[1];
              fStack_14c = 1.0;
            }
            else {
              FUN_18002aef4((uint *)pfVar35,(uint)*(byte *)((longlong)param_2 + 0x4d));
              fStack_150 = (float)extraout_XMM0_Qb_08;
              fStack_14c = (float)((ulonglong)extraout_XMM0_Qb_08 >> 0x20);
              local_158 = extraout_XMM0_Da_05;
              fStack_154 = extraout_XMM0_Db_05;
            }
          }
          puVar32 = (ulonglong *)
                    ((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x44)) + param_2[2]);
          pfVar35 = (float *)((ulonglong)(uVar30 * (int)param_2[8]) + param_2[5]);
          if (*(char *)((longlong)param_2 + 0x51) == '\x05') {
            fVar101 = *pfVar35;
          }
          else {
            fVar101 = FUN_18002b6bc(pfVar35,(uint)*(byte *)((longlong)param_2 + 0x51));
          }
          if (*(char *)((longlong)param_2 + 0x4e) == '\x01') {
            fVar102 = (float)*puVar32;
            fVar104 = (float)(*puVar32 >> 0x20);
          }
          else {
            uVar38 = FUN_18002b2ec(puVar32,(uint)*(byte *)((longlong)param_2 + 0x4e));
            fVar102 = (float)uVar38;
            fVar104 = (float)(uVar38 >> 0x20);
          }
          lVar24 = *(longlong *)(param_1 + 0xe10);
          lVar28 = (ulonglong)((uint)fVar101 >> 8 & 0xff) * 0x40;
          lVar26 = (ulonglong)(byte)((uint)fVar101 >> 0x10) * 0x40;
          pfVar35 = (float *)(lVar28 + 0x280 + lVar24);
          pfVar33 = (float *)(lVar28 + 0x290 + lVar24);
          pfVar25 = (float *)(lVar28 + 0x2a0 + lVar24);
          pfVar1 = (float *)(lVar28 + 0x2b0 + lVar24);
          lVar27 = (ulonglong)((uint)fVar101 & 0xff) * 0x40;
          pfVar2 = (float *)(lVar26 + 0x290 + lVar24);
          pfVar3 = (float *)(lVar26 + 0x280 + lVar24);
          pfVar4 = (float *)(lVar26 + 0x2b0 + lVar24);
          pfVar5 = (float *)(lVar26 + 0x2a0 + lVar24);
          pfVar6 = (float *)(lVar24 + 0x290 + lVar27);
          pfVar7 = (float *)(lVar24 + 0x280 + lVar27);
          pfVar8 = (float *)(lVar24 + 0x2b0 + lVar27);
          pfVar9 = (float *)(lVar24 + 0x2a0 + lVar27);
          fVar107 = (pfVar35[3] * fVar103 + pfVar35[1] * fVar99 +
                    pfVar35[2] * fVar97 + *pfVar35 * fVar98) * fVar104 +
                    (pfVar7[3] * fVar103 + pfVar7[1] * fVar99 +
                    pfVar7[2] * fVar97 + *pfVar7 * fVar98) * fVar102 +
                    (pfVar3[3] * fVar103 + pfVar3[1] * fVar99 +
                    pfVar3[2] * fVar97 + *pfVar3 * fVar98) * ((1.0 - fVar102) - fVar104);
          fVar108 = (pfVar33[3] * fVar103 + pfVar33[1] * fVar99 +
                    pfVar33[2] * fVar97 + *pfVar33 * fVar98) * fVar104 +
                    (pfVar6[3] * fVar103 + pfVar6[1] * fVar99 +
                    pfVar6[2] * fVar97 + *pfVar6 * fVar98) * fVar102 +
                    (pfVar2[3] * fVar103 + pfVar2[1] * fVar99 +
                    pfVar2[2] * fVar97 + *pfVar2 * fVar98) * ((1.0 - fVar102) - fVar104);
          fVar109 = (pfVar25[1] * fVar99 + pfVar25[3] * fVar103 +
                    *pfVar25 * fVar98 + pfVar25[2] * fVar97) * fVar104 +
                    (pfVar9[3] * fVar103 + pfVar9[1] * fVar99 +
                    pfVar9[2] * fVar97 + *pfVar9 * fVar98) * fVar102 +
                    (pfVar5[3] * fVar103 + pfVar5[1] * fVar99 +
                    pfVar5[2] * fVar97 + *pfVar5 * fVar98) * ((1.0 - fVar102) - fVar104);
          fVar97 = (pfVar1[1] * fVar99 + pfVar1[3] * fVar103 + *pfVar1 * fVar98 + pfVar1[2] * fVar97
                   ) * fVar104 +
                   (pfVar8[3] * fVar103 + pfVar8[1] * fVar99 + pfVar8[2] * fVar97 + *pfVar8 * fVar98
                   ) * fVar102 +
                   (pfVar4[3] * fVar103 + pfVar4[1] * fVar99 + pfVar4[2] * fVar97 + *pfVar4 * fVar98
                   ) * ((1.0 - fVar102) - fVar104);
          if (*(char *)((longlong)param_2 + 0x152) == '\0') {
            fVar98 = 0.0;
            fVar99 = 0.0;
            fVar103 = 0.0;
            fVar101 = 0.0;
          }
          else {
            bVar16 = *(byte *)((longlong)param_2 + 0x4e);
            FUN_18001e3ac(param_1,((uint)fVar101 & 0xff) + 10);
            FUN_18001e3ac(param_1,((uint)fVar101 >> 8 & 0xff) + 10);
            FUN_18001e3ac(param_1,((uint)fVar101 >> 0x10 & 0xff) + 10);
            if (bVar16 == 1) {
              fVar101 = (float)*puVar32;
              fVar102 = (float)(*puVar32 >> 0x20);
            }
            else {
              uVar38 = FUN_18002b2ec(puVar32,(uint)bVar16);
              fVar101 = (float)uVar38;
              fVar102 = (float)(uVar38 >> 0x20);
            }
            lVar24 = *(longlong *)(param_1 + 0xe10);
            pfVar35 = (float *)(lVar28 + 0x4500 + lVar24);
            pfVar33 = (float *)(lVar28 + 0x4510 + lVar24);
            pfVar25 = (float *)(lVar28 + 0x4520 + lVar24);
            pfVar1 = (float *)(lVar28 + 0x4530 + lVar24);
            pfVar2 = (float *)(lVar26 + 0x4510 + lVar24);
            pfVar3 = (float *)(lVar26 + 0x4500 + lVar24);
            pfVar4 = (float *)(lVar26 + 0x4530 + lVar24);
            pfVar5 = (float *)(lVar26 + 0x4520 + lVar24);
            pfVar6 = (float *)(lVar24 + 0x4510 + lVar27);
            pfVar7 = (float *)(lVar24 + 0x4500 + lVar27);
            pfVar8 = (float *)(lVar24 + 0x4530 + lVar27);
            pfVar9 = (float *)(lVar24 + 0x4520 + lVar27);
            fVar98 = (pfVar35[3] * fStack_14c + pfVar35[1] * fStack_154 +
                     pfVar35[2] * fStack_150 + *pfVar35 * local_158) * fVar102 +
                     (pfVar7[3] * fStack_14c + pfVar7[1] * fStack_154 +
                     pfVar7[2] * fStack_150 + *pfVar7 * local_158) * fVar101 +
                     (pfVar3[3] * fStack_14c + pfVar3[1] * fStack_154 +
                     pfVar3[2] * fStack_150 + *pfVar3 * local_158) * ((1.0 - fVar101) - fVar102);
            fVar99 = (pfVar33[3] * fStack_14c + pfVar33[1] * fStack_154 +
                     pfVar33[2] * fStack_150 + *pfVar33 * local_158) * fVar102 +
                     (pfVar6[3] * fStack_14c + pfVar6[1] * fStack_154 +
                     pfVar6[2] * fStack_150 + *pfVar6 * local_158) * fVar101 +
                     (pfVar2[3] * fStack_14c + pfVar2[1] * fStack_154 +
                     pfVar2[2] * fStack_150 + *pfVar2 * local_158) * ((1.0 - fVar101) - fVar102);
            fVar103 = (pfVar25[3] * fStack_14c + pfVar25[1] * fStack_154 +
                      pfVar25[2] * fStack_150 + *pfVar25 * local_158) * fVar102 +
                      (pfVar9[3] * fStack_14c + pfVar9[1] * fStack_154 +
                      pfVar9[2] * fStack_150 + *pfVar9 * local_158) * fVar101 +
                      (pfVar5[3] * fStack_14c + pfVar5[1] * fStack_154 +
                      pfVar5[2] * fStack_150 + *pfVar5 * local_158) * ((1.0 - fVar101) - fVar102);
            fVar101 = (pfVar1[3] * fStack_14c + pfVar1[1] * fStack_154 +
                      pfVar1[2] * fStack_150 + *pfVar1 * local_158) * fVar102 +
                      (pfVar8[3] * fStack_14c + pfVar8[1] * fStack_154 +
                      pfVar8[2] * fStack_150 + *pfVar8 * local_158) * fVar101 +
                      (pfVar4[3] * fStack_14c + pfVar4[1] * fStack_154 +
                      pfVar4[2] * fStack_150 + *pfVar4 * local_158) * ((1.0 - fVar101) - fVar102);
          }
          auVar81._0_4_ =
               *(float *)(lVar24 + 0x858c) * fVar97 + *(float *)(lVar24 + 0x8584) * fVar108 +
               *(float *)(lVar24 + 0x8588) * fVar109 + *(float *)(lVar24 + 0x8580) * fVar107;
          auVar81._4_4_ =
               *(float *)(lVar24 + 0x859c) * fVar97 + *(float *)(lVar24 + 0x8594) * fVar108 +
               *(float *)(lVar24 + 0x8598) * fVar109 + *(float *)(lVar24 + 0x8590) * fVar107;
          auVar81._8_4_ =
               *(float *)(lVar24 + 0x85ac) * fVar97 + *(float *)(lVar24 + 0x85a4) * fVar108 +
               *(float *)(lVar24 + 0x85a8) * fVar109 + *(float *)(lVar24 + 0x85a0) * fVar107;
          auVar81._12_4_ =
               *(float *)(lVar24 + 0x85bc) * fVar97 + *(float *)(lVar24 + 0x85b4) * fVar108 +
               *(float *)(lVar24 + 0x85b8) * fVar109 + *(float *)(lVar24 + 0x85b0) * fVar107;
          if (param_2[0xe] != 0) {
            pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
            *pfVar35 = fVar107;
            pfVar35[1] = fVar108;
            pfVar35[2] = fVar109;
            pfVar35[3] = fVar97;
            pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2 + 1) * 0x10);
            *pfVar35 = fVar98;
            pfVar35[1] = fVar99;
            pfVar35[2] = fVar103;
            pfVar35[3] = fVar101;
          }
          uVar36 = 0;
          auVar94._4_4_ = auVar81._12_4_;
          auVar94._0_4_ = auVar81._12_4_;
          auVar94._8_4_ = auVar81._12_4_;
          auVar94._12_4_ = auVar81._12_4_;
          if (*(char *)((longlong)param_2 + 0x53) != '\0') {
            cVar21 = (char)param_2[0x2a];
            puVar34 = (uint *)param_2[0xd];
            pfVar35 = (float *)(param_2 + 0x1a);
            pfVar33 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)pfVar35);
            if (pfVar33 == (float *)0x0) {
              uVar36 = 0;
              puVar34[1] = puVar34[1] & 0xfffff03f;
            }
            else {
              uVar36 = *(uint *)(param_1 + 0x6d8);
              fVar98 = 0.0;
              if ((uVar36 & 1) == 0) {
                fVar99 = 0.0;
              }
              else {
                fVar99 = fVar109 * pfVar33[2] + fVar107 * *pfVar33 +
                         fVar97 * pfVar33[3] + fVar108 * pfVar33[1];
              }
              fVar103 = 0.0;
              if ((uVar36 & 2) != 0) {
                pfVar35 = (float *)(param_2 + 0x26);
                pfVar33 = (float *)&DAT_00000060;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar103 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar108;
              }
              fVar101 = 0.0;
              if ((uVar36 & 4) != 0) {
                pfVar35 = (float *)(param_2 + 0x32);
                pfVar33 = (float *)&DAT_000000c0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar101 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar108;
              }
              fVar102 = 0.0;
              if ((uVar36 & 8) != 0) {
                pfVar35 = (float *)(param_2 + 0x3e);
                pfVar33 = (float *)&DAT_00000120;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar102 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar108;
              }
              if ((uVar36 & 0x10) != 0) {
                pfVar35 = (float *)(param_2 + 0x4a);
                pfVar33 = (float *)&DAT_00000180;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar98 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                         pfVar33[3] * fVar97 + pfVar33[1] * fVar108;
              }
              fVar104 = 0.0;
              if ((uVar36 & 0x20) != 0) {
                pfVar35 = (float *)(param_2 + 0x56);
                pfVar33 = (float *)&DAT_000001e0;
                if (cVar21 != '\0') {
                  pfVar33 = pfVar35;
                }
                fVar104 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                          pfVar33[3] * fVar97 + pfVar33[1] * fVar108;
              }
              auVar66._4_4_ = -(uint)(fVar103 < 0.0);
              auVar66._0_4_ = -(uint)(fVar99 < 0.0);
              auVar66._8_4_ = -(uint)(fVar101 < 0.0);
              auVar66._12_4_ = -(uint)(fVar102 < 0.0);
              uVar23 = movmskps((int)pfVar35,auVar66);
              auVar89._4_4_ = -(uint)(fVar104 < 0.0);
              auVar89._0_4_ = -(uint)(fVar98 < 0.0);
              auVar89._8_8_ = 0;
              uVar36 = movmskps(uVar23 & 0xf,auVar89);
              pfVar35 = (float *)(ulonglong)(uVar36 & 3);
              uVar36 = *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4) |
                       *(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4);
              puVar34[1] = puVar34[1] &
                           (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4) | 0xc3f) &
                           (*(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4) | 0x3ff);
            }
            auVar45._4_4_ = -(uint)(auVar81._0_4_ * 1.0 + auVar81._12_4_ < 0.0);
            auVar45._0_4_ = -(uint)(auVar81._0_4_ * -1.0 + auVar81._12_4_ < 0.0);
            auVar45._8_4_ = -(uint)(auVar81._4_4_ * -1.0 + auVar81._12_4_ < 0.0);
            auVar45._12_4_ = -(uint)(auVar81._4_4_ * 1.0 + auVar81._12_4_ < 0.0);
            uVar23 = movmskps((int)pfVar35,auVar45);
            auVar46._4_4_ = -(uint)(auVar81._8_4_ * 1.0 < 0.0);
            auVar46._0_4_ = -(uint)(auVar81._8_4_ * -1.0 + auVar81._12_4_ < 0.0);
            auVar46._8_4_ = -(uint)(auVar81._8_4_ * -1.0 < 0.0);
            auVar46._12_4_ = -(uint)(auVar81._8_4_ * 1.0 < 0.0);
            uVar22 = movmskps(uVar23 & 0xf,auVar46);
            uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                     *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
            puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                         (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                         puVar34[1];
            *puVar34 = *puVar34 | uVar36;
          }
          if (*(char *)((longlong)param_2 + 0x56) == '\0') {
            auVar82._0_4_ = auVar81._0_4_ + 0.0;
            auVar82._4_4_ = auVar81._4_4_ + 0.0;
            auVar82._8_4_ = auVar81._8_4_ + 0.0;
            auVar82._12_4_ = 0x3f800000;
            auVar75 = divps(auVar82,auVar94);
            auVar81._0_4_ = auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
            auVar81._4_4_ =
                 auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                 *(float *)((longlong)param_2 + 0xa4);
            auVar81._8_4_ = auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
            auVar81._12_4_ =
                 auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                 *(float *)((longlong)param_2 + 0xac);
            if (uVar30 == 0) {
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar81;
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar81;
            }
            else {
              auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar81);
              *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
              auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar81);
              *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
            }
          }
          pauVar17 = (undefined1 (*) [16])param_2[0xf];
          if (pauVar17 != (undefined1 (*) [16])0x0) {
            if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
              *pauVar17 = auVar81;
            }
            else {
              *(int *)(*pauVar17 + 0xc) = auVar81._12_4_;
            }
            param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < param_4);
        goto LAB_18002ad5d;
      }
    }
    else {
      fStack_12c = 0.0;
      if (uVar30 == 3) {
        if (param_4 != 0) {
          uVar30 = 0;
          do {
            pfVar35 = (float *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
            if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
              fVar103 = pfVar35[2];
              fVar101 = *pfVar35;
              fVar102 = pfVar35[1];
              fVar104 = 1.0;
            }
            else {
              FUN_18002aef4((uint *)pfVar35,(uint)*(byte *)((longlong)param_2 + 0x4c));
              fVar103 = (float)extraout_XMM0_Qb_05;
              fVar104 = (float)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              fVar101 = extraout_XMM0_Da_02;
              fVar102 = extraout_XMM0_Db_02;
            }
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              pfVar35 = (float *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) +
                                 param_2[1]);
              if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
                fVar99 = pfVar35[2];
                fVar97 = *pfVar35;
                fVar98 = pfVar35[1];
                fStack_12c = 1.0;
              }
              else {
                FUN_18002aef4((uint *)pfVar35,(uint)*(byte *)((longlong)param_2 + 0x4d));
                fVar99 = (float)extraout_XMM0_Qb_06;
                fStack_12c = (float)((ulonglong)extraout_XMM0_Qb_06 >> 0x20);
                fVar97 = extraout_XMM0_Da_03;
                fVar98 = extraout_XMM0_Db_03;
              }
            }
            puVar34 = (uint *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x44)) + param_2[2]
                              );
            pfVar35 = (float *)((ulonglong)(uVar30 * (int)param_2[8]) + param_2[5]);
            if (*(char *)((longlong)param_2 + 0x51) == '\x05') {
              fVar107 = *pfVar35;
            }
            else {
              fVar107 = FUN_18002b6bc(pfVar35,(uint)*(byte *)((longlong)param_2 + 0x51));
            }
            if (*(char *)((longlong)param_2 + 0x4e) == '\x02') {
              auVar78._12_4_ = 0x3f800000;
              auVar78._8_4_ = puVar34[2];
              auVar78._0_8_ = *(undefined8 *)puVar34;
              auVar71 = auVar78._0_12_;
            }
            else {
              uVar37 = FUN_18002b420(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4e));
              auVar71._8_4_ = extraout_XMM0_Dc;
              auVar71._0_8_ = uVar37;
            }
            lVar24 = *(longlong *)(param_1 + 0xe10);
            fVar108 = auVar71._0_4_;
            fVar109 = auVar71._4_4_;
            fVar110 = auVar71._8_4_;
            lVar26 = ((ulonglong)((uint)fVar107 >> 8) & 0xff) * 0x40;
            pfVar35 = (float *)(lVar26 + 0x280 + lVar24);
            pfVar33 = (float *)(lVar26 + 0x2a0 + lVar24);
            pfVar25 = (float *)(lVar26 + 0x290 + lVar24);
            pfVar1 = (float *)(lVar26 + 0x2b0 + lVar24);
            lVar27 = ((ulonglong)((uint)fVar107 >> 0x10) & 0xff) * 0x40;
            pfVar2 = (float *)(lVar27 + 0x2b0 + lVar24);
            pfVar3 = (float *)(lVar27 + 0x2a0 + lVar24);
            pfVar4 = (float *)(lVar27 + 0x290 + lVar24);
            pfVar5 = (float *)(lVar27 + 0x280 + lVar24);
            lVar28 = (ulonglong)((uint)fVar107 >> 0x18) * 0x40;
            pfVar6 = (float *)(lVar28 + 0x2a0 + lVar24);
            pfVar7 = (float *)(lVar28 + 0x2b0 + lVar24);
            pfVar8 = (float *)(lVar28 + 0x290 + lVar24);
            pfVar9 = (float *)(lVar28 + 0x280 + lVar24);
            lVar29 = (ulonglong)((uint)fVar107 & 0xff) * 0x40;
            pfVar10 = (float *)(lVar29 + 0x280 + lVar24);
            pfVar11 = (float *)(lVar29 + 0x290 + lVar24);
            pfVar12 = (float *)(lVar29 + 0x2b0 + lVar24);
            pfVar13 = (float *)(lVar29 + 0x2a0 + lVar24);
            fVar111 = (pfVar10[3] * fVar104 + pfVar10[1] * fVar102 +
                      pfVar10[2] * fVar103 + *pfVar10 * fVar101) * fVar108 +
                      (fVar103 * pfVar35[2] + fVar101 * *pfVar35 +
                      fVar104 * pfVar35[3] + fVar102 * pfVar35[1]) * fVar109 +
                      (pfVar5[3] * fVar104 + pfVar5[1] * fVar102 +
                      pfVar5[2] * fVar103 + *pfVar5 * fVar101) * fVar110 +
                      (((1.0 - fVar108) - fVar109) - fVar110) *
                      (fVar104 * pfVar9[3] + fVar102 * pfVar9[1] +
                      fVar103 * pfVar9[2] + fVar101 * *pfVar9);
            fVar112 = (pfVar11[3] * fVar104 + pfVar11[1] * fVar102 +
                      pfVar11[2] * fVar103 + *pfVar11 * fVar101) * fVar108 +
                      (pfVar25[2] * fVar103 + *pfVar25 * fVar101 +
                      pfVar25[3] * fVar104 + pfVar25[1] * fVar102) * fVar109 +
                      (pfVar4[3] * fVar104 + pfVar4[1] * fVar102 +
                      pfVar4[2] * fVar103 + *pfVar4 * fVar101) * fVar110 +
                      (((1.0 - fVar108) - fVar109) - fVar110) *
                      (pfVar8[3] * fVar104 + pfVar8[1] * fVar102 +
                      pfVar8[2] * fVar103 + *pfVar8 * fVar101);
            fVar113 = (pfVar13[3] * fVar104 + pfVar13[1] * fVar102 +
                      pfVar13[2] * fVar103 + *pfVar13 * fVar101) * fVar108 +
                      (*pfVar33 * fVar101 + pfVar33[2] * fVar103 +
                      pfVar33[1] * fVar102 + pfVar33[3] * fVar104) * fVar109 +
                      (pfVar3[3] * fVar104 + pfVar3[1] * fVar102 +
                      pfVar3[2] * fVar103 + *pfVar3 * fVar101) * fVar110 +
                      (((1.0 - fVar108) - fVar109) - fVar110) *
                      (pfVar6[3] * fVar104 + pfVar6[1] * fVar102 +
                      pfVar6[2] * fVar103 + *pfVar6 * fVar101);
            fVar103 = (pfVar12[3] * fVar104 + pfVar12[1] * fVar102 +
                      pfVar12[2] * fVar103 + *pfVar12 * fVar101) * fVar108 +
                      (*pfVar1 * fVar101 + pfVar1[2] * fVar103 +
                      pfVar1[1] * fVar102 + pfVar1[3] * fVar104) * fVar109 +
                      (pfVar2[3] * fVar104 + pfVar2[1] * fVar102 +
                      pfVar2[2] * fVar103 + *pfVar2 * fVar101) * fVar110 +
                      (((1.0 - fVar108) - fVar109) - fVar110) *
                      (pfVar7[3] * fVar104 + pfVar7[1] * fVar102 +
                      pfVar7[2] * fVar103 + *pfVar7 * fVar101);
            if (*(char *)((longlong)param_2 + 0x152) == '\0') {
              fVar101 = 0.0;
              fVar102 = 0.0;
              fVar104 = 0.0;
              fVar107 = 0.0;
            }
            else {
              bVar16 = *(byte *)((longlong)param_2 + 0x4e);
              FUN_18001e3ac(param_1,((uint)fVar107 & 0xff) + 10);
              FUN_18001e3ac(param_1,((uint)fVar107 >> 8 & 0xff) + 10);
              FUN_18001e3ac(param_1,((uint)fVar107 >> 0x10 & 0xff) + 10);
              FUN_18001e3ac(param_1,((uint)fVar107 >> 0x18) + 10);
              if (bVar16 == 2) {
                auVar79._12_4_ = 0x3f800000;
                auVar79._8_4_ = puVar34[2];
                auVar79._0_8_ = *(undefined8 *)puVar34;
                auVar72 = auVar79._0_12_;
              }
              else {
                uVar37 = FUN_18002b420(puVar34,(uint)bVar16);
                auVar72._8_4_ = extraout_XMM0_Dc_00;
                auVar72._0_8_ = uVar37;
              }
              lVar24 = *(longlong *)(param_1 + 0xe10);
              fVar107 = auVar72._0_4_;
              fVar108 = auVar72._4_4_;
              fVar109 = auVar72._8_4_;
              pfVar35 = (float *)(lVar26 + 0x4520 + lVar24);
              pfVar33 = (float *)(lVar26 + 0x4510 + lVar24);
              pfVar25 = (float *)(lVar26 + 0x4530 + lVar24);
              pfVar1 = (float *)(lVar26 + 0x4500 + lVar24);
              pfVar2 = (float *)(lVar27 + 0x4530 + lVar24);
              pfVar3 = (float *)(lVar27 + 0x4520 + lVar24);
              pfVar4 = (float *)(lVar27 + 0x4510 + lVar24);
              pfVar5 = (float *)(lVar27 + 0x4500 + lVar24);
              pfVar6 = (float *)(lVar28 + 0x4530 + lVar24);
              pfVar7 = (float *)(lVar28 + 0x4520 + lVar24);
              pfVar8 = (float *)(lVar28 + 0x4510 + lVar24);
              pfVar9 = (float *)(lVar28 + 0x4500 + lVar24);
              pfVar10 = (float *)(lVar29 + 0x4500 + lVar24);
              pfVar11 = (float *)(lVar29 + 0x4510 + lVar24);
              pfVar12 = (float *)(lVar29 + 0x4530 + lVar24);
              pfVar13 = (float *)(lVar29 + 0x4520 + lVar24);
              fVar101 = (pfVar10[3] * fStack_12c + pfVar10[1] * fVar98 +
                        pfVar10[2] * fVar99 + *pfVar10 * fVar97) * fVar107 +
                        (pfVar1[3] * fStack_12c + pfVar1[1] * fVar98 +
                        pfVar1[2] * fVar99 + *pfVar1 * fVar97) * fVar108 +
                        (pfVar5[3] * fStack_12c + pfVar5[1] * fVar98 +
                        pfVar5[2] * fVar99 + *pfVar5 * fVar97) * fVar109 +
                        (((1.0 - fVar107) - fVar108) - fVar109) *
                        (pfVar9[3] * fStack_12c + pfVar9[1] * fVar98 +
                        pfVar9[2] * fVar99 + *pfVar9 * fVar97);
              fVar102 = (pfVar11[3] * fStack_12c + pfVar11[1] * fVar98 +
                        pfVar11[2] * fVar99 + *pfVar11 * fVar97) * fVar107 +
                        (pfVar33[3] * fStack_12c + pfVar33[1] * fVar98 +
                        pfVar33[2] * fVar99 + *pfVar33 * fVar97) * fVar108 +
                        (pfVar4[3] * fStack_12c + pfVar4[1] * fVar98 +
                        pfVar4[2] * fVar99 + *pfVar4 * fVar97) * fVar109 +
                        (((1.0 - fVar107) - fVar108) - fVar109) *
                        (pfVar8[3] * fStack_12c + pfVar8[1] * fVar98 +
                        pfVar8[2] * fVar99 + *pfVar8 * fVar97);
              fVar104 = (pfVar13[3] * fStack_12c + pfVar13[1] * fVar98 +
                        pfVar13[2] * fVar99 + *pfVar13 * fVar97) * fVar107 +
                        (pfVar35[3] * fStack_12c + pfVar35[1] * fVar98 +
                        pfVar35[2] * fVar99 + *pfVar35 * fVar97) * fVar108 +
                        (pfVar3[3] * fStack_12c + pfVar3[1] * fVar98 +
                        pfVar3[2] * fVar99 + *pfVar3 * fVar97) * fVar109 +
                        (((1.0 - fVar107) - fVar108) - fVar109) *
                        (pfVar7[3] * fStack_12c + pfVar7[1] * fVar98 +
                        pfVar7[2] * fVar99 + *pfVar7 * fVar97);
              fVar107 = (pfVar12[3] * fStack_12c + pfVar12[1] * fVar98 +
                        pfVar12[2] * fVar99 + *pfVar12 * fVar97) * fVar107 +
                        (pfVar25[3] * fStack_12c + pfVar25[1] * fVar98 +
                        pfVar25[2] * fVar99 + *pfVar25 * fVar97) * fVar108 +
                        (pfVar2[3] * fStack_12c + pfVar2[1] * fVar98 +
                        pfVar2[2] * fVar99 + *pfVar2 * fVar97) * fVar109 +
                        (((1.0 - fVar107) - fVar108) - fVar109) *
                        (pfVar6[3] * fStack_12c + pfVar6[1] * fVar98 +
                        pfVar6[2] * fVar99 + *pfVar6 * fVar97);
            }
            fVar108 = *(float *)(lVar24 + 0x858c) * fVar103 + *(float *)(lVar24 + 0x8584) * fVar112
                      + *(float *)(lVar24 + 0x8588) * fVar113 +
                        *(float *)(lVar24 + 0x8580) * fVar111;
            fVar109 = *(float *)(lVar24 + 0x859c) * fVar103 + *(float *)(lVar24 + 0x8594) * fVar112
                      + *(float *)(lVar24 + 0x8598) * fVar113 +
                        *(float *)(lVar24 + 0x8590) * fVar111;
            auVar65._4_4_ = fVar109;
            auVar65._0_4_ = fVar108;
            fVar110 = *(float *)(lVar24 + 0x85ac) * fVar103 + *(float *)(lVar24 + 0x85a4) * fVar112
                      + *(float *)(lVar24 + 0x85a8) * fVar113 +
                        *(float *)(lVar24 + 0x85a0) * fVar111;
            fVar114 = *(float *)(lVar24 + 0x85bc) * fVar103 + *(float *)(lVar24 + 0x85b4) * fVar112
                      + *(float *)(lVar24 + 0x85b8) * fVar113 +
                        *(float *)(lVar24 + 0x85b0) * fVar111;
            if (param_2[0xe] != 0) {
              pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
              *pfVar35 = fVar111;
              pfVar35[1] = fVar112;
              pfVar35[2] = fVar113;
              pfVar35[3] = fVar103;
              pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2 + 1) * 0x10);
              *pfVar35 = fVar101;
              pfVar35[1] = fVar102;
              pfVar35[2] = fVar104;
              pfVar35[3] = fVar107;
            }
            uVar36 = 0;
            auVar93._4_4_ = fVar114;
            auVar93._0_4_ = fVar114;
            auVar93._8_4_ = fVar114;
            auVar93._12_4_ = fVar114;
            if (*(char *)((longlong)param_2 + 0x53) != '\0') {
              cVar21 = (char)param_2[0x2a];
              puVar34 = (uint *)param_2[0xd];
              pfVar35 = (float *)(param_2 + 0x1a);
              pfVar33 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)pfVar35);
              if (pfVar33 == (float *)0x0) {
                uVar36 = 0;
                puVar34[1] = puVar34[1] & 0xfffff03f;
              }
              else {
                uVar36 = *(uint *)(param_1 + 0x6d8);
                fVar101 = 0.0;
                if ((uVar36 & 1) == 0) {
                  fVar102 = 0.0;
                }
                else {
                  fVar102 = fVar113 * pfVar33[2] + fVar111 * *pfVar33 +
                            fVar103 * pfVar33[3] + fVar112 * pfVar33[1];
                }
                fVar104 = 0.0;
                if ((uVar36 & 2) != 0) {
                  pfVar35 = (float *)(param_2 + 0x26);
                  pfVar33 = (float *)&DAT_00000060;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar104 = pfVar33[2] * fVar113 + *pfVar33 * fVar111 +
                            pfVar33[3] * fVar103 + pfVar33[1] * fVar112;
                }
                fVar107 = 0.0;
                if ((uVar36 & 4) != 0) {
                  pfVar35 = (float *)(param_2 + 0x32);
                  pfVar33 = (float *)&DAT_000000c0;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar107 = pfVar33[2] * fVar113 + *pfVar33 * fVar111 +
                            pfVar33[3] * fVar103 + pfVar33[1] * fVar112;
                }
                fVar105 = 0.0;
                if ((uVar36 & 8) != 0) {
                  pfVar35 = (float *)(param_2 + 0x3e);
                  pfVar33 = (float *)&DAT_00000120;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar105 = pfVar33[2] * fVar113 + *pfVar33 * fVar111 +
                            pfVar33[3] * fVar103 + pfVar33[1] * fVar112;
                }
                if ((uVar36 & 0x10) != 0) {
                  pfVar35 = (float *)(param_2 + 0x4a);
                  pfVar33 = (float *)&DAT_00000180;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar101 = pfVar33[2] * fVar113 + *pfVar33 * fVar111 +
                            pfVar33[3] * fVar103 + pfVar33[1] * fVar112;
                }
                fVar56 = 0.0;
                if ((uVar36 & 0x20) != 0) {
                  pfVar35 = (float *)(param_2 + 0x56);
                  pfVar33 = (float *)&DAT_000001e0;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar56 = pfVar33[2] * fVar113 + *pfVar33 * fVar111 +
                           pfVar33[3] * fVar103 + pfVar33[1] * fVar112;
                }
                auVar63._4_4_ = -(uint)(fVar104 < 0.0);
                auVar63._0_4_ = -(uint)(fVar102 < 0.0);
                auVar63._8_4_ = -(uint)(fVar107 < 0.0);
                auVar63._12_4_ = -(uint)(fVar105 < 0.0);
                uVar23 = movmskps((int)pfVar35,auVar63);
                auVar80._4_4_ = -(uint)(fVar56 < 0.0);
                auVar80._0_4_ = -(uint)(fVar101 < 0.0);
                auVar80._8_8_ = 0;
                uVar36 = movmskps(uVar23 & 0xf,auVar80);
                pfVar35 = (float *)(ulonglong)(uVar36 & 3);
                uVar36 = *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4) |
                         *(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4);
                puVar34[1] = puVar34[1] &
                             (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar23 & 0xf) * 4) | 0xc3f) &
                             (*(uint *)(&DAT_1800fdf50 + (longlong)pfVar35 * 4) | 0x3ff);
              }
              auVar43._4_4_ = -(uint)(fVar108 * 1.0 + fVar114 < 0.0);
              auVar43._0_4_ = -(uint)(fVar108 * -1.0 + fVar114 < 0.0);
              auVar43._8_4_ = -(uint)(fVar109 * -1.0 + fVar114 < 0.0);
              auVar43._12_4_ = -(uint)(fVar109 * 1.0 + fVar114 < 0.0);
              uVar23 = movmskps((int)pfVar35,auVar43);
              auVar44._4_4_ = -(uint)(fVar110 * 1.0 < 0.0);
              auVar44._0_4_ = -(uint)(fVar110 * -1.0 + fVar114 < 0.0);
              auVar44._8_4_ = -(uint)(fVar110 * -1.0 < 0.0);
              auVar44._12_4_ = -(uint)(fVar110 * 1.0 < 0.0);
              uVar22 = movmskps(uVar23 & 0xf,auVar44);
              uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                       *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
              puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                           (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                           puVar34[1];
              *puVar34 = *puVar34 | uVar36;
            }
            if (*(char *)((longlong)param_2 + 0x56) == '\0') {
              auVar64._0_4_ = fVar108 + 0.0;
              auVar64._4_4_ = fVar109 + 0.0;
              auVar64._8_4_ = fVar110 + 0.0;
              auVar64._12_4_ = 0x3f800000;
              auVar75 = divps(auVar64,auVar93);
              auVar65._0_4_ =
                   auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
              auVar65._4_4_ =
                   auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                   *(float *)((longlong)param_2 + 0xa4);
              auVar65._8_4_ =
                   auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
              auVar65._12_4_ =
                   auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                   *(float *)((longlong)param_2 + 0xac);
              if (uVar30 == 0) {
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar65;
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar65;
              }
              else {
                auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar65);
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
                auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar65);
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
              }
            }
            else {
              auVar65._8_4_ = fVar110;
              auVar65._12_4_ = fVar114;
            }
            pauVar17 = (undefined1 (*) [16])param_2[0xf];
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
                *pauVar17 = auVar65;
              }
              else {
                *(int *)(*pauVar17 + 0xc) = auVar65._12_4_;
              }
              param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 < param_4);
          goto LAB_18002ad5d;
        }
      }
      else if (uVar30 == 0x10) {
        if (param_4 != 0) {
          uVar30 = 0;
          do {
            puVar34 = (uint *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
            if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
              fVar103 = (float)puVar34[2];
              fVar101 = (float)*(undefined8 *)puVar34;
              fVar102 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
              fVar104 = 1.0;
            }
            else {
              uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4c));
              fVar101 = (float)uVar37;
              fVar102 = (float)((ulonglong)uVar37 >> 0x20);
              fVar103 = (float)extraout_XMM0_Qb_03;
              fVar104 = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
            }
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              puVar34 = (uint *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) +
                                param_2[1]);
              if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
                fVar99 = (float)puVar34[2];
                fVar97 = (float)*(undefined8 *)puVar34;
                fVar98 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
                fStack_12c = 1.0;
              }
              else {
                uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4d));
                fVar97 = (float)uVar37;
                fVar98 = (float)((ulonglong)uVar37 >> 0x20);
                fVar99 = (float)extraout_XMM0_Qb_04;
                fStack_12c = (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
              }
            }
            pfVar35 = (float *)((ulonglong)(uVar30 * (int)param_2[8]) + param_2[5]);
            if (*(char *)((longlong)param_2 + 0x51) == '\x05') {
              fVar107 = *pfVar35;
            }
            else {
              fVar107 = FUN_18002b6bc(pfVar35,(uint)*(byte *)((longlong)param_2 + 0x51));
            }
            fVar112 = 0.0;
            fVar113 = 0.0;
            fVar114 = 0.0;
            fVar105 = 0.0;
            fVar108 = 0.0;
            fVar109 = 0.0;
            fVar110 = 0.0;
            fVar111 = 0.0;
            if (*(char *)((longlong)param_2 + 0x151) != '\0') {
              lVar24 = *(longlong *)(param_1 + 0xe10);
              lVar26 = (ulonglong)((uint)fVar107 & 0xff) * 0x40;
              pfVar35 = (float *)(lVar26 + 0x280 + lVar24);
              pfVar33 = (float *)(lVar26 + 0x290 + lVar24);
              pfVar25 = (float *)(lVar26 + 0x2a0 + lVar24);
              pfVar1 = (float *)(lVar26 + 0x2b0 + lVar24);
              fVar112 = pfVar35[3] * fVar104 + pfVar35[1] * fVar102 +
                        pfVar35[2] * fVar103 + *pfVar35 * fVar101;
              fVar113 = pfVar33[3] * fVar104 + pfVar33[1] * fVar102 +
                        pfVar33[2] * fVar103 + *pfVar33 * fVar101;
              fVar114 = pfVar25[3] * fVar104 + pfVar25[1] * fVar102 +
                        pfVar25[2] * fVar103 + *pfVar25 * fVar101;
              fVar105 = pfVar1[3] * fVar104 + pfVar1[1] * fVar102 +
                        pfVar1[2] * fVar103 + *pfVar1 * fVar101;
            }
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              FUN_18001e3ac(param_1,((uint)fVar107 & 0xff) + 10);
              lVar24 = *(longlong *)(param_1 + 0xe10);
              lVar26 = (ulonglong)((uint)fVar107 & 0xff) * 0x40;
              pfVar35 = (float *)(lVar26 + 0x4500 + lVar24);
              pfVar33 = (float *)(lVar26 + 0x4510 + lVar24);
              pfVar25 = (float *)(lVar26 + 0x4520 + lVar24);
              pfVar1 = (float *)(lVar26 + 0x4530 + lVar24);
              fVar108 = pfVar35[3] * fStack_12c + pfVar35[1] * fVar98 +
                        pfVar35[2] * fVar99 + *pfVar35 * fVar97;
              fVar109 = pfVar33[3] * fStack_12c + pfVar33[1] * fVar98 +
                        pfVar33[2] * fVar99 + *pfVar33 * fVar97;
              fVar110 = pfVar25[3] * fStack_12c + pfVar25[1] * fVar98 +
                        pfVar25[2] * fVar99 + *pfVar25 * fVar97;
              fVar111 = pfVar1[3] * fStack_12c + pfVar1[1] * fVar98 +
                        pfVar1[2] * fVar99 + *pfVar1 * fVar97;
            }
            pfVar35 = (float *)*plVar31;
            auVar76._0_4_ =
                 pfVar35[3] * fVar104 + pfVar35[1] * fVar102 +
                 pfVar35[2] * fVar103 + *pfVar35 * fVar101;
            auVar76._4_4_ =
                 pfVar35[7] * fVar104 + pfVar35[5] * fVar102 +
                 pfVar35[6] * fVar103 + pfVar35[4] * fVar101;
            auVar76._8_4_ =
                 pfVar35[0xb] * fVar104 + pfVar35[9] * fVar102 +
                 pfVar35[10] * fVar103 + pfVar35[8] * fVar101;
            auVar76._12_4_ =
                 pfVar35[0xf] * fVar104 + pfVar35[0xd] * fVar102 +
                 pfVar35[0xe] * fVar103 + pfVar35[0xc] * fVar101;
            if (param_2[0xe] != 0) {
              pfVar35 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
              *pfVar35 = fVar112;
              pfVar35[1] = fVar113;
              pfVar35[2] = fVar114;
              pfVar35[3] = fVar105;
              pfVar35 = (float *)param_2[0xe];
              pfVar33 = pfVar35 + (ulonglong)(uVar30 * 2 + 1) * 4;
              *pfVar33 = fVar108;
              pfVar33[1] = fVar109;
              pfVar33[2] = fVar110;
              pfVar33[3] = fVar111;
            }
            uVar36 = 0;
            auVar92._4_4_ = auVar76._12_4_;
            auVar92._0_4_ = auVar76._12_4_;
            auVar92._8_4_ = auVar76._12_4_;
            auVar92._12_4_ = auVar76._12_4_;
            if (*(char *)((longlong)param_2 + 0x53) != '\0') {
              cVar21 = (char)param_2[0x2a];
              puVar34 = (uint *)param_2[0xd];
              pfVar35 = (float *)CONCAT71((int7)((ulonglong)pfVar35 >> 8),-cVar21);
              uVar23 = (uint)pfVar35;
              pfVar33 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)(param_2 + 0x1a));
              if (pfVar33 == (float *)0x0) {
                uVar36 = 0;
                puVar34[1] = puVar34[1] & 0xfffff03f;
              }
              else {
                uVar36 = *(uint *)(param_1 + 0x6d8);
                fVar103 = 0.0;
                if ((uVar36 & 1) == 0) {
                  fVar101 = 0.0;
                }
                else {
                  fVar101 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                fVar102 = 0.0;
                if ((uVar36 & 2) != 0) {
                  pfVar35 = (float *)(param_2 + 0x26);
                  pfVar33 = (float *)&DAT_00000060;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar102 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                fVar104 = 0.0;
                if ((uVar36 & 4) != 0) {
                  pfVar35 = (float *)(param_2 + 0x32);
                  pfVar33 = (float *)&DAT_000000c0;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar104 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                fVar107 = 0.0;
                if ((uVar36 & 8) != 0) {
                  pfVar35 = (float *)(param_2 + 0x3e);
                  pfVar33 = (float *)&DAT_00000120;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar107 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                if ((uVar36 & 0x10) != 0) {
                  pfVar35 = (float *)(param_2 + 0x4a);
                  pfVar33 = (float *)&DAT_00000180;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar103 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                fVar108 = 0.0;
                if ((uVar36 & 0x20) != 0) {
                  pfVar35 = (float *)(param_2 + 0x56);
                  pfVar33 = (float *)&DAT_000001e0;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar108 = pfVar33[2] * fVar114 + *pfVar33 * fVar112 +
                            pfVar33[3] * fVar105 + pfVar33[1] * fVar113;
                }
                auVar62._4_4_ = -(uint)(fVar102 < 0.0);
                auVar62._0_4_ = -(uint)(fVar101 < 0.0);
                auVar62._8_4_ = -(uint)(fVar104 < 0.0);
                auVar62._12_4_ = -(uint)(fVar107 < 0.0);
                uVar22 = movmskps((int)pfVar35,auVar62);
                auVar88._4_4_ = -(uint)(fVar108 < 0.0);
                auVar88._0_4_ = -(uint)(fVar103 < 0.0);
                auVar88._8_8_ = 0;
                uVar23 = movmskps(uVar22 & 0xf,auVar88);
                uVar23 = uVar23 & 3;
                uVar36 = *(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4) |
                         *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4);
                puVar34[1] = puVar34[1] &
                             (*(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4) | 0x3ff) &
                             (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4) | 0xc3f);
              }
              auVar41._4_4_ = -(uint)(auVar76._0_4_ * 1.0 + auVar76._12_4_ < 0.0);
              auVar41._0_4_ = -(uint)(auVar76._0_4_ * -1.0 + auVar76._12_4_ < 0.0);
              auVar41._8_4_ = -(uint)(auVar76._4_4_ * -1.0 + auVar76._12_4_ < 0.0);
              auVar41._12_4_ = -(uint)(auVar76._4_4_ * 1.0 + auVar76._12_4_ < 0.0);
              uVar23 = movmskps(uVar23,auVar41);
              auVar42._4_4_ = -(uint)(auVar76._8_4_ * 1.0 < 0.0);
              auVar42._0_4_ = -(uint)(auVar76._8_4_ * -1.0 + auVar76._12_4_ < 0.0);
              auVar42._8_4_ = -(uint)(auVar76._8_4_ * -1.0 < 0.0);
              auVar42._12_4_ = -(uint)(auVar76._8_4_ * 1.0 < 0.0);
              uVar22 = movmskps(uVar23 & 0xf,auVar42);
              uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                       *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
              puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                           (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                           puVar34[1];
              *puVar34 = *puVar34 | uVar36;
            }
            if (*(char *)((longlong)param_2 + 0x56) == '\0') {
              auVar77._0_4_ = auVar76._0_4_ + 0.0;
              auVar77._4_4_ = auVar76._4_4_ + 0.0;
              auVar77._8_4_ = auVar76._8_4_ + 0.0;
              auVar77._12_4_ = 0x3f800000;
              auVar75 = divps(auVar77,auVar92);
              auVar76._0_4_ =
                   auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
              auVar76._4_4_ =
                   auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                   *(float *)((longlong)param_2 + 0xa4);
              auVar76._8_4_ =
                   auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
              auVar76._12_4_ =
                   auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                   *(float *)((longlong)param_2 + 0xac);
              if (uVar30 == 0) {
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar76;
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar76;
              }
              else {
                auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar76);
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
                auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar76);
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
              }
            }
            pauVar17 = (undefined1 (*) [16])param_2[0xf];
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
                *pauVar17 = auVar76;
              }
              else {
                *(int *)(*pauVar17 + 0xc) = auVar76._12_4_;
              }
              param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 < param_4);
          goto LAB_18002ad5d;
        }
      }
      else if (uVar30 == 0x20) {
        if (param_4 != 0) {
          pfVar35 = (float *)(param_2 + 0x26);
          uVar30 = 0;
          do {
            pfVar33 = (float *)((ulonglong)(uVar30 * (int)param_2[6]) + *param_2);
            if (*(char *)((longlong)param_2 + 0x4c) == '\x02') {
              fVar103 = pfVar33[2];
              fVar101 = *pfVar33;
              fVar102 = pfVar33[1];
              fVar104 = 1.0;
            }
            else {
              FUN_18002aef4((uint *)pfVar33,(uint)*(byte *)((longlong)param_2 + 0x4c));
              fVar103 = (float)extraout_XMM0_Qb;
              fVar104 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
              fVar101 = extraout_XMM0_Da;
              fVar102 = extraout_XMM0_Db;
            }
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              puVar34 = (uint *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x34)) +
                                param_2[1]);
              if (*(char *)((longlong)param_2 + 0x4d) == '\x02') {
                fVar99 = (float)puVar34[2];
                fVar97 = (float)*(undefined8 *)puVar34;
                fVar98 = (float)((ulonglong)*(undefined8 *)puVar34 >> 0x20);
                fStack_12c = 1.0;
              }
              else {
                uVar37 = FUN_18002aef4(puVar34,(uint)*(byte *)((longlong)param_2 + 0x4d));
                fVar97 = (float)uVar37;
                fVar98 = (float)((ulonglong)uVar37 >> 0x20);
                fVar99 = (float)extraout_XMM0_Qb_00;
                fStack_12c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
              }
            }
            if (*(char *)((longlong)param_2 + 0x51) != '\x05') {
              FUN_18002b6bc((float *)((ulonglong)(uVar30 * (int)param_2[8]) + param_2[5]),
                            (uint)*(byte *)((longlong)param_2 + 0x51));
            }
            fVar107 = 0.0;
            fVar108 = 0.0;
            fVar109 = 0.0;
            fVar110 = 0.0;
            fVar111 = 0.0;
            fVar112 = 0.0;
            fVar113 = 0.0;
            fVar114 = 0.0;
            pfVar33 = (float *)((ulonglong)(uVar30 * (int)param_2[7]) + param_2[3]);
            if (*(char *)((longlong)param_2 + 0x4f) == '\x02') {
              fVar105 = pfVar33[2];
              fVar56 = *pfVar33;
              fVar86 = pfVar33[1];
              fVar55 = 1.0;
            }
            else {
              FUN_18002aef4((uint *)pfVar33,(uint)*(byte *)((longlong)param_2 + 0x4f));
              fVar105 = (float)extraout_XMM0_Qb_01;
              fVar55 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
              fVar56 = extraout_XMM0_Da_00;
              fVar86 = extraout_XMM0_Db_00;
            }
            fVar101 = *pfVar35 * fVar56 + *(float *)(param_2 + 0x28) * fVar101;
            fVar102 = *(float *)((longlong)param_2 + 0x134) * fVar86 +
                      *(float *)((longlong)param_2 + 0x144) * fVar102;
            fVar103 = *(float *)(param_2 + 0x27) * fVar105 + *(float *)(param_2 + 0x29) * fVar103;
            fVar104 = *(float *)((longlong)param_2 + 0x13c) * fVar55 +
                      *(float *)((longlong)param_2 + 0x14c) * fVar104;
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              pfVar33 = (float *)((ulonglong)(uVar30 * *(int *)((longlong)param_2 + 0x3c)) +
                                 param_2[4]);
              if ((char)param_2[10] == '\x02') {
                fVar105 = pfVar33[2];
                fVar56 = *pfVar33;
                fVar86 = pfVar33[1];
                fVar55 = 1.0;
              }
              else {
                FUN_18002aef4((uint *)pfVar33,(uint)*(byte *)(param_2 + 10));
                fVar105 = (float)extraout_XMM0_Qb_02;
                fVar55 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
                fVar56 = extraout_XMM0_Da_01;
                fVar86 = extraout_XMM0_Db_01;
              }
              fVar97 = fVar97 * *(float *)(param_2 + 0x28) + *pfVar35 * fVar56;
              fVar98 = fVar98 * *(float *)((longlong)param_2 + 0x144) +
                       *(float *)((longlong)param_2 + 0x134) * fVar86;
              fVar99 = fVar99 * *(float *)(param_2 + 0x29) + *(float *)(param_2 + 0x27) * fVar105;
              fStack_12c = fStack_12c * *(float *)((longlong)param_2 + 0x14c) +
                           *(float *)((longlong)param_2 + 0x13c) * fVar55;
            }
            if (*(char *)((longlong)param_2 + 0x151) != '\0') {
              lVar24 = *(longlong *)(param_1 + 0xe10);
              fVar107 = *(float *)(lVar24 + 0x28c) * fVar104 + *(float *)(lVar24 + 0x284) * fVar102
                        + *(float *)(lVar24 + 0x288) * fVar103 +
                          *(float *)(lVar24 + 0x280) * fVar101;
              fVar108 = *(float *)(lVar24 + 0x29c) * fVar104 + *(float *)(lVar24 + 0x294) * fVar102
                        + *(float *)(lVar24 + 0x298) * fVar103 +
                          *(float *)(lVar24 + 0x290) * fVar101;
              fVar109 = *(float *)(lVar24 + 0x2ac) * fVar104 + *(float *)(lVar24 + 0x2a4) * fVar102
                        + *(float *)(lVar24 + 0x2a8) * fVar103 +
                          *(float *)(lVar24 + 0x2a0) * fVar101;
              fVar110 = *(float *)(lVar24 + 700) * fVar104 + *(float *)(lVar24 + 0x2b4) * fVar102 +
                        *(float *)(lVar24 + 0x2b8) * fVar103 + *(float *)(lVar24 + 0x2b0) * fVar101;
            }
            if (*(char *)((longlong)param_2 + 0x152) != '\0') {
              FUN_18001e3ac(param_1,10);
              lVar24 = *(longlong *)(param_1 + 0xe10);
              fVar111 = fStack_12c * *(float *)(lVar24 + 0x450c) +
                        fVar98 * *(float *)(lVar24 + 0x4504) +
                        fVar99 * *(float *)(lVar24 + 0x4508) + fVar97 * *(float *)(lVar24 + 0x4500);
              fVar112 = *(float *)(lVar24 + 0x451c) * fStack_12c +
                        *(float *)(lVar24 + 0x4514) * fVar98 +
                        *(float *)(lVar24 + 0x4518) * fVar99 + *(float *)(lVar24 + 0x4510) * fVar97;
              fVar113 = *(float *)(lVar24 + 0x452c) * fStack_12c +
                        *(float *)(lVar24 + 0x4524) * fVar98 +
                        *(float *)(lVar24 + 0x4528) * fVar99 + *(float *)(lVar24 + 0x4520) * fVar97;
              fVar114 = *(float *)(lVar24 + 0x453c) * fStack_12c +
                        *(float *)(lVar24 + 0x4534) * fVar98 +
                        *(float *)(lVar24 + 0x4538) * fVar99 + *(float *)(lVar24 + 0x4530) * fVar97;
            }
            pfVar33 = (float *)*plVar31;
            auVar73._0_4_ =
                 pfVar33[3] * fVar104 + pfVar33[1] * fVar102 +
                 pfVar33[2] * fVar103 + *pfVar33 * fVar101;
            auVar73._4_4_ =
                 pfVar33[7] * fVar104 + pfVar33[5] * fVar102 +
                 pfVar33[6] * fVar103 + pfVar33[4] * fVar101;
            auVar73._8_4_ =
                 pfVar33[0xb] * fVar104 + pfVar33[9] * fVar102 +
                 pfVar33[10] * fVar103 + pfVar33[8] * fVar101;
            auVar73._12_4_ =
                 pfVar33[0xf] * fVar104 + pfVar33[0xd] * fVar102 +
                 pfVar33[0xe] * fVar103 + pfVar33[0xc] * fVar101;
            if (param_2[0xe] != 0) {
              pfVar33 = (float *)(param_2[0xe] + (ulonglong)(uVar30 * 2) * 0x10);
              *pfVar33 = fVar107;
              pfVar33[1] = fVar108;
              pfVar33[2] = fVar109;
              pfVar33[3] = fVar110;
              pfVar33 = (float *)param_2[0xe];
              pfVar25 = pfVar33 + (ulonglong)(uVar30 * 2 + 1) * 4;
              *pfVar25 = fVar111;
              pfVar25[1] = fVar112;
              pfVar25[2] = fVar113;
              pfVar25[3] = fVar114;
            }
            uVar36 = 0;
            auVar91._4_4_ = auVar73._12_4_;
            auVar91._0_4_ = auVar73._12_4_;
            auVar91._8_4_ = auVar73._12_4_;
            auVar91._12_4_ = auVar73._12_4_;
            if (*(char *)((longlong)param_2 + 0x53) != '\0') {
              cVar21 = (char)param_2[0x2a];
              puVar34 = (uint *)param_2[0xd];
              pfVar33 = (float *)CONCAT71((int7)((ulonglong)pfVar33 >> 8),-cVar21);
              uVar23 = (uint)pfVar33;
              pfVar25 = (float *)(-(ulonglong)(cVar21 != '\0') & (ulonglong)(param_2 + 0x1a));
              if (pfVar25 == (float *)0x0) {
                uVar36 = 0;
                puVar34[1] = puVar34[1] & 0xfffff03f;
              }
              else {
                uVar36 = *(uint *)(param_1 + 0x6d8);
                fVar103 = 0.0;
                if ((uVar36 & 1) == 0) {
                  fVar101 = 0.0;
                }
                else {
                  fVar101 = fVar109 * pfVar25[2] + fVar107 * *pfVar25 +
                            fVar110 * pfVar25[3] + fVar108 * pfVar25[1];
                }
                fVar102 = 0.0;
                if ((uVar36 & 2) != 0) {
                  pfVar33 = (float *)&DAT_00000060;
                  if (cVar21 != '\0') {
                    pfVar33 = pfVar35;
                  }
                  fVar102 = pfVar33[2] * fVar109 + *pfVar33 * fVar107 +
                            pfVar33[3] * fVar110 + pfVar33[1] * fVar108;
                }
                fVar104 = 0.0;
                if ((uVar36 & 4) != 0) {
                  pfVar33 = (float *)(param_2 + 0x32);
                  pfVar25 = (float *)&DAT_000000c0;
                  if (cVar21 != '\0') {
                    pfVar25 = pfVar33;
                  }
                  fVar104 = pfVar25[2] * fVar109 + *pfVar25 * fVar107 +
                            pfVar25[3] * fVar110 + pfVar25[1] * fVar108;
                }
                fVar111 = 0.0;
                if ((uVar36 & 8) != 0) {
                  pfVar33 = (float *)(param_2 + 0x3e);
                  pfVar25 = (float *)&DAT_00000120;
                  if (cVar21 != '\0') {
                    pfVar25 = pfVar33;
                  }
                  fVar111 = pfVar25[2] * fVar109 + *pfVar25 * fVar107 +
                            pfVar25[3] * fVar110 + pfVar25[1] * fVar108;
                }
                if ((uVar36 & 0x10) != 0) {
                  pfVar33 = (float *)(param_2 + 0x4a);
                  pfVar25 = (float *)&DAT_00000180;
                  if (cVar21 != '\0') {
                    pfVar25 = pfVar33;
                  }
                  fVar103 = pfVar25[2] * fVar109 + *pfVar25 * fVar107 +
                            pfVar25[3] * fVar110 + pfVar25[1] * fVar108;
                }
                fVar112 = 0.0;
                if ((uVar36 & 0x20) != 0) {
                  pfVar33 = (float *)(param_2 + 0x56);
                  pfVar25 = (float *)&DAT_000001e0;
                  if (cVar21 != '\0') {
                    pfVar25 = pfVar33;
                  }
                  fVar112 = pfVar25[2] * fVar109 + *pfVar25 * fVar107 +
                            pfVar25[3] * fVar110 + pfVar25[1] * fVar108;
                }
                auVar61._4_4_ = -(uint)(fVar102 < 0.0);
                auVar61._0_4_ = -(uint)(fVar101 < 0.0);
                auVar61._8_4_ = -(uint)(fVar104 < 0.0);
                auVar61._12_4_ = -(uint)(fVar111 < 0.0);
                uVar22 = movmskps((int)pfVar33,auVar61);
                auVar87._4_4_ = -(uint)(fVar112 < 0.0);
                auVar87._0_4_ = -(uint)(fVar103 < 0.0);
                auVar87._8_8_ = 0;
                uVar23 = movmskps(uVar22 & 0xf,auVar87);
                uVar23 = uVar23 & 3;
                uVar36 = *(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4) |
                         *(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4);
                puVar34[1] = puVar34[1] &
                             (*(uint *)(&DAT_1800fdf60 + (ulonglong)(uVar22 & 0xf) * 4) | 0xc3f) &
                             (*(uint *)(&DAT_1800fdf50 + (ulonglong)uVar23 * 4) | 0x3ff);
              }
              auVar39._4_4_ = -(uint)(auVar73._0_4_ * 1.0 + auVar73._12_4_ < 0.0);
              auVar39._0_4_ = -(uint)(auVar73._0_4_ * -1.0 + auVar73._12_4_ < 0.0);
              auVar39._8_4_ = -(uint)(auVar73._4_4_ * -1.0 + auVar73._12_4_ < 0.0);
              auVar39._12_4_ = -(uint)(auVar73._4_4_ * 1.0 + auVar73._12_4_ < 0.0);
              uVar23 = movmskps(uVar23,auVar39);
              auVar40._4_4_ = -(uint)(auVar73._8_4_ * 1.0 < 0.0);
              auVar40._0_4_ = -(uint)(auVar73._8_4_ * -1.0 + auVar73._12_4_ < 0.0);
              auVar40._8_4_ = -(uint)(auVar73._8_4_ * -1.0 < 0.0);
              auVar40._12_4_ = -(uint)(auVar73._8_4_ * 1.0 < 0.0);
              uVar22 = movmskps(uVar23 & 0xf,auVar40);
              uVar36 = *(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) |
                       *(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | uVar36;
              puVar34[1] = (*(uint *)(&DAT_1800fdef8 + (ulonglong)(uVar22 & 3) * 4) | 0xf) &
                           (*(uint *)(&DAT_1800fdf10 + (ulonglong)(uVar23 & 0xf) * 4) | 0x30) &
                           puVar34[1];
              *puVar34 = *puVar34 | uVar36;
            }
            if (*(char *)((longlong)param_2 + 0x56) == '\0') {
              auVar74._0_4_ = auVar73._0_4_ + 0.0;
              auVar74._4_4_ = auVar73._4_4_ + 0.0;
              auVar74._8_4_ = auVar73._8_4_ + 0.0;
              auVar74._12_4_ = 0x3f800000;
              auVar75 = divps(auVar74,auVar91);
              auVar73._0_4_ =
                   auVar75._0_4_ * *(float *)(param_2 + 0x12) + *(float *)(param_2 + 0x14);
              auVar73._4_4_ =
                   auVar75._4_4_ * *(float *)((longlong)param_2 + 0x94) +
                   *(float *)((longlong)param_2 + 0xa4);
              auVar73._8_4_ =
                   auVar75._8_4_ * *(float *)(param_2 + 0x13) + *(float *)(param_2 + 0x15);
              auVar73._12_4_ =
                   auVar75._12_4_ * *(float *)((longlong)param_2 + 0x9c) +
                   *(float *)((longlong)param_2 + 0xac);
              if (uVar30 == 0) {
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar73;
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar73;
              }
              else {
                auVar75 = minps(*(undefined1 (*) [16])(param_2 + 0x16),auVar73);
                *(undefined1 (*) [16])(param_2 + 0x16) = auVar75;
                auVar75 = maxps(*(undefined1 (*) [16])(param_2 + 0x18),auVar73);
                *(undefined1 (*) [16])(param_2 + 0x18) = auVar75;
              }
            }
            pauVar17 = (undefined1 (*) [16])param_2[0xf];
            if (pauVar17 != (undefined1 (*) [16])0x0) {
              if ((*(char *)((longlong)param_2 + 0x55) == '\0') || (uVar36 == 0)) {
                *pauVar17 = auVar73;
              }
              else {
                *(int *)(*pauVar17 + 0xc) = auVar73._12_4_;
              }
              param_2[0xf] = param_2[0xf] + (ulonglong)*(uint *)(param_2 + 0x10);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 < param_4);
          goto LAB_18002ad5d;
        }
      }
      else if (param_4 != 0) {
LAB_18002ad5d:
        auVar57._0_4_ = *(float *)(param_2 + 0x16) + -0.5;
        auVar57._4_4_ = *(float *)((longlong)param_2 + 0xb4) + -0.5;
        auVar57._8_4_ = *(float *)(param_2 + 0x17) + 0.0;
        auVar57._12_4_ = *(float *)((longlong)param_2 + 0xbc) + 0.0;
        *(undefined1 (*) [16])(param_2 + 0x16) = auVar57;
        auVar51._0_4_ = *(float *)(param_2 + 0x18) + 0.5;
        auVar51._4_4_ = *(float *)((longlong)param_2 + 0xc4) + 0.5;
        auVar51._8_4_ = *(float *)(param_2 + 0x19) + 0.0;
        auVar51._12_4_ = *(float *)((longlong)param_2 + 0xcc) + 0.0;
        auVar58 = minps(auVar57,auVar58);
        *(undefined1 (*) [16])(param_2 + 0x18) = auVar51;
        auVar52 = maxps(auVar51,auVar52);
      }
    }
    auVar18._4_4_ = fVar59;
    auVar18._0_4_ = fVar100;
    auVar18._8_4_ = fVar14;
    auVar18._12_4_ = 0;
    auVar58 = maxps(auVar58,auVar18);
    auVar19._4_4_ = fVar60;
    auVar19._0_4_ = fVar106;
    auVar19._8_4_ = fVar15;
    auVar19._12_4_ = 0;
    auVar52 = minps(auVar52,auVar19);
  }
  cVar21 = *(char *)((longlong)param_2 + 0x54);
LAB_18002ae6c:
  if (cVar21 != '\0') {
    *(int *)(param_2[0xd] + 8) = (int)auVar58._0_8_;
    *(int *)(param_2[0xd] + 0x10) = (int)((ulonglong)auVar58._0_8_ >> 0x20);
    *(int *)(param_2[0xd] + 0xc) = (int)auVar52._0_8_;
    *(int *)(param_2[0xd] + 0x14) = (int)((ulonglong)auVar52._0_8_ >> 0x20);
  }
  return;
}

