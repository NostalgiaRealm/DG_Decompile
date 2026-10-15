/*
 * FUN_10072210 at 10072210
 * undefined FUN_10072210(void)
 * Address ranges: 10072210-1007288b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10072210(int param_1,uint *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  ulonglong *puVar6;
  char cVar7;
  bool bVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint local_394;
  int local_390;
  uint *local_38c;
  undefined4 local_388;
  int local_384;
  ulonglong local_380;
  undefined4 local_370;
  int iStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 *local_2d0;
  int local_2cc;
  int local_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  undefined4 local_8c;
  uint local_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  
  local_384 = param_1 + 0x90;
  local_388 = param_4;
  (*(code *)PTR_FUN_1016c074)(local_384);
  uVar23 = *(uint *)(param_1 + 0x80);
  if (uVar23 == 0) {
LAB_100722cc:
    puVar22 = (undefined4 *)0x0;
  }
  else {
    uVar18 = *param_2;
    uVar17 = 0;
    uVar16 = uVar23;
    do {
      uVar19 = uVar16 + uVar17 >> 1;
      uVar21 = *(ulonglong *)(*(int *)(param_1 + 0x7c) + uVar19 * 0x298);
      uVar12 = uVar19;
      if (uVar21 <= uVar18) {
        if (uVar18 <= uVar21) break;
        uVar17 = uVar19 + 1;
        uVar19 = uVar17;
        uVar12 = uVar16;
      }
      uVar16 = uVar12;
    } while (uVar16 != uVar17);
    if ((uVar19 == uVar23) ||
       (puVar6 = (ulonglong *)(*(int *)(param_1 + 0x7c) + uVar19 * 0x298),
       puVar22 = (undefined4 *)((int)puVar6 + 0xc), *puVar6 != (ulonglong)uVar18))
    goto LAB_100722cc;
  }
  if (puVar22 == (undefined4 *)0x0) {
    FUN_101325d0(&local_2d0,0,0x28c);
    local_2d0 = (undefined8 *)FUN_101321c0(0x264);
    if (local_2d0 == (undefined8 *)0x0) {
      local_2d0 = (undefined8 *)0x0;
    }
    else {
      *local_2d0 = 0;
      local_2d0[1] = 0;
      FUN_101325a0(local_2d0 + 2,param_2,0x254);
    }
    puVar11 = local_2d0;
    if (local_2d0 == (undefined8 *)0x0) goto LAB_10072834;
    local_2cc = FUN_10071ad0(param_1 + -0x18,param_2,param_3);
    if (local_2cc != 0) {
      local_2c8 = FUN_10071ad0(param_1 + -0x18,param_2 + 0x95,param_3);
      if (local_2c8 != 0) {
        uVar21 = (ulonglong)*param_2;
        puVar1 = (uint *)(param_1 + 0x80);
        uVar23 = *puVar1;
        uVar17 = 0;
        local_88 = param_2[0x12a];
        uStack_2bc = param_3[1];
        uStack_2c4 = *param_3;
        uStack_2ac = param_3[3];
        uStack_2b4 = param_3[2];
        uStack_29c = param_3[5];
        uStack_2a4 = param_3[4];
        uStack_28c = param_3[7];
        uStack_294 = param_3[6];
        uStack_7c = 0;
        uStack_84 = 0;
        uStack_6c = 0;
        uStack_74 = 0;
        uStack_5c = 0;
        uStack_64 = 0;
        uStack_4c = 0;
        uStack_54 = 0;
        local_8c = 1;
        if (uVar23 != 0) {
          uVar18 = 0;
          uVar16 = uVar23;
          do {
            uVar17 = uVar16 + uVar18 >> 1;
            uVar20 = *(ulonglong *)(*(int *)(param_1 + 0x7c) + uVar17 * 0x298);
            uVar19 = uVar17;
            if (uVar20 <= uVar21) {
              if (uVar21 <= uVar20) break;
              uVar18 = uVar17 + 1;
              uVar17 = uVar18;
              uVar19 = uVar16;
            }
            uVar16 = uVar19;
          } while (uVar16 != uVar18);
        }
        piVar2 = (int *)(param_1 + 0x7c);
        if ((uVar17 == uVar23) ||
           (puVar6 = (ulonglong *)(*piVar2 + uVar17 * 0x298), *puVar6 != uVar21)) {
          local_38c = (uint *)(param_1 + 0x84);
          uVar18 = *(uint *)(param_1 + 0x84);
          if (uVar18 == uVar23) {
            local_394 = 0x10;
            if (uVar18 != 0) {
              local_394 = uVar18 << 1;
            }
            iVar13 = FUN_101322b0(local_394 * 0x298);
            local_390 = iVar13;
            if (iVar13 != 0) {
              if (*puVar1 != 0) {
                uVar23 = 0;
                local_380 = uVar21;
                do {
                  FUN_101325a0(iVar13 + uVar23 * 0x298,*piVar2 + uVar23 * 0x298,0x298);
                  uVar23 = uVar23 + 1;
                  uVar21 = local_380;
                } while (uVar23 < *puVar1);
              }
              FUN_101322d0(*(int *)(param_1 + 0x78));
              *(int *)(param_1 + 0x78) = local_390;
              *piVar2 = local_390;
              *local_38c = local_394;
            }
          }
          uVar23 = *puVar1;
          if (*local_38c != uVar23) {
            for (; uVar17 < uVar23; uVar23 = uVar23 - 1) {
              iVar13 = *piVar2 + uVar23 * 0x298;
              FUN_101325a0(iVar13,iVar13 + -0x298,0x298);
            }
            *puVar1 = *puVar1 + 1;
            *(int *)(*piVar2 + uVar17 * 0x298 + 8) = (int)uVar21;
            FUN_101325a0(*piVar2 + uVar17 * 0x298 + 0xc,&local_2d0,0x28c);
            *(ulonglong *)(*piVar2 + uVar17 * 0x298) = uVar21;
          }
        }
        else {
          FUN_101325a0((int)puVar6 + 0xc,&local_2d0,0x28c);
        }
        puVar22 = (undefined4 *)(*piVar2 + uVar17 * 0x298 + 0xc);
        if (puVar22 == (undefined4 *)0x0) goto LAB_10072834;
        goto LAB_10072580;
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_101322d0(*(undefined4 *)puVar11);
      *puVar11 = 0;
      puVar11[1] = 0;
      FUN_10132260(puVar11,0x264);
    }
    goto LAB_10072834;
  }
LAB_10072580:
  uVar17 = 0xffffffff;
  uVar23 = 0;
  do {
    iVar13 = puVar22[uVar23 * 0x12 + 1];
    if ((iVar13 == 0) ||
       (local_394 = puVar22[0x91],
       (*(byte *)((int)&local_394 + ((int)uVar23 >> 3)) >> (ulonglong)(uVar23 & 7) & 1) == 0)) {
      if (uVar17 == 0xffffffff) {
        uVar17 = uVar23;
      }
    }
    else {
      iVar14 = FUN_10132550(param_3,puVar22 + uVar23 * 0x12 + 3,0x40);
      if (iVar14 == 0) {
        uStack_368 = puVar22[uVar23 * 0x12 + 2];
        iStack_36c = iVar13;
        goto LAB_100726b4;
      }
    }
    uVar23 = uVar23 + 1;
  } while ((int)uVar23 < 8);
  if (uVar23 == 8) {
    if (uVar17 == 0xffffffff) {
      uVar17 = 0;
    }
    iStack_36c = FUN_10071ad0(param_1 + -0x18,param_2,param_3);
    puVar22[uVar17 * 0x12 + 1] = iStack_36c;
    uStack_368 = FUN_10071ad0(param_1 + -0x18,param_2 + 0x95,param_3);
    puVar22[uVar17 * 0x12 + 2] = uStack_368;
    pbVar9 = (byte *)(((int)uVar17 >> 3) + (int)(puVar22 + 0x91));
    *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar17 & 7));
  }
LAB_100726b4:
  local_370 = *puVar22;
  uStack_364 = local_388;
  local_360 = *(undefined8 *)(puVar22 + 0x93);
  uStack_358 = *(undefined8 *)(puVar22 + 0x95);
  local_350 = *(undefined8 *)(puVar22 + 0x97);
  uStack_348 = *(undefined8 *)(puVar22 + 0x99);
  local_340 = *(undefined8 *)(puVar22 + 0x9b);
  uStack_338 = *(undefined8 *)(puVar22 + 0x9d);
  local_330 = *(undefined8 *)(puVar22 + 0x9f);
  uStack_328 = *(undefined8 *)(puVar22 + 0xa1);
  iVar13 = *(int *)(param_1 + -0x14) + *(int *)(param_1 + -0x10) * 0x16c0;
  puVar3 = (undefined4 *)(iVar13 + 0x1880);
  FUN_101308d0(puVar3);
  uStack_318 = CONCAT44(uStack_364,uStack_368);
  local_320 = CONCAT44(iStack_36c,local_370);
  cVar5 = *(char *)(iVar13 + 0x19ac);
  bVar10 = true;
  uStack_308 = uStack_358;
  uStack_310 = local_360;
  uStack_2f8 = uStack_348;
  local_300 = local_350;
  uStack_2e8 = uStack_338;
  uStack_2f0 = local_340;
  uStack_2d8 = uStack_328;
  local_2e0 = local_330;
  if (cVar5 == '\0') {
LAB_100727f8:
    if (cVar5 == '\0') goto LAB_100727fc;
  }
  else {
    puVar15 = (undefined4 *)FUN_10130778(puVar3,0x54);
    if (puVar15 != (undefined4 *)0x0) {
      piVar2 = (int *)(iVar13 + 0x19a8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      puVar15[1] = 0x54;
      puVar15[2] = param_1 + -0x18;
      *(undefined8 *)(puVar15 + 5) = uStack_318;
      *(undefined8 *)(puVar15 + 3) = local_320;
      *(undefined8 *)(puVar15 + 9) = uStack_308;
      *(undefined8 *)(puVar15 + 7) = uStack_310;
      *(undefined8 *)(puVar15 + 0xd) = uStack_2f8;
      *(undefined8 *)(puVar15 + 0xb) = local_300;
      *(undefined8 *)(puVar15 + 0x11) = uStack_2e8;
      *(undefined8 *)(puVar15 + 0xf) = uStack_2f0;
      *(undefined8 *)(puVar15 + 0x15) = uStack_2d8;
      *(undefined8 *)(puVar15 + 0x13) = local_2e0;
      puVar4 = (undefined4 *)((int)puVar15 + 0x5fU & 0xfffffffc);
      *puVar4 = 0;
      *puVar15 = FUN_10072890;
      puVar3[*(int *)(iVar13 + 0x19a4) * 5 + 0x1a] = puVar4;
      if (*(char *)(iVar13 + 0x19ad) != '\0') {
        *puVar3 = 0;
        (*(code *)PTR_FUN_1016c0fc)(*(undefined4 *)(iVar13 + 0x18e0));
        bVar10 = false;
      }
      goto LAB_100727f8;
    }
    *puVar3 = 0;
    (*(code *)PTR_FUN_1016c114)(100);
    FUN_101308d0(puVar3);
LAB_100727fc:
    piVar2 = *(int **)(iVar13 + 0x1990);
    *piVar2 = param_1 + -0x18;
    *(undefined8 *)(piVar2 + 3) = uStack_318;
    *(undefined8 *)(piVar2 + 1) = local_320;
    *(undefined8 *)(piVar2 + 7) = uStack_308;
    *(undefined8 *)(piVar2 + 5) = uStack_310;
    *(undefined8 *)(piVar2 + 0xb) = uStack_2f8;
    *(undefined8 *)(piVar2 + 9) = local_300;
    *(undefined8 *)(piVar2 + 0xf) = uStack_2e8;
    *(undefined8 *)(piVar2 + 0xd) = uStack_2f0;
    *(undefined8 *)(piVar2 + 0x13) = uStack_2d8;
    *(undefined8 *)(piVar2 + 0x11) = local_2e0;
    FUN_10072890(piVar2);
  }
  if (bVar10) {
    *puVar3 = 0;
  }
LAB_10072834:
  (*(code *)PTR_FUN_1016c0c0)(local_384);
  return puVar22 != (undefined4 *)0x0;
}

