/*
 * FUN_18000b36c at 18000b36c
 * undefined8 __fastcall FUN_18000b36c(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 18000b36c-18000ca0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18000b36c(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *extraout_RAX;
  undefined1 *extraout_RAX_00;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  float fVar29;
  double dVar30;
  uint uVar40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  uint uVar45;
  float fVar53;
  uint uVar54;
  float fVar55;
  uint uVar56;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar57;
  undefined1 auVar48 [16];
  float fVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar90;
  float fVar91;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  float fVar94;
  uint uVar95;
  float fVar96;
  uint uVar97;
  float fVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint local_324;
  uint local_320;
  uint local_318 [8];
  float local_2f8 [4];
  uint auStack_2e8 [32];
  uint auStack_268 [32];
  uint auStack_1e8 [32];
  uint auStack_168 [68];
  
  puVar13 = (undefined1 *)register0x00000020;
  if ((DAT_1801173e8 == 0) && (puVar13 = (undefined1 *)FUN_18000b1a0(), DAT_1801173e8 == 0)) {
    uVar14 = (ulonglong)puVar13 & 0xffffffffffffff00;
  }
  else {
    uVar23 = 0;
    auVar81._4_4_ = (uint)local_2f8[1];
    auVar81._0_4_ = (uint)local_2f8[0];
    auVar81._8_4_ = (uint)local_2f8[2];
    auVar81._12_4_ = (uint)local_2f8[3];
    uVar14 = 0;
    auVar88._4_4_ = (uint)local_2f8[1];
    auVar88._0_4_ = (uint)local_2f8[0];
    auVar88._8_4_ = (uint)local_2f8[2];
    auVar88._12_4_ = (uint)local_2f8[3];
    uVar24 = 0;
    uVar27 = 0;
    uVar21 = 0;
    auVar33._4_4_ = local_2f8[1];
    auVar33._0_4_ = local_2f8[0];
    auVar33._8_4_ = local_2f8[2];
    auVar33._12_4_ = local_2f8[3];
    local_320 = 0;
    local_324 = 0;
    bVar11 = false;
    lVar22 = DAT_1801173e8;
    uVar12 = _DAT_180110ac0;
    uVar45 = uRam0000000180110ac4;
    uVar54 = uRam0000000180110ac8;
    uVar56 = uRam0000000180110acc;
    uVar59 = _DAT_180110ab0;
    uVar99 = uRam0000000180110ab4;
    uVar100 = uRam0000000180110ab8;
    uVar101 = uRam0000000180110abc;
    uVar102 = _DAT_180110b10;
    uVar103 = uRam0000000180110b14;
    uVar104 = uRam0000000180110b18;
    uVar105 = uRam0000000180110b1c;
    fVar93 = local_2f8[0];
    fVar94 = local_2f8[1];
    fVar96 = local_2f8[2];
    fVar98 = local_2f8[3];
    do {
      bVar7 = *(byte *)(param_3 + uVar21 * 0x14);
      if (bVar7 == 0xff) break;
      local_318[1] = (int)*(float *)(param_2 + 0x4294);
      local_318[3] = (int)*(float *)(param_2 + 0x429c);
      local_318[0] = (int)*(float *)(param_2 + 0x4290);
      local_318[2] = (int)*(float *)(param_2 + 0x4298);
      iVar28 = (int)uVar23;
      if (iVar28 == 0) {
        uVar25 = 0;
      }
      else {
        puVar13 = (undefined1 *)(ulonglong)(iVar28 - 1);
        uVar25 = auStack_268[(longlong)puVar13];
      }
      if (-1 < (char)bVar7) {
        uVar8 = *(ushort *)(param_3 + 1 + uVar21 * 0x14);
        if (uVar8 != 0xffff) {
          uVar14 = (ulonglong)*(byte *)(param_3 + 0xd + uVar21 * 0x14);
          uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                   local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                   *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
          if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
            uVar20 = 0x426;
          }
          auVar78 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar20 * 0x10);
          uVar20 = auVar78._12_4_;
          if (*(char *)(param_3 + 7 + uVar21 * 0x14) != -0x1c) {
            uVar40 = auVar78._0_4_;
            uVar41 = auVar78._4_4_;
            uVar57 = auVar78._8_4_;
            lVar15 = (ulonglong)*(byte *)(param_3 + 7 + uVar21 * 0x14) * 0x40;
            puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
            auVar77._0_4_ = uVar41 & *puVar3;
            auVar77._4_4_ = uVar41 & puVar3[1];
            auVar77._8_4_ = uVar41 & puVar3[2];
            auVar77._12_4_ = uVar41 & puVar3[3];
            puVar3 = (uint *)(lVar15 + lVar22);
            auVar31._0_4_ = uVar40 & *puVar3;
            auVar31._4_4_ = uVar40 & puVar3[1];
            auVar31._8_4_ = uVar40 & puVar3[2];
            auVar31._12_4_ = uVar40 & puVar3[3];
            puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
            auVar46._0_4_ = uVar57 & *puVar3;
            auVar46._4_4_ = uVar57 & puVar3[1];
            auVar46._8_4_ = uVar57 & puVar3[2];
            auVar46._12_4_ = uVar57 & puVar3[3];
            puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
            auVar78._0_4_ = uVar20 & *puVar3;
            auVar78._4_4_ = uVar20 & puVar3[1];
            auVar78._8_4_ = uVar20 & puVar3[2];
            auVar78._12_4_ = uVar20 & puVar3[3];
            auVar78 = auVar77 | auVar31 | auVar46 | auVar78;
          }
          bVar17 = *(byte *)(param_3 + 10 + uVar21 * 0x14);
          auVar79 = auVar78;
          if ((bVar17 & 2) != 0) {
            auVar79._0_4_ = auVar78._0_4_ & uVar59;
            auVar79._4_4_ = auVar78._4_4_ & uVar99;
            auVar79._8_4_ = auVar78._8_4_ & uVar100;
            auVar79._12_4_ = auVar78._12_4_ & uVar101;
          }
          auVar81 = auVar79;
          if ((bVar17 & 1) != 0) {
            auVar81._0_4_ = auVar79._0_4_ ^ uVar12;
            auVar81._4_4_ = auVar79._4_4_ ^ uVar45;
            auVar81._8_4_ = auVar79._8_4_ ^ uVar54;
            auVar81._12_4_ = auVar79._12_4_ ^ uVar56;
          }
        }
        uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
        if (uVar8 != 0xffff) {
          uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
          uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                   local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                   *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
          if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
            uVar20 = 0x426;
          }
          auVar85 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar20 * 0x10);
          uVar20 = auVar85._12_4_;
          if (*(char *)(param_3 + 8 + uVar21 * 0x14) != -0x1c) {
            uVar40 = auVar85._0_4_;
            uVar41 = auVar85._4_4_;
            uVar57 = auVar85._8_4_;
            lVar15 = (ulonglong)*(byte *)(param_3 + 8 + uVar21 * 0x14) * 0x40;
            puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
            auVar84._0_4_ = uVar41 & *puVar3;
            auVar84._4_4_ = uVar41 & puVar3[1];
            auVar84._8_4_ = uVar41 & puVar3[2];
            auVar84._12_4_ = uVar41 & puVar3[3];
            puVar3 = (uint *)(lVar15 + lVar22);
            auVar32._0_4_ = uVar40 & *puVar3;
            auVar32._4_4_ = uVar40 & puVar3[1];
            auVar32._8_4_ = uVar40 & puVar3[2];
            auVar32._12_4_ = uVar40 & puVar3[3];
            puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
            auVar47._0_4_ = uVar57 & *puVar3;
            auVar47._4_4_ = uVar57 & puVar3[1];
            auVar47._8_4_ = uVar57 & puVar3[2];
            auVar47._12_4_ = uVar57 & puVar3[3];
            puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
            auVar85._0_4_ = uVar20 & *puVar3;
            auVar85._4_4_ = uVar20 & puVar3[1];
            auVar85._8_4_ = uVar20 & puVar3[2];
            auVar85._12_4_ = uVar20 & puVar3[3];
            auVar85 = auVar84 | auVar32 | auVar47 | auVar85;
          }
          bVar17 = *(byte *)(param_3 + 0xb + uVar21 * 0x14);
          auVar86 = auVar85;
          if ((bVar17 & 2) != 0) {
            auVar86._0_4_ = auVar85._0_4_ & uVar59;
            auVar86._4_4_ = auVar85._4_4_ & uVar99;
            auVar86._8_4_ = auVar85._8_4_ & uVar100;
            auVar86._12_4_ = auVar85._12_4_ & uVar101;
          }
          auVar88 = auVar86;
          if ((bVar17 & 1) != 0) {
            auVar88._0_4_ = auVar86._0_4_ ^ uVar12;
            auVar88._4_4_ = auVar86._4_4_ ^ uVar45;
            auVar88._8_4_ = auVar86._8_4_ ^ uVar54;
            auVar88._12_4_ = auVar86._12_4_ ^ uVar56;
          }
        }
        puVar13 = (undefined1 *)0xffff;
        uVar8 = *(ushort *)(param_3 + 5 + uVar21 * 0x14);
        if (uVar8 != 0xffff) {
          uVar14 = (ulonglong)*(byte *)(param_3 + 0xf + uVar21 * 0x14);
          uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                   local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                   *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
          if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
            uVar20 = 0x426;
          }
          lVar15 = (ulonglong)uVar20 * 2;
          pfVar1 = (float *)(param_2 + (ulonglong)uVar20 * 0x10);
          fVar93 = *pfVar1;
          fVar94 = pfVar1[1];
          fVar96 = pfVar1[2];
          fVar98 = pfVar1[3];
          if (*(char *)(param_3 + 9 + uVar21 * 0x14) != -0x1c) {
            lVar15 = (ulonglong)*(byte *)(param_3 + 9 + uVar21 * 0x14) * 0x40;
            puVar4 = (uint *)(lVar15 + 0x10 + lVar22);
            uVar95 = (uint)fVar94 & puVar4[2];
            uVar97 = (uint)fVar94 & puVar4[3];
            puVar3 = (uint *)(lVar15 + lVar22);
            uVar20 = (uint)fVar93 & puVar3[1];
            uVar40 = (uint)fVar93 & puVar3[2];
            uVar41 = (uint)fVar93 & puVar3[3];
            puVar5 = (uint *)(lVar15 + 0x20 + lVar22);
            uVar57 = (uint)fVar96 & puVar5[3];
            puVar6 = (uint *)(lVar15 + 0x30 + lVar22);
            fVar93 = (float)((uint)fVar94 & *puVar4 | (uint)fVar93 & *puVar3 |
                             (uint)fVar96 & *puVar5 | (uint)fVar98 & *puVar6);
            fVar94 = (float)((uint)fVar94 & puVar4[1] | uVar20 | (uint)fVar96 & puVar5[1] |
                            (uint)fVar98 & puVar6[1]);
            fVar96 = (float)(uVar95 | uVar40 | (uint)fVar96 & puVar5[2] | (uint)fVar98 & puVar6[2]);
            fVar98 = (float)(uVar97 | uVar41 | uVar57 | (uint)fVar98 & puVar6[3]);
          }
          bVar17 = *(byte *)(param_3 + 0xc + uVar21 * 0x14);
          puVar13 = (undefined1 *)CONCAT71((int7)((ulonglong)lVar15 >> 8),bVar17);
          if ((bVar17 & 2) != 0) {
            fVar93 = (float)((uint)fVar93 & uVar59);
            fVar94 = (float)((uint)fVar94 & uVar99);
            fVar96 = (float)((uint)fVar96 & uVar100);
            fVar98 = (float)((uint)fVar98 & uVar101);
          }
          if ((bVar17 & 1) != 0) {
            fVar93 = (float)((uint)fVar93 ^ uVar12);
            fVar94 = (float)((uint)fVar94 ^ uVar45);
            fVar96 = (float)((uint)fVar96 ^ uVar54);
            fVar98 = (float)((uint)fVar98 ^ uVar56);
          }
        }
        uVar14 = (ulonglong)local_324;
      }
      bVar17 = bVar7 & 0x7f;
      fVar43 = auVar81._0_4_;
      fVar29 = auVar81._4_4_;
      fVar83 = auVar81._8_4_;
      fVar72 = auVar81._12_4_;
      fVar60 = auVar88._0_4_;
      fVar90 = auVar88._4_4_;
      fVar91 = auVar88._8_4_;
      fVar92 = auVar88._12_4_;
      iVar18 = (int)uVar24;
      auVar73 = auVar33;
      uVar20 = uVar27;
      if (bVar17 < 0x1a) {
        if (bVar17 == 0x19) {
LAB_18000c1dc:
          auStack_1e8[uVar24] = (uint)uVar21;
          uVar24 = (ulonglong)(iVar18 + 1);
          uVar21 = (ulonglong)(*(int *)(param_3 + 4 + uVar21 * 0x14) - 1);
        }
        else if (bVar17 < 0xe) {
          if (bVar17 == 0xd) {
            auVar73._0_8_ =
                 CONCAT44(-(uint)(fVar90 <= fVar29),-(uint)(fVar60 <= fVar43)) & 0x3f8000003f800000;
            auVar73._8_4_ = (float)(-(uint)(fVar91 <= fVar83) & 0x3f800000);
            auVar73._12_4_ = (float)(-(uint)(fVar92 <= fVar72) & 0x3f800000);
          }
          else {
            if (bVar17 < 8) {
              if (bVar17 != 7) {
                if (bVar17 == 1) {
                  puVar13 = (undefined1 *)0x429;
                  auVar73 = auVar81;
                  if (*(short *)(param_3 + 0x11 + uVar21 * 0x14) == 0x429) {
                    auVar73._0_4_ = (float)(int)fVar43;
                    auVar73._4_4_ = (float)(int)fVar29;
                    auVar73._8_4_ = (float)(int)fVar83;
                    auVar73._12_4_ = (float)(int)fVar72;
                  }
                }
                else if (bVar17 == 2) {
                  auVar73._0_4_ = fVar60 + fVar43;
                  auVar73._4_4_ = fVar90 + fVar29;
                  auVar73._8_4_ = fVar91 + fVar83;
                  auVar73._12_4_ = fVar92 + fVar72;
                }
                else if (bVar17 == 4) {
                  auVar73._0_4_ = fVar60 * fVar43 + fVar93;
                  auVar73._4_4_ = fVar90 * fVar29 + fVar94;
                  auVar73._8_4_ = fVar91 * fVar83 + fVar96;
                  auVar73._12_4_ = fVar92 * fVar72 + fVar98;
                }
                else if (bVar17 == 5) {
                  auVar73._0_4_ = fVar60 * fVar43;
                  auVar73._4_4_ = fVar90 * fVar29;
                  auVar73._8_4_ = fVar91 * fVar83;
                  auVar73._12_4_ = fVar92 * fVar72;
                }
                else if (bVar17 == 6) {
                  auVar33 = rcpss(auVar81,auVar81);
                  uVar27 = -(uint)(ABS(auVar33._0_4_) == _DAT_180110b00);
                  auVar73._0_4_ = (float)(~uVar27 & (uint)auVar33._0_4_ | uVar27 & uVar102);
                  auVar73._4_4_ = auVar73._0_4_;
                  auVar73._8_4_ = auVar73._0_4_;
                  auVar73._12_4_ = auVar73._0_4_;
                }
                goto LAB_18000c89e;
              }
              auVar48._12_4_ = ABS(fVar72);
              auVar48._0_8_ = CONCAT44(fVar72,fVar72) & 0x7fffffff7fffffff;
              auVar48._8_4_ = auVar48._12_4_;
              auVar33 = rsqrtss(auVar48,auVar48);
              uVar40 = -(uint)(ABS(auVar33._0_4_) == _DAT_180110b00);
              uVar27 = uVar40 & uVar102;
              uVar40 = ~uVar40 & (uint)auVar33._0_4_;
LAB_18000b86f:
              fVar72 = (float)(uVar40 | uVar27);
            }
            else if (bVar17 == 8) {
              fVar72 = fVar60 * fVar43 + fVar91 * fVar83 + fVar90 * fVar29;
            }
            else {
              if (bVar17 != 9) {
                if (bVar17 == 10) {
                  auVar73 = minps(auVar81,auVar88);
                }
                else if (bVar17 == 0xb) {
                  auVar73 = maxps(auVar81,auVar88);
                }
                else if (bVar17 == 0xc) {
                  auVar73._0_8_ =
                       CONCAT44(-(uint)(fVar29 < fVar90),-(uint)(fVar43 < fVar60)) &
                       0x3f8000003f800000;
                  auVar73._8_4_ = (float)(-(uint)(fVar83 < fVar91) & 0x3f800000);
                  auVar73._12_4_ = (float)(-(uint)(fVar72 < fVar92) & 0x3f800000);
                }
                goto LAB_18000c89e;
              }
              fVar72 = fVar91 * fVar83 + fVar60 * fVar43 + fVar92 * fVar72 + fVar90 * fVar29;
            }
LAB_18000b872:
            auVar73._4_4_ = fVar72;
            auVar73._0_4_ = fVar72;
            auVar73._8_4_ = fVar72;
            auVar73._12_4_ = fVar72;
          }
        }
        else if (bVar17 < 0x14) {
          if (bVar17 == 0x13) {
            fVar44 = (float)(int)fVar43;
            fVar53 = (float)(int)fVar29;
            fVar55 = (float)(int)fVar83;
            fVar58 = (float)(int)fVar72;
            auVar75 = auVar81;
LAB_18000bc09:
            auVar73._0_4_ = auVar75._0_4_ - fVar44;
            auVar73._4_4_ = auVar75._4_4_ - fVar53;
            auVar73._8_4_ = auVar75._8_4_ - fVar55;
            auVar73._12_4_ = auVar75._12_4_ - fVar58;
            goto LAB_18000c89e;
          }
          if (bVar17 == 0xe) {
            uVar40 = (uint)ABS(fVar72);
            uVar27 = 0x400;
            if (uVar40 < 0x401) {
              uVar27 = uVar40;
            }
            puVar13 = *(undefined1 **)(param_1 + 0xd70);
            fVar43 = *(float *)(puVar13 + (ulonglong)uVar27 * 4) *
                     *(float *)(*(longlong *)(param_1 + 0xd68) +
                               (ulonglong)(uint)(int)((ABS(fVar72) - (float)(int)uVar40) * 1024.0) *
                               4);
            auVar33 = rcpss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
            fVar72 = (float)(auVar33._0_4_ & -(uint)(fVar72 < 0.0) |
                            ~-(uint)(fVar72 < 0.0) & (uint)fVar43);
            goto LAB_18000b872;
          }
          if (bVar17 == 0xf) {
            fVar43 = 0.0;
            auVar61._0_4_ = ABS(fVar72);
            auVar61._4_4_ = 0;
            auVar61._8_4_ = ABS(fVar72);
            auVar61._12_4_ = ABS(fVar72);
            bVar26 = auVar61._0_4_ <= 0.0;
            if (0x3f7fffff < ((uint)auVar61._0_4_ & 0x7f800000)) {
              fVar43 = (float)(int)(((int)auVar61._0_4_ >> 0x17) - 0x7e);
              auVar61._0_4_ =
                   auVar61._0_4_ /
                   *(float *)(*(longlong *)(param_1 + 0xd70) + -0x1f8 +
                             (ulonglong)(uint)((int)auVar61._0_4_ >> 0x17) * 4);
            }
            uVar27 = -(uint)bVar26 & 0xff800000;
            iVar18 = (int)(auVar61._0_4_ * 1024.0);
            iVar28 = 0;
            if (-1 < iVar18) {
              iVar28 = iVar18;
            }
            puVar13 = *(undefined1 **)(param_1 + 0xd60);
            uVar40 = ~-(uint)bVar26 & (uint)(fVar43 + *(float *)(puVar13 + (longlong)iVar28 * 4));
            goto LAB_18000b86f;
          }
          if (bVar17 == 0x10) {
            auVar35._4_4_ = -(uint)(0.0 < fVar29);
            auVar35._0_4_ = -(uint)(0.0 < fVar43);
            auVar35._8_4_ = -(uint)(0.0 < fVar83);
            auVar35._12_4_ = -(uint)(0.0 < fVar72);
            uVar40 = movmskps((int)puVar13,auVar35);
            puVar13 = (undefined1 *)(ulonglong)uVar40;
            auVar73 = _DAT_180110b20;
            if (((uVar40 & 1) != 0) &&
               (auVar73 = ZEXT416((uint)fVar43) << 0x20 | _DAT_180110b20, (uVar40 & 2) != 0)) {
              auVar33 = maxps(_DAT_180110b40,auVar81);
              auVar33 = minps(_DAT_180110b30,auVar33);
              fVar72 = auVar33._12_4_;
              uVar20 = (uint)(fVar29 * 1024.0);
              puVar13 = (undefined1 *)(ulonglong)uVar20;
              if (fVar72 == 0.0) {
                fVar43 = 1.0;
              }
              else {
                fVar43 = 0.0;
              }
              if (uVar20 != 0) {
                if ((0x3ff < uVar20) ||
                   (fVar43 = *(float *)(*(longlong *)(param_1 + 0xd60) + (ulonglong)uVar20 * 4) *
                             fVar72, (float)DAT_180107c30 <= ABS(fVar43))) {
                  dVar30 = FUN_1800f9c40((double)fVar29,(double)fVar72);
                  fVar43 = (float)dVar30;
                  puVar13 = extraout_RAX;
                }
                else {
                  iVar28 = (int)fVar43;
                  uVar14 = (ulonglong)(uint)(int)((fVar43 - (float)iVar28) * 1024.0);
                  if (iVar28 < 0) {
                    puVar13 = *(undefined1 **)(param_1 + 0xd68);
                    fVar43 = *(float *)(puVar13 + uVar14 * 4) /
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)-iVar28 * 4);
                  }
                  else {
                    puVar13 = *(undefined1 **)(param_1 + 0xd68);
                    fVar43 = *(float *)(puVar13 + uVar14 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar28 * 4);
                  }
                }
              }
              auVar33 = ZEXT416((uint)fVar43) << 0x40 | auVar73;
              goto LAB_18000bafe;
            }
          }
          else {
            if (bVar17 == 0x11) {
              auVar74._4_4_ = fVar90 * fVar29;
              auVar74._0_4_ = 0x3f800000;
              auVar34._0_12_ = ZEXT812(0);
              auVar34._12_4_ = (uint)fVar92;
              auVar74._8_4_ = (uint)fVar83;
              auVar74._12_4_ = 0;
              goto LAB_18000b9af;
            }
            if (bVar17 == 0x12) {
              auVar73._0_4_ = (fVar60 - fVar93) * fVar43 + fVar93;
              auVar73._4_4_ = (fVar90 - fVar94) * fVar29 + fVar94;
              auVar73._8_4_ = (fVar91 - fVar96) * fVar83 + fVar96;
              auVar73._12_4_ = (fVar92 - fVar98) * fVar72 + fVar98;
            }
          }
        }
        else {
          if (bVar17 == 0x14) {
            uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
            uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
            uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                     local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                     *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
            if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
              uVar20 = 0x426;
            }
            uVar14 = (ulonglong)uVar20;
            pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 1) * 0x10);
            fVar60 = *pfVar1;
            fVar90 = pfVar1[1];
            fVar91 = pfVar1[2];
            pfVar2 = (float *)(param_2 + uVar14 * 0x10);
            auVar70._0_4_ = *pfVar2 * fVar43;
            auVar70._4_4_ = pfVar2[1] * fVar29;
            auVar70._8_4_ = pfVar2[2] * fVar83;
            auVar70._12_4_ = pfVar2[3] * fVar72;
            fVar42 = pfVar1[3] * fVar72;
            pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 2) * 0x10);
            fVar92 = *pfVar1;
            fVar44 = pfVar1[1];
            fVar53 = pfVar1[2];
            fVar68 = pfVar1[3] * fVar72;
            pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 3) * 0x10);
            fVar55 = *pfVar1;
            fVar58 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar72 = pfVar1[3] * fVar72;
LAB_18000be53:
            puVar13 = (undefined1 *)(uVar14 * 2);
            auVar33._0_4_ = auVar70._12_4_ + auVar70._4_4_ + auVar70._8_4_ + auVar70._0_4_;
            auVar33._4_4_ = fVar42 + fVar90 * fVar29 + fVar91 * fVar83 + fVar60 * fVar43;
            auVar33._8_4_ = fVar68 + fVar44 * fVar29 + fVar53 * fVar83 + fVar92 * fVar43;
            auVar33._12_4_ = fVar72 + fVar58 * fVar29 + fVar10 * fVar83 + fVar55 * fVar43;
          }
          else {
            if (bVar17 == 0x15) {
              uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
              uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
              uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                       local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                       *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
              if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
                uVar20 = 0x426;
              }
              uVar14 = (ulonglong)uVar20;
              pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 1) * 0x10);
              fVar60 = *pfVar1;
              fVar90 = pfVar1[1];
              fVar91 = pfVar1[2];
              pfVar2 = (float *)(param_2 + uVar14 * 0x10);
              auVar69._0_4_ = *pfVar2 * fVar43;
              auVar69._4_4_ = pfVar2[1] * fVar29;
              auVar69._8_4_ = pfVar2[2] * fVar83;
              auVar69._12_4_ = pfVar2[3] * fVar72;
              fVar55 = pfVar1[3] * fVar72;
              pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 2) * 0x10);
              fVar92 = *pfVar1;
              fVar44 = pfVar1[1];
              fVar53 = pfVar1[2];
              fVar72 = pfVar1[3] * fVar72;
            }
            else {
              if (bVar17 == 0x16) {
                uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
                uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
                uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                         local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                         *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
                if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
                  uVar20 = 0x426;
                }
                uVar14 = (ulonglong)uVar20;
                pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 1) * 0x10);
                fVar60 = *pfVar1;
                fVar90 = pfVar1[1];
                fVar91 = pfVar1[2];
                pfVar2 = (float *)(param_2 + uVar14 * 0x10);
                auVar70._0_4_ = *pfVar2 * fVar43;
                auVar70._4_4_ = pfVar2[1] * fVar29;
                auVar70._8_4_ = pfVar2[2] * fVar83;
                auVar70._12_4_ = pfVar2[3] * 0.0;
                fVar42 = pfVar1[3] * 0.0;
                pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 2) * 0x10);
                fVar92 = *pfVar1;
                fVar44 = pfVar1[1];
                fVar53 = pfVar1[2];
                fVar68 = pfVar1[3] * 0.0;
                pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 3) * 0x10);
                fVar55 = *pfVar1;
                fVar58 = pfVar1[1];
                fVar10 = pfVar1[2];
                fVar72 = pfVar1[3] * 0.0;
                goto LAB_18000be53;
              }
              if (bVar17 != 0x17) {
                if (bVar17 == 0x18) {
                  uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
                  uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
                  uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                           local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                           *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
                  if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
                    uVar20 = 0x426;
                  }
                  puVar13 = (undefined1 *)((ulonglong)uVar20 * 2);
                  pfVar1 = (float *)(param_2 + (ulonglong)uVar20 * 0x10);
                  pfVar2 = (float *)(param_2 + (ulonglong)(uVar20 + 1) * 0x10);
                  auVar33._0_4_ =
                       pfVar1[3] * 0.0 + pfVar1[1] * fVar29 + pfVar1[2] * fVar83 + *pfVar1 * fVar43;
                  auVar33._4_4_ =
                       pfVar2[3] * 0.0 + pfVar2[1] * fVar29 + pfVar2[2] * fVar83 + *pfVar2 * fVar43;
                  auVar33._8_4_ = auVar33._0_4_;
                  auVar33._12_4_ = auVar33._0_4_;
                  goto LAB_18000bafe;
                }
                goto LAB_18000c89e;
              }
              uVar14 = (ulonglong)*(byte *)(param_3 + 0xe + uVar21 * 0x14);
              uVar8 = *(ushort *)(param_3 + 3 + uVar21 * 0x14);
              uVar20 = (*(uint *)(&DAT_1800fdac4 + uVar14 * 0xc) & uVar25 |
                       local_318[*(uint *)(&DAT_1800fdac8 + uVar14 * 0xc)] &
                       *(uint *)(&DAT_1800fdac0 + uVar14 * 0xc)) + (uint)uVar8;
              if (((ushort)(uVar8 - 0x26) < 0x401) && (0x3ff < (ulonglong)uVar20 - 0x26)) {
                uVar20 = 0x426;
              }
              uVar14 = (ulonglong)uVar20;
              pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 1) * 0x10);
              fVar60 = *pfVar1;
              fVar90 = pfVar1[1];
              fVar91 = pfVar1[2];
              pfVar2 = (float *)(param_2 + uVar14 * 0x10);
              auVar69._0_4_ = *pfVar2 * fVar43;
              auVar69._4_4_ = pfVar2[1] * fVar29;
              auVar69._8_4_ = pfVar2[2] * fVar83;
              auVar69._12_4_ = pfVar2[3] * 0.0;
              fVar55 = pfVar1[3] * 0.0;
              pfVar1 = (float *)(param_2 + (ulonglong)(uVar20 + 2) * 0x10);
              fVar92 = *pfVar1;
              fVar44 = pfVar1[1];
              fVar53 = pfVar1[2];
              fVar72 = pfVar1[3] * 0.0;
            }
            puVar13 = (undefined1 *)(uVar14 * 2);
            auVar33._0_4_ = auVar69._12_4_ + auVar69._4_4_ + auVar69._8_4_ + auVar69._0_4_;
            auVar33._4_4_ = fVar55 + fVar90 * fVar29 + fVar91 * fVar83 + fVar60 * fVar43;
            auVar33._8_4_ = fVar72 + fVar44 * fVar29 + fVar53 * fVar83 + fVar92 * fVar43;
            auVar33._12_4_ = 0.0;
          }
LAB_18000bafe:
          uVar14 = (ulonglong)local_324;
          auVar73 = auVar33;
          uVar20 = uVar27;
        }
      }
      else if (bVar17 < 0x5f) {
        if (bVar17 == 0x5e) {
          uVar16 = (ulonglong)*(byte *)(param_3 + 9 + uVar21 * 0x14);
          puVar13 = (undefined1 *)(uVar16 * 2);
          lVar15 = uVar16 * 0x10;
          uVar27 = *(uint *)(&DAT_180110b90 + lVar15);
          uVar40 = *(uint *)(lVar15 + 0x180110b94);
          uVar41 = *(uint *)(lVar15 + 0x180110b98);
          auVar73._0_4_ =
               (float)((uVar40 & -(uint)(fVar60 == fVar43) | uVar27 & -(uint)(fVar43 < fVar60)) ^
                      uVar41);
          auVar73._4_4_ =
               (float)((uVar40 & -(uint)(fVar90 == fVar29) | uVar27 & -(uint)(fVar29 < fVar90)) ^
                      uVar41);
          auVar73._8_4_ =
               (float)((uVar40 & -(uint)(fVar91 == fVar83) | uVar27 & -(uint)(fVar83 < fVar91)) ^
                      uVar41);
          auVar73._12_4_ =
               (float)((uVar40 & -(uint)(fVar92 == fVar72) | uVar27 & -(uint)(fVar72 < fVar92)) ^
                      uVar41);
        }
        else {
          puVar13 = (undefined1 *)0x26;
          if (bVar17 < 0x27) {
            if (bVar17 == 0x26) {
              uVar16 = (ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14);
              puVar13 = (undefined1 *)(uVar16 * 2);
              uVar20 = *(uint *)(param_2 + uVar16 * 0x10) & 0xff;
              if (uVar20 == 0) goto LAB_18000c685;
              puVar13 = (undefined1 *)(ulonglong)uVar27;
              auStack_2e8[(longlong)puVar13] = uVar20;
              uVar20 = uVar27 + 1;
            }
            else if (bVar17 < 0x22) {
              if (bVar17 == 0x21) {
                fVar44 = fVar60 * fVar29;
                fVar53 = fVar91 * fVar43;
                fVar55 = fVar90 * fVar83;
                fVar58 = fVar92 * fVar72;
                auVar75._0_4_ = fVar90 * fVar43;
                auVar75._4_4_ = fVar60 * fVar83;
                auVar75._8_4_ = fVar91 * fVar29;
                auVar75._12_4_ = fVar92 * fVar72;
                goto LAB_18000bc09;
              }
              if (bVar17 == 0x1a) {
                bVar26 = *(float *)(param_2 +
                                   ((ulonglong)(*(uint *)(param_3 + 0xc + uVar21 * 0x14) & 3) +
                                   (ulonglong)*(ushort *)(param_3 + 0x12 + uVar21 * 0x14) * 4) * 4)
                         != 0.0;
                puVar13 = (undefined1 *)(ulonglong)bVar26;
                bVar9 = !bVar26;
                if (*(char *)(param_3 + 1 + uVar21 * 0x14) == '\0') {
                  bVar9 = bVar26;
                }
                if (bVar9) goto LAB_18000c1dc;
              }
              else if (bVar17 == 0x1b) {
                uVar16 = (ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14);
                uVar40 = *(uint *)(param_2 + uVar16 * 0x10) & 0xff;
                if (uVar40 == 0) goto LAB_18000c685;
                uVar20 = uVar27 + 1;
                auStack_2e8[uVar27] = uVar40;
                uVar19 = uVar23 & 0xffffffff;
                uVar23 = (ulonglong)(iVar28 + 1);
                auStack_268[uVar19] = *(uint *)(param_2 + 4 + uVar16 * 0x10);
                uVar27 = *(uint *)(param_2 + 8 + uVar16 * 0x10);
                puVar13 = (undefined1 *)(ulonglong)uVar27;
                uVar16 = (ulonglong)((int)uVar14 + 1);
                auStack_168[uVar14] = uVar27;
LAB_18000c126:
                local_320 = (uint)uVar23;
                local_324 = (uint)uVar16;
                uVar14 = uVar16;
              }
              else if (bVar17 == 0x1c) {
                if (iVar18 == 0) {
                  bVar11 = true;
                }
                else {
                  uVar24 = (ulonglong)(iVar18 - 1);
                  uVar21 = (ulonglong)auStack_1e8[uVar24];
                }
              }
              else {
                if (bVar17 == 0x1d) {
                  uVar16 = (ulonglong)((int)uVar14 - 1);
                  uVar23 = (ulonglong)(iVar28 - 1);
                  auStack_268[uVar23] = auStack_268[uVar23] + auStack_168[uVar16];
                  uVar20 = uVar27 - 1;
                  puVar3 = auStack_2e8 + uVar20;
                  *puVar3 = *puVar3 - 1;
                  if (*puVar3 != 0) {
                    uVar21 = (ulonglong)*(uint *)(param_3 + 4 + uVar21 * 0x14);
                    goto LAB_18000c119;
                  }
                  goto LAB_18000c126;
                }
                if (bVar17 == 0x20) {
                  fVar43 = ABS(fVar43);
                  bVar26 = fVar43 <= 0.0;
                  fVar72 = 0.0;
                  if (0x3f7fffff < ((uint)fVar43 & 0x7f800000)) {
                    uVar20 = (int)fVar43 >> 0x17;
                    fVar43 = fVar43 / *(float *)(*(longlong *)(param_1 + 0xd70) + -0x1f8 +
                                                (ulonglong)uVar20 * 4);
                    fVar72 = (float)(int)(uVar20 - 0x7e);
                  }
                  iVar28 = 0;
                  if (-1 < (int)(fVar43 * 1024.0)) {
                    iVar28 = (int)(fVar43 * 1024.0);
                  }
                  fVar60 = (float)(~-(uint)bVar26 &
                                   (uint)(fVar72 + *(float *)(*(longlong *)(param_1 + 0xd60) +
                                                             (longlong)iVar28 * 4)) |
                                  -(uint)bVar26 & 0xff800000) * fVar60;
                  fVar72 = ABS(fVar60);
                  uVar20 = (uint)fVar72;
                  uVar40 = -(uint)(fVar60 < 0.0);
                  puVar13 = (undefined1 *)0x400;
                  if (uVar20 < 0x401) {
                    puVar13 = (undefined1 *)(ulonglong)uVar20;
                  }
                  fVar72 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)puVar13 * 4) *
                           *(float *)(*(longlong *)(param_1 + 0xd68) +
                                     (ulonglong)(uint)(int)((fVar72 - (float)(int)uVar20) * 1024.0)
                                     * 4);
                  auVar33 = rcpss(ZEXT416((uint)fVar72),ZEXT416((uint)fVar72));
                  auVar33._0_4_ = (float)(auVar33._0_4_ & uVar40 | ~uVar40 & (uint)fVar72);
                  auVar33._4_4_ = auVar33._0_4_;
                  auVar33._8_4_ = auVar33._0_4_;
                  auVar33._12_4_ = auVar33._0_4_;
                  goto LAB_18000bafe;
                }
              }
            }
            else if (bVar17 == 0x22) {
              auVar74._0_8_ =
                   CONCAT44(-(uint)(0.0 < fVar29),-(uint)(0.0 < fVar43)) & 0x3f8000003f800000;
              auVar74._8_4_ = -(uint)(0.0 < fVar83) & 0x3f800000;
              auVar74._12_4_ = -(uint)(0.0 < fVar72) & 0x3f800000;
              auVar34._0_8_ =
                   CONCAT44(-(uint)(fVar29 < 0.0),-(uint)(fVar43 < 0.0)) & 0xbf800000bf800000;
              auVar34._8_4_ = -(uint)(fVar83 < 0.0) & 0xbf800000;
              auVar34._12_4_ = -(uint)(fVar72 < 0.0) & 0xbf800000;
LAB_18000b9af:
              auVar73 = auVar74 | auVar34;
            }
            else if (bVar17 == 0x23) {
              auVar73._0_8_ = auVar81._0_8_ & 0x7fffffff7fffffff;
              auVar73._8_4_ = ABS(fVar83);
              auVar73._12_4_ = ABS(fVar72);
            }
            else {
              if (bVar17 == 0x24) {
                auVar62._0_4_ = fVar43 * fVar43 + fVar83 * fVar83 + fVar29 * fVar29;
                auVar62._4_4_ = auVar62._0_4_;
                auVar62._8_4_ = auVar62._0_4_;
                auVar62._12_4_ = auVar62._0_4_;
                auVar33 = divps(auVar81,auVar62);
                auVar74._0_4_ = auVar33._0_4_ & -(uint)(0.0 < auVar62._0_4_);
                auVar74._4_4_ = (float)(auVar33._4_4_ & -(uint)(0.0 < auVar62._0_4_));
                auVar74._8_4_ = auVar33._8_4_ & -(uint)(0.0 < auVar62._0_4_);
                auVar74._12_4_ = auVar33._12_4_ & -(uint)(0.0 < auVar62._0_4_);
                auVar34._0_4_ = ~-(uint)(0.0 < auVar62._0_4_) & uVar102;
                auVar34._4_4_ = ~-(uint)(0.0 < auVar62._0_4_) & uVar103;
                auVar34._8_4_ = ~-(uint)(0.0 < auVar62._0_4_) & uVar104;
                auVar34._12_4_ = ~-(uint)(0.0 < auVar62._0_4_) & uVar105;
                goto LAB_18000b9af;
              }
              if (bVar17 == 0x25) {
                fVar72 = FUN_1800fbc58(fVar43);
                fVar60 = FUN_1800fbc88(fVar43);
                fVar29 = FUN_1800fbc58(fVar43);
                fVar43 = FUN_1800fbc88(fVar43);
                auVar33._4_4_ = fVar29;
                auVar33._0_4_ = fVar43;
                auVar33._12_4_ = fVar72;
                auVar33._8_4_ = fVar60;
                puVar13 = extraout_RAX_00;
                lVar22 = DAT_1801173e8;
                uVar12 = _DAT_180110ac0;
                uVar45 = uRam0000000180110ac4;
                uVar54 = uRam0000000180110ac8;
                uVar56 = uRam0000000180110acc;
                uVar59 = _DAT_180110ab0;
                uVar99 = uRam0000000180110ab4;
                uVar100 = uRam0000000180110ab8;
                uVar101 = uRam0000000180110abc;
                uVar102 = _DAT_180110b10;
                uVar103 = uRam0000000180110b14;
                uVar104 = uRam0000000180110b18;
                uVar105 = uRam0000000180110b1c;
LAB_18000c119:
                uVar23 = (ulonglong)local_320;
                goto LAB_18000bafe;
              }
            }
          }
          else if (bVar17 == 0x27) {
            puVar3 = auStack_2e8 + (uVar27 - 1);
            *puVar3 = *puVar3 - 1;
            uVar20 = uVar27 - 1;
            if (*puVar3 != 0) goto LAB_18000c685;
          }
          else {
            if (bVar17 == 0x28) {
              bVar9 = *(float *)(param_2 +
                                ((ulonglong)(*(uint *)(param_3 + 8 + uVar21 * 0x14) & 3) +
                                (ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14) * 4) * 4) !=
                      0.0;
              puVar13 = (undefined1 *)(ulonglong)bVar9;
              bVar26 = !bVar9;
              if (*(char *)(param_3 + 1 + uVar21 * 0x14) == '\0') {
                bVar26 = bVar9;
              }
              bVar26 = !bVar26;
            }
            else if (bVar17 == 0x29) {
              auVar81 = *(undefined1 (*) [16])
                         (param_2 + (ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14) * 0x10);
              uVar40 = auVar81._12_4_;
              if (*(char *)(param_3 + 8 + uVar21 * 0x14) != -0x1c) {
                uVar41 = auVar81._0_4_;
                uVar57 = auVar81._4_4_;
                uVar95 = auVar81._8_4_;
                lVar15 = (ulonglong)*(byte *)(param_3 + 8 + uVar21 * 0x14) * 0x40;
                puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
                auVar82._0_4_ = uVar57 & *puVar3;
                auVar82._4_4_ = uVar57 & puVar3[1];
                auVar82._8_4_ = uVar57 & puVar3[2];
                auVar82._12_4_ = uVar57 & puVar3[3];
                puVar3 = (uint *)(lVar15 + lVar22);
                auVar38._0_4_ = uVar41 & *puVar3;
                auVar38._4_4_ = uVar41 & puVar3[1];
                auVar38._8_4_ = uVar41 & puVar3[2];
                auVar38._12_4_ = uVar41 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
                auVar51._0_4_ = uVar95 & *puVar3;
                auVar51._4_4_ = uVar95 & puVar3[1];
                auVar51._8_4_ = uVar95 & puVar3[2];
                auVar51._12_4_ = uVar95 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
                auVar66._0_4_ = uVar40 & *puVar3;
                auVar66._4_4_ = uVar40 & puVar3[1];
                auVar66._8_4_ = uVar40 & puVar3[2];
                auVar66._12_4_ = uVar40 & puVar3[3];
                auVar81 = auVar82 | auVar38 | auVar51 | auVar66;
              }
              auVar88 = *(undefined1 (*) [16])
                         (param_2 + (ulonglong)*(ushort *)(param_3 + 0x12 + uVar21 * 0x14) * 0x10);
              uVar40 = auVar88._12_4_;
              if (*(char *)(param_3 + 0xc + uVar21 * 0x14) != -0x1c) {
                uVar41 = auVar88._0_4_;
                uVar57 = auVar88._4_4_;
                uVar95 = auVar88._8_4_;
                lVar15 = (ulonglong)*(byte *)(param_3 + 0xc + uVar21 * 0x14) * 0x40;
                puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
                auVar89._0_4_ = uVar57 & *puVar3;
                auVar89._4_4_ = uVar57 & puVar3[1];
                auVar89._8_4_ = uVar57 & puVar3[2];
                auVar89._12_4_ = uVar57 & puVar3[3];
                puVar3 = (uint *)(lVar15 + lVar22);
                auVar39._0_4_ = uVar41 & *puVar3;
                auVar39._4_4_ = uVar41 & puVar3[1];
                auVar39._8_4_ = uVar41 & puVar3[2];
                auVar39._12_4_ = uVar41 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
                auVar52._0_4_ = uVar95 & *puVar3;
                auVar52._4_4_ = uVar95 & puVar3[1];
                auVar52._8_4_ = uVar95 & puVar3[2];
                auVar52._12_4_ = uVar95 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
                auVar67._0_4_ = uVar40 & *puVar3;
                auVar67._4_4_ = uVar40 & puVar3[1];
                auVar67._8_4_ = uVar40 & puVar3[2];
                auVar67._12_4_ = uVar40 & puVar3[3];
                auVar88 = auVar89 | auVar39 | auVar52 | auVar67;
              }
              lVar15 = (ulonglong)*(byte *)(param_3 + 2 + uVar21 * 0x14) * 0x10;
              uVar40 = *(uint *)(&DAT_180110b90 + lVar15);
              uVar41 = *(uint *)(lVar15 + 0x180110b94);
              uVar57 = *(uint *)(lVar15 + 0x180110b98);
              puVar13 = (undefined1 *)(ulonglong)(*(uint *)(param_3 + 8 + uVar21 * 0x14) & 3);
              local_2f8[0] = (float)((uVar41 & -(uint)(auVar88._0_4_ == auVar81._0_4_) |
                                     uVar40 & -(uint)(auVar81._0_4_ < auVar88._0_4_)) ^ uVar57);
              local_2f8[1] = (float)((uVar41 & -(uint)(auVar88._4_4_ == auVar81._4_4_) |
                                     uVar40 & -(uint)(auVar81._4_4_ < auVar88._4_4_)) ^ uVar57);
              local_2f8[2] = (float)((uVar41 & -(uint)(auVar88._8_4_ == auVar81._8_4_) |
                                     uVar40 & -(uint)(auVar81._8_4_ < auVar88._8_4_)) ^ uVar57);
              local_2f8[3] = (float)((uVar41 & -(uint)(auVar88._12_4_ == auVar81._12_4_) |
                                     uVar40 & -(uint)(auVar81._12_4_ < auVar88._12_4_)) ^ uVar57);
              bVar26 = local_2f8[(longlong)puVar13] == 0.0;
            }
            else {
              if ((bVar17 == 0x2a) || (bVar17 == 0x2c)) goto LAB_18000c685;
              if (bVar17 != 0x2d) {
                if (bVar17 == 0x2e) {
                  auVar73._0_4_ = (float)(int)fVar43;
                  auVar73._4_4_ = (float)(int)fVar29;
                  auVar73._8_4_ = (float)(int)fVar83;
                  auVar73._12_4_ = (float)(int)fVar72;
                }
                else {
                  if (bVar17 == 0x4e) {
                    iVar28 = (int)fVar72;
                    if (fVar72 < 0.0) {
                      iVar28 = (int)fVar72 + -1;
                    }
                    fVar43 = (float)iVar28;
                    uVar40 = (uint)ABS(fVar43);
                    uVar20 = 0x400;
                    if (uVar40 < 0x401) {
                      uVar20 = uVar40;
                    }
                    fVar60 = *(float *)(*(longlong *)(param_1 + 0xd70) + (ulonglong)uVar20 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) +
                                       (ulonglong)
                                       (uint)(int)((ABS(fVar43) - (float)(int)uVar40) * 1024.0) * 4)
                    ;
                    auVar33 = rcpss(ZEXT416((uint)fVar60),ZEXT416((uint)fVar60));
                    auVar33._0_4_ =
                         (float)(auVar33._0_4_ & -(uint)(fVar43 < 0.0) |
                                ~-(uint)(fVar43 < 0.0) & (uint)fVar60);
                    uVar20 = (uint)ABS(fVar72);
                    auVar33._4_4_ = fVar72 - fVar43;
                    puVar13 = (undefined1 *)0x400;
                    if (uVar20 < 0x401) {
                      puVar13 = (undefined1 *)(ulonglong)uVar20;
                    }
                    fVar43 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)puVar13 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) +
                                       (ulonglong)
                                       (uint)(int)((ABS(fVar72) - (float)(int)uVar20) * 1024.0) * 4)
                    ;
                    auVar78 = rcpss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
                    auVar33._12_4_ = 1.0;
                    auVar33._8_4_ =
                         (float)(auVar78._0_4_ & -(uint)(fVar72 < 0.0) |
                                ~-(uint)(fVar72 < 0.0) & (uint)fVar43);
                    goto LAB_18000bafe;
                  }
                  if (bVar17 == 0x4f) {
                    fVar60 = 0.0;
                    fVar29 = ABS(fVar72);
                    auVar63._0_8_ = CONCAT44(fVar72,fVar72) & 0x7fffffff7fffffff;
                    auVar63._8_4_ = ABS(fVar72);
                    auVar63._12_4_ = ABS(fVar72);
                    bVar26 = auVar63._8_4_ <= 0.0;
                    bVar9 = auVar63._12_4_ <= 0.0;
                    if (0x3f7fffff < ((uint)fVar29 & 0x7f800000)) {
                      fVar60 = (float)(int)(((int)fVar29 >> 0x17) - 0x7e);
                      auVar63._0_4_ =
                           fVar29 / *(float *)(*(longlong *)(param_1 + 0xd70) + -0x1f8 +
                                              (ulonglong)(uint)((int)fVar29 >> 0x17) * 4);
                    }
                    iVar18 = (int)(auVar63._0_4_ * 1024.0);
                    iVar28 = 0;
                    if (-1 < iVar18) {
                      iVar28 = iVar18;
                    }
                    puVar13 = *(undefined1 **)(param_1 + 0xd60);
                    auVar71._0_4_ = -(uint)(fVar29 <= 0.0) & _DAT_180110af0;
                    auVar71._4_4_ = -(uint)(ABS(fVar72) <= 0.0) & uRam0000000180110af4;
                    auVar71._8_4_ = -(uint)bVar26 & uRam0000000180110af8;
                    auVar71._12_4_ = -(uint)bVar9 & uRam0000000180110afc;
                    auVar76._0_4_ =
                         ~-(uint)(fVar29 <= 0.0) & (uint)(float)(((uint)fVar43 >> 0x17) - 0x7f);
                    auVar76._4_4_ =
                         ~-(uint)(ABS(fVar72) <= 0.0) & ((uint)fVar43 & 0x7fffff | 0x3f800000);
                    auVar76._8_4_ =
                         ~-(uint)bVar26 &
                         (~-(uint)(fVar29 <= 0.0) &
                          (uint)(fVar60 + *(float *)(puVar13 + (longlong)iVar28 * 4)) |
                         -(uint)(fVar29 <= 0.0) & 0xff800000);
                    auVar76._12_4_ = ~-(uint)bVar9 & 0x3f800000;
                    auVar73 = auVar76 | auVar71;
                  }
                }
                goto LAB_18000c89e;
              }
              auVar81 = *(undefined1 (*) [16])
                         (param_2 + (ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14) * 0x10);
              uVar40 = auVar81._12_4_;
              if (*(char *)(param_3 + 8 + uVar21 * 0x14) != -0x1c) {
                uVar41 = auVar81._0_4_;
                uVar57 = auVar81._4_4_;
                uVar95 = auVar81._8_4_;
                lVar15 = (ulonglong)*(byte *)(param_3 + 8 + uVar21 * 0x14) * 0x40;
                puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
                auVar80._0_4_ = uVar57 & *puVar3;
                auVar80._4_4_ = uVar57 & puVar3[1];
                auVar80._8_4_ = uVar57 & puVar3[2];
                auVar80._12_4_ = uVar57 & puVar3[3];
                puVar3 = (uint *)(lVar15 + lVar22);
                auVar36._0_4_ = uVar41 & *puVar3;
                auVar36._4_4_ = uVar41 & puVar3[1];
                auVar36._8_4_ = uVar41 & puVar3[2];
                auVar36._12_4_ = uVar41 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
                auVar49._0_4_ = uVar95 & *puVar3;
                auVar49._4_4_ = uVar95 & puVar3[1];
                auVar49._8_4_ = uVar95 & puVar3[2];
                auVar49._12_4_ = uVar95 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
                auVar64._0_4_ = uVar40 & *puVar3;
                auVar64._4_4_ = uVar40 & puVar3[1];
                auVar64._8_4_ = uVar40 & puVar3[2];
                auVar64._12_4_ = uVar40 & puVar3[3];
                auVar81 = auVar80 | auVar36 | auVar49 | auVar64;
              }
              auVar88 = *(undefined1 (*) [16])
                         (param_2 + (ulonglong)*(ushort *)(param_3 + 0x12 + uVar21 * 0x14) * 0x10);
              uVar40 = auVar88._12_4_;
              if (*(char *)(param_3 + 0xc + uVar21 * 0x14) != -0x1c) {
                uVar41 = auVar88._0_4_;
                uVar57 = auVar88._4_4_;
                uVar95 = auVar88._8_4_;
                lVar15 = (ulonglong)*(byte *)(param_3 + 0xc + uVar21 * 0x14) * 0x40;
                puVar3 = (uint *)(lVar15 + 0x10 + lVar22);
                auVar87._0_4_ = uVar57 & *puVar3;
                auVar87._4_4_ = uVar57 & puVar3[1];
                auVar87._8_4_ = uVar57 & puVar3[2];
                auVar87._12_4_ = uVar57 & puVar3[3];
                puVar3 = (uint *)(lVar15 + lVar22);
                auVar37._0_4_ = uVar41 & *puVar3;
                auVar37._4_4_ = uVar41 & puVar3[1];
                auVar37._8_4_ = uVar41 & puVar3[2];
                auVar37._12_4_ = uVar41 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x20 + lVar22);
                auVar50._0_4_ = uVar95 & *puVar3;
                auVar50._4_4_ = uVar95 & puVar3[1];
                auVar50._8_4_ = uVar95 & puVar3[2];
                auVar50._12_4_ = uVar95 & puVar3[3];
                puVar3 = (uint *)(lVar15 + 0x30 + lVar22);
                auVar65._0_4_ = uVar40 & *puVar3;
                auVar65._4_4_ = uVar40 & puVar3[1];
                auVar65._8_4_ = uVar40 & puVar3[2];
                auVar65._12_4_ = uVar40 & puVar3[3];
                auVar88 = auVar87 | auVar37 | auVar50 | auVar65;
              }
              lVar15 = (ulonglong)*(byte *)(param_3 + 2 + uVar21 * 0x14) * 0x10;
              uVar40 = *(uint *)(&DAT_180110b90 + lVar15);
              uVar41 = *(uint *)(lVar15 + 0x180110b94);
              uVar57 = *(uint *)(lVar15 + 0x180110b98);
              puVar13 = (undefined1 *)(ulonglong)(*(uint *)(param_3 + 8 + uVar21 * 0x14) & 3);
              local_2f8[0] = (float)((uVar40 & -(uint)(auVar81._0_4_ < auVar88._0_4_) |
                                     uVar41 & -(uint)(auVar88._0_4_ == auVar81._0_4_)) ^ uVar57);
              local_2f8[1] = (float)((uVar40 & -(uint)(auVar81._4_4_ < auVar88._4_4_) |
                                     uVar41 & -(uint)(auVar88._4_4_ == auVar81._4_4_)) ^ uVar57);
              local_2f8[2] = (float)((uVar40 & -(uint)(auVar81._8_4_ < auVar88._8_4_) |
                                     uVar41 & -(uint)(auVar88._8_4_ == auVar81._8_4_)) ^ uVar57);
              local_2f8[3] = (float)((uVar40 & -(uint)(auVar81._12_4_ < auVar88._12_4_) |
                                     uVar41 & -(uint)(auVar88._12_4_ == auVar81._12_4_)) ^ uVar57);
              bVar26 = local_2f8[(longlong)puVar13] == 0.0;
            }
LAB_18000c67f:
            auVar73 = auVar33;
            if (!bVar26) {
LAB_18000c685:
              uVar21 = (ulonglong)*(uint *)(param_3 + 4 + uVar21 * 0x14);
              auVar73 = auVar33;
              uVar20 = uVar27;
            }
          }
        }
      }
      else {
        auVar73 = _DAT_180107ba0;
        if ((bVar17 != 0x5f) && (auVar73 = auVar33, bVar17 == 0x60)) {
          puVar13 = (undefined1 *)(ulonglong)*(ushort *)(param_3 + 0x10 + uVar21 * 0x14);
          lVar15 = (ulonglong)(*(uint *)(param_3 + 8 + uVar21 * 0x14) & 3) + (longlong)puVar13 * 4;
          if (*(char *)(param_3 + 1 + uVar21 * 0x14) == '\0') {
            bVar26 = *(int *)(param_2 + lVar15 * 4) == 0;
            goto LAB_18000c67f;
          }
          if (*(int *)(param_2 + lVar15 * 4) == 0) goto LAB_18000c685;
        }
      }
LAB_18000c89e:
      uVar27 = uVar20;
      if (-1 < (char)bVar7) {
        uVar8 = *(ushort *)(param_3 + 0x11 + uVar21 * 0x14);
        uVar12 = (uint)uVar8;
        if ((short)uVar8 < 0) {
          uVar12 = (uVar8 & 0x7fff) + uVar25;
        }
        lVar15 = (ulonglong)*(byte *)(param_3 + 0x10 + uVar21 * 0x14) * 0x10;
        uVar45 = *(uint *)(&DAT_1801109b0 + lVar15);
        uVar54 = *(uint *)(lVar15 + 0x1801109b4);
        uVar56 = *(uint *)(lVar15 + 0x1801109b8);
        uVar59 = *(uint *)(lVar15 + 0x1801109bc);
        bVar7 = *(byte *)(param_3 + 0x13 + uVar21 * 0x14);
        puVar13 = (undefined1 *)(ulonglong)bVar7;
        if (bVar7 != 0xc3) {
          uVar99 = *(uint *)(param_2 + 0x42a0);
          uVar100 = *(uint *)(param_2 + 0x42a4);
          uVar101 = *(uint *)(param_2 + 0x42a8);
          uVar102 = *(uint *)(param_2 + 0x42ac);
          uVar20 = (uint)bVar7;
          uVar103 = uVar99;
          uVar104 = uVar99;
          uVar105 = uVar99;
          uVar25 = uVar99;
          if ((bVar7 != 0) &&
             ((uVar20 == 2 ||
              ((uVar103 = uVar100, uVar104 = uVar100, uVar105 = uVar100, uVar25 = uVar100,
               uVar20 != 0x55 &&
               ((uVar20 == 0x57 ||
                ((uVar103 = uVar101, uVar104 = uVar101, uVar105 = uVar101, uVar25 = uVar101,
                 uVar20 != 0xaa &&
                 (((uVar20 == 0xac || (uVar25 = uVar99, uVar20 == 0xe6)) ||
                  ((uVar103 = uVar102, uVar104 = uVar102, uVar105 = uVar102, uVar25 = uVar102,
                   uVar20 != 0xff &&
                   (uVar103 = uVar99, uVar104 = uVar100, uVar105 = uVar101, uVar20 == 0x101)))))))))
               ))))) {
            uVar103 = uVar25 ^ 0xffffffff;
            uVar104 = uVar25 ^ 0xffffffff;
            uVar105 = uVar25 ^ 0xffffffff;
            uVar25 = uVar25 ^ 0xffffffff;
          }
          uVar45 = uVar103 & uVar45;
          uVar54 = uVar104 & uVar54;
          uVar56 = uVar105 & uVar56;
          uVar59 = uVar25 & uVar59;
        }
        puVar3 = (uint *)(param_2 + (ulonglong)uVar12 * 0x10);
        uVar99 = puVar3[1];
        uVar100 = puVar3[2];
        uVar101 = puVar3[3];
        puVar4 = (uint *)(param_2 + (ulonglong)uVar12 * 0x10);
        *puVar4 = ~uVar45 & *puVar3 | uVar45 & auVar73._0_4_;
        puVar4[1] = ~uVar54 & uVar99 | uVar54 & auVar73._4_4_;
        puVar4[2] = ~uVar56 & uVar100 | uVar56 & auVar73._8_4_;
        puVar4[3] = ~uVar59 & uVar101 | uVar59 & auVar73._12_4_;
        uVar12 = _DAT_180110ac0;
        uVar45 = uRam0000000180110ac4;
        uVar54 = uRam0000000180110ac8;
        uVar56 = uRam0000000180110acc;
        uVar59 = _DAT_180110ab0;
        uVar99 = uRam0000000180110ab4;
        uVar100 = uRam0000000180110ab8;
        uVar101 = uRam0000000180110abc;
        uVar102 = _DAT_180110b10;
        uVar103 = uRam0000000180110b14;
        uVar104 = uRam0000000180110b18;
        uVar105 = uRam0000000180110b1c;
      }
      uVar21 = (ulonglong)((int)uVar21 + 1);
      auVar33 = auVar73;
    } while (!bVar11);
    uVar14 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
  }
  return uVar14;
}

