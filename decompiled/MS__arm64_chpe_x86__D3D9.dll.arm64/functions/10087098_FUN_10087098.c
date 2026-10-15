/*
 * FUN_10087098 at 10087098
 * undefined FUN_10087098(void)
 * Address ranges: 10087098-1008833f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10087098(int param_1,int param_2,undefined1 *param_3,ulonglong param_4,ulonglong param_5,
            uint param_6,int *param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            char param_11,undefined4 param_12,undefined1 param_13)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  char cVar20;
  char cVar21;
  uint uVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined4 *extraout_w11;
  undefined4 *extraout_w11_00;
  undefined4 *extraout_w11_01;
  ulonglong uVar25;
  int extraout_w12;
  int *local_640;
  undefined8 *local_63c;
  undefined4 local_638;
  uint local_634;
  uint local_630;
  uint local_62c;
  uint local_628;
  undefined4 uStack_624;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_604;
  char local_600;
  int local_5f8;
  int iStack_5f4;
  undefined4 local_5f0;
  undefined1 local_5ec;
  int *local_5e8;
  undefined4 local_5e0;
  undefined1 uStack_5dc;
  undefined1 uStack_5db;
  undefined1 uStack_5da;
  undefined1 uStack_5d9;
  undefined1 uStack_5d8;
  undefined1 uStack_5d7;
  undefined1 uStack_5d6;
  undefined1 uStack_5d5;
  undefined1 uStack_5d4;
  undefined1 uStack_5d3;
  char cStack_5d2;
  undefined1 uStack_5d1;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined2 local_5c0;
  byte local_5be;
  undefined8 local_5b0;
  undefined4 uStack_5a8;
  undefined1 uStack_5a4;
  undefined3 uStack_5a3;
  int local_590;
  int iStack_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  uint local_548;
  undefined8 local_544;
  undefined8 uStack_53c;
  undefined8 uStack_534;
  undefined8 uStack_52c;
  ushort uStack_524;
  byte local_522;
  undefined1 auStack_4d0 [64];
  undefined1 local_490;
  char local_48f;
  undefined1 local_48e;
  undefined1 *local_48c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  ulonglong local_2d0;
  char local_2c8;
  uint local_2c4;
  uint local_2c0 [5];
  undefined4 auStack_2ac [4];
  undefined4 auStack_29c [4];
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  uint auStack_278 [6];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int local_250;
  undefined4 uStack_24c;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_5f;
  
  local_584 = param_8;
  uVar11 = FUN_101325d0(&local_544,0,0x504);
  uStack_578 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  local_550 = (ulonglong)CONCAT24(0x40,auStack_4d0);
  uStack_558 = 0;
  local_560 = 0;
  local_580 = (ulonglong)param_6;
  FUN_1007ff68(uVar11,&local_580);
  uStack_5d8 = 0;
  uStack_5d7 = 0;
  uStack_5d6 = 0;
  uStack_5d5 = 0;
  uStack_5d4 = 0;
  cStack_5d2 = 0;
  uStack_5d1 = 0;
  local_5e0._1_1_ = 0;
  local_5e0._2_1_ = 0;
  local_5e0._3_1_ = 0;
  uStack_5dc = 0;
  uStack_5db = 0;
  uStack_5da = 0;
  uStack_5d9 = 0;
  uStack_5c8 = 0;
  local_5d0 = 0;
  local_5c0 = 0;
  local_5be = 0;
  local_548 = (uint)CONCAT11(param_3[0x126d],param_3[0x126e]);
  local_5e0._0_1_ = param_3[0x144];
  uStack_5d3 = param_3[0x145];
  uVar12 = FUN_10080008(param_3[0x126d],&local_5e0,param_4);
  uVar6 = local_5c0;
  uVar11 = local_5d0;
  local_5be = (byte)(param_4 >> 0x30) & 1;
  local_5c0 = local_5c0 & 0xff;
  if ((uint)uVar12 < 3) {
    local_5e0._2_1_ = *param_3;
    local_5e0._3_1_ = param_3[1];
    uStack_5db = param_3[0x2a];
    uStack_5da = param_3[0x2b];
    uStack_5d9 = param_3[0x2c];
    uStack_5d8 = param_3[0x2d];
    uStack_5d7 = param_3[0x2e];
    uStack_5d6 = param_3[0x2f];
    uStack_5d5 = param_3[0x30];
    uStack_5d4 = param_3[0x31];
  }
  else {
    if ((param_5 == 0) || (param_3[0x147] != '\0')) {
      uVar22 = 0;
      do {
        if (param_3[uVar22] != '\0') {
          local_5c0 = CONCAT11(1,(char)uVar6);
          local_5e0._2_1_ = 0xf;
          local_5e0._3_1_ = 0xf;
          uStack_5dc = 0xf;
          uStack_5db = 0xf;
          uStack_5da = 0xf;
          uStack_5d9 = 0xf;
          uStack_5d8 = 0xf;
          uStack_5d7 = 0xf;
          uStack_5d6 = 0xf;
          uStack_5d5 = 0xf;
          uStack_5d4 = 0xf;
          break;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < 10);
    }
    else {
      uVar22 = 0;
      do {
        uVar24 = param_5 >> (((ulonglong)uVar22 & 0xf) << 2);
        if ((uVar24 & 0xf) != 0) {
          *(undefined1 *)((int)&local_5e0 + ((uint)uVar24 & 0xf) + 1) = param_3[uVar22];
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < 10);
    }
    uVar24 = 0;
    do {
      uVar25 = param_5 >> ((uVar24 & 0xf) << 2);
      uVar22 = (uint)uVar24;
      if ((uVar25 & 0xf) != 0) {
        *(bool *)((int)&local_5d0 + ((uint)uVar25 & 0xf) + 4) =
             ((byte)param_3[((int)uVar22 >> 3) + 0x140] >> (ulonglong)(uVar22 & 7) & 1) != 0;
      }
      uVar24 = (ulonglong)(uVar22 + 1);
    } while (uVar22 + 1 < 10);
  }
  iVar16 = 10;
  if ((uint)uVar12 != 1) {
    iVar16 = 0x14b;
  }
  cVar20 = param_3[iVar16] != '\0';
  cStack_5d2 = -(param_3[iVar16] == '\0');
  if (param_3[0x14c] == '\0') {
    uStack_5d1 = 0xff;
  }
  else {
    uStack_5d1 = cVar20;
    cVar20 = cVar20 + '\x01';
  }
  if (param_3[0x14d] == '\0') {
    cVar14 = -1;
    cVar21 = cVar20;
  }
  else {
    cVar21 = cVar20 + '\x01';
    cVar14 = cVar20;
  }
  if (param_3[0x14e] == '\0') {
    cVar15 = -1;
    cVar20 = cVar21;
  }
  else {
    cVar20 = cVar21 + '\x01';
    cVar15 = cVar21;
  }
  if (param_3[0x330] == '\0') {
    cVar20 = -1;
  }
  local_5d0._3_5_ = SUB85(uVar11,3);
  local_5d0._0_3_ = CONCAT12(cVar20,CONCAT11(cVar15,cVar14));
  uStack_53c = CONCAT17(uStack_5d1,
                        CONCAT16(cStack_5d2,
                                 CONCAT15(uStack_5d3,
                                          CONCAT14(uStack_5d4,
                                                   CONCAT13(uStack_5d5,
                                                            CONCAT12(uStack_5d6,
                                                                     CONCAT11(uStack_5d7,uStack_5d8)
                                                                    ))))));
  local_544 = CONCAT17(uStack_5d9,
                       CONCAT16(uStack_5da,
                                CONCAT15(uStack_5db,
                                         CONCAT14(uStack_5dc,
                                                  CONCAT13(local_5e0._3_1_,
                                                           CONCAT12(local_5e0._2_1_,
                                                                    CONCAT11(local_5e0._1_1_,
                                                                             (undefined1)local_5e0))
                                                          )))));
  uStack_52c = uStack_5c8;
  uStack_534 = local_5d0;
  uStack_524 = local_5c0;
  local_490 = 1;
  local_48f = param_11 != '\0' || param_5 == 0;
  local_48e = param_13;
  local_522 = local_5be;
  local_48c = param_3;
  uVar24 = FUN_10080058(uVar12,param_7,&local_580);
  if ((uVar24 & 1) == 0) {
    return 0;
  }
  local_5ec = 1;
  local_5f0 = 0x200;
  local_5f8 = FUN_101322b0(0x200);
  iStack_5f4 = local_5f8;
  local_588 = FUN_10122ff8(&local_5f8,(int)local_580);
  local_604 = 1;
  local_608 = 0x80;
  uVar11 = FUN_101322b0(0x80);
  local_610._0_4_ = (undefined4)uVar11;
  local_610._4_4_ = (undefined4)local_610;
  if (local_48c[0x126d] != '\x03') {
    uVar11 = FUN_10080658(uVar11,&local_580,&local_610,param_4);
  }
  uVar22 = (uint)(param_4 >> 0x20);
  if ((byte)local_48c[0x126d] == 1) {
    uStack_370 = 0;
    local_378 = 0;
    uStack_368 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
  }
  else if ((byte)local_48c[0x126d] - 2 < 2) {
    cVar20 = local_48c[0x14a];
    uStack_370 = 0;
    local_378 = 0;
    uStack_360 = 0;
    uStack_368 = 0;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_330 = 0;
    uStack_338 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_300 = 0;
    uStack_308 = 0;
    if ((local_48c[0x147] == '\0') || (local_48f != '\0')) {
      local_2c4 = 0xffffffff;
    }
    else {
      uVar17 = 2;
      local_2c4 = auStack_278[2];
      auStack_278[auStack_278[2]] = 0xb;
      auStack_278[2] = auStack_278[2] + 1;
      local_600 = cVar20;
      local_5e8 = param_7;
      local_5b0 = param_5;
      local_590 = param_1;
      iStack_58c = param_2;
      do {
        local_628 = FUN_10123210(0xe4,local_48c[uVar17 - 2]);
        local_62c = uVar17 | 0x410100;
        local_628 = local_628 & 0xff;
        uStack_624 = 0;
        local_630 = 0xf;
        local_634 = uVar17 - 2 | local_2c4 << 0xe | 0x420300;
        local_638 = 0x36;
        local_640 = (int *)&local_580;
        local_63c = &local_610;
        uVar11 = FUN_10122a88(&local_640,0x20);
        uVar17 = uVar17 + 1;
        param_5 = local_5b0;
        param_1 = local_590;
        param_2 = iStack_58c;
        cVar20 = local_600;
        param_7 = local_5e8;
      } while (uVar17 < 0xd);
    }
    if (local_48c[0x126d] != '\x03') {
      param_5 = 0;
    }
    local_2d0 = param_5;
    if (cVar20 == '\0') {
      if (local_48c[0x126d] == '\x03') {
        if (param_5 == 0) {
          uVar17 = 0;
          puVar18 = local_48c;
          do {
            if (puVar18[uVar17] != '\0') {
              uVar11 = FUN_1008b580(uVar11,&local_580,&local_610,uVar17);
              puVar18 = local_48c;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < 10);
        }
      }
      else {
        uVar17 = 0;
        puVar18 = local_48c;
        do {
          if (puVar18[uVar17] != '\0') {
            uVar11 = FUN_1008b4d8(uVar11,&local_580,&local_610,uVar17);
            puVar18 = local_48c;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < 2);
      }
    }
    else {
      uStack_2f0 = 0;
      uStack_2f8 = 0;
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
    }
    uVar17 = (uVar22 >> 0x19 | uVar22 >> 0x1c) & 1;
    if ((uVar22 >> 0x14 & 7) != 7) {
      uVar17 = 1;
    }
    local_2c0[0] = (int)uStack_53c._6_1_ | 0x410200;
    if (uVar17 != 0) {
      local_2c0[0] = 0;
    }
    uVar17 = 1;
    do {
      iVar16 = uVar17 + 6;
      puVar9 = local_2c0 + uVar17;
      uVar17 = uVar17 + 1;
      *puVar9 = (int)*(char *)((int)&uStack_53c + iVar16) | 0x410200;
    } while (uVar17 < 4);
    local_284 = 0;
    uVar17 = 0;
    do {
      auStack_2ac[uVar17] = 0;
      puVar1 = auStack_29c + uVar17;
      uVar17 = uVar17 + 1 & 0xff;
      *puVar1 = 0xffffffff;
    } while (uVar17 < 4);
    local_28c = 0;
    if ((cVar20 == '\0') && (local_48c[0x144] != '\0')) {
      uVar11 = FUN_1008b658(uVar11,&local_580,&local_610);
      local_280 = (undefined4)uVar11;
LAB_100876bc:
      if (local_48c[0x145] == '\0') goto LAB_100876dc;
      local_27c = FUN_1008b768(uVar11,&local_580,&local_610);
    }
    else {
      local_280 = 0;
      if (cVar20 == '\0') goto LAB_100876bc;
LAB_100876dc:
      local_27c = 0;
    }
    local_5b0._4_4_ = (uint)(local_5b0 >> 0x20) & 0xffffff00;
    local_5b0 = CONCAT44(local_5b0._4_4_,0xffffffff);
    uStack_c0 = local_5b0;
    uStack_a8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
  }
  if ((byte)local_48c[0x126d] == 1) {
    iVar16 = 0;
    puVar9 = (uint *)(param_2 + 4);
    puVar18 = local_48c;
    local_5e8 = param_7;
LAB_100879b0:
    while (param_7 = local_5e8,
          *(int *)(puVar18 + iVar16 * 4 + 0x121c) == (int)puVar9 - param_2 >> 2) {
      bVar4 = puVar18[iVar16 + 0x125c];
      iVar16 = iVar16 + 1;
      iVar8 = 0;
      uVar22 = bVar4 & 0xf0;
      if ((bVar4 & 0xf0) == 0) {
LAB_10087ba8:
        puVar9 = (uint *)FUN_10089280(param_1,&local_580,&local_610,puVar9,param_4,0);
        puVar10 = puVar9;
        iVar13 = local_250;
      }
      else if (uVar22 == 0x10) {
        uVar17 = bVar4 & 0xf;
        uVar5 = uVar17 >> 1;
        puVar10 = &local_5e0;
        uVar22 = 0;
        puVar23 = puVar9;
        if (uVar5 != 0) {
          do {
            uVar11 = *(undefined8 *)puVar23;
            uVar22 = uVar22 + 1;
            puVar23 = puVar23 + 2;
            *(undefined8 *)puVar10 = uVar11;
            puVar10 = puVar10 + 2;
          } while (uVar22 < uVar5);
        }
        if ((bVar4 & 1) != 0) {
          *puVar10 = *puVar23;
        }
        puVar9 = puVar9 + uVar17;
        uVar22 = *puVar9;
        while ((uVar22 & 0xffff) == 0xfffe) {
          puVar9 = puVar9 + (uVar22 >> 0x10) + 1;
          uVar22 = *puVar9;
        }
        puVar9 = (uint *)FUN_10089280(param_1,&local_580,&local_610,puVar9,param_4,0);
        FUN_1008b390(puVar9,&local_580,&local_610,&local_5b0,local_250,uStack_260,uStack_25c,0);
        puVar10 = (uint *)FUN_10089280(param_1,&local_580,&local_610,&local_5e0,param_4,0);
        iVar13 = local_250;
      }
      else {
        if (uVar22 != 0x20) goto LAB_10087ba8;
        uVar22 = puVar9[1];
        iVar8 = FUN_10121590(&local_580,4,1);
        puVar9 = (uint *)FUN_10089280(param_1,&local_580,&local_610,puVar9,param_4,iVar8);
        uVar17 = *puVar9;
        while ((uVar17 & 0xffff) == 0xfffe) {
          puVar9 = puVar9 + (uVar17 >> 0x10) + 1;
          uVar17 = *puVar9;
        }
        puVar9 = (uint *)FUN_10089280(param_1,&local_580,&local_610,puVar9,param_4,0);
        uVar11 = FUN_1008b390(puVar9,&local_580,&local_610,&local_5b0,local_250,uStack_260,
                              uStack_25c,0);
        puVar10 = (uint *)FUN_10088430(uVar11,&local_580,uVar22,0);
        iVar13 = local_250;
        if (iVar8 != 0) {
          iVar13 = iVar8;
        }
      }
      local_5b0 = CONCAT44(uStack_24c,local_250);
      FUN_1008b390(puVar10,&local_580,&local_610,&local_5b0,iVar13,uStack_260,uStack_25c,iVar8 != 0)
      ;
      FUN_10121648(&local_580,iVar8);
      puVar18 = local_48c;
    }
    uVar22 = *puVar9 & 0xffff;
    if (uVar22 < 0xfffd) {
      if (uVar22 == 0) goto LAB_10087f4c;
      if (uVar22 == 0x51) {
        puVar9 = puVar9 + 6;
        goto LAB_100879b0;
      }
    }
    else {
      if (uVar22 < 0xfffe) {
LAB_10087f4c:
        puVar9 = puVar9 + 1;
        goto LAB_100879b0;
      }
      if (uVar22 == 0xfffe) {
        puVar9 = puVar9 + (*puVar9 >> 0x10) + 1;
        goto LAB_100879b0;
      }
      if (uVar22 == 0xffff) goto code_r0x10087c38;
    }
    puVar9 = (uint *)FUN_10089280(param_1,&local_580,&local_610,puVar9,param_4,0);
    local_5b0 = CONCAT44(uStack_24c,local_250);
    FUN_1008b390(puVar9,&local_580,&local_610,&local_5b0,local_250,uStack_260,uStack_25c,0);
    puVar18 = local_48c;
    goto LAB_100879b0;
  }
  if ((byte)local_48c[0x126d] - 2 < 2) {
    local_5f = 0;
    FUN_1008f4d0(param_1,&local_580,&local_610,param_2 + 4,param_4);
    uStack_5a8 = 0x100;
    _uStack_5a4 = CONCAT31(uStack_5a3,1);
    uVar7 = FUN_101322b0(0x100);
    local_5f = 1;
    uVar17 = 0;
    local_5b0 = CONCAT44(uVar7,uVar7);
    puVar18 = local_48c;
    local_5e8 = param_7;
    do {
      if (*(int *)(puVar18 + (uVar17 + 0xbc) * 4) != 0) {
        local_288 = 0xffffffff;
        FUN_1008f4d0(param_1,&local_580,&local_5b0,
                     param_2 + *(int *)(puVar18 + (uVar17 + 0xbc) * 4) * 4,param_4);
        local_638 = 0x3e;
        local_634 = 0;
        local_640 = (int *)&local_580;
        local_63c = &local_5b0;
        FUN_10122a88(&local_640,0x10);
        puVar18 = local_48c;
      }
      param_7 = local_5e8;
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    uVar17 = 0;
    uVar24 = ZEXT48(&local_378);
    do {
      FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar17 * 4));
      uVar17 = uVar17 + 1;
      *extraout_w11 = 0;
    } while (uVar17 < 0x20);
    uVar17 = 0;
    uVar24 = ZEXT48(&uStack_2f8);
    do {
      FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar17 * 4));
      uVar17 = uVar17 + 1;
      *extraout_w11_00 = 0;
    } while (uVar17 < 10);
    FUN_10121648(&local_580,local_284);
    local_284 = 0;
    uVar17 = 0;
    uVar24 = ZEXT48(auStack_2ac);
    do {
      FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar17 * 4));
      *extraout_w11_01 = 0;
      uVar17 = extraout_w12 + 1U & 0xff;
    } while (uVar17 < 4);
    FUN_10121648(&local_580,local_280);
    local_280 = 0;
    uVar11 = FUN_10121648(&local_580,local_27c);
    uVar5 = local_2c0[0];
    local_27c = 0;
    uVar17 = (uVar22 >> 0x19 | uVar22 >> 0x1c) & 1;
    if ((uVar22 >> 0x14 & 7) != 7) {
      uVar17 = 1;
    }
    if (uVar17 != 0) {
      uVar22 = (uint)uStack_53c._6_1_;
      uVar11 = FUN_100808d8(uVar11,&local_580,&local_610,local_2c0[0],param_4);
      uVar11 = FUN_10080ba0(uVar11,&local_580,&local_610,uVar5,param_4);
      FUN_10080e98(uVar11,&local_580,&local_610,uVar5,param_4);
      local_628 = 0xe4;
      uStack_624 = 0;
      local_630 = 0xf;
      local_62c = uVar5;
      local_638 = 0x36;
      local_63c = &local_610;
      local_640 = (int *)&local_580;
      local_634 = uVar22 | 0x410200;
      FUN_10122a88(&local_640,0x20);
      FUN_10121648(&local_580,local_2c0[0]);
      local_2c0[0] = 0;
    }
    local_63c = &local_610;
    local_634 = 0;
    local_638 = 0x3e;
    local_640 = (int *)&local_580;
    FUN_10122a88(&local_640,0x10);
    FUN_10122c50(&local_610,(int)local_5b0,local_5b0._4_4_ - (int)local_5b0);
    FUN_101322d0((int)local_5b0);
  }
LAB_10087d58:
  uVar11 = FUN_101232a8((int)local_580,&local_5f8,0);
  if (((uint)uStack_578 >> 3 & 1) != 0) {
    uVar11 = FUN_10123390((int)local_580,&local_5f8,3,1,0x4d0,0);
  }
  uVar22 = (uint)uStack_578;
  if (((uint)uStack_578 >> 4 & 1) != 0) {
    uVar11 = FUN_10123390((int)local_580,&local_5f8,4,1,0xec0,0);
    uVar22 = (uint)uStack_578;
  }
  if ((uVar22 >> 5 & 1) != 0) {
    uVar11 = FUN_10123390((int)local_580,&local_5f8,5,1,0x100,local_580._4_4_ >> 5 & 1);
  }
  if ((byte)local_48c[0x126d] == 1) {
    FUN_10081010(uVar11,&local_580,&local_5f8,param_4);
    uVar7 = 6;
    if (local_522 == 0) {
      uVar7 = 2;
    }
    if ((char)local_544 != '\0') {
      uVar19 = 7;
      if (local_522 == 0) {
        uVar19 = 4;
      }
      switchD_10123638::caseD_10123570(&local_5f8,0,(char)local_544,uVar19);
    }
    if (local_544._1_1_ != '\0') {
      FUN_10123518(&local_5f8,1,local_544._1_1_,uVar7);
    }
    uVar22 = 0;
    puVar18 = local_48c;
    do {
      if (puVar18[uVar22] != '\0') {
        uVar19 = uVar7;
        if ((param_4 >> 0x37 & 1) != 0) {
          uVar19 = 1;
        }
        FUN_10123518(&local_5f8,uVar22 + 2,puVar18[uVar22],uVar19);
        puVar18 = local_48c;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < 2);
    if (local_544._4_1_ != '\0') {
      FUN_10123518(&local_5f8,4,local_544._4_1_,uVar7);
      puVar18 = local_48c;
    }
    uVar22 = 0;
    do {
      if (puVar18[uVar22 + 0x2a] != '\0') {
        FUN_10123518(&local_5f8,uVar22 + 5,puVar18[uVar22 + 0x2a],uVar7);
        puVar18 = local_48c;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < 6);
    FUN_101235c8(&local_5f8,0,0xf);
    puVar18 = local_48c;
  }
  else {
    if (1 < (byte)local_48c[0x126d] - 2) goto LAB_100881dc;
    FUN_10081010(uVar11,&local_580,&local_5f8,param_4);
    uVar7 = 6;
    uVar19 = uVar7;
    if (local_522 == 0) {
      uVar19 = 2;
      uVar7 = 3;
    }
    if ((char)local_544 != '\0') {
      uVar3 = 7;
      if (local_522 == 0) {
        uVar3 = 4;
      }
      switchD_10123638::caseD_10123570(&local_5f8,0,(char)local_544,uVar3);
    }
    if (local_544._1_1_ != '\0') {
      FUN_10123518(&local_5f8,1,local_544._1_1_,uVar19);
    }
    puVar18 = local_48c;
    if (local_48c[0x126d] == '\x02') {
      uVar22 = 2;
      do {
        if (puVar18[uVar22 - 2] != '\0') {
          uVar3 = uVar7;
          if ((param_4 >> 0x37 & 1) != 0) {
            uVar3 = 1;
          }
          FUN_10123518(&local_5f8,uVar22,puVar18[uVar22 - 2],uVar3);
          puVar18 = local_48c;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < 4);
      if (local_544._4_1_ != '\0') {
        FUN_10123518(&local_5f8,4,local_544._4_1_,uVar19);
        puVar18 = local_48c;
      }
      uVar22 = 5;
      do {
        if (puVar18[uVar22 + 0x25] != '\0') {
          uVar3 = uVar7;
          if (((byte)puVar18[((int)(uVar22 - 5) >> 3) + 0x140] >> (ulonglong)(uVar22 - 5 & 7) & 1)
              == 0) {
            uVar3 = uVar19;
          }
          FUN_10123518(&local_5f8,uVar22,puVar18[uVar22 + 0x25],uVar3);
          puVar18 = local_48c;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < 0xd);
    }
    else if (local_48c[0x126d] == '\x03') {
      uVar22 = 2;
      do {
        if (*(char *)((int)&local_544 + uVar22) != '\0') {
          uVar3 = uVar7;
          if (*(char *)((int)&uStack_534 + uVar22 + 3) == '\0') {
            uVar3 = uVar19;
          }
          FUN_10123518(&local_5f8,uVar22,*(char *)((int)&local_544 + uVar22),uVar3);
        }
        uVar22 = uVar22 + 1;
        puVar18 = local_48c;
      } while (uVar22 < 0xd);
    }
    if (uStack_53c._5_1_ != 0) {
      local_634 = (uint)uStack_53c._5_1_ << 4 | 0x101002;
      local_62c = 9;
      local_630 = 0xd;
      local_638 = 0x4000863;
      local_640 = &local_5f8;
      local_63c = (undefined8 *)&DAT_00000004;
      FUN_10122cd8(&local_640,0x18);
      puVar18 = local_48c;
    }
    uVar22 = 0;
    do {
      if (puVar18[uVar22 + 0x14b] != '\0') {
        FUN_101235c8(&local_5f8,*(undefined1 *)((int)&uStack_53c + uVar22 + 6),0xf);
        puVar18 = local_48c;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < 4);
  }
  if (puVar18[0x330] != '\0') {
    local_634 = 0xc001;
    local_638 = 0x2000065;
    local_63c = (undefined8 *)0x2;
    local_640 = &local_5f8;
    FUN_10122cd8(&local_640,0x10);
  }
LAB_100881dc:
  if (local_550._5_1_ != 0) {
    local_638 = 0x2000068;
    local_63c = (undefined8 *)0x2;
    local_640 = &local_5f8;
    local_634 = (uint)local_550._5_1_;
    FUN_10122cd8(&local_640,0x10);
  }
  if ((local_2c8 != '\0') && (local_2c4 == 0xffffffff)) {
    local_62c = 0xb;
    local_630 = 2;
    local_634 = 0x1010f2;
    local_638 = 0x400005b;
    local_640 = &local_5f8;
    local_63c = (undefined8 *)&DAT_00000004;
    FUN_10122cd8(&local_640,0x18);
  }
  uVar22 = 0;
  if (auStack_278[2] != 0) {
    do {
      local_638 = 0x4000069;
      local_63c = (undefined8 *)&DAT_00000004;
      local_630 = auStack_278[uVar22];
      local_62c = 4;
      local_640 = &local_5f8;
      local_634 = uVar22;
      FUN_10122cd8(&local_640,0x18);
      uVar22 = uVar22 + 1;
    } while (uVar22 < auStack_278[2]);
  }
  FUN_10123060(&local_5f8,&local_610,local_588);
  iVar16 = local_5f8;
  FUN_10122c50(param_7,local_5f8,iStack_5f4 - local_5f8);
  FUN_101322d0((undefined4)local_610);
  FUN_101322d0(iVar16);
  if (*(int *)(param_1 + 8) != 0) {
    pbVar2 = (byte *)(*param_7 + ((uint)(param_7[1] - *param_7) >> 1));
    *pbVar2 = *pbVar2 ^ 0x2a;
  }
  uVar11 = FUN_10122e00(param_7);
  FUN_100819e0(uVar11,&local_580,local_584);
  return 1;
code_r0x10087c38:
  uVar22 = 1;
  uVar24 = ZEXT48(&local_378);
  do {
    FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar22 * 4));
    uVar22 = uVar22 + 1;
  } while (uVar22 < 6);
  uVar22 = 0;
  uVar24 = ZEXT48(&uStack_360);
  do {
    FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar22 * 4));
    uVar22 = uVar22 + 1;
  } while (uVar22 < 6);
  uVar22 = 0;
  uVar24 = ZEXT48(&uStack_348);
  do {
    uVar11 = FUN_10121648(&local_580,*(undefined4 *)((int)uVar24 + uVar22 * 4));
    uVar22 = uVar22 + 1;
  } while (uVar22 < 2);
  uVar22 = (uint)local_378;
  uVar11 = FUN_100808d8(uVar11,&local_580,&local_610,(uint)local_378,param_4);
  uVar11 = FUN_10080ba0(uVar11,&local_580,&local_610,uVar22,param_4);
  FUN_10080e98(uVar11,&local_580,&local_610,uVar22,param_4);
  local_628 = 0xe4;
  uStack_624 = 0;
  local_630 = 0xf;
  local_62c = uVar22;
  local_634 = 0x410200;
  local_638 = 0x2036;
  local_63c = &local_610;
  local_640 = (int *)&local_580;
  FUN_10122a88(&local_640,0x20);
  local_638 = 0x3e;
  local_634 = 0;
  local_63c = &local_610;
  local_640 = (int *)&local_580;
  FUN_10122a88(&local_640,0x10);
  FUN_10121648(&local_580,(uint)local_378);
  goto LAB_10087d58;
}

