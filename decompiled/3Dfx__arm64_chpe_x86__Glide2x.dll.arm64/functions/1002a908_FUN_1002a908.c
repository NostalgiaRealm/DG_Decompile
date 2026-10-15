/*
 * FUN_1002a908 at 1002a908
 * undefined FUN_1002a908(void)
 * Address ranges: 1002a908-1002b3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a908(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong extraout_x1;
  ulonglong uVar14;
  ulonglong extraout_x8;
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
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  undefined4 *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  uint local_3a0;
  uint local_39c;
  uint *local_398;
  code *local_390;
  int iStack_38c;
  uint *local_388;
  int iStack_384;
  uint *local_380;
  int local_37c;
  int *piStack_378;
  byte local_374;
  undefined4 *local_370;
  int *local_36c;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined1 auStack_340 [16];
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_320;
  undefined4 local_308;
  int local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f0;
  int local_2ec;
  int iStack_2e8;
  int local_2e4;
  int iStack_2e0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 auStack_160 [88];
  int local_108;
  undefined1 auStack_100 [88];
  int local_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [32];
  
  piVar17 = (int *)(param_1 + 4);
  iVar8 = **(int **)(param_1 + 8);
  iVar9 = *(int *)(*piVar17 + 0x295c);
  (*(code *)PTR_FUN_1009d03c)(iVar9 + 0x4a0);
  iVar10 = 0;
  if (*(uint *)(iVar9 + 0x4bc) != 0) {
    uVar12 = 0;
    do {
      piVar2 = *(int **)(*(int *)(iVar9 + 0x4b8) + uVar12 * 4);
      if (*piVar2 == iVar8) {
        iVar10 = piVar2[0x358];
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(iVar9 + 0x4bc));
  }
  (*(code *)PTR_FUN_1009d090)(iVar9 + 0x4a0);
  if (iVar10 != param_1) {
    return;
  }
  local_36c = (int *)(param_1 + 8);
  bVar5 = FUN_1002a8d0(param_1);
  if (bVar5 == 0) {
    iVar8 = *(int *)(*piVar17 + 4);
    uVar12 = *(uint *)(iVar8 + 0x37);
    if ((0xfffffff7 < uVar12) &&
       (uVar12 == *(uint *)(iVar8 + 0x3b) && uVar12 != 0xfffffff9 || *(uint *)(iVar8 + 0x3b) < 0x100
       )) {
      if (*(int *)(iVar8 + 8) == 0) {
        iVar8 = FUN_1002b4a0(param_1);
      }
      else {
        iVar8 = *(int *)(iVar8 + 8) + -1;
      }
      iVar9 = *piVar17;
      FUN_100272a8(iVar9,&local_388,iVar8,0);
      FUN_10027500(iVar9,&local_390,iVar8,&local_388,0);
      FUN_1002b6a0(param_1,&local_388);
      iVar8 = *piVar17;
      if ((((local_388 != *(uint **)(iVar8 + 0xa0)) || (iStack_384 != *(int *)(iVar8 + 0xa4))) ||
          (local_390 != *(code **)(iVar8 + 0xa8))) || (iStack_38c != *(int *)(iVar8 + 0xac))) {
        *(uint **)(iVar8 + 0xa0) = local_388;
        *(int *)(*piVar17 + 0xa4) = iStack_384;
        *(code **)(*piVar17 + 0xa8) = local_390;
        *(int *)(*piVar17 + 0xac) = iStack_38c;
        FUN_1002ec80(*piVar17);
      }
    }
  }
  iVar8 = *(int *)(*piVar17 + 4);
  iVar9 = *(int *)(iVar8 + 8);
  uVar12 = *(uint *)(iVar8 + 0xc6) & 1 | 2;
  if (bVar5 != 0) {
    uVar12 = *(uint *)(iVar8 + 0xc2) >> 2 & 1;
  }
  puVar15 = (undefined4 *)*local_36c;
  puVar16 = *(uint **)(*piVar17 + 0x295c);
  local_388 = puVar16 + 0x128;
  (*(code *)PTR_FUN_1009d03c)(local_388);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_3a0 = 0;
  local_398 = puVar16 + puVar15[2] * 10 + 6;
  local_380 = local_398;
  if ((uVar12 == 0) || (iVar9 == 0)) {
LAB_1002abec:
    local_3a0 = 0;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar6 = (*extraout_w11)(puVar16,extraout_x1 & 0xffffffff);
    if (cVar6 != '\0') goto LAB_1002abec;
    auVar18 = (*pcVar4)(*local_398,iVar9 + -1);
    iVar8 = (*extraout_w11_00)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_,&local_3a0);
    if (iVar8 < 0) goto LAB_1002abec;
  }
  local_398 = puVar15 + 0xd;
  local_390 = (code *)*local_398;
  if (uVar12 - 2 < 2) {
    *local_398 = uVar12;
    FUN_1006a1b0(puVar16,puVar15,local_3a0,0);
    if (*local_398 != 3) {
      uVar11 = (*pcVar4)();
      iVar8 = (*extraout_w11_09)(uVar11,1,local_3a0);
      goto LAB_1002b0b8;
    }
    uVar11 = (*(code *)PTR_FUN_1009d184)(*puVar15,0xfffffff0);
    puVar15[0x34e] = uVar11;
    uVar11 = (*(code *)PTR_FUN_1009d184)(*puVar15,0xffffffec);
    puVar15[0x34f] = uVar11;
    (*(code *)PTR_FUN_1009d188)(*puVar15,puVar15 + 0x34a);
    if (local_3a0 == 0) {
      iVar8 = (*(code *)PTR_FUN_1009d1b0)(puVar15 + 0x34a,2);
    }
    else {
      uVar11 = (*pcVar4)();
      (*extraout_w11_01)(uVar11,auStack_160);
      iVar8 = local_108;
    }
    puVar1 = (undefined8 *)(puVar15 + 0x313);
    local_2f0 = 0x68;
    *(undefined8 *)(puVar15 + 0x315) = 0;
    *puVar1 = 0;
    *(undefined8 *)(puVar15 + 0x319) = 0;
    *(undefined8 *)(puVar15 + 0x317) = 0;
    *(undefined8 *)(puVar15 + 0x31d) = 0;
    *(undefined8 *)(puVar15 + 0x31b) = 0;
    *(undefined8 *)(puVar15 + 0x321) = 0;
    *(undefined8 *)(puVar15 + 799) = 0;
    *(undefined8 *)(puVar15 + 0x325) = 0;
    *(undefined8 *)(puVar15 + 0x323) = 0;
    *(undefined8 *)(puVar15 + 0x329) = 0;
    *(undefined8 *)(puVar15 + 0x327) = 0;
    *(undefined8 *)(puVar15 + 0x32d) = 0;
    *(undefined8 *)(puVar15 + 0x32b) = 0;
    *(undefined8 *)(puVar15 + 0x331) = 0;
    *(undefined8 *)(puVar15 + 0x32f) = 0;
    *(undefined8 *)(puVar15 + 0x335) = 0;
    *(undefined8 *)(puVar15 + 0x333) = 0;
    *(undefined8 *)(puVar15 + 0x339) = 0;
    *(undefined8 *)(puVar15 + 0x337) = 0;
    *(undefined8 *)(puVar15 + 0x33d) = 0;
    *(undefined8 *)(puVar15 + 0x33b) = 0;
    *(undefined8 *)(puVar15 + 0x341) = 0;
    *(undefined8 *)(puVar15 + 0x33f) = 0;
    *(undefined8 *)(puVar15 + 0x345) = 0;
    *(undefined8 *)(puVar15 + 0x343) = 0;
    *(undefined8 *)(puVar15 + 0x347) = 0;
    puVar15[0x349] = 0;
    iVar9 = (*(code *)PTR_FUN_1009d174)(iVar8,&local_2f0);
    if ((iVar9 != 0) &&
       (iVar9 = (*(code *)PTR_FUN_1009d154)(&uStack_2c8,0xffffffff,puVar1), iVar9 != 0)) {
      *(undefined8 *)(puVar15 + 0x315) = uStack_2c0;
      *puVar1 = uStack_2c8;
      *(undefined8 *)(puVar15 + 0x319) = uStack_2b0;
      *(undefined8 *)(puVar15 + 0x317) = uStack_2b8;
      *(undefined8 *)(puVar15 + 0x31d) = uStack_2a0;
      *(undefined8 *)(puVar15 + 0x31b) = uStack_2a8;
      *(undefined8 *)(puVar15 + 0x321) = uStack_290;
      *(undefined8 *)(puVar15 + 799) = uStack_298;
      uVar11 = (*pcVar4)();
      (*extraout_w11_02)(uVar11,&local_1a0);
      local_39c = 0;
      uStack_278 = *(undefined8 *)(puVar15 + 0x315);
      local_280 = *puVar1;
      uStack_268 = *(undefined8 *)(puVar15 + 0x319);
      uStack_270 = *(undefined8 *)(puVar15 + 0x317);
      local_1b0 = *(undefined8 *)(puVar15 + 0x347);
      uStack_258 = *(undefined8 *)(puVar15 + 0x31d);
      local_260 = *(undefined8 *)(puVar15 + 0x31b);
      uStack_248 = *(undefined8 *)(puVar15 + 0x321);
      uStack_250 = *(undefined8 *)(puVar15 + 799);
      local_1a8 = puVar15[0x349];
      uStack_238 = *(undefined8 *)(puVar15 + 0x325);
      local_240 = *(undefined8 *)(puVar15 + 0x323);
      uStack_228 = *(undefined8 *)(puVar15 + 0x329);
      uStack_230 = *(undefined8 *)(puVar15 + 0x327);
      uStack_218 = *(undefined8 *)(puVar15 + 0x32d);
      local_220 = *(undefined8 *)(puVar15 + 0x32b);
      uStack_208 = *(undefined8 *)(puVar15 + 0x331);
      uStack_210 = *(undefined8 *)(puVar15 + 0x32f);
      uStack_1f8 = *(undefined8 *)(puVar15 + 0x335);
      local_200 = *(undefined8 *)(puVar15 + 0x333);
      uStack_1e8 = *(undefined8 *)(puVar15 + 0x339);
      uStack_1f0 = *(undefined8 *)(puVar15 + 0x337);
      uStack_1d8 = *(undefined8 *)(puVar15 + 0x33d);
      local_1e0 = *(undefined8 *)(puVar15 + 0x33b);
      local_1c8 = *(undefined8 *)(puVar15 + 0x341);
      uStack_1d0 = *(undefined8 *)(puVar15 + 0x33f);
      uStack_1b8 = *(undefined8 *)(puVar15 + 0x345);
      local_1c0 = *(undefined8 *)(puVar15 + 0x343);
      if (local_3a0 == 0) {
        iVar9 = 0;
        uVar11 = (*pcVar4)();
        iVar10 = (*extraout_w11_03)(uVar11,0,&local_39c);
        uVar12 = local_3a0;
        if (-1 < iVar10) {
          local_390 = pcVar4;
          local_398 = puVar16;
          local_37c = param_1;
          piStack_378 = piVar17;
          local_374 = bVar5;
          local_370 = puVar15;
          do {
            uVar11 = (*pcVar4)();
            (*extraout_w11_04)(uVar11,auStack_100);
            param_1 = local_37c;
            puVar16 = local_398;
            piVar17 = piStack_378;
            uVar12 = local_39c;
            puVar15 = local_370;
            bVar5 = local_374;
            if (local_a8 == iVar8) break;
            uVar11 = (*local_390)();
            (*extraout_w11_05)(uVar11);
            iVar9 = iVar9 + 1;
            uVar11 = (*pcVar4)();
            iVar10 = (*extraout_w11_06)(uVar11,iVar9,&local_39c);
            param_1 = local_37c;
            puVar16 = local_398;
            piVar17 = piStack_378;
            uVar12 = local_3a0;
            puVar15 = local_370;
            bVar5 = local_374;
          } while (-1 < iVar10);
        }
        local_3a0 = uVar12;
        if (local_3a0 != 0) goto LAB_1002af14;
      }
      else {
LAB_1002af14:
        (*pcVar4)();
        iVar9 = (*extraout_w11_07)(extraout_x8 & 0xffffffff,&local_1a0,&local_360,0);
        if (iVar9 < 0) {
          local_350 = local_190;
          uStack_358 = uStack_198;
          local_360 = local_1a0;
          local_348 = local_188;
        }
        if (uStack_358._4_4_ == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if (uStack_358._4_4_ != 0) {
            uVar12 = (uint)uStack_358 / uStack_358._4_4_;
          }
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,uVar12);
        uStack_1d8 = CONCAT44((undefined4)local_360,(undefined4)uStack_1d8);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_360._4_4_);
        uVar11 = 0x580000;
        if (uVar12 == 0) {
          uVar11 = 0x180000;
        }
        uStack_238 = CONCAT44(uStack_238._4_4_,uVar11);
        (*(code *)PTR_FUN_1009d138)(&uStack_2c8,&local_280,0,4,0);
        (*(code *)PTR_FUN_1009d174)(iVar8,&local_2f0);
        (*(code *)PTR_FUN_1009d1f4)(*puVar15,0xfffffff0,0x90000000);
        (*(code *)PTR_FUN_1009d1f4)(*puVar15,0xffffffec,0x40000);
        (*(code *)PTR_FUN_1009d1f8)
                  (*puVar15,0xfffffffe,local_2ec,iStack_2e8,local_2e4 - local_2ec,
                   iStack_2e0 - iStack_2e8,0x10);
      }
      if (local_39c != 0) {
        uVar11 = (*pcVar4)();
        (*extraout_w11_08)(uVar11);
        local_3a0 = 0;
      }
    }
LAB_1002b0bc:
    uVar11 = (*pcVar4)();
    uVar13 = (*extraout_w11_10)(uVar11,&local_330);
    if ((-1 < (int)uVar13) && (local_2fc - 3U < 2)) {
      (*pcVar4)();
      (*extraout_w11_11)(puVar16,puVar15);
      uVar11 = (*pcVar4)();
      (*extraout_w11_12)(uVar11,local_308,local_330,uStack_32c,local_320,local_2f8);
      (*pcVar4)();
      uVar13 = (*extraout_w11_13)(puVar16,puVar15,0);
    }
    uVar7 = FUN_10069eb0(uVar13,puVar15);
    *(undefined1 *)((int)puVar15 + 0xd5d) = uVar7;
    *(undefined1 *)((int)puVar15 + 0xd5e) = 0;
    bVar3 = true;
  }
  else {
    iVar8 = FUN_1006a420();
    FUN_1006a1b0(puVar16,puVar15,local_3a0,0);
LAB_1002b0b8:
    if (-1 < iVar8) goto LAB_1002b0bc;
    bVar3 = false;
    *local_398 = (uint)local_390;
    if (uVar12 == 2) {
      uVar14 = (ulonglong)local_3a0;
      if (local_3a0 != 0) {
        (*pcVar4)();
        iVar8 = (*extraout_w11_14)(uVar14 & 0xffffffff,auStack_a0);
        if ((-1 < iVar8) &&
           (uVar12 = (*(code *)PTR_FUN_1009d184)(*puVar15,0xfffffff0),
           (uVar12 & 0x80c80000) == 0x80000000)) {
          (*(code *)PTR_FUN_1009d188)(*puVar15,auStack_340);
          iVar8 = (*(code *)PTR_FUN_1009d15c)(auStack_340,auStack_60);
          if (iVar8 != 0) goto LAB_1002b290;
        }
        goto LAB_1002b250;
      }
    }
    else {
LAB_1002b250:
      uVar14 = (ulonglong)local_3a0;
    }
    FUN_1006a1b0(puVar16,puVar15,uVar14,0);
  }
  (*pcVar4)();
  (*extraout_w11_15)(puVar16,puVar15);
LAB_1002b290:
  if (local_3a0 != 0) {
    uVar11 = (*pcVar4)();
    (*extraout_w11_16)(uVar11);
  }
  (*(code *)PTR_FUN_1009d090)(local_388);
  if (bVar3) {
    if (bVar5 == 0) {
      iVar9 = *piVar17;
      iVar8 = 0x1d58;
      if (*(char *)(*(int *)(iVar9 + 4) + 0x50) != '\0') {
        iVar8 = 0x1158;
      }
      FUN_1006b840(*(undefined4 *)(iVar9 + 0x295c),*local_36c,iVar8 + iVar9,iVar9 + 0x2958);
    }
    FUN_100270d8(*piVar17,bVar5 ^ 1);
    uVar11 = (*pcVar4)();
    cVar6 = (*extraout_w11_17)(uVar11);
    if (cVar6 != '\0') {
      *(byte *)(*(int *)(*piVar17 + 4) + 0x20) = bVar5;
      uVar11 = (*pcVar4)();
      (*extraout_w11_18)(uVar11);
    }
    *(byte *)(param_1 + 0x126) = bVar5 ^ 1;
  }
  FUN_10029780(param_1);
  return;
}

