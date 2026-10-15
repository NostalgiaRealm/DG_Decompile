/*
 * FUN_100220b8 at 100220b8
 * undefined FUN_100220b8(void)
 * Address ranges: 100220b8-10023623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100220b8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int *piVar10;
  code *pcVar11;
  undefined ***pppuVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar25;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  float fVar26;
  byte bVar27;
  float fVar28;
  uint uVar29;
  int *local_4f4;
  int *local_4f0;
  code *local_4ec;
  float *local_4e8;
  float local_4e4;
  undefined8 *local_4e0;
  undefined ***local_4dc;
  undefined4 *local_4d8;
  int *local_4d4;
  undefined8 local_4d0;
  int local_4c8;
  int iStack_4c4;
  int local_4c0;
  float local_4b8;
  undefined8 local_4b4;
  float fStack_4ac;
  undefined8 local_4a8;
  undefined8 local_4a0;
  float local_498;
  float local_494;
  float local_490;
  undefined4 uStack_48c;
  undefined8 *local_488;
  int iStack_484;
  undefined1 auStack_480 [4];
  undefined1 auStack_47c [4];
  int *local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined **local_460;
  int iStack_45c;
  int local_458;
  int local_450;
  undefined8 local_44c;
  undefined8 uStack_444;
  undefined8 local_43c;
  undefined4 local_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  float local_420;
  undefined4 local_41c;
  undefined4 local_418;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined1 auStack_3f8 [4];
  undefined1 auStack_3f4 [4];
  undefined8 local_3f0;
  float local_3e8;
  float local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined1 auStack_3cc [4];
  uint local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined8 uStack_3b4;
  undefined8 uStack_3ac;
  undefined4 local_3a4;
  float local_3a0;
  undefined1 auStack_39c [4];
  undefined4 uStack_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  uint uStack_388;
  undefined8 *puStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  int local_370;
  undefined8 uStack_36c;
  undefined8 uStack_364;
  undefined4 local_35c;
  undefined1 auStack_358 [4];
  undefined4 local_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined8 uStack_344;
  undefined8 uStack_33c;
  undefined8 uStack_334;
  undefined8 uStack_32c;
  undefined8 uStack_324;
  undefined4 local_31c;
  undefined2 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 auStack_2fc [12];
  undefined1 auStack_2f0 [16];
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined1 auStack_2b0 [4];
  int local_2ac;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 auStack_270 [16];
  ulonglong local_260;
  undefined4 local_258;
  undefined1 auStack_238 [16];
  ulonglong local_228;
  undefined4 local_220;
  undefined1 auStack_200 [32];
  undefined4 local_1e0;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined1 auStack_190 [44];
  undefined1 local_164;
  
  iVar21 = param_1 + param_2 * 0x120;
  fVar28 = *(float *)(iVar21 + 0x1fc);
  fVar26 = *(float *)(iVar21 + 0x1f8);
  if (fVar26 == fVar28) {
    fVar26 = 0.0;
  }
  iVar17 = *(int *)(iVar21 + 0x200) + 1;
  local_4f0 = (int *)(param_1 + 8);
  iVar19 = *local_4f0;
  local_4c0 = param_3;
  local_4f4 = (int *)FUN_1001a220(param_1);
  local_4ec = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (local_4f4 != (int *)0x0) {
    piVar1 = (int *)(param_1 + 0x138);
    FUN_1006f188(*(undefined4 *)(*piVar1 + 0x3300),iVar19,1);
    local_4e8 = (float *)(iVar19 + 0xd7c);
    if (*local_4e8 != 0.0) {
      uVar13 = FUN_1000f8a0(*piVar1);
      if (fVar26 != 0.0) {
        FUN_10063e28(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),fVar28,0,0,0x1000);
        FUN_10063e28(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),fVar26,0,0,0x2000);
        FUN_100658e0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),fVar28,0,fVar26,0,
                     *(undefined4 *)(iVar21 + 0x144));
      }
      FUN_1000fda8(*piVar1,uVar13,0);
      uVar16 = *(undefined4 *)(&DAT_1009b9d8 + *(int *)(*local_4f0 + 0x2c) * 4);
      FUN_1007e4a0(auStack_190,&DAT_10099970,0x148);
      local_164 = 0xf;
      local_4f0 = (int *)(*piVar1 + 0x3358);
      uVar15 = FUN_10011ac0(*(int *)(*piVar1 + 0x3308) + 0x1600,auStack_190);
      *local_4f0 = uVar15;
      uVar15 = FUN_10012110(*(int *)(*piVar1 + 0x3308) + 0x15f0,&DAT_10099878);
      *(undefined4 *)(*piVar1 + 0x3364) = uVar15;
      uVar15 = FUN_10011e18(*(int *)(*piVar1 + 0x3308) + 0x1620,&DAT_100998d0);
      *(undefined4 *)(*piVar1 + 0x3360) = uVar15;
      *(undefined4 *)(*piVar1 + 0x3378) = uVar16;
      *(undefined4 *)(*piVar1 + 0x337c) = 0;
      *(undefined4 *)(*piVar1 + 0x3398) = 0;
      *(undefined4 *)(*piVar1 + 0x339c) = 1;
      *(undefined4 *)(*piVar1 + 0x33a0) = 0;
      *(undefined1 *)(*piVar1 + 0x33b6) = 1;
      iVar18 = *piVar1;
      local_3f0 = 0;
      local_3e8 = (float)*(uint *)(iVar18 + 0xa0);
      local_3e0 = 0;
      local_3e4 = (float)*(uint *)(iVar18 + 0xa4);
      local_3dc = 0x3f800000;
      FUN_10065770(*(undefined4 *)(*(int *)(iVar18 + 0x3308) + 0x1304),1,&local_3f0);
      local_470 = 0;
      uStack_468 = *(undefined8 *)(*piVar1 + 0xa0);
      FUN_10065640(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),1,&local_470);
      iVar6 = *piVar1;
      local_4d0 = 0;
      local_4c8 = *(int *)(iVar6 + 0xa0);
      iStack_4c4 = *(int *)(iVar6 + 0xa4);
      uVar16 = *(undefined4 *)(iVar19 + 0xd88);
      local_4e4 = *local_4e8;
      iVar18 = 0x974;
      if (local_4f4 != (int *)0x2) {
        iVar18 = 0x978;
      }
      local_4f0 = *(int **)(iVar18 + param_1);
      uVar22 = FUN_10061ab0(*(undefined4 *)(iVar6 + 0x330c),1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x3308) + 0x1300) + 0xc),
                            *(undefined8 *)(*(int *)(*(int *)(iVar6 + 0x3308) + 0x1304) + 0x938),
                            &local_308);
      if ((uVar22 & 1) != 0) {
        uVar15 = FUN_1005a420(*(int *)(*piVar1 + 0x3308) + 0x1630,0x100a1238,1);
        FUN_1000f960(*piVar1,5,uVar15,*(undefined4 *)(param_1 + 0x984),local_4f0);
        FUN_10063e28(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),fVar28,0,0,0x80);
        FUN_10063e28(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),local_4e4,0,0,4);
        FUN_10062b90(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x15dc),auStack_480,uVar16,0);
        FUN_10065330(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),1,auStack_480,0,0);
        FUN_100645a0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),1,auStack_2fc);
        FUN_10062b90(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x15d8),&local_4d8,iVar17,0);
        uVar16 = (*local_4ec)();
        (*extraout_w11)(uVar16,1,local_300,local_4d8,0);
        FUN_10064bb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),2,local_308);
        FUN_100106c8(*piVar1,uVar13);
        local_4f4 = (int *)0x0;
        iVar17 = FUN_1001ec58(param_1,extraout_x1,&local_4f4);
        if (local_4f4 != (int *)0x0) {
          FUN_1001a348(param_1,&local_4d0,local_4f4 + iVar17 * 4);
          piVar2 = (int *)(*(int *)(param_1 + 0x988) + 0x2c);
          if (*piVar2 != 0) {
            *piVar2 = 0;
          }
          iVar18 = *(int *)(param_1 + 0x988);
          local_4d0 = *(undefined8 *)(iVar18 + 0x68);
          local_4c8 = *(int *)(iVar18 + 0x28);
          iStack_4c4 = 0x10;
          FUN_10064fb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),0,1,&local_4d0);
          FUN_10065ca0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),4,1,iVar17,0);
        }
      }
      FUN_10063d90(*(int *)(*(int *)(*piVar1 + 0x3308) + 0x1304) + 4,0);
      iVar17 = *(int *)(iVar19 + 0xd84);
      fVar26 = 0.0;
      fVar28 = *local_4e8;
    }
  }
  piVar1 = (int *)(param_1 + 0x138);
  iVar19 = *piVar1;
  local_460 = &PTR_FUN_10098c9c;
  local_30c = *(undefined4 *)(*(int *)(iVar19 + 4) + 0xde);
  uStack_310 = *(undefined4 *)(*(int *)(iVar19 + 4) + 0xda);
  local_348 = *(undefined4 *)(iVar19 + 0x94);
  uStack_34c = *(undefined4 *)(iVar19 + 0x3304);
  uStack_344 = 0;
  uStack_33c = 0;
  uStack_334 = 0;
  uStack_32c = 0;
  uStack_324 = 0;
  local_31c = 0;
  local_318 = 0;
  uStack_314 = 0;
  local_478 = piVar1;
  iStack_45c = param_1;
  local_458 = iVar21 + 0x140;
  iStack_350 = param_1;
  iVar18 = FUN_1006e5b0(*(undefined4 *)(iVar19 + 0x3300),&iStack_350);
  iVar19 = *piVar1;
  piVar1 = (int *)(iVar19 + 4);
  if (((*(uint *)(*piVar1 + 0xc2) >> 2 & 1) == 0) && (*(char *)(param_1 + 0x126) == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  local_3c0 = *(undefined4 *)(*piVar1 + 0xc);
  local_3bc = *(undefined4 *)(*piVar1 + 0x10);
  local_3b8 = *(undefined4 *)(*piVar1 + 0x14);
  if (bVar9) {
    puVar25 = (undefined8 *)(iVar19 + 0xbc);
  }
  else {
    puVar25 = (undefined8 *)&DAT_10099c08;
  }
  uStack_3ac = puVar25[1];
  uStack_3b4 = *puVar25;
  local_3a4 = *(undefined4 *)(&DAT_10099bf0 + *(int *)(*piVar1 + 0xca) * 4);
  local_4dc = &local_460;
  if (*(char *)(iVar19 + 0x2c6a) == '\0') {
    local_4dc = (undefined ***)0x0;
  }
  puVar25 = *(undefined8 **)(iVar21 + 0x144);
  piVar1 = (int *)(iVar18 + 8);
  iVar21 = *(int *)(iVar19 + 0x3300);
  iVar19 = iVar21 + *piVar1 * 0x16c0;
  local_4e8 = (float *)(iVar19 + 0x6c0);
  local_4f4 = (int *)(iVar18 + 0xd68);
  pfVar4 = (float *)(iVar18 + (*local_4f4 + 0x35c) * 4);
  local_4e4 = *pfVar4;
  local_490 = *pfVar4;
  local_4f0 = piVar1;
  local_4e0 = puVar25;
  local_498 = fVar26;
  local_494 = fVar28;
  uVar23 = FUN_10062b90(*(undefined4 *)(iVar19 + 0x1c98),&uStack_48c,iVar17,0);
  iStack_484 = -1;
  puVar3 = (uint *)(iVar21 + 0x518);
  uStack_468 = 0;
  local_470 = 0;
  local_488 = puVar25;
  if ((*puVar3 != 0) && ((local_498 != 0.0 || (local_494 != 0.0)))) {
    local_4d4 = (int *)*piVar1;
    piVar1 = (int *)(iVar21 + 0x510);
    iVar17 = *piVar1 + (int)local_4d4 * 0x16c0;
    if (local_498 != 0.0) {
      piVar2 = (int *)(*(int *)(iVar17 + 0x19c4) + 0x634);
      *piVar2 = *piVar2 + 1;
      FUN_1006fc90(uVar23,iVar17 + 0x6c0,local_494,local_498,puVar25);
      FUN_10063d90(*(int *)(iVar17 + 0x19c4) + 4,0);
      local_498 = 0.0;
      local_488 = (undefined8 *)0x0;
    }
    pcVar11 = local_4ec;
    uVar16 = (*local_4ec)();
    (*extraout_w11_00)(uVar16,auStack_2f0);
    uVar16 = (*pcVar11)();
    (*extraout_w11_01)(uVar16,auStack_270);
    FUN_1006c6f8(*piVar1,auStack_2b0,iVar18,&local_3c0,local_2e0,local_2d8,local_260 & 0xffffffff,
                 local_258,0);
    local_44c = 0;
    uStack_444 = 0;
    local_43c = 0;
    uStack_42c = 0;
    local_434 = 0;
    uStack_430 = 0;
    uStack_428 = CONCAT44(local_2d8,local_2e0);
    local_420 = local_494;
    local_41c = uStack_48c;
    local_450 = iVar18;
    local_418 = FUN_1005d6d0(*(undefined4 *)(*piVar1 + 0x172c0),local_494);
    iVar19 = (*(code *)PTR_FUN_100a019c)(&uStack_3b4);
    if (iVar19 == 0) {
      uStack_428 = uStack_3ac;
      uStack_430 = (undefined4)uStack_3b4;
      uStack_42c = (undefined4)((ulonglong)uStack_3b4 >> 0x20);
    }
    if (local_2ac == 0) {
      local_43c = CONCAT44(local_43c._4_4_,
                           *(undefined4 *)(iVar18 + *(int *)(iVar18 + 0xd68) * 4 + 0xd70));
      puVar20 = (undefined4 *)
                FUN_10062b90(*(undefined4 *)(iVar17 + 0x1c9c),auStack_3f8,
                             *(undefined4 *)(iVar18 + 0xd78),*(int *)(iVar18 + 0xd68));
      uVar22 = local_43c & 0xffffffff;
      uStack_444 = uStack_288;
      local_44c = local_290;
      local_43c = CONCAT44(*puVar20,(undefined4)local_43c);
      local_434 = FUN_1005d6d0(*(undefined4 *)(*piVar1 + 0x172c0),uVar22);
    }
    piVar1 = local_4d4;
    pcVar11 = local_4ec;
    bVar27 = 0;
    local_4b8 = 0.0;
    local_4b4 = 0;
    uVar29 = 0;
    uStack_468 = uStack_288;
    local_470 = local_290;
    puVar20 = &uStack_48c;
    if (*puVar3 != 0) {
      do {
        local_4d8 = puVar20;
        uVar16 = (*pcVar11)();
        bVar14 = (*extraout_w11_02)(uVar16,piVar1,&local_450,&local_4b8);
        uVar29 = uVar29 + 1;
        bVar27 = bVar14 | bVar27;
        puVar20 = local_4d8;
      } while (uVar29 < *puVar3);
      if (bVar27 != 0) {
        if (local_4b8 == local_490) {
          local_490 = 0.0;
        }
        else {
          local_494 = local_4b8;
          *local_4d8 = (float)local_4b4;
          iStack_484 = (int)local_4b4._4_4_;
        }
      }
    }
  }
  pppuVar12 = local_4dc;
  puVar25 = local_4e0;
  piVar1 = (int *)((int)local_4e8 + 0x1304);
  *(int *)(*piVar1 + 0x634) = *(int *)(*piVar1 + 0x634) + 1;
  *(undefined8 *)((int)local_4e8 + 0x90) = *(undefined8 *)(*piVar1 + 0x938);
  if (((local_494 != 0.0) || (local_498 != 0.0)) &&
     (uVar22 = FUN_10070360(iVar21,iVar18,&local_498,local_4e0,&local_3c0,local_4dc),
     fVar26 = local_494, (uVar22 & 1) == 0)) {
    if (local_490 != 0.0) {
      if (local_498 == 0.0) {
        FUN_10063e28(*piVar1,local_494,0,0,0x800);
        fVar28 = local_4e4;
        FUN_10063e28(*piVar1,local_4e4,0,0,0x400);
        FUN_10065980(*piVar1,fVar28,fVar26);
      }
      else {
        FUN_1006fc90(uVar22,local_4e8,local_4e4,local_498,puVar25);
      }
    }
    fVar26 = local_4e4;
    pcVar11 = local_4ec;
    if (pppuVar12 != (undefined ***)0x0) {
      *(int *)(*piVar1 + 0x948) = iVar21;
      uVar29 = *(uint *)(iVar18 + 0x18);
      if (uVar29 == 0) {
                    /* WARNING: Does not return */
        uVar23 = SoftwareBreakpoint(0xf004,0x10022d04);
        (*(code *)uVar23)();
      }
      uVar7 = 0;
      if (uVar29 != 0) {
        uVar7 = *(uint *)(iVar18 + 0x10) / uVar29;
      }
      uVar29 = *(uint *)(iVar18 + 0x1c);
      if (uVar29 == 0) {
                    /* WARNING: Does not return */
        uVar23 = SoftwareBreakpoint(0xf004,0x10022d20);
        (*(code *)uVar23)();
      }
      uVar8 = 0;
      if (uVar29 != 0) {
        uVar8 = *(uint *)(iVar18 + 0x14) / uVar29;
      }
      local_4a8 = 0;
      local_4a0 = CONCAT44(uVar8,uVar7);
      (*local_4ec)();
      (*extraout_w11_03)(fVar26,auStack_200);
      local_3a0 = fVar26;
      FUN_10062b90(*(undefined4 *)((int)local_4e8 + 0x15dc),auStack_39c,
                   *(undefined4 *)(iVar18 + 0xd78),*local_4f4);
      local_378 = 0;
      uStack_380 = 0x3f800000;
      uStack_37c = 0x3f800000;
      uStack_398 = local_1e0;
      puStack_384 = &local_4a8;
      uStack_394 = uVar7;
      uStack_390 = uVar8;
      uStack_38c = uVar7;
      uStack_388 = uVar8;
      (*pcVar11)();
      (*extraout_w11_04)(pppuVar12,&local_3a0);
    }
  }
  if (*puVar3 != 0) {
    iVar17 = *local_4f0;
    iVar19 = *(int *)(iVar21 + 0x510) + iVar17 * 0x16c0;
    if (iStack_484 != -1) {
      FUN_10063e28(*(undefined4 *)(iVar19 + 0x19c4),local_494,0,0,iStack_484);
    }
    uStack_364 = uStack_468;
    uStack_36c = local_470;
    local_35c = *(undefined4 *)(iVar18 + *(int *)(iVar18 + 0xd68) * 4 + 0xd70);
    local_370 = iVar18;
    FUN_10062b90(*(undefined4 *)(iVar19 + 0x1c9c),auStack_358,*(undefined4 *)(iVar18 + 0xd78),
                 *(int *)(iVar18 + 0xd68));
    local_354 = FUN_1005d6d0(*(undefined4 *)(*(int *)(iVar21 + 0x510) + 0x172c0),local_35c);
    pcVar11 = local_4ec;
    uVar29 = 0;
    if (*puVar3 != 0) {
      do {
        uVar16 = (*pcVar11)();
        (*extraout_w11_05)(uVar16,iVar17,&local_370);
        uVar29 = uVar29 + 1;
      } while (uVar29 < *puVar3);
    }
  }
  pcVar11 = local_4ec;
  piVar2 = local_4f0;
  if ((*(char *)(iVar18 + 0xd5a) != '\0') &&
     (local_4dc = (undefined ***)(iVar18 + 0xd8c), *local_4dc != (undefined **)0x0)) {
    iVar17 = iVar21 + *local_4f0 * 0x16c0;
    uVar16 = (*local_4ec)();
    (*extraout_w11_06)(uVar16,auStack_238);
    piVar5 = (int *)(iVar17 + 0x19c4);
    local_4e0 = (undefined8 *)(iVar17 + 0x750);
    *(int *)(*piVar5 + 0x634) = *(int *)(*piVar5 + 0x634) + 1;
    *local_4e0 = *(undefined8 *)(*piVar5 + 0x938);
    uVar22 = FUN_10061ab0(*(undefined4 *)(iVar17 + 0x1ca8),2,
                          *(undefined4 *)(*(int *)(iVar17 + 0x19c0) + 0xc),
                          *(undefined8 *)(*piVar5 + 0x938),&local_3d8);
    if ((uVar22 & 1) != 0) {
      local_4d4 = (int *)(iVar17 + 0x6c8);
      uVar23 = FUN_1005bfb0(*local_4d4 + 0x38,&local_4a8,2,
                            *(undefined4 *)(*(int *)(iVar17 + 0x19c0) + 0xc),*local_4e0);
      if ((int)local_4a0 != 0) {
        *(int *)(*piVar5 + 0x948) = iVar21;
        FUN_1006d300(uVar23,iVar18,&uStack_3b4,local_228 & 0xffffffff,local_220,
                     local_4a0 & 0xffffffff,&local_4b8);
        piVar10 = local_4f4;
        local_4e0 = *(undefined8 **)(iVar18 + *local_4f4 * 4 + 0xd70);
        uVar16 = (*pcVar11)();
        (*extraout_w11_07)(uVar16,auStack_1c8);
        FUN_10062b90(*(undefined4 *)(iVar17 + 0x1c9c),auStack_47c,*(undefined4 *)(iVar18 + 0xd78),
                     *piVar10);
        iVar19 = *piVar2;
        uVar16 = FUN_10062b90(*(undefined4 *)(iVar17 + 0x1c98),auStack_3f4,
                              *(undefined4 *)(iVar18 + 0xd94),0);
        puVar20 = (undefined4 *)(*pcVar11)(uVar16);
        (*extraout_w11_08)(*(undefined4 *)(iVar21 + iVar19 * 0x18 + 0x520),2,local_3d0,*puVar20,0);
        *(undefined4 *)(iVar17 + 0x708) = 1;
        *(undefined4 *)(iVar17 + 0x70c) = local_1a8;
        uVar16 = FUN_10012110(iVar17 + 0x1cb0,0x1009bc68);
        *(undefined4 *)(iVar17 + 0x6f8) = uVar16;
        uVar16 = FUN_10011e18(iVar17 + 0x1ce0,0x1009bde8);
        iVar19 = *piVar5;
        *(undefined4 *)(iVar17 + 0x6f4) = uVar16;
        puVar20 = (undefined4 *)(iVar17 + 0x6d0);
        *(undefined4 *)(iVar17 + 0x6d8) = *(undefined4 *)(iVar17 + 0x1850);
        *(undefined4 *)(iVar17 + 0x6d4) = *(undefined4 *)(iVar17 + 0x1860);
        *(undefined4 *)(iVar17 + 0x6fc) = *(undefined4 *)(iVar17 + 0x1868);
        FUN_1005d238(*(undefined4 *)(iVar19 + 0x8e4),*puVar20,*(undefined4 *)(iVar19 + 0x8e0),iVar19
                     ,*(undefined8 *)(iVar19 + 0x938));
        FUN_10064690(*piVar5,*puVar20);
        FUN_100645a0(*piVar5,1,auStack_3cc);
        FUN_10064880(*piVar5,5);
        local_4a0 = 0x1000000200;
        FUN_10064fb0(*piVar5,0,1,&local_4a8);
        FUN_10065330(*piVar5,1,auStack_47c,0,0);
        local_400 = 0;
        local_3fc = 0x3f800000;
        fStack_410 = local_4b8;
        fStack_40c = (float)local_4b4;
        fStack_408 = local_4b4._4_4_;
        fStack_404 = fStack_4ac;
        local_4d0 = CONCAT44((int)(float)local_4b4,(int)local_4b8);
        local_4c8 = (int)(local_4b4._4_4_ + local_4b8);
        iStack_4c4 = (int)(fStack_4ac + (float)local_4b4);
        FUN_10065770(*piVar5,1,&fStack_410);
        FUN_10065640(*piVar5,1,&local_4d0);
        FUN_10063e28(*piVar5,local_4e0,0,0,4);
        if (*(int *)(iVar18 + 0xd90) == 0) {
          puVar24 = &DAT_1009bf70;
        }
        else {
          FUN_10064bb0(*piVar5,1,local_3d8 + (ulonglong)local_3c8);
          uVar16 = FUN_10011ac0(iVar17 + 0x1cc0,0x1009bb20);
          *(undefined4 *)(iVar17 + 0x6ec) = uVar16;
          uVar16 = FUN_1005a8e0(iVar17 + 0x1d00,puVar20);
          iVar19 = *piVar5;
          FUN_1005d238(*(undefined4 *)(iVar19 + 0x8e4),uVar16,*(undefined4 *)(iVar19 + 0x8e0),iVar19
                       ,*(undefined8 *)(iVar19 + 0x938));
          FUN_100647f0(*piVar5,uVar16);
          FUN_10063e28(*piVar5,*(int *)(iVar18 + 0xd90),0,0,0x80);
          FUN_10065ca0(*piVar5,4,1,0,0);
          puVar24 = (undefined *)0x1009bca0;
        }
        uVar16 = FUN_10011ac0(iVar17 + 0x1cc0,puVar24);
        *(undefined4 *)(iVar17 + 0x6ec) = uVar16;
        uVar16 = FUN_1005a8e0(iVar17 + 0x1d00,puVar20);
        FUN_100647f0(*piVar5,uVar16);
        iVar17 = *piVar5;
        FUN_1005d238(*(undefined4 *)(iVar17 + 0x8e4),uVar16,*(undefined4 *)(iVar17 + 0x8e0),iVar17,
                     *(undefined8 *)(iVar17 + 0x938));
        FUN_10064bb0(*piVar5,1,local_3d8);
        FUN_10063e28(*piVar5,*local_4dc,0,0,0x80);
        FUN_10065ca0(*piVar5,4,1,0,0);
        if (*(int *)(*local_4d4 + 0x2c) != 0) {
          *(int *)(*local_4d4 + 0x2c) = 0;
        }
        FUN_10063d90(*piVar5 + 4,0);
      }
    }
  }
  fVar26 = local_4e4;
  FUN_10063e28(*piVar1,local_4e4,0,0,0);
  FUN_10063d90(*piVar1 + 4,1);
  uVar23 = *(undefined8 *)(*piVar1 + 0x938);
  piVar2 = (int *)((int)local_4e8 + 0x1300);
  FUN_1005d570(*(undefined4 *)(iVar21 + 0x172c0),fVar26,0,0,*piVar2,0xffffffff,0,uVar23);
  pcVar11 = local_4ec;
  if (((local_4c0 == 0) && (*(char *)(iVar18 + 0xd5c) != '\0')) &&
     ((*(int *)(iVar18 + 0x34) != 2 || (*(char *)(iVar18 + 0xd5d) == '\0')))) {
    uVar22 = 0x200;
  }
  else {
    uVar22 = 0;
  }
  iVar21 = *piVar2;
  uVar16 = (*local_4ec)(*(undefined4 *)(iVar18 + 4),extraout_x1_00,uVar22);
  (*extraout_w11_09)(uVar16,local_4c0,uVar22 & 0xffffffff);
  puVar20 = (undefined4 *)(iVar21 + 0xc);
  uVar16 = (*pcVar11)();
  (*extraout_w11_10)(uVar16,*puVar20,uVar23);
  uVar23 = FUN_1005a240(*piVar2);
  *(undefined8 *)(*piVar1 + 0x938) = uVar23;
  uVar16 = (*pcVar11)();
  iVar21 = (*extraout_w11_11)(uVar16);
  piVar1 = local_478;
  *local_4f4 = iVar21;
  FUN_1006f730(*(undefined4 *)(*local_478 + 0x3300),iVar18);
  FUN_1006f228(*(undefined4 *)(*piVar1 + 0x3300),*(undefined4 *)(*piVar1 + 0x94),0);
  *(undefined1 *)(*piVar1 + 0x2c61) = 1;
  *(undefined1 *)(*piVar1 + 0x2c60) = 1;
  *(undefined1 *)(*piVar1 + 0x2c62) = 1;
  *(undefined1 *)(*piVar1 + 0x2c63) = 1;
  return;
}

