/*
 * FUN_18015dfc8 at 18015dfc8
 * undefined FUN_18015dfc8(void)
 * Address ranges: 18015dfc8-18015f14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18015dfc8(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined4 *puVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char cVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  ulonglong uVar28;
  char cVar29;
  char cVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  uint local_680 [2];
  uint local_678;
  uint local_670;
  undefined8 local_668;
  undefined4 local_640;
  undefined1 uStack_63c;
  undefined1 uStack_63b;
  char cStack_63a;
  undefined1 uStack_639;
  byte bStack_638;
  undefined1 uStack_637;
  undefined1 uStack_636;
  undefined1 uStack_635;
  undefined1 uStack_634;
  undefined1 uStack_633;
  char cStack_632;
  undefined1 uStack_631;
  undefined8 local_630;
  undefined8 local_628;
  undefined2 local_620;
  byte local_61e;
  ulonglong local_610;
  uint *local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  uint local_5e0;
  longlong local_5d8;
  longlong lStack_5d0;
  undefined8 local_5c8;
  undefined1 local_5c0;
  longlong local_5b8;
  longlong lStack_5b0;
  undefined8 local_5a8;
  undefined1 local_5a0;
  undefined8 local_598;
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
  undefined1 local_498;
  char local_497;
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
  
  local_5a8 = 0x100;
  local_5a0 = 1;
  uVar31 = 0;
  local_598 = param_4;
  local_5b8 = FUN_1802229a8(0x100);
  puVar32 = *(undefined1 **)(param_1 + -8);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 0x1ac0 +
                  0x904);
  local_5e0 = (uint)*(byte *)(param_1 + 0x48);
  local_608 = *(uint **)(param_1 + 0x58);
  lStack_5b0 = local_5b8;
  uVar9 = FUN_180222c50(&local_590,0,0x550);
  local_590 = 0x51;
  local_560 = auStack_4d8;
  local_640._0_1_ = puVar32[0x144];
  local_558 = 0x40;
  local_4e8 = 0x41040000110400;
  local_4e0 = 0x20000d00;
  uStack_520 = 0x11080300210803;
  uStack_528 = 0x31080300410803;
  bVar2 = puVar32[0x126d];
  uStack_510 = 0x11080400210804;
  uStack_518 = 0x31080400410804;
  uStack_500 = 0x11080500210805;
  uStack_508 = 0x31080500410805;
  uStack_4f0 = 0x11080000210800;
  uStack_4f8 = 0x31080000410800;
  local_550 = (uint)CONCAT11(bVar2,puVar32[0x126e]);
  uStack_633 = puVar32[0x145];
  bStack_638 = 0;
  uStack_637 = 0;
  uStack_636 = 0;
  uStack_635 = 0;
  uStack_634 = 0;
  local_640._1_1_ = 0;
  local_640._2_1_ = 0;
  local_640._3_1_ = 0;
  uStack_63c = 0;
  uStack_63b = 0;
  cStack_63a = '\0';
  uStack_639 = 0;
  local_628 = 0;
  local_630 = 0;
  local_610 = param_2 >> 0x39 & 1;
  if (local_610 != 0) {
    uVar24 = param_2 >> 0x3a & 3;
    if (uVar24 - 1 < 3) {
      local_640._0_1_ = (byte)local_640 | 0xc;
    }
    else if (uVar24 == 0) {
      uStack_63c = 1;
    }
  }
  local_620 = 0;
  uVar1 = 0xf;
  if ((param_2 >> 0x38 & 1) == 0) {
    uVar1 = local_640._1_1_;
  }
  local_61e = (byte)(param_2 >> 0x30) & 1;
  local_640._1_1_ = uVar1;
  if (bVar2 < 3) {
    local_640._2_1_ = *puVar32;
    local_640._3_1_ = puVar32[1];
    uStack_63b = puVar32[0x2a];
    cStack_63a = puVar32[0x2b];
    uStack_639 = puVar32[0x2c];
    bStack_638 = puVar32[0x2d];
    uStack_637 = puVar32[0x2e];
    uStack_636 = puVar32[0x2f];
    uStack_635 = puVar32[0x30];
    uStack_634 = puVar32[0x31];
  }
  else {
    if ((param_3 == 0) || (puVar32[0x147] != '\0')) {
      uVar9 = 0;
      do {
        if (puVar32[uVar9] != '\0') {
          local_620 = 0x100;
          local_640._2_1_ = 0xf;
          local_640._3_1_ = 0xf;
          uStack_63c = 0xf;
          uStack_63b = 0xf;
          cStack_63a = '\x0f';
          uStack_639 = 0xf;
          bStack_638 = 0xf;
          uStack_637 = 0xf;
          uStack_636 = 0xf;
          uStack_635 = 0xf;
          uStack_634 = 0xf;
          break;
        }
        uVar19 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar19;
      } while (uVar19 < 10);
    }
    else {
      uVar9 = 0;
      do {
        uVar24 = param_3 >> ((uVar9 & 0xf) << 2);
        if ((uVar24 & 0xf) != 0) {
          *(undefined1 *)((longlong)&local_640 + (ulonglong)(((uint)uVar24 & 0xf) + 1)) =
               puVar32[uVar9];
        }
        uVar19 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar19;
      } while (uVar19 < 10);
    }
    uVar24 = 0;
    do {
      uVar28 = param_3 >> ((uVar24 & 0xf) << 2);
      uVar19 = (uint)uVar28 & 0xf;
      uVar9 = (ulonglong)uVar19;
      uVar18 = (uint)uVar24;
      if ((uVar28 & 0xf) != 0) {
        *(bool *)((longlong)&local_630 + (ulonglong)(uVar19 + 1) + 3) =
             ((byte)puVar32[(longlong)((int)uVar18 >> 3) + 0x140] >> (ulonglong)(uVar18 & 7) & 1) !=
             0;
      }
      uVar24 = (ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < 10);
  }
  uVar4 = local_630;
  lVar13 = 10;
  if (bVar2 != 1) {
    lVar13 = 0x14b;
  }
  cVar23 = puVar32[lVar13];
  bVar7 = cVar23 == '\0';
  cVar29 = !bVar7;
  cStack_632 = -bVar7;
  uStack_631 = !bVar7;
  if (puVar32[0x14c] == '\0') {
    cVar30 = uStack_631;
    uStack_631 = 0xff;
  }
  else {
    cVar29 = '\x01';
    if (cVar23 != '\0') {
      cVar29 = '\x02';
    }
    cVar30 = '\x01';
    if (cVar23 != '\0') {
      cVar30 = '\x02';
    }
  }
  if (puVar32[0x14d] == '\0') {
    cVar30 = -1;
  }
  else {
    cVar29 = cVar30 + '\x01';
  }
  if (puVar32[0x14e] == '\0') {
    cVar17 = -1;
    cVar23 = cVar29;
  }
  else {
    cVar23 = cVar29 + '\x01';
    cVar17 = cVar29;
  }
  if (puVar32[0x330] == '\0') {
    cVar23 = -1;
  }
  local_630._3_5_ = SUB85(uVar4,3);
  local_630._0_3_ = CONCAT12(cVar23,CONCAT11(cVar17,cVar30));
  uStack_544 = CONCAT17(uStack_631,
                        CONCAT16(cStack_632,
                                 CONCAT15(uStack_633,
                                          CONCAT14(uStack_634,
                                                   CONCAT13(uStack_635,
                                                            CONCAT12(uStack_636,
                                                                     CONCAT11(uStack_637,bStack_638)
                                                                    ))))));
  local_54c = CONCAT17(uStack_639,
                       CONCAT16(cStack_63a,
                                CONCAT15(uStack_63b,
                                         CONCAT14(uStack_63c,
                                                  CONCAT13(local_640._3_1_,
                                                           CONCAT12(local_640._2_1_,
                                                                    CONCAT11(local_640._1_1_,
                                                                             (byte)local_640)))))));
  uStack_534 = local_628;
  uStack_53c = local_630;
  local_52c = local_620;
  local_52a = local_61e;
  local_498 = 1;
  local_497 = iVar8 != 0x10de && iVar8 != 0x8086 || param_3 == 0;
  local_496 = (undefined1)local_5e0;
  local_490 = puVar32;
  uVar9 = FUN_18016d490(uVar9,&local_5b8,&local_590);
  lVar13 = local_5b8;
  if ((uVar9 & 1) == 0) goto LAB_18015f124;
  local_5c0 = 1;
  local_5c8 = 0x200;
  local_5d8 = FUN_1802229a8(0x200);
  lStack_5d0 = local_5d8;
  local_5e0 = FUN_1802130a8(&local_5d8,local_590);
  local_600 = 0;
  uStack_5f8 = 0;
  local_5f0 = 0x80;
  local_5e8 = 1;
  uVar31 = FUN_1802229a8(0x80);
  local_600 = uVar31;
  uStack_5f8 = uVar31;
  if (local_490[0x126d] != '\x03') {
    uVar31 = FUN_18016d538(uVar31,&local_590,&local_600,param_2);
  }
  uVar19 = (uint)(param_2 >> 0x20);
  if ((byte)local_490[0x126d] - 2 < 2) {
    cVar29 = local_490[0x14a];
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
    if ((local_490[0x147] == '\0') || (local_497 != '\0')) {
      local_2c4 = 0xffffffff;
    }
    else {
      uVar18 = 2;
      local_2c4 = local_278[2];
      local_278[local_278[2]] = 0xb;
      local_278[2] = local_278[2] + 1;
      do {
        uVar9 = (ulonglong)(uVar18 - 2);
        local_670 = FUN_180213268(0xe4,local_490[uVar9]);
        local_678 = uVar18 | 0x410100;
        local_668 = 0;
        local_670 = local_670 & 0xff;
        local_680[0] = 0xf;
        uVar31 = FUN_180214c88(&local_590,&local_600,0x36,(uint)uVar9 | local_2c4 << 0xe | 0x420300,
                               local_680,0x20);
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0xd);
    }
    if (local_490[0x126d] != '\x03') {
      param_3 = 0;
    }
    local_2d0 = param_3;
    if (cVar29 == '\0') {
      if (local_490[0x126d] == '\x03') {
        if (param_3 == 0) {
          uVar9 = 0;
          puVar32 = local_490;
          do {
            if (puVar32[uVar9] != '\0') {
              uVar31 = FUN_180177508(uVar31,&local_590,&local_600,uVar9);
              puVar32 = local_490;
            }
            uVar18 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar18;
          } while (uVar18 < 10);
        }
      }
      else {
        uVar9 = 0;
        puVar32 = local_490;
        do {
          if (puVar32[uVar9] != '\0') {
            uVar31 = FUN_180177458(uVar31,&local_590,&local_600,uVar9);
            puVar32 = local_490;
          }
          uVar18 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar18;
        } while (uVar18 < 2);
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
    uVar18 = uVar19 >> 0x1c & 1;
    if ((uVar19 >> 0x14 & 7) != 7) {
      uVar18 = 1;
    }
    local_2c0[0] = (int)uStack_544._6_1_ | 0x410200;
    if (uVar18 != 0 || (local_610 & 0xff) != 0) {
      local_2c0[0] = 0;
    }
    lVar13 = 1;
    do {
      local_2c0[lVar13] = (int)*(char *)((longlong)&uStack_544 + lVar13 + 6) | 0x410200;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    local_284 = 0;
    lVar13 = 0;
    do {
      local_2ac[lVar13] = 0;
      local_29c[lVar13] = 0xffffffff;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    local_28c = 0;
    if ((cVar29 == '\0') && (local_490[0x144] != '\0')) {
      uVar31 = FUN_180177590(uVar31,&local_590,&local_600);
      local_280 = (int)uVar31;
LAB_18015e628:
      if (local_490[0x145] == '\0') goto LAB_18015e644;
      local_27c = FUN_180177698(uVar31,&local_590,&local_600);
    }
    else {
      local_280 = 0;
      if (cVar29 == '\0') goto LAB_18015e628;
LAB_18015e644:
      local_27c = 0;
    }
    local_640._0_1_ = 0xff;
    local_640._1_1_ = 0xff;
    local_640._2_1_ = 0xff;
    local_640._3_1_ = 0xff;
    uStack_63c = 0;
    uStack_b8 = CONCAT17(uStack_631,
                         CONCAT16(cStack_632,
                                  CONCAT15(uStack_633,
                                           CONCAT14(uStack_634,
                                                    CONCAT13(uStack_635,
                                                             CONCAT12(uStack_636,
                                                                      CONCAT11(uStack_637,bStack_638
                                                                              )))))));
    local_c0 = CONCAT17(uStack_639,CONCAT16(cStack_63a,CONCAT15(uStack_63b,0xffffffff)));
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
  puVar11 = local_608;
  if ((byte)local_490[0x126d] - 2 < 2) {
    local_5f = 0;
    FUN_18017b378(param_1 + 0x3c,&local_590,&local_600,local_608 + 1,param_2);
    local_640._0_1_ = 0;
    local_640._1_1_ = 0;
    local_640._2_1_ = 0;
    local_640._3_1_ = 0;
    uStack_63c = 0;
    uStack_63b = 0;
    cStack_63a = 0;
    uStack_639 = 0;
    bStack_638 = 0;
    uStack_637 = 0;
    uStack_636 = 0;
    uStack_635 = 0;
    uStack_634 = 0;
    uStack_633 = 0;
    cStack_632 = 0;
    uStack_631 = 0;
    local_630 = 0x100;
    local_628 = CONCAT71(local_628._1_7_,1);
    uVar31 = FUN_1802229a8(0x100);
    local_5f = 1;
    lVar13 = 0;
    local_640._0_1_ = (byte)uVar31;
    local_640._1_1_ = (undefined1)((ulonglong)uVar31 >> 8);
    local_640._2_1_ = (undefined1)((ulonglong)uVar31 >> 0x10);
    local_640._3_1_ = (undefined1)((ulonglong)uVar31 >> 0x18);
    uStack_63c = (undefined1)((ulonglong)uVar31 >> 0x20);
    uStack_63b = (undefined1)((ulonglong)uVar31 >> 0x28);
    cStack_63a = (char)((ulonglong)uVar31 >> 0x30);
    uStack_639 = (undefined1)((ulonglong)uVar31 >> 0x38);
    puVar32 = local_490;
    bStack_638 = (byte)local_640;
    uStack_637 = local_640._1_1_;
    uStack_636 = local_640._2_1_;
    uStack_635 = local_640._3_1_;
    uStack_634 = uStack_63c;
    uStack_633 = uStack_63b;
    cStack_632 = cStack_63a;
    uStack_631 = uStack_639;
    do {
      if (*(int *)(puVar32 + lVar13 * 4 + 0x2f0) != 0) {
        local_288 = 0xffffffff;
        FUN_18017b378(param_1 + 0x3c,&local_590,&local_640,
                      puVar11 + *(uint *)(puVar32 + lVar13 * 4 + 0x2f0),param_2);
        FUN_180214c88(&local_590,&local_640,0x3e,0,local_680,0);
        puVar32 = local_490;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x10);
    lVar13 = 0;
    puVar14 = local_378;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar14 + lVar13 * 4));
      *(undefined4 *)((longlong)puVar14 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
    lVar13 = 0;
    puVar14 = local_378 + 0x10;
    do {
      FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar14 + lVar13 * 4));
      *(undefined4 *)((longlong)puVar14 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 10);
    FUN_180213800(&local_590,local_284);
    local_284 = 0;
    lVar13 = 0;
    puVar15 = local_2ac;
    do {
      FUN_180213800(&local_590,puVar15[lVar13]);
      puVar15[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
    FUN_180213800(&local_590,local_280);
    local_280 = 0;
    uVar31 = FUN_180213800(&local_590,local_27c);
    uVar6 = local_2c0[0];
    local_27c = 0;
    uVar18 = uVar19 >> 0x1c & 1;
    if ((uVar19 >> 0x14 & 7) != 7) {
      uVar18 = 1;
    }
    if (uVar18 != 0 || (local_610 & 0xff) != 0) {
      uVar19 = (uint)uStack_544._6_1_;
      uVar31 = FUN_18016d818(uVar31,&local_590,&local_600,local_2c0[0],param_2);
      uVar31 = FUN_18016db68(uVar31,&local_590,&local_600,uVar6,param_2);
      FUN_18016ded8(uVar31,&local_590,&local_600,uVar6,param_2);
      local_668 = 0;
      local_670 = 0xe4;
      local_680[0] = 0xf;
      local_678 = uVar6;
      FUN_180214c88(&local_590,&local_600,0x36,uVar19 | 0x410200,local_680,0x20);
      FUN_180213800(&local_590,local_2c0[0]);
      local_2c0[0] = 0;
    }
    FUN_180214c88(&local_590,&local_600,0x3e,0,local_680,0);
    lVar13 = CONCAT17(uStack_639,
                      CONCAT16(cStack_63a,
                               CONCAT15(uStack_63b,
                                        CONCAT14(uStack_63c,
                                                 CONCAT13(local_640._3_1_,
                                                          CONCAT12(local_640._2_1_,
                                                                   CONCAT11(local_640._1_1_,
                                                                            (byte)local_640)))))));
    FUN_180214fe8(&local_600,lVar13,
                  CONCAT17(uStack_631,
                           CONCAT16(cStack_632,
                                    CONCAT15(uStack_633,
                                             CONCAT14(uStack_634,
                                                      CONCAT13(uStack_635,
                                                               CONCAT12(uStack_636,
                                                                        CONCAT11(uStack_637,
                                                                                 bStack_638))))))) -
                  lVar13);
    FUN_1802229d8(CONCAT17(uStack_639,
                           CONCAT16(cStack_63a,
                                    CONCAT15(uStack_63b,
                                             CONCAT14(uStack_63c,
                                                      CONCAT13(local_640._3_1_,
                                                               CONCAT12(local_640._2_1_,
                                                                        CONCAT11(local_640._1_1_,
                                                                                 (byte)local_640))))
                                            ))));
  }
  else if ((byte)local_490[0x126d] == 1) {
    uVar9 = 0;
    puVar32 = local_490;
    do {
      puVar11 = puVar11 + 1;
LAB_18015e68c:
      while ((longlong)puVar11 - (longlong)local_608 >> 2 ==
             (ulonglong)*(uint *)(puVar32 + uVar9 * 4 + 0x121c)) {
        bVar2 = puVar32[uVar9 + 0x125c];
        iVar8 = 0;
        if ((bVar2 & 0xf0) == 0) {
LAB_18015e83c:
          puVar12 = (uint *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,puVar11,param_2,0);
          puVar11 = puVar12;
          iVar16 = local_250;
        }
        else if ((bVar2 & 0xf0) == 0x10) {
          puVar12 = &local_640;
          uVar19 = bVar2 >> 1 & 7;
          puVar25 = puVar12;
          puVar26 = puVar11;
          puVar27 = puVar11;
          if ((bVar2 >> 1 & 7) != 0) {
            do {
              puVar27 = puVar26 + 2;
              uVar19 = uVar19 - 1;
              puVar12 = puVar25 + 2;
              *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
              puVar25 = puVar12;
              puVar26 = puVar27;
            } while (uVar19 != 0);
          }
          if ((bVar2 & 1) != 0) {
            *puVar12 = *puVar27;
          }
          sVar3 = (short)puVar11[(ulonglong)bVar2 & 0xf];
          puVar11 = puVar11 + ((ulonglong)bVar2 & 0xf);
          while (sVar3 == -2) {
            sVar3 = (short)puVar11[(ulonglong)*(ushort *)((longlong)puVar11 + 2) + 1];
            puVar11 = puVar11 + (ulonglong)*(ushort *)((longlong)puVar11 + 2) + 1;
          }
          puVar11 = (uint *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,puVar11,param_2,0);
          FUN_1801772e8(puVar11,&local_590,&local_600,&local_610,CONCAT44(uStack_24c,local_250),
                        local_260,uStack_25c,0);
          puVar12 = (uint *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,&local_640,param_2,0)
          ;
          iVar16 = local_250;
        }
        else {
          if ((bVar2 & 0xf0) != 0x20) goto LAB_18015e83c;
          uVar19 = puVar11[1];
          iVar8 = FUN_180213760(&local_590,4,1);
          psVar10 = (short *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,puVar11,param_2,
                                           iVar8);
          sVar3 = *psVar10;
          while (sVar3 == -2) {
            sVar3 = psVar10[(ulonglong)(ushort)psVar10[1] * 2 + 2];
            psVar10 = psVar10 + (ulonglong)(ushort)psVar10[1] * 2 + 2;
          }
          puVar11 = (uint *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,psVar10,param_2,0);
          uVar31 = FUN_1801772e8(puVar11,&local_590,&local_600,&local_610,
                                 CONCAT44(uStack_24c,local_250),local_260,uStack_25c,0);
          puVar12 = (uint *)FUN_1801744d0(uVar31,&local_590,uVar19,0);
          iVar16 = local_250;
          if (iVar8 != 0) {
            iVar16 = iVar8;
          }
        }
        local_610 = CONCAT44(uStack_24c,local_250);
        FUN_1801772e8(puVar12,&local_590,&local_600,&local_610,iVar16,local_260,uStack_25c,
                      iVar8 != 0);
        FUN_180213800(&local_590,iVar8);
        puVar32 = local_490;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      uVar19 = *puVar11 & 0xffff;
      if (uVar19 == 0) {
LAB_18015e92c:
        puVar11 = puVar11 + 1;
        goto LAB_18015e68c;
      }
      if (uVar19 == 0x51) {
        puVar11 = puVar11 + 6;
        goto LAB_18015e68c;
      }
      if (uVar19 == 0xfffd) goto LAB_18015e92c;
      if (uVar19 != 0xfffe) {
        if (uVar19 == 0xffff) {
          lVar13 = 1;
          puVar14 = local_378;
          do {
            FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar14 + lVar13 * 4));
            lVar13 = lVar13 + 1;
          } while (lVar13 != 6);
          lVar13 = 0;
          puVar14 = local_378 + 3;
          do {
            FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar14 + lVar13 * 4));
            lVar13 = lVar13 + 1;
          } while (lVar13 != 6);
          lVar13 = 0;
          puVar14 = local_378 + 6;
          do {
            uVar31 = FUN_180213800(&local_590,*(undefined4 *)((longlong)puVar14 + lVar13 * 4));
            uVar9 = local_378[0];
            lVar13 = lVar13 + 1;
          } while (lVar13 != 2);
          uVar19 = (uint)local_378[0];
          uVar31 = FUN_18016d818(uVar31,&local_590,&local_600,local_378[0] & 0xffffffff,param_2);
          uVar31 = FUN_18016db68(uVar31,&local_590,&local_600,uVar9 & 0xffffffff,param_2);
          FUN_18016ded8(uVar31,&local_590,&local_600,uVar9 & 0xffffffff,param_2);
          local_668 = 0;
          local_670 = 0xe4;
          local_680[0] = 0xf;
          local_678 = uVar19;
          FUN_180214c88(&local_590,&local_600,0x2036,0x410200,local_680,0x20);
          FUN_180214c88(&local_590,&local_600,0x3e,0,local_680,0);
          FUN_180213800(&local_590,local_378[0] & 0xffffffff);
          break;
        }
        puVar11 = (uint *)FUN_180175360(param_1 + 0x3c,&local_590,&local_600,puVar11,param_2,0);
        local_610 = CONCAT44(uStack_24c,local_250);
        FUN_1801772e8(puVar11,&local_590,&local_600,&local_610,local_610,local_260,uStack_25c,0);
        puVar32 = local_490;
        goto LAB_18015e68c;
      }
      puVar11 = puVar11 + *(ushort *)((longlong)puVar11 + 2);
    } while( true );
  }
  uVar31 = FUN_1802132f0(local_590,&local_5d8,0);
  if ((local_588 >> 3 & 1) != 0) {
    uVar31 = FUN_1802133a8(local_590,&local_5d8,3,1,0x4d0,0);
  }
  if ((local_588 >> 4 & 1) != 0) {
    uVar31 = FUN_1802133a8(local_590,&local_5d8,4,1,0xec0,0);
  }
  if ((local_588 >> 5 & 1) != 0) {
    uVar31 = FUN_1802133a8(local_590,&local_5d8,5,1,0x100,uStack_58c >> 5 & 1);
  }
  if ((byte)local_490[0x126d] - 2 < 2) {
    FUN_18016e098(uVar31,&local_590,&local_5d8,param_2);
    uVar20 = 6;
    uVar21 = uVar20;
    if (local_52a == 0) {
      uVar21 = 2;
      uVar20 = 3;
    }
    if ((char)local_54c != '\0') {
      uVar22 = 7;
      if (local_52a == 0) {
        uVar22 = 4;
      }
      FUN_180213588(&local_5d8,0,local_54c & 0xff,uVar22);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_5d8,1,local_54c._1_1_,uVar21);
    }
    puVar32 = local_490;
    if (local_490[0x126d] == '\x02') {
      local_608 = (uint *)(param_2 >> 0x37 & 1);
      uVar19 = 2;
      iVar8 = (int)local_608;
      do {
        if (puVar32[uVar19 - 2] != '\0') {
          uVar22 = uVar20;
          if (iVar8 != 0) {
            uVar22 = 1;
          }
          FUN_180213538(&local_5d8,uVar19,puVar32[uVar19 - 2],uVar22);
          puVar32 = local_490;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < 4);
      if (local_54c._4_1_ != '\0') {
        FUN_180213538(&local_5d8,4,local_54c._4_1_,uVar21);
        puVar32 = local_490;
      }
      uVar19 = 5;
      do {
        uVar18 = uVar19 - 5;
        if (puVar32[(ulonglong)uVar18 + 0x2a] != '\0') {
          uVar22 = uVar20;
          if (((byte)puVar32[(longlong)((int)uVar18 >> 3) + 0x140] >> (ulonglong)(uVar18 & 7) & 1)
              == 0) {
            uVar22 = uVar21;
          }
          FUN_180213538(&local_5d8,uVar19,puVar32[(ulonglong)uVar18 + 0x2a],uVar22);
          puVar32 = local_490;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < 0xd);
    }
    else if (local_490[0x126d] == '\x03') {
      uVar9 = 2;
      do {
        if (*(char *)((longlong)&local_54c + uVar9) != '\0') {
          uVar22 = uVar20;
          if (*(char *)((longlong)&uStack_53c + uVar9 + 3) == '\0') {
            uVar22 = uVar21;
          }
          FUN_180213538(&local_5d8,uVar9,*(char *)((longlong)&local_54c + uVar9),uVar22);
        }
        uVar19 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar19;
        puVar32 = local_490;
      } while (uVar19 < 0xd);
    }
    if (uStack_544._5_1_ != 0) {
      local_678 = 9;
      local_680[0] = 0xd;
      FUN_180215058(&local_5d8,4,0x4000863,(uint)uStack_544._5_1_ << 4 | 0x101002,local_680,0x10);
      puVar32 = local_490;
    }
    lVar13 = 0;
    do {
      if (puVar32[lVar13 + 0x14b] != '\0') {
        FUN_1802135e0(&local_5d8,(longlong)*(char *)((longlong)&uStack_544 + lVar13 + 6),0xf);
        puVar32 = local_490;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
LAB_18015edf4:
    if (puVar32[0x330] != '\0') {
      FUN_180215058(&local_5d8,2,0x2000065,0xc001,local_680,0);
    }
  }
  else if ((byte)local_490[0x126d] == 1) {
    FUN_18016e098(uVar31,&local_590,&local_5d8,param_2);
    uVar20 = 6;
    if (local_52a == 0) {
      uVar20 = 2;
    }
    if ((char)local_54c != '\0') {
      uVar21 = 7;
      if (local_52a == 0) {
        uVar21 = 4;
      }
      FUN_180213588(&local_5d8,0,local_54c & 0xff,uVar21);
    }
    if (local_54c._1_1_ != '\0') {
      FUN_180213538(&local_5d8,1,local_54c._1_1_,uVar20);
    }
    local_608 = (uint *)(param_2 >> 0x37 & 1);
    uVar9 = 0;
    iVar8 = (int)local_608;
    puVar32 = local_490;
    do {
      if (puVar32[uVar9] != '\0') {
        uVar21 = uVar20;
        if (iVar8 != 0) {
          uVar21 = 1;
        }
        FUN_180213538(&local_5d8,(int)uVar9 + 2,puVar32[uVar9],uVar21);
        puVar32 = local_490;
      }
      uVar19 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar19;
    } while (uVar19 < 2);
    if (local_54c._4_1_ != '\0') {
      FUN_180213538(&local_5d8,4,local_54c._4_1_,uVar20);
      puVar32 = local_490;
    }
    uVar9 = 0;
    do {
      if (puVar32[uVar9 + 0x2a] != '\0') {
        FUN_180213538(&local_5d8,(int)uVar9 + 5,puVar32[uVar9 + 0x2a],uVar20);
        puVar32 = local_490;
      }
      uVar19 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar19;
    } while (uVar19 < 6);
    FUN_1802135e0(&local_5d8,0,0xf);
    puVar32 = local_490;
    goto LAB_18015edf4;
  }
  if (local_558._1_1_ != '\0') {
    FUN_180215058(&local_5d8,2,0x2000068,local_558._1_1_,local_680,0);
  }
  if ((local_2c8 != '\0') && (local_2c4 == 0xffffffff)) {
    local_678 = 0xb;
    local_680[0] = 2;
    FUN_180215058(&local_5d8,4,0x400005b,0x1010f2,local_680,0x10);
  }
  uVar9 = 0;
  if (local_278[2] != 0) {
    do {
      local_680[0] = local_278[uVar9];
      local_678 = 4;
      FUN_180215058(&local_5d8,4,0x4000069,uVar9,local_680,0x10);
      uVar19 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar19;
    } while (uVar19 < local_278[2]);
  }
  FUN_180213108(&local_5d8,&local_600,local_5e0);
  lVar13 = local_5d8;
  FUN_180214fe8(&local_5b8,local_5d8,lStack_5d0 - local_5d8);
  FUN_1802229d8(local_600);
  FUN_1802229d8(lVar13);
  lVar5 = lStack_5b0;
  lVar13 = local_5b8;
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar9 = (ulonglong)(lStack_5b0 - local_5b8) >> 1;
    *(byte *)(uVar9 + local_5b8) = *(byte *)(uVar9 + local_5b8) ^ 0x2a;
  }
  uVar31 = FUN_180212ef0(&local_5b8);
  uVar31 = FUN_18016ef50(uVar31,&local_590,local_598);
  uVar31 = FUN_180212d48(uVar31,lVar5 - lVar13,lVar13);
LAB_18015f124:
  FUN_1802229d8(lVar13);
  return uVar31;
}

