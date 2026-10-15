/*
 * FUN_18013e790 at 18013e790
 * undefined FUN_18013e790(void)
 * Address ranges: 18013e790-18013f917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18013e790(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,ulonglong param_5,
             undefined4 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  short *psVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 extraout_x1;
  longlong lVar14;
  ulonglong *puVar15;
  undefined4 *puVar16;
  int iVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char cVar24;
  ulonglong uVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  uint *puVar29;
  code *extraout_x11;
  undefined1 *puVar30;
  char cVar31;
  char cVar32;
  ulonglong uVar33;
  uint local_690 [2];
  uint local_688;
  uint local_680;
  undefined8 local_678;
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
  ulonglong local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined1 local_600;
  ulonglong local_5f8;
  longlong local_5f0;
  longlong lStack_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined4 local_5d0;
  uint local_5cc;
  undefined8 local_5c8;
  longlong local_5c0;
  longlong lStack_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8;
  longlong local_5a0;
  undefined4 local_590;
  uint uStack_58c;
  uint local_588;
  undefined1 *local_560;
  undefined2 local_558;
  uint local_550;
  undefined8 local_54c;
  undefined8 uStack_544;
  undefined8 uStack_53c;
  undefined8 uStack_534;
  undefined2 local_52c;
  byte local_52a;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined1 auStack_4d8 [64];
  undefined2 local_498;
  undefined1 local_496;
  undefined1 *local_490;
  ulonglong local_378 [20];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  ulonglong local_2d0;
  char local_2c8;
  uint local_2c4;
  uint local_2c0 [5];
  undefined4 local_2ac [4];
  undefined4 local_29c [4];
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  uint local_278 [6];
  undefined4 local_260;
  undefined4 uStack_25c;
  int local_250;
  undefined4 uStack_24c;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_5f;
  
  local_5b0 = 0x100;
  local_5a8 = 1;
  local_5c8 = 0;
  local_5cc = param_3;
  local_5a0 = param_2;
  local_5c0 = FUN_1802229a8(0x100);
  uVar2 = *(undefined1 *)(param_1 + 0x44);
  puVar30 = *(undefined1 **)(param_1 + -8);
  uVar33 = *(ulonglong *)(param_1 + 0x50);
  lStack_5b8 = local_5c0;
  uVar10 = FUN_180222c50(&local_590,0,0x550);
  local_560 = auStack_4d8;
  local_650._0_1_ = puVar30[0x144];
  local_558 = 0x40;
  local_4e8 = 0x41040000110400;
  local_4e0 = 0x20000d00;
  uStack_520 = 0x11080300210803;
  uStack_528 = 0x31080300410803;
  bVar3 = puVar30[0x126d];
  uStack_510 = 0x11080400210804;
  uStack_518 = 0x31080400410804;
  uStack_500 = 0x11080500210805;
  uStack_508 = 0x31080500410805;
  uStack_4f0 = 0x11080000210800;
  uStack_4f8 = 0x31080000410800;
  local_550 = (uint)CONCAT11(bVar3,puVar30[0x126e]);
  uStack_643 = puVar30[0x145];
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
  local_620 = param_4 >> 0x39 & 1;
  if (local_620 != 0) {
    uVar25 = param_4 >> 0x3a & 3;
    if (uVar25 - 1 < 3) {
      local_650._0_1_ = (byte)local_650 | 0xc;
    }
    else if (uVar25 == 0) {
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
  local_590 = param_6;
  if (bVar3 < 3) {
    local_650._2_1_ = *puVar30;
    local_650._3_1_ = puVar30[1];
    uStack_64b = puVar30[0x2a];
    cStack_64a = puVar30[0x2b];
    uStack_649 = puVar30[0x2c];
    bStack_648 = puVar30[0x2d];
    uStack_647 = puVar30[0x2e];
    uStack_646 = puVar30[0x2f];
    uStack_645 = puVar30[0x30];
    uStack_644 = puVar30[0x31];
  }
  else {
    if ((param_5 == 0) || (puVar30[0x147] != '\0')) {
      uVar25 = 0;
      do {
        if (puVar30[uVar25] != '\0') {
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
        uVar20 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar20;
      } while (uVar20 < 10);
    }
    else {
      uVar25 = 0;
      do {
        uVar27 = param_5 >> ((uVar25 & 0xf) << 2);
        if ((uVar27 & 0xf) != 0) {
          *(undefined1 *)((longlong)&local_650 + (ulonglong)(((uint)uVar27 & 0xf) + 1)) =
               puVar30[uVar25];
        }
        uVar20 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar20;
      } while (uVar20 < 10);
    }
    uVar25 = 0;
    do {
      uVar27 = param_5 >> ((uVar25 & 0xf) << 2);
      uVar20 = (uint)uVar25;
      if ((uVar27 & 0xf) != 0) {
        *(bool *)((longlong)&local_640 + (ulonglong)(((uint)uVar27 & 0xf) + 1) + 3) =
             ((byte)puVar30[(longlong)((int)uVar20 >> 3) + 0x140] >> (ulonglong)(uVar20 & 7) & 1) !=
             0;
      }
      uVar25 = (ulonglong)(uVar20 + 1);
    } while (uVar20 + 1 < 10);
  }
  uVar5 = local_640;
  lVar14 = 10;
  if (bVar3 != 1) {
    lVar14 = 0x14b;
  }
  cVar24 = puVar30[lVar14];
  bVar8 = cVar24 == '\0';
  cVar31 = !bVar8;
  cStack_642 = -bVar8;
  uStack_641 = !bVar8;
  if (puVar30[0x14c] == '\0') {
    cVar32 = uStack_641;
    uStack_641 = 0xff;
  }
  else {
    cVar31 = '\x01';
    if (cVar24 != '\0') {
      cVar31 = '\x02';
    }
    cVar32 = '\x01';
    if (cVar24 != '\0') {
      cVar32 = '\x02';
    }
  }
  if (puVar30[0x14d] == '\0') {
    cVar32 = -1;
  }
  else {
    cVar31 = cVar32 + '\x01';
  }
  if (puVar30[0x14e] == '\0') {
    cVar18 = -1;
    cVar24 = cVar31;
  }
  else {
    cVar24 = cVar31 + '\x01';
    cVar18 = cVar31;
  }
  if (puVar30[0x330] == '\0') {
    cVar24 = -1;
  }
  local_640._3_5_ = SUB85(uVar5,3);
  local_640._0_3_ = CONCAT12(cVar24,CONCAT11(cVar18,cVar32));
  uStack_544 = CONCAT17(uStack_641,
                        CONCAT16(cStack_642,
                                 CONCAT15(uStack_643,
                                          CONCAT14(uStack_644,
                                                   CONCAT13(uStack_645,
                                                            CONCAT12(uStack_646,
                                                                     CONCAT11(uStack_647,bStack_648)
                                                                    ))))));
  local_54c = CONCAT17(uStack_649,
                       CONCAT16(cStack_64a,
                                CONCAT15(uStack_64b,
                                         CONCAT14(uStack_64c,
                                                  CONCAT13(local_650._3_1_,
                                                           CONCAT12(local_650._2_1_,
                                                                    CONCAT11(local_650._1_1_,
                                                                             (byte)local_650)))))));
  uStack_534 = local_638;
  uStack_53c = local_640;
  local_52c = local_630;
  local_52a = local_62e;
  local_498 = 0x101;
  local_496 = uVar2;
  local_490 = puVar30;
  uVar25 = FUN_18016d490(uVar10,&local_5c0,&local_590);
  lVar14 = local_5c0;
  if ((uVar25 & 1) == 0) goto LAB_18013f8ec;
  local_5d8 = 1;
  local_5e0 = 0x200;
  local_5f0 = FUN_1802229a8(0x200);
  lStack_5e8 = local_5f0;
  local_5d0 = FUN_1802130a8(&local_5f0,local_590);
  local_618 = 0;
  uStack_610 = 0;
  local_608 = 0x80;
  local_600 = 1;
  uVar10 = FUN_1802229a8(0x80);
  local_618 = uVar10;
  uStack_610 = uVar10;
  if (local_490[0x126d] != '\x03') {
    uVar10 = FUN_18016d538(uVar10,&local_590,&local_618,param_4);
  }
  uVar20 = (uint)(param_4 >> 0x20);
  if ((byte)local_490[0x126d] - 2 < 2) {
    cVar31 = local_490[0x14a];
    local_378[1] = 0;
    local_378[0] = 0;
    local_378[3] = 0;
    local_378[2] = 0;
    local_378[5] = 0;
    local_378[4] = 0;
    local_378[7] = 0;
    local_378[6] = 0;
    local_378[9] = 0;
    local_378[8] = 0;
    local_378[0xb] = 0;
    local_378[10] = 0;
    local_378[0xd] = 0;
    local_378[0xc] = 0;
    local_378[0xf] = 0;
    local_378[0xe] = 0;
    if ((local_490[0x147] == '\0') || (local_498._1_1_ != '\0')) {
      local_2c4 = 0xffffffff;
    }
    else {
      uVar19 = 2;
      local_2c4 = local_278[2];
      local_278[local_278[2]] = 0xb;
      local_278[2] = local_278[2] + 1;
      local_5f8 = uVar33;
      do {
        uVar33 = (ulonglong)(uVar19 - 2);
        local_680 = FUN_180213268(0xe4,local_490[uVar33]);
        local_688 = uVar19 | 0x410100;
        local_678 = 0;
        local_680 = local_680 & 0xff;
        local_690[0] = 0xf;
        uVar10 = FUN_180214c88(&local_590,&local_618,0x36,(uint)uVar33 | local_2c4 << 0xe | 0x420300
                               ,local_690,0x20);
        uVar19 = uVar19 + 1;
        uVar33 = local_5f8;
      } while (uVar19 < 0xd);
    }
    if (local_490[0x126d] != '\x03') {
      param_5 = 0;
    }
    local_2d0 = param_5;
    if (cVar31 == '\0') {
      if (local_490[0x126d] == '\x03') {
        if (param_5 == 0) {
          uVar25 = 0;
          puVar30 = local_490;
          do {
            if (puVar30[uVar25] != '\0') {
              uVar10 = FUN_180177508(uVar10,&local_590,&local_618,uVar25);
              puVar30 = local_490;
            }
            uVar19 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar19;
          } while (uVar19 < 10);
        }
      }
      else {
        uVar25 = 0;
        puVar30 = local_490;
        do {
          if (puVar30[uVar25] != '\0') {
            uVar10 = FUN_180177458(uVar10,&local_590,&local_618,uVar25);
            puVar30 = local_490;
          }
          uVar19 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar19;
        } while (uVar19 < 2);
      }
    }
    else {
      local_378[0x11] = 0;
      local_378[0x10] = 0;
      local_378[0x13] = 0;
      local_378[0x12] = 0;
      local_2d8 = 0;
      uStack_2d4 = 0;
    }
    uVar19 = uVar20 >> 0x1c & 1;
    if ((uVar20 >> 0x14 & 7) != 7) {
      uVar19 = 1;
    }
    local_2c0[0] = (int)uStack_544._6_1_ | 0x410200;
    if (uVar19 != 0 || (local_620 & 0xff) != 0) {
      local_2c0[0] = 0;
    }
    lVar14 = 1;
    do {
      local_2c0[lVar14] = (int)*(char *)((longlong)&uStack_544 + lVar14 + 6) | 0x410200;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    local_284 = 0;
    lVar14 = 0;
    do {
      local_2ac[lVar14] = 0;
      local_29c[lVar14] = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    local_28c = 0;
    if ((cVar31 == '\0') && (local_490[0x144] != '\0')) {
      uVar10 = FUN_180177590(uVar10,&local_590,&local_618);
      local_280 = (int)uVar10;
LAB_18013edbc:
      if (local_490[0x145] == '\0') goto LAB_18013edd8;
      local_27c = FUN_180177698(uVar10,&local_590,&local_618);
    }
    else {
      local_280 = 0;
      if (cVar31 == '\0') goto LAB_18013edbc;
LAB_18013edd8:
      local_27c = 0;
    }
    uStack_64c = 0;
    local_650._0_1_ = 0xff;
    local_650._1_1_ = 0xff;
    local_650._2_1_ = 0xff;
    local_650._3_1_ = 0xff;
    uStack_b8 = CONCAT17(uStack_641,
                         CONCAT16(cStack_642,
                                  CONCAT15(uStack_643,
                                           CONCAT14(uStack_644,
                                                    CONCAT13(uStack_645,
                                                             CONCAT12(uStack_646,
                                                                      CONCAT11(uStack_647,bStack_648
                                                                              )))))));
    local_c0 = CONCAT17(uStack_649,CONCAT16(cStack_64a,CONCAT15(uStack_64b,0xffffffff)));
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
  }
  else if ((byte)local_490[0x126d] == 1) {
    local_378[1] = 0;
    local_378[0] = 0;
    local_378[2] = 0;
    local_378[4] = 0;
    local_378[3] = 0;
    local_378[5] = 0;
    local_378[6] = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
  }
  if ((byte)local_490[0x126d] - 2 < 2) {
    local_5f = 0;
    FUN_18017b378(param_1 + 0x38,&local_590,&local_618,uVar33 + 4,param_4);
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
    uVar10 = FUN_1802229a8(0x100);
    local_5f = 1;
    local_650._0_1_ = (byte)uVar10;
    local_650._1_1_ = (undefined1)((ulonglong)uVar10 >> 8);
    local_650._2_1_ = (undefined1)((ulonglong)uVar10 >> 0x10);
    local_650._3_1_ = (undefined1)((ulonglong)uVar10 >> 0x18);
    uStack_64c = (undefined1)((ulonglong)uVar10 >> 0x20);
    uStack_64b = (undefined1)((ulonglong)uVar10 >> 0x28);
    cStack_64a = (char)((ulonglong)uVar10 >> 0x30);
    uStack_649 = (undefined1)((ulonglong)uVar10 >> 0x38);
    lVar14 = 0;
    puVar30 = local_490;
    bStack_648 = (byte)local_650;
    uStack_647 = local_650._1_1_;
    uStack_646 = local_650._2_1_;
    uStack_645 = local_650._3_1_;
    uStack_644 = uStack_64c;
    uStack_643 = uStack_64b;
    cStack_642 = cStack_64a;
    uStack_641 = uStack_649;
    do {
      if (*(int *)(puVar30 + lVar14 * 4 + 0x2f0) != 0) {
        local_288 = 0xffffffff;
        FUN_18017b378(param_1 + 0x38,&local_590,&local_650,
                      uVar33 + (ulonglong)*(uint *)(puVar30 + lVar14 * 4 + 0x2f0) * 4,param_4);
        FUN_180214c88(&local_590,&local_650,0x3e,0,local_690,0);
        puVar30 = local_490;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x10);
    lVar14 = 0;
    puVar15 = local_378;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar15 + lVar14 * 4));
      *(undefined4 *)((longlong)puVar15 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x20);
    lVar14 = 0;
    puVar15 = local_378 + 0x10;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar15 + lVar14 * 4));
      *(undefined4 *)((longlong)puVar15 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 10);
    FUN_180213800(&local_590,local_284);
    local_284 = 0;
    lVar14 = 0;
    puVar16 = local_2ac;
    do {
      FUN_180213800(&local_590,puVar16[lVar14]);
      puVar16[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    FUN_180213800(&local_590,local_280);
    local_280 = 0;
    uVar10 = FUN_180213800(&local_590,local_27c);
    uVar7 = local_2c0[0];
    local_27c = 0;
    uVar19 = uVar20 >> 0x1c & 1;
    if ((uVar20 >> 0x14 & 7) != 7) {
      uVar19 = 1;
    }
    if (uVar19 != 0 || (local_620 & 0xff) != 0) {
      uVar20 = (uint)uStack_544._6_1_;
      uVar10 = FUN_18016d818(uVar10,&local_590,&local_618,local_2c0[0],param_4);
      uVar10 = FUN_18016db68(uVar10,&local_590,&local_618,uVar7,param_4);
      FUN_18016ded8(uVar10,&local_590,&local_618,uVar7,param_4);
      local_678 = 0;
      local_680 = 0xe4;
      local_690[0] = 0xf;
      local_688 = uVar7;
      FUN_180214c88(&local_590,&local_618,0x36,uVar20 | 0x410200,local_690,0x20);
      FUN_180213800(&local_590,local_2c0[0]);
      local_2c0[0] = 0;
    }
    FUN_180214c88(&local_590,&local_618,0x3e,0,local_690,0);
    lVar14 = CONCAT17(uStack_649,
                      CONCAT16(cStack_64a,
                               CONCAT15(uStack_64b,
                                        CONCAT14(uStack_64c,
                                                 CONCAT13(local_650._3_1_,
                                                          CONCAT12(local_650._2_1_,
                                                                   CONCAT11(local_650._1_1_,
                                                                            (byte)local_650)))))));
    FUN_180214fe8(&local_618,lVar14,
                  CONCAT17(uStack_641,
                           CONCAT16(cStack_642,
                                    CONCAT15(uStack_643,
                                             CONCAT14(uStack_644,
                                                      CONCAT13(uStack_645,
                                                               CONCAT12(uStack_646,
                                                                        CONCAT11(uStack_647,
                                                                                 bStack_648))))))) -
                  lVar14);
    FUN_1802229d8(CONCAT17(uStack_649,
                           CONCAT16(cStack_64a,
                                    CONCAT15(uStack_64b,
                                             CONCAT14(uStack_64c,
                                                      CONCAT13(local_650._3_1_,
                                                               CONCAT12(local_650._2_1_,
                                                                        CONCAT11(local_650._1_1_,
                                                                                 (byte)local_650))))
                                            ))));
  }
  else if ((byte)local_490[0x126d] == 1) {
    puVar12 = (uint *)(uVar33 + 4);
    puVar30 = local_490;
    uVar25 = 0;
    local_5f8 = uVar33;
LAB_18013ee24:
    while ((longlong)((longlong)puVar12 - local_5f8) >> 2 ==
           (ulonglong)*(uint *)(puVar30 + uVar25 * 4 + 0x121c)) {
      bVar3 = puVar30[uVar25 + 0x125c];
      iVar9 = 0;
      if ((bVar3 & 0xf0) == 0) {
LAB_18013efd4:
        puVar13 = (uint *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,puVar12,param_4,0);
        puVar12 = puVar13;
        iVar17 = local_250;
      }
      else if ((bVar3 & 0xf0) == 0x10) {
        puVar13 = &local_650;
        uVar20 = bVar3 >> 1 & 7;
        puVar26 = puVar13;
        puVar28 = puVar12;
        puVar29 = puVar12;
        if ((bVar3 >> 1 & 7) != 0) {
          do {
            puVar29 = puVar28 + 2;
            uVar20 = uVar20 - 1;
            puVar13 = puVar26 + 2;
            *(undefined8 *)puVar26 = *(undefined8 *)puVar28;
            puVar26 = puVar13;
            puVar28 = puVar29;
          } while (uVar20 != 0);
        }
        if ((bVar3 & 1) != 0) {
          *puVar13 = *puVar29;
        }
        sVar4 = (short)puVar12[(ulonglong)bVar3 & 0xf];
        puVar12 = puVar12 + ((ulonglong)bVar3 & 0xf);
        while (sVar4 == -2) {
          sVar4 = (short)puVar12[(ulonglong)*(ushort *)((longlong)puVar12 + 2) + 1];
          puVar12 = puVar12 + (ulonglong)*(ushort *)((longlong)puVar12 + 2) + 1;
        }
        puVar12 = (uint *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,puVar12,param_4,0);
        FUN_1801772e8(puVar12,&local_590,&local_618,&local_620,CONCAT44(uStack_24c,local_250),
                      local_260,uStack_25c,0);
        puVar13 = (uint *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,&local_650,param_4,0);
        iVar17 = local_250;
      }
      else {
        if ((bVar3 & 0xf0) != 0x20) goto LAB_18013efd4;
        uVar20 = puVar12[1];
        iVar9 = FUN_180213760(&local_590,4,1);
        psVar11 = (short *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,puVar12,param_4,iVar9)
        ;
        sVar4 = *psVar11;
        while (sVar4 == -2) {
          sVar4 = psVar11[(ulonglong)(ushort)psVar11[1] * 2 + 2];
          psVar11 = psVar11 + (ulonglong)(ushort)psVar11[1] * 2 + 2;
        }
        puVar12 = (uint *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,psVar11,param_4,0);
        uVar10 = FUN_1801772e8(puVar12,&local_590,&local_618,&local_620,
                               CONCAT44(uStack_24c,local_250),local_260,uStack_25c,0);
        puVar13 = (uint *)FUN_1801744d0(uVar10,&local_590,uVar20,0);
        iVar17 = local_250;
        if (iVar9 != 0) {
          iVar17 = iVar9;
        }
      }
      local_620 = CONCAT44(uStack_24c,local_250);
      FUN_1801772e8(puVar13,&local_590,&local_618,&local_620,iVar17,local_260,uStack_25c,iVar9 != 0)
      ;
      FUN_180213800(&local_590,iVar9);
      puVar30 = local_490;
      uVar25 = (ulonglong)((int)uVar25 + 1);
    }
    uVar20 = *puVar12 & 0xffff;
    if (uVar20 == 0) {
LAB_18013f0c8:
      puVar12 = puVar12 + 1;
      goto LAB_18013ee24;
    }
    if (uVar20 == 0x51) {
      puVar12 = puVar12 + 6;
      goto LAB_18013ee24;
    }
    if (uVar20 == 0xfffd) goto LAB_18013f0c8;
    if (uVar20 == 0xfffe) {
      puVar12 = puVar12 + (ulonglong)*(ushort *)((longlong)puVar12 + 2) + 1;
      goto LAB_18013ee24;
    }
    if (uVar20 != 0xffff) {
      puVar12 = (uint *)FUN_180175360(param_1 + 0x38,&local_590,&local_618,puVar12,param_4,0);
      local_620 = CONCAT44(uStack_24c,local_250);
      FUN_1801772e8(puVar12,&local_590,&local_618,&local_620,local_620,local_260,uStack_25c,0);
      puVar30 = local_490;
      goto LAB_18013ee24;
    }
    lVar14 = 1;
    puVar15 = local_378;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar15 + lVar14 * 4));
      lVar14 = lVar14 + 1;
    } while (lVar14 != 6);
    lVar14 = 0;
    puVar15 = local_378 + 3;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar15 + lVar14 * 4));
      lVar14 = lVar14 + 1;
    } while (lVar14 != 6);
    lVar14 = 0;
    puVar15 = local_378 + 6;
    do {
      uVar10 = FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar15 + lVar14 * 4));
      uVar33 = local_378[0];
      lVar14 = lVar14 + 1;
    } while (lVar14 != 2);
    uVar20 = (uint)local_378[0];
    uVar10 = FUN_18016d818(uVar10,&local_590,&local_618,local_378[0] & 0xffffffff,param_4);
    uVar10 = FUN_18016db68(uVar10,&local_590,&local_618,uVar33 & 0xffffffff,param_4);
    FUN_18016ded8(uVar10,&local_590,&local_618,uVar33 & 0xffffffff,param_4);
    local_678 = 0;
    local_680 = 0xe4;
    local_690[0] = 0xf;
    local_688 = uVar20;
    FUN_180214c88(&local_590,&local_618,0x2036,0x410200,local_690,0x20);
    FUN_180214c88(&local_590,&local_618,0x3e,0,local_690,0);
    FUN_180213800(&local_590,local_378[0] & 0xffffffff);
  }
  uVar10 = FUN_1802132f0(local_590,&local_5f0,0);
  if ((local_588 >> 3 & 1) != 0) {
    uVar10 = FUN_1802133a8(local_590,&local_5f0,3,1,0x4d0,0);
  }
  if ((local_588 >> 4 & 1) != 0) {
    uVar10 = FUN_1802133a8(local_590,&local_5f0,4,1,0xec0,0);
  }
  if ((local_588 >> 5 & 1) != 0) {
    uVar10 = FUN_1802133a8(local_590,&local_5f0,5,1,0x100,uStack_58c >> 5 & 1);
  }
  if ((byte)local_490[0x126d] - 2 < 2) {
    FUN_18016e098(uVar10,&local_590,&local_5f0,param_4);
    uVar21 = 6;
    uVar22 = uVar21;
    if (local_52a == 0) {
      uVar22 = 2;
      uVar21 = 3;
    }
    if ((char)local_54c != '\0') {
      uVar23 = 7;
      if (local_52a == 0) {
        uVar23 = 4;
      }
      FUN_180213588(&local_5f0,0,local_54c & 0xff,uVar23);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_5f0,1,local_54c._1_1_,uVar22);
    }
    puVar30 = local_490;
    if (local_490[0x126d] == '\x02') {
      local_5f8 = param_4 >> 0x37 & 1;
      uVar20 = 2;
      iVar9 = (int)local_5f8;
      do {
        if (puVar30[uVar20 - 2] != '\0') {
          uVar23 = uVar21;
          if (iVar9 != 0) {
            uVar23 = 1;
          }
          FUN_180213538(&local_5f0,uVar20,puVar30[uVar20 - 2],uVar23);
          puVar30 = local_490;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < 4);
      if (local_54c._4_1_ != '\0') {
        FUN_180213538(&local_5f0,4,local_54c._4_1_,uVar22);
        puVar30 = local_490;
      }
      uVar20 = 5;
      do {
        uVar19 = uVar20 - 5;
        if (puVar30[(ulonglong)uVar19 + 0x2a] != '\0') {
          uVar23 = uVar21;
          if (((byte)puVar30[(longlong)((int)uVar19 >> 3) + 0x140] >> (ulonglong)(uVar19 & 7) & 1)
              == 0) {
            uVar23 = uVar22;
          }
          FUN_180213538(&local_5f0,uVar20,puVar30[(ulonglong)uVar19 + 0x2a],uVar23);
          puVar30 = local_490;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < 0xd);
    }
    else if (local_490[0x126d] == '\x03') {
      uVar33 = 2;
      do {
        if (*(char *)((longlong)&local_54c + uVar33) != '\0') {
          uVar23 = uVar21;
          if (*(char *)((longlong)&uStack_53c + uVar33 + 3) == '\0') {
            uVar23 = uVar22;
          }
          FUN_180213538(&local_5f0,uVar33,*(char *)((longlong)&local_54c + uVar33),uVar23);
        }
        uVar20 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar20;
        puVar30 = local_490;
      } while (uVar20 < 0xd);
    }
    if (uStack_544._5_1_ != 0) {
      local_688 = 9;
      local_690[0] = 0xd;
      FUN_180215058(&local_5f0,4,0x4000863,(uint)uStack_544._5_1_ << 4 | 0x101002,local_690,0x10);
      puVar30 = local_490;
    }
    lVar14 = 0;
    do {
      if (puVar30[lVar14 + 0x14b] != '\0') {
        FUN_1802135e0(&local_5f0,(longlong)*(char *)((longlong)&uStack_544 + lVar14 + 6),0xf);
        puVar30 = local_490;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
LAB_18013f594:
    if (puVar30[0x330] != '\0') {
      FUN_180215058(&local_5f0,2,0x2000065,0xc001,local_690,0);
    }
  }
  else if ((byte)local_490[0x126d] == 1) {
    FUN_18016e098(uVar10,&local_590,&local_5f0,param_4);
    uVar21 = 6;
    if (local_52a == 0) {
      uVar21 = 2;
    }
    if ((char)local_54c != '\0') {
      uVar22 = 7;
      if (local_52a == 0) {
        uVar22 = 4;
      }
      FUN_180213588(&local_5f0,0,local_54c & 0xff,uVar22);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_5f0,1,local_54c._1_1_,uVar21);
    }
    local_5f8 = param_4 >> 0x37 & 1;
    uVar33 = 0;
    iVar9 = (int)local_5f8;
    puVar30 = local_490;
    do {
      if (puVar30[uVar33] != '\0') {
        uVar22 = uVar21;
        if (iVar9 != 0) {
          uVar22 = 1;
        }
        FUN_180213538(&local_5f0,(int)uVar33 + 2,puVar30[uVar33],uVar22);
        puVar30 = local_490;
      }
      uVar20 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar20;
    } while (uVar20 < 2);
    if (local_54c._4_1_ != '\0') {
      FUN_180213538(&local_5f0,4,local_54c._4_1_,uVar21);
      puVar30 = local_490;
    }
    uVar33 = 0;
    do {
      if (puVar30[uVar33 + 0x2a] != '\0') {
        FUN_180213538(&local_5f0,(int)uVar33 + 5,puVar30[uVar33 + 0x2a],uVar21);
        puVar30 = local_490;
      }
      uVar20 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar20;
    } while (uVar20 < 6);
    FUN_1802135e0(&local_5f0,0,0xf);
    puVar30 = local_490;
    goto LAB_18013f594;
  }
  if (local_558._1_1_ != '\0') {
    FUN_180215058(&local_5f0,2,0x2000068,local_558._1_1_,local_690,0);
  }
  if ((local_2c8 != '\0') && (local_2c4 == 0xffffffff)) {
    local_688 = 0xb;
    local_690[0] = 2;
    FUN_180215058(&local_5f0,4,0x400005b,0x1010f2,local_690,0x10);
  }
  uVar33 = 0;
  if (local_278[2] != 0) {
    do {
      local_690[0] = local_278[uVar33];
      local_688 = 4;
      FUN_180215058(&local_5f0,4,0x4000069,uVar33,local_690,0x10);
      uVar20 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar20;
    } while (uVar20 < local_278[2]);
  }
  FUN_180213108(&local_5f0,&local_618,local_5d0);
  lVar14 = local_5f0;
  FUN_180214fe8(&local_5c0,local_5f0,lStack_5e8 - local_5f0);
  FUN_1802229d8(local_618);
  FUN_1802229d8(lVar14);
  lVar6 = lStack_5b8;
  lVar14 = local_5c0;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar33 = (ulonglong)(lStack_5b8 - local_5c0) >> 1;
    *(byte *)(uVar33 + local_5c0) = *(byte *)(uVar33 + local_5c0) ^ 0x2a;
  }
  FUN_180212ef0(&local_5c0);
  uVar10 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                     (0x180224000,*(undefined8 *)(local_5a0 + (ulonglong)local_5cc * 0x18c0 + 0x6b0)
                      ,extraout_x1,lVar6 - lVar14);
  (*extraout_x11)(uVar10,lVar14);
LAB_18013f8ec:
  uVar10 = local_5c8;
  FUN_1802229d8(lVar14);
  return uVar10;
}

