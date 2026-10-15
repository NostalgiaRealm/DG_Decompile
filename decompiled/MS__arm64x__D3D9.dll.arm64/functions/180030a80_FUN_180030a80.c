/*
 * FUN_180030a80 at 180030a80
 * undefined FUN_180030a80(void)
 * Address ranges: 180030a80-180031c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180030a80(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,ulonglong param_5,
             undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  short sVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  short *psVar16;
  uint *puVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  char cVar26;
  ulonglong uVar27;
  uint *puVar28;
  ulonglong uVar29;
  uint *puVar30;
  uint *puVar31;
  uint extraout_w14;
  char cVar32;
  char cVar33;
  longlong lVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined8 local_660;
  undefined4 local_650;
  undefined1 uStack_64c;
  undefined1 uStack_64b;
  char cStack_64a;
  undefined1 uStack_649;
  byte bStack_648;
  undefined1 uStack_647;
  undefined1 uStack_646;
  undefined1 uStack_645;
  undefined1 uStack_644;
  undefined1 uStack_643;
  char cStack_642;
  undefined1 uStack_641;
  undefined8 local_640;
  undefined8 local_638;
  undefined2 local_630;
  byte local_62e;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined1 local_608;
  longlong local_600;
  longlong lStack_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined4 local_5e0;
  uint local_5dc;
  undefined8 local_5d8;
  longlong local_5d0;
  longlong lStack_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  longlong local_5b0;
  undefined4 local_5a0;
  uint uStack_59c;
  uint local_598;
  undefined1 *local_570;
  undefined2 local_568;
  uint local_560;
  undefined8 local_55c;
  undefined8 uStack_554;
  undefined8 uStack_54c;
  undefined8 uStack_544;
  undefined2 local_53c;
  byte local_53a;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulonglong local_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined1 auStack_4e8 [64];
  undefined2 local_4a8;
  undefined1 local_4a6;
  undefined1 *local_4a0;
  ulonglong local_388 [16];
  int local_308 [10];
  ulonglong local_2e0;
  char local_2d8;
  uint local_2d4;
  uint local_2d0 [5];
  undefined4 local_2bc [4];
  undefined4 local_2ac [4];
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  uint local_288 [6];
  undefined4 local_270;
  undefined4 uStack_26c;
  int local_260;
  undefined4 uStack_25c;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_6f;
  
  local_5c0 = 0x100;
  local_5b8 = 1;
  local_5d8 = 0;
  local_5dc = param_3;
  local_5b0 = param_2;
  local_5d0 = thunk_FUN_180102f80(0x100);
  uVar12 = *(undefined1 *)(param_1 + 0x44);
  puVar35 = *(undefined1 **)(param_1 + -8);
  lVar37 = *(longlong *)(param_1 + 0x50);
  lStack_5c8 = local_5d0;
  uVar15 = func_0x000180222c50(&local_5a0,0,0x550);
  local_570 = auStack_4e8;
  local_650._0_1_ = puVar35[0x144];
  local_568 = 0x40;
  local_4f8 = 0x41040000110400;
  local_4f0 = 0x20000d00;
  uStack_530 = 0x11080300210803;
  uStack_538 = 0x31080300410803;
  bVar7 = puVar35[0x126d];
  uStack_520 = 0x11080400210804;
  uStack_528 = 0x31080400410804;
  uStack_510 = 0x11080500210805;
  local_518 = 0x31080500410805;
  uStack_500 = 0x11080000210800;
  uStack_508 = 0x31080000410800;
  uVar36 = param_4 >> 0x39 & 1;
  local_560 = (uint)CONCAT11(bVar7,puVar35[0x126e]);
  uStack_643 = puVar35[0x145];
  bStack_648 = 0;
  uStack_647 = 0;
  uStack_646 = 0;
  uStack_645 = 0;
  uStack_644 = 0;
  local_650._1_1_ = 0;
  local_650._2_1_ = 0;
  local_650._3_1_ = 0;
  uStack_64c = 0;
  uStack_64b = 0;
  cStack_64a = '\0';
  uStack_649 = 0;
  local_638 = 0;
  local_640 = 0;
  if (uVar36 != 0) {
    uVar27 = param_4 >> 0x3a & 3;
    if (uVar27 - 1 < 3) {
      local_650._0_1_ = (byte)local_650 | 0xc;
    }
    else if (uVar27 == 0) {
      uStack_64c = 1;
    }
  }
  local_630 = 0;
  uVar1 = 0xf;
  if ((param_4 >> 0x38 & 1) == 0) {
    uVar1 = local_650._1_1_;
  }
  local_62e = (byte)(param_4 >> 0x30) & 1;
  local_650._1_1_ = uVar1;
  local_5a0 = param_6;
  if (bVar7 < 3) {
    local_650._2_1_ = *puVar35;
    local_650._3_1_ = puVar35[1];
    uStack_64b = puVar35[0x2a];
    cStack_64a = puVar35[0x2b];
    uStack_649 = puVar35[0x2c];
    bStack_648 = puVar35[0x2d];
    uStack_647 = puVar35[0x2e];
    uStack_646 = puVar35[0x2f];
    uStack_645 = puVar35[0x30];
    uStack_644 = puVar35[0x31];
  }
  else {
    if ((param_5 == 0) || (puVar35[0x147] != '\0')) {
      uVar27 = 0;
      do {
        if (puVar35[uVar27] != '\0') {
          local_630 = 0x100;
          local_650._2_1_ = 0xf;
          local_650._3_1_ = 0xf;
          uStack_64c = 0xf;
          uStack_64b = 0xf;
          cStack_64a = '\x0f';
          uStack_649 = 0xf;
          bStack_648 = 0xf;
          uStack_647 = 0xf;
          uStack_646 = 0xf;
          uStack_645 = 0xf;
          uStack_644 = 0xf;
          break;
        }
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
      } while (uVar25 < 10);
    }
    else {
      uVar27 = 0;
      do {
        uVar29 = param_5 >> ((uVar27 & 0xf) << 2);
        if ((uVar29 & 0xf) != 0) {
          *(undefined1 *)((longlong)&local_650 + (ulonglong)(((uint)uVar29 & 0xf) + 1)) =
               puVar35[uVar27];
        }
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
      } while (uVar25 < 10);
    }
    uVar27 = 0;
    do {
      uVar29 = param_5 >> ((uVar27 & 0xf) << 2);
      uVar25 = (uint)uVar27;
      if ((uVar29 & 0xf) != 0) {
        *(bool *)((longlong)&local_640 + (ulonglong)(((uint)uVar29 & 0xf) + 1) + 3) =
             ((byte)puVar35[(longlong)((int)uVar25 >> 3) + 0x140] >> (ulonglong)(uVar25 & 7) & 1) !=
             0;
      }
      uVar27 = (ulonglong)(uVar25 + 1);
    } while (uVar25 + 1 < 10);
  }
  uVar9 = local_640;
  lVar34 = 10;
  if (bVar7 != 1) {
    lVar34 = 0x14b;
  }
  cVar26 = puVar35[lVar34];
  bVar11 = cVar26 == '\0';
  cVar32 = !bVar11;
  cStack_642 = -bVar11;
  uStack_641 = !bVar11;
  if (puVar35[0x14c] == '\0') {
    cVar33 = uStack_641;
    uStack_641 = 0xff;
  }
  else {
    cVar32 = '\x01';
    if (cVar26 != '\0') {
      cVar32 = '\x02';
    }
    cVar33 = '\x01';
    if (cVar26 != '\0') {
      cVar33 = '\x02';
    }
  }
  if (puVar35[0x14d] == '\0') {
    cVar33 = -1;
  }
  else {
    cVar32 = cVar33 + '\x01';
  }
  if (puVar35[0x14e] == '\0') {
    cVar23 = -1;
    cVar26 = cVar32;
  }
  else {
    cVar26 = cVar32 + '\x01';
    cVar23 = cVar32;
  }
  if (puVar35[0x330] == '\0') {
    cVar26 = -1;
  }
  local_640._3_5_ = SUB85(uVar9,3);
  local_640._0_3_ = CONCAT12(cVar26,CONCAT11(cVar23,cVar33));
  uStack_554 = CONCAT17(uStack_641,
                        CONCAT16(cStack_642,
                                 CONCAT15(uStack_643,
                                          CONCAT14(uStack_644,
                                                   CONCAT13(uStack_645,
                                                            CONCAT12(uStack_646,
                                                                     CONCAT11(uStack_647,bStack_648)
                                                                    ))))));
  local_55c = CONCAT17(uStack_649,
                       CONCAT16(cStack_64a,
                                CONCAT15(uStack_64b,
                                         CONCAT14(uStack_64c,
                                                  CONCAT13(local_650._3_1_,
                                                           CONCAT12(local_650._2_1_,
                                                                    CONCAT11(local_650._1_1_,
                                                                             (byte)local_650)))))));
  uStack_544 = local_638;
  uStack_54c = local_640;
  local_53c = local_630;
  local_53a = local_62e;
  local_4a8 = 0x101;
  local_4a6 = uVar12;
  local_4a0 = puVar35;
  uVar27 = FUN_18005cd50(uVar15,&local_5d0,&local_5a0);
  lVar34 = local_5d0;
  if ((uVar27 & 1) == 0) goto LAB_180031bf8;
  local_5e8 = 1;
  local_5f0 = 0x200;
  local_600 = thunk_FUN_180102f80(0x200);
  lStack_5f8 = local_600;
  local_5e0 = FUN_1800f5ce8(&local_600,local_5a0);
  local_620 = 0;
  uStack_618 = 0;
  local_610 = 0x80;
  local_608 = 1;
  local_620 = thunk_FUN_180102f80(0x80);
  uStack_618 = local_620;
  if (local_4a0[0x126d] != '\x03') {
    FUN_18005cdf8(local_620,&local_5a0,&local_620,param_4);
  }
  iVar14 = (int)uVar36;
  uVar25 = (uint)(param_4 >> 0x20);
  if ((byte)local_4a0[0x126d] - 2 < 2) {
    uVar36 = (ulonglong)(byte)local_4a0[0x14a];
    local_388[1] = 0;
    local_388[0] = 0;
    local_388[3] = 0;
    local_388[2] = 0;
    local_388[5] = 0;
    local_388[4] = 0;
    local_388[7] = 0;
    local_388[6] = 0;
    local_388[9] = 0;
    local_388[8] = 0;
    local_388[0xb] = 0;
    local_388[10] = 0;
    local_388[0xd] = 0;
    local_388[0xc] = 0;
    local_388[0xf] = 0;
    local_388[0xe] = 0;
    if ((local_4a0[0x147] == '\0') || (local_4a8._1_1_ != '\0')) {
      local_2d4 = 0xffffffff;
    }
    else {
      local_660 = CONCAT44(local_660._4_4_,(uint)(byte)local_4a0[0x14a]);
      uVar24 = 2;
      local_2d4 = local_288[2];
      local_288[local_288[2]] = 0xb;
      local_288[2] = local_288[2] + 1;
      do {
        uVar12 = FUN_1800f5ea8(0xe4,local_4a0[uVar24 - 2]);
        FUN_1800f5730(&local_5a0,&local_620,0x36,extraout_w14 | local_2d4 << 0xe | 0x420300,0xf,
                      uVar24 | 0x410100,uVar12,0);
        uVar24 = uVar24 + 1;
      } while (uVar24 < 0xd);
      uVar36 = local_660 & 0xffffffff;
    }
    if (local_4a0[0x126d] != '\x03') {
      param_5 = 0;
    }
    local_2e0 = param_5;
    if ((int)uVar36 == 0) {
      if (local_4a0[0x126d] == '\x03') {
        if (param_5 != 0) goto LAB_180031010;
        uVar36 = 0;
        local_660 = (ulonglong)local_660._4_4_ << 0x20;
        puVar35 = local_4a0;
        do {
          if ((puVar35[uVar36] != '\0') && (local_308[uVar36] == 0)) {
            iVar13 = FUN_1800f42d0(&local_5a0,1,1);
            local_308[uVar36] = iVar13;
            FUN_1800f5730(&local_5a0,&local_620,0x36,iVar13,1,local_518 & 0xffffffff,0xff,
                          (int)uVar36 << 4);
            puVar35 = local_4a0;
          }
          uVar24 = (int)uVar36 + 1;
          uVar36 = (ulonglong)uVar24;
        } while (uVar24 < 10);
      }
      else {
        uVar27 = 0;
        local_660 = (ulonglong)local_660._4_4_ << 0x20;
        puVar35 = local_4a0;
        do {
          if (puVar35[uVar27] != '\0') {
            uVar36 = FUN_1800658e8(uVar36,&local_5a0,&local_620,uVar27);
            puVar35 = local_4a0;
          }
          uVar24 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar24;
        } while (uVar24 < 2);
      }
      uVar36 = local_660 & 0xffffffff;
    }
    else {
      local_308[2] = 0;
      local_308[3] = 0;
      local_308[0] = 0;
      local_308[1] = 0;
      local_308[6] = 0;
      local_308[7] = 0;
      local_308[4] = 0;
      local_308[5] = 0;
      local_308[8] = 0;
      local_308[9] = 0;
    }
LAB_180031010:
    uVar24 = uVar25 >> 0x1c & 1;
    if ((uVar25 >> 0x14 & 7) != 7) {
      uVar24 = 1;
    }
    local_2d0[0] = (int)uStack_554._6_1_ | 0x410200;
    if (uVar24 != 0 || iVar14 != 0) {
      local_2d0[0] = 0;
    }
    lVar34 = 1;
    do {
      local_2d0[lVar34] = (int)*(char *)((longlong)&uStack_554 + lVar34 + 6) | 0x410200;
      lVar34 = lVar34 + 1;
    } while (lVar34 != 4);
    local_294 = 0;
    lVar34 = 0;
    do {
      local_2bc[lVar34] = 0;
      local_2ac[lVar34] = 0xffffffff;
      lVar34 = lVar34 + 1;
    } while (lVar34 != 4);
    local_29c = 0;
    if (((int)uVar36 == 0) && (local_4a0[0x144] != '\0')) {
      uVar36 = FUN_180065980(uVar36,&local_5a0,&local_620);
      local_290 = (int)uVar36;
LAB_1800310b4:
      if (local_4a0[0x145] == '\0') goto LAB_1800310d0;
      local_28c = FUN_180065a68(uVar36,&local_5a0,&local_620);
    }
    else {
      local_290 = 0;
      if ((int)uVar36 == 0) goto LAB_1800310b4;
LAB_1800310d0:
      local_28c = 0;
    }
    local_650._0_1_ = 0xff;
    local_650._1_1_ = 0xff;
    local_650._2_1_ = 0xff;
    local_650._3_1_ = 0xff;
    uStack_64c = 0;
    uStack_c8 = CONCAT17(uStack_641,
                         CONCAT16(cStack_642,
                                  CONCAT15(uStack_643,
                                           CONCAT14(uStack_644,
                                                    CONCAT13(uStack_645,
                                                             CONCAT12(uStack_646,
                                                                      CONCAT11(uStack_647,bStack_648
                                                                              )))))));
    local_d0 = CONCAT17(uStack_649,CONCAT16(cStack_64a,CONCAT15(uStack_64b,0xffffffff)));
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
  }
  else if ((byte)local_4a0[0x126d] == 1) {
    local_388[1] = 0;
    local_388[0] = 0;
    local_388[2] = 0;
    local_388[4] = 0;
    local_388[3] = 0;
    local_388[5] = 0;
    local_388[6] = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
  }
  if ((byte)local_4a0[0x126d] - 2 < 2) {
    local_6f = 0;
    FUN_1800690e0(param_1 + 0x38,&local_5a0,&local_620,lVar37 + 4,param_4);
    local_650._0_1_ = 0;
    local_650._1_1_ = 0;
    local_650._2_1_ = 0;
    local_650._3_1_ = 0;
    uStack_64c = 0;
    uStack_64b = 0;
    cStack_64a = 0;
    uStack_649 = 0;
    bStack_648 = 0;
    uStack_647 = 0;
    uStack_646 = 0;
    uStack_645 = 0;
    uStack_644 = 0;
    uStack_643 = 0;
    cStack_642 = 0;
    uStack_641 = 0;
    local_640 = 0x100;
    local_638 = CONCAT71(local_638._1_7_,1);
    uVar15 = thunk_FUN_180102f80(0x100);
    local_6f = 1;
    lVar34 = 0;
    local_650._0_1_ = (byte)uVar15;
    local_650._1_1_ = (undefined1)((ulonglong)uVar15 >> 8);
    local_650._2_1_ = (undefined1)((ulonglong)uVar15 >> 0x10);
    local_650._3_1_ = (undefined1)((ulonglong)uVar15 >> 0x18);
    uStack_64c = (undefined1)((ulonglong)uVar15 >> 0x20);
    uStack_64b = (undefined1)((ulonglong)uVar15 >> 0x28);
    cStack_64a = (char)((ulonglong)uVar15 >> 0x30);
    uStack_649 = (undefined1)((ulonglong)uVar15 >> 0x38);
    puVar35 = local_4a0;
    bStack_648 = (byte)local_650;
    uStack_647 = local_650._1_1_;
    uStack_646 = local_650._2_1_;
    uStack_645 = local_650._3_1_;
    uStack_644 = uStack_64c;
    uStack_643 = uStack_64b;
    cStack_642 = cStack_64a;
    uStack_641 = uStack_649;
    do {
      if (*(int *)(puVar35 + lVar34 * 4 + 0x2f0) != 0) {
        local_298 = 0xffffffff;
        FUN_1800690e0(param_1 + 0x38,&local_5a0,&local_650,
                      lVar37 + (ulonglong)*(uint *)(puVar35 + lVar34 * 4 + 0x2f0) * 4,param_4);
        FUN_1800f5730(&local_5a0,&local_650,0x3e,0);
        puVar35 = local_4a0;
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 != 0x10);
    lVar37 = 0;
    puVar20 = local_388;
    do {
      FUN_1800f4370(&local_5a0,*(undefined4 *)((longlong)puVar20 + lVar37 * 4));
      *(undefined4 *)((longlong)puVar20 + lVar37 * 4) = 0;
      lVar37 = lVar37 + 1;
    } while (lVar37 != 0x20);
    lVar37 = 0;
    piVar21 = local_308;
    do {
      FUN_1800f4370(&local_5a0,piVar21[lVar37]);
      piVar21[lVar37] = 0;
      lVar37 = lVar37 + 1;
    } while (lVar37 != 10);
    FUN_1800f4370(&local_5a0,local_294);
    local_294 = 0;
    lVar37 = 0;
    puVar22 = local_2bc;
    do {
      FUN_1800f4370(&local_5a0,puVar22[lVar37]);
      puVar22[lVar37] = 0;
      lVar37 = lVar37 + 1;
    } while (lVar37 != 4);
    FUN_1800f4370(&local_5a0,local_290);
    local_290 = 0;
    uVar15 = FUN_1800f4370(&local_5a0,local_28c);
    uVar10 = local_2d0[0];
    local_28c = 0;
    uVar24 = uVar25 >> 0x1c & 1;
    if ((uVar25 >> 0x14 & 7) != 7) {
      uVar24 = 1;
    }
    if (uVar24 != 0 || iVar14 != 0) {
      uVar25 = (uint)uStack_554._6_1_;
      uVar15 = FUN_18005d058(uVar15,&local_5a0,&local_620,local_2d0[0],param_4);
      uVar15 = FUN_18005d2f8(uVar15,&local_5a0,&local_620,uVar10,param_4);
      FUN_18005d5d0(uVar15,&local_5a0,&local_620,uVar10,param_4);
      FUN_1800f5730(&local_5a0,&local_620,0x36,uVar25 | 0x410200,0xf,uVar10,0xe4,0);
      FUN_1800f4370(&local_5a0,local_2d0[0]);
      local_2d0[0] = 0;
    }
    FUN_1800f5730(&local_5a0,&local_620,0x3e,0);
    lVar37 = CONCAT17(uStack_649,
                      CONCAT16(cStack_64a,
                               CONCAT15(uStack_64b,
                                        CONCAT14(uStack_64c,
                                                 CONCAT13(local_650._3_1_,
                                                          CONCAT12(local_650._2_1_,
                                                                   CONCAT11(local_650._1_1_,
                                                                            (byte)local_650)))))));
    FUN_1800f5a90(&local_620,lVar37,
                  CONCAT17(uStack_641,
                           CONCAT16(cStack_642,
                                    CONCAT15(uStack_643,
                                             CONCAT14(uStack_644,
                                                      CONCAT13(uStack_645,
                                                               CONCAT12(uStack_646,
                                                                        CONCAT11(uStack_647,
                                                                                 bStack_648))))))) -
                  lVar37);
    thunk_FUN_180102fc0(CONCAT17(uStack_649,
                                 CONCAT16(cStack_64a,
                                          CONCAT15(uStack_64b,
                                                   CONCAT14(uStack_64c,
                                                            CONCAT13(local_650._3_1_,
                                                                     CONCAT12(local_650._2_1_,
                                                                              CONCAT11(local_650.
                                                                                       _1_1_,(byte)
                                                  local_650))))))));
  }
  else if ((byte)local_4a0[0x126d] == 1) {
    puVar17 = (uint *)(lVar37 + 4);
    puVar35 = local_4a0;
    uVar36 = 0;
LAB_180031114:
    while ((longlong)puVar17 - lVar37 >> 2 == (ulonglong)*(uint *)(puVar35 + uVar36 * 4 + 0x121c)) {
      bVar7 = puVar35[uVar36 + 0x125c];
      iVar14 = 0;
      if ((bVar7 & 0xf0) == 0) {
LAB_1800312c0:
        puVar18 = (uint *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,puVar17,param_4,0);
        puVar17 = puVar18;
        iVar13 = local_260;
      }
      else if ((bVar7 & 0xf0) == 0x10) {
        puVar18 = &local_650;
        uVar25 = bVar7 >> 1 & 7;
        puVar28 = puVar18;
        puVar30 = puVar17;
        puVar31 = puVar17;
        if ((bVar7 >> 1 & 7) != 0) {
          do {
            puVar31 = puVar30 + 2;
            uVar25 = uVar25 - 1;
            puVar18 = puVar28 + 2;
            *(undefined8 *)puVar28 = *(undefined8 *)puVar30;
            puVar28 = puVar18;
            puVar30 = puVar31;
          } while (uVar25 != 0);
        }
        if ((bVar7 & 1) != 0) {
          *puVar18 = *puVar31;
        }
        sVar8 = (short)puVar17[(ulonglong)bVar7 & 0xf];
        puVar17 = puVar17 + ((ulonglong)bVar7 & 0xf);
        while (sVar8 == -2) {
          sVar8 = (short)puVar17[(ulonglong)*(ushort *)((longlong)puVar17 + 2) + 1];
          puVar17 = puVar17 + (ulonglong)*(ushort *)((longlong)puVar17 + 2) + 1;
        }
        puVar17 = (uint *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,puVar17,param_4,0);
        FUN_1800657b8(puVar17,&local_5a0,&local_620,&local_660,CONCAT44(uStack_25c,local_260),
                      local_270,uStack_26c,0);
        puVar18 = (uint *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,&local_650,param_4,0);
        iVar13 = local_260;
      }
      else {
        if ((bVar7 & 0xf0) != 0x20) goto LAB_1800312c0;
        uVar25 = puVar17[1];
        iVar14 = FUN_1800f42d0(&local_5a0,4,1);
        psVar16 = (short *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,puVar17,param_4,iVar14
                                        );
        sVar8 = *psVar16;
        while (sVar8 == -2) {
          sVar8 = psVar16[(ulonglong)(ushort)psVar16[1] * 2 + 2];
          psVar16 = psVar16 + (ulonglong)(ushort)psVar16[1] * 2 + 2;
        }
        puVar17 = (uint *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,psVar16,param_4,0);
        uVar15 = FUN_1800657b8(puVar17,&local_5a0,&local_620,&local_660,
                               CONCAT44(uStack_25c,local_260),local_270,uStack_26c,0);
        puVar18 = (uint *)FUN_180062fa0(uVar15,&local_5a0,uVar25,0);
        iVar13 = local_260;
        if (iVar14 != 0) {
          iVar13 = iVar14;
        }
      }
      local_660 = CONCAT44(uStack_25c,local_260);
      FUN_1800657b8(puVar18,&local_5a0,&local_620,&local_660,iVar13,local_270,uStack_26c,iVar14 != 0
                   );
      FUN_1800f4370(&local_5a0,iVar14);
      puVar35 = local_4a0;
      uVar36 = (ulonglong)((int)uVar36 + 1);
    }
    uVar25 = *puVar17 & 0xffff;
    if (uVar25 == 0) {
LAB_1800313b4:
      puVar17 = puVar17 + 1;
      goto LAB_180031114;
    }
    if (uVar25 == 0x51) {
      puVar17 = puVar17 + 6;
      goto LAB_180031114;
    }
    if (uVar25 == 0xfffd) goto LAB_1800313b4;
    if (uVar25 == 0xfffe) {
      puVar17 = puVar17 + (ulonglong)*(ushort *)((longlong)puVar17 + 2) + 1;
      goto LAB_180031114;
    }
    if (uVar25 != 0xffff) {
      puVar17 = (uint *)FUN_180063c20(param_1 + 0x38,&local_5a0,&local_620,puVar17,param_4,0);
      local_660 = CONCAT44(uStack_25c,local_260);
      FUN_1800657b8(puVar17,&local_5a0,&local_620,&local_660,local_660,local_270,uStack_26c,0);
      puVar35 = local_4a0;
      goto LAB_180031114;
    }
    lVar37 = 1;
    puVar20 = local_388;
    do {
      FUN_1800f4370(&local_5a0,*(undefined4 *)((longlong)puVar20 + lVar37 * 4));
      lVar37 = lVar37 + 1;
    } while (lVar37 != 6);
    lVar37 = 0;
    puVar20 = local_388 + 3;
    do {
      FUN_1800f4370(&local_5a0,*(undefined4 *)((longlong)puVar20 + lVar37 * 4));
      lVar37 = lVar37 + 1;
    } while (lVar37 != 6);
    lVar37 = 0;
    puVar20 = local_388 + 6;
    do {
      uVar15 = FUN_1800f4370(&local_5a0,*(undefined4 *)((longlong)puVar20 + lVar37 * 4));
      uVar36 = local_388[0];
      lVar37 = lVar37 + 1;
    } while (lVar37 != 2);
    uVar15 = FUN_18005d058(uVar15,&local_5a0,&local_620,local_388[0] & 0xffffffff,param_4);
    uVar15 = FUN_18005d2f8(uVar15,&local_5a0,&local_620,uVar36 & 0xffffffff,param_4);
    FUN_18005d5d0(uVar15,&local_5a0,&local_620,uVar36 & 0xffffffff,param_4);
    FUN_1800f5730(&local_5a0,&local_620,0x2036,0x410200,0xf,uVar36 & 0xffffffff,0xe4,0);
    FUN_1800f5730(&local_5a0,&local_620,0x3e,0);
    FUN_1800f4370(&local_5a0,local_388[0] & 0xffffffff);
  }
  uVar15 = FUN_1800f5f08(local_5a0,&local_600,0);
  if ((local_598 >> 3 & 1) != 0) {
    uVar15 = FUN_1800f5fb8(local_5a0,&local_600,3,1,0x4d0,0);
  }
  if ((local_598 >> 4 & 1) != 0) {
    uVar15 = FUN_1800f5fb8(local_5a0,&local_600,4,1,0xec0,0);
  }
  if ((local_598 >> 5 & 1) != 0) {
    uVar15 = FUN_1800f5fb8(local_5a0,&local_600,5,1,0x100,uStack_59c >> 5 & 1);
  }
  if ((byte)local_4a0[0x126d] - 2 < 2) {
    FUN_18005d750(uVar15,&local_5a0,&local_600,param_4);
    bVar7 = local_53a;
    iVar14 = 6;
    iVar13 = iVar14;
    if (local_53a == 0) {
      iVar13 = 2;
      iVar14 = 3;
    }
    if ((byte)local_55c != 0) {
      uVar5 = 0x4003864;
      if (local_53a == 0) {
        uVar5 = 0x4002064;
      }
      FUN_1800f5b00(&local_600,4,uVar5,(uint)(byte)local_55c << 4 | 0x101002,0,1);
    }
    if (local_55c._1_1_ != 0) {
      uVar5 = 0x3003062;
      if (bVar7 == 0) {
        uVar5 = 0x3001062;
      }
      FUN_1800f5b00(&local_600,3,uVar5,(uint)local_55c._1_1_ << 4 | 0x101002,1);
    }
    puVar35 = local_4a0;
    if (local_4a0[0x126d] == '\x02') {
      local_660 = param_4 >> 0x37 & 1;
      uVar25 = 2;
      iVar3 = (int)local_660;
      do {
        if ((byte)puVar35[uVar25 - 2] != 0) {
          iVar4 = iVar14;
          if (iVar3 != 0) {
            iVar4 = 1;
          }
          FUN_1800f5b00(&local_600,3,iVar4 << 0xb | 0x3000062,
                        (uint)(byte)puVar35[uVar25 - 2] << 4 | 0x101002,uVar25);
          puVar35 = local_4a0;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < 4);
      if (local_55c._4_1_ != 0) {
        uVar5 = 0x3003062;
        if (bVar7 == 0) {
          uVar5 = 0x3001062;
        }
        FUN_1800f5b00(&local_600,3,uVar5,(uint)local_55c._4_1_ << 4 | 0x101002,4);
        puVar35 = local_4a0;
      }
      uVar25 = 5;
      do {
        uVar24 = uVar25 - 5;
        if ((byte)puVar35[(ulonglong)uVar24 + 0x2a] != 0) {
          iVar3 = iVar14;
          if (((byte)puVar35[(longlong)((int)uVar24 >> 3) + 0x140] >> (ulonglong)(uVar24 & 7) & 1)
              == 0) {
            iVar3 = iVar13;
          }
          FUN_1800f5b00(&local_600,3,iVar3 << 0xb | 0x3000062,
                        (uint)(byte)puVar35[(ulonglong)uVar24 + 0x2a] << 4 | 0x101002,uVar25);
          puVar35 = local_4a0;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < 0xd);
    }
    else if (local_4a0[0x126d] == '\x03') {
      uVar36 = 2;
      do {
        if (*(byte *)((longlong)&local_55c + uVar36) != 0) {
          iVar3 = iVar14;
          if (*(char *)((longlong)&uStack_54c + uVar36 + 3) == '\0') {
            iVar3 = iVar13;
          }
          FUN_1800f5b00(&local_600,3,iVar3 << 0xb | 0x3000062,
                        (uint)*(byte *)((longlong)&local_55c + uVar36) << 4 | 0x101002,uVar36);
        }
        uVar25 = (int)uVar36 + 1;
        uVar36 = (ulonglong)uVar25;
        puVar35 = local_4a0;
      } while (uVar25 < 0xd);
    }
    if (uStack_554._5_1_ != 0) {
      FUN_1800f5b00(&local_600,4,0x4000863,(uint)uStack_554._5_1_ << 4 | 0x101002,0xd,9);
      puVar35 = local_4a0;
    }
    lVar37 = 0;
    do {
      if (puVar35[lVar37 + 0x14b] != '\0') {
        FUN_1800f5b00(&local_600,3,0x3000065,0x1020f2,
                      (longlong)*(char *)((longlong)&uStack_554 + lVar37 + 6));
        puVar35 = local_4a0;
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 != 4);
LAB_180031890:
    if (puVar35[0x330] != '\0') {
      FUN_1800f5b00(&local_600,2,0x2000065,0xc001);
    }
  }
  else if ((byte)local_4a0[0x126d] == 1) {
    FUN_18005d750(uVar15,&local_5a0,&local_600,param_4);
    bVar7 = local_53a;
    iVar14 = 6;
    if (local_53a == 0) {
      iVar14 = 2;
    }
    if ((byte)local_55c != 0) {
      uVar5 = 0x4003864;
      if (local_53a == 0) {
        uVar5 = 0x4002064;
      }
      FUN_1800f5b00(&local_600,4,uVar5,(uint)(byte)local_55c << 4 | 0x101002,0,1);
    }
    uVar5 = 0x3003062;
    uVar6 = 0x3001062;
    if (local_55c._1_1_ != 0) {
      uVar2 = uVar5;
      if (bVar7 == 0) {
        uVar2 = uVar6;
      }
      FUN_1800f5b00(&local_600,3,uVar2,(uint)local_55c._1_1_ << 4 | 0x101002,1);
    }
    local_660 = param_4 >> 0x37 & 1;
    uVar36 = 0;
    iVar13 = (int)local_660;
    puVar35 = local_4a0;
    do {
      if ((byte)puVar35[uVar36] != 0) {
        iVar3 = iVar14;
        if (iVar13 != 0) {
          iVar3 = 1;
        }
        FUN_1800f5b00(&local_600,3,iVar3 << 0xb | 0x3000062,
                      (uint)(byte)puVar35[uVar36] << 4 | 0x101002,(int)uVar36 + 2);
        puVar35 = local_4a0;
      }
      uVar25 = (int)uVar36 + 1;
      uVar36 = (ulonglong)uVar25;
    } while (uVar25 < 2);
    if (local_55c._4_1_ != 0) {
      uVar2 = uVar5;
      if (bVar7 == 0) {
        uVar2 = uVar6;
      }
      FUN_1800f5b00(&local_600,3,uVar2,(uint)local_55c._4_1_ << 4 | 0x101002,4);
      puVar35 = local_4a0;
    }
    if (bVar7 == 0) {
      uVar5 = uVar6;
    }
    uVar36 = 0;
    do {
      if ((byte)puVar35[uVar36 + 0x2a] != 0) {
        FUN_1800f5b00(&local_600,3,uVar5,(uint)(byte)puVar35[uVar36 + 0x2a] << 4 | 0x101002,
                      (int)uVar36 + 5);
        puVar35 = local_4a0;
      }
      uVar25 = (int)uVar36 + 1;
      uVar36 = (ulonglong)uVar25;
    } while (uVar25 < 6);
    FUN_1800f5b00(&local_600,3,0x3000065,0x1020f2,0);
    puVar35 = local_4a0;
    goto LAB_180031890;
  }
  if (local_568._1_1_ != '\0') {
    FUN_1800f5b00(&local_600,2,0x2000068);
  }
  if ((local_2d8 != '\0') && (local_2d4 == 0xffffffff)) {
    FUN_1800f5b00(&local_600,4,0x400005b,0x1010f2,2,0xb);
  }
  uVar36 = 0;
  if (local_288[2] != 0) {
    do {
      FUN_1800f5b00(&local_600,4,0x4000069,uVar36,local_288[uVar36],4);
      uVar25 = (int)uVar36 + 1;
      uVar36 = (ulonglong)uVar25;
    } while (uVar25 < local_288[2]);
  }
  FUN_1800f5d48(&local_600,&local_620,local_5e0);
  lVar37 = local_600;
  FUN_1800f5a90(&local_5d0,local_600,lStack_5f8 - local_600);
  thunk_FUN_180102fc0(local_620);
  thunk_FUN_180102fc0(lVar37);
  lVar37 = lStack_5c8;
  lVar34 = local_5d0;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar36 = (ulonglong)(lStack_5c8 - local_5d0) >> 1;
    *(byte *)(uVar36 + local_5d0) = *(byte *)(uVar36 + local_5d0) ^ 0x2a;
  }
  FUN_1800f5ba0(&local_5d0);
  plVar19 = *(longlong **)(local_5b0 + (ulonglong)local_5dc * 0x18c0 + 0x6b0);
  (**(code **)(*plVar19 + 0x78))(plVar19,lVar34,lVar37 - lVar34,0,&local_5d8);
LAB_180031bf8:
  uVar15 = local_5d8;
  thunk_FUN_180102fc0(lVar34);
  return uVar15;
}

