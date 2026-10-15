/*
 * FUN_100ddf98 at 100ddf98
 * undefined FUN_100ddf98(void)
 * Address ranges: 100ddf98-100de737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ddf98(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong extraout_x1;
  ulonglong uVar12;
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
  int iVar13;
  undefined1 auVar14 [16];
  uint local_380;
  uint local_37c;
  int local_378;
  undefined4 *puStack_374;
  int local_370;
  code *local_36c;
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
  
  iVar13 = param_1 + 0x4a0;
  (*(code *)PTR_FUN_10134070)(iVar13);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_380 = 0;
  iVar6 = param_2[2];
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_100de070:
    local_380 = 0;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(param_1,extraout_x1 & 0xffffffff);
    if (cVar4 != '\0') goto LAB_100de070;
    auVar14 = (*pcVar3)(*(undefined4 *)(param_1 + iVar6 * 0x28 + 0x18),param_4 + -1);
    iVar6 = (*extraout_w11_00)(auVar14._0_8_ & 0xffffffff,auVar14._8_8_,&local_380);
    if (iVar6 < 0) goto LAB_100de070;
  }
  piVar1 = param_2 + 0xd;
  iVar6 = *piVar1;
  if (param_3 - 2U < 2) {
    *piVar1 = param_3;
    FUN_100dc870(param_1,param_2,local_380,0);
    if (*piVar1 != 3) {
      uVar9 = (*pcVar3)();
      iVar7 = (*extraout_w11_09)(uVar9,1,local_380);
      goto LAB_100de50c;
    }
    uVar9 = (*(code *)PTR_FUN_101341f4)(*param_2,0xfffffff0);
    param_2[0x34e] = uVar9;
    uVar9 = (*(code *)PTR_FUN_101341f4)(*param_2,0xffffffec);
    param_2[0x34f] = uVar9;
    (*(code *)PTR_FUN_101341f8)(*param_2,param_2 + 0x34a);
    if (local_380 == 0) {
      iVar6 = (*(code *)PTR_FUN_1013422c)(param_2 + 0x34a,2);
    }
    else {
      uVar9 = (*pcVar3)();
      (*extraout_w11_01)(uVar9,auStack_160);
      iVar6 = local_108;
    }
    puVar2 = (undefined8 *)(param_2 + 0x313);
    local_2f0 = 0x68;
    *(undefined8 *)(param_2 + 0x315) = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_2 + 0x319) = 0;
    *(undefined8 *)(param_2 + 0x317) = 0;
    *(undefined8 *)(param_2 + 0x31d) = 0;
    *(undefined8 *)(param_2 + 0x31b) = 0;
    *(undefined8 *)(param_2 + 0x321) = 0;
    *(undefined8 *)(param_2 + 799) = 0;
    *(undefined8 *)(param_2 + 0x325) = 0;
    *(undefined8 *)(param_2 + 0x323) = 0;
    *(undefined8 *)(param_2 + 0x329) = 0;
    *(undefined8 *)(param_2 + 0x327) = 0;
    *(undefined8 *)(param_2 + 0x32d) = 0;
    *(undefined8 *)(param_2 + 0x32b) = 0;
    *(undefined8 *)(param_2 + 0x331) = 0;
    *(undefined8 *)(param_2 + 0x32f) = 0;
    *(undefined8 *)(param_2 + 0x335) = 0;
    *(undefined8 *)(param_2 + 0x333) = 0;
    *(undefined8 *)(param_2 + 0x339) = 0;
    *(undefined8 *)(param_2 + 0x337) = 0;
    *(undefined8 *)(param_2 + 0x33d) = 0;
    *(undefined8 *)(param_2 + 0x33b) = 0;
    *(undefined8 *)(param_2 + 0x341) = 0;
    *(undefined8 *)(param_2 + 0x33f) = 0;
    *(undefined8 *)(param_2 + 0x345) = 0;
    *(undefined8 *)(param_2 + 0x343) = 0;
    *(undefined8 *)(param_2 + 0x347) = 0;
    param_2[0x349] = 0;
    iVar7 = (*(code *)PTR_FUN_101341d8)(iVar6,&local_2f0);
    if ((iVar7 != 0) &&
       (iVar7 = (*(code *)PTR_FUN_101341a0)(&uStack_2c8,0xffffffff,puVar2), iVar7 != 0)) {
      *(undefined8 *)(param_2 + 0x315) = uStack_2c0;
      *puVar2 = uStack_2c8;
      *(undefined8 *)(param_2 + 0x319) = uStack_2b0;
      *(undefined8 *)(param_2 + 0x317) = uStack_2b8;
      *(undefined8 *)(param_2 + 0x31d) = uStack_2a0;
      *(undefined8 *)(param_2 + 0x31b) = uStack_2a8;
      *(undefined8 *)(param_2 + 0x321) = uStack_290;
      *(undefined8 *)(param_2 + 799) = uStack_298;
      uVar9 = (*pcVar3)();
      (*extraout_w11_02)(uVar9,&local_1a0);
      local_37c = 0;
      uStack_278 = *(undefined8 *)(param_2 + 0x315);
      local_280 = *puVar2;
      uStack_268 = *(undefined8 *)(param_2 + 0x319);
      uStack_270 = *(undefined8 *)(param_2 + 0x317);
      local_1b0 = *(undefined8 *)(param_2 + 0x347);
      uStack_258 = *(undefined8 *)(param_2 + 0x31d);
      local_260 = *(undefined8 *)(param_2 + 0x31b);
      uStack_248 = *(undefined8 *)(param_2 + 0x321);
      uStack_250 = *(undefined8 *)(param_2 + 799);
      local_1a8 = param_2[0x349];
      uStack_238 = *(undefined8 *)(param_2 + 0x325);
      local_240 = *(undefined8 *)(param_2 + 0x323);
      uStack_228 = *(undefined8 *)(param_2 + 0x329);
      uStack_230 = *(undefined8 *)(param_2 + 0x327);
      uStack_218 = *(undefined8 *)(param_2 + 0x32d);
      local_220 = *(undefined8 *)(param_2 + 0x32b);
      uStack_208 = *(undefined8 *)(param_2 + 0x331);
      uStack_210 = *(undefined8 *)(param_2 + 0x32f);
      uStack_1f8 = *(undefined8 *)(param_2 + 0x335);
      local_200 = *(undefined8 *)(param_2 + 0x333);
      uStack_1e8 = *(undefined8 *)(param_2 + 0x339);
      uStack_1f0 = *(undefined8 *)(param_2 + 0x337);
      uStack_1d8 = *(undefined8 *)(param_2 + 0x33d);
      local_1e0 = *(undefined8 *)(param_2 + 0x33b);
      local_1c8 = *(undefined8 *)(param_2 + 0x341);
      uStack_1d0 = *(undefined8 *)(param_2 + 0x33f);
      uStack_1b8 = *(undefined8 *)(param_2 + 0x345);
      local_1c0 = *(undefined8 *)(param_2 + 0x343);
      if (local_380 == 0) {
        iVar7 = 0;
        uVar9 = (*pcVar3)();
        iVar8 = (*extraout_w11_03)(uVar9,0,&local_37c);
        uVar10 = local_380;
        if (-1 < iVar8) {
          local_36c = pcVar3;
          local_378 = param_1;
          puStack_374 = param_2;
          local_370 = iVar13;
          do {
            uVar9 = (*pcVar3)();
            (*extraout_w11_04)(uVar9,auStack_100);
            param_1 = local_378;
            iVar13 = local_370;
            uVar10 = local_37c;
            param_2 = puStack_374;
            if (local_a8 == iVar6) break;
            uVar9 = (*local_36c)();
            (*extraout_w11_05)(uVar9);
            iVar7 = iVar7 + 1;
            uVar9 = (*pcVar3)();
            iVar8 = (*extraout_w11_06)(uVar9,iVar7,&local_37c);
            param_1 = local_378;
            iVar13 = local_370;
            uVar10 = local_380;
            param_2 = puStack_374;
          } while (-1 < iVar8);
        }
        local_380 = uVar10;
        if (local_380 != 0) goto LAB_100de370;
      }
      else {
LAB_100de370:
        (*pcVar3)();
        iVar7 = (*extraout_w11_07)(extraout_x8 & 0xffffffff,&local_1a0,&local_360,0);
        if (iVar7 < 0) {
          local_350 = local_190;
          uStack_358 = uStack_198;
          local_360 = local_1a0;
          local_348 = local_188;
        }
        if (uStack_358._4_4_ == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if (uStack_358._4_4_ != 0) {
            uVar10 = (uint)uStack_358 / uStack_358._4_4_;
          }
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,uVar10);
        uStack_1d8 = CONCAT44((undefined4)local_360,(undefined4)uStack_1d8);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_360._4_4_);
        uVar9 = 0x580000;
        if (uVar10 == 0) {
          uVar9 = 0x180000;
        }
        uStack_238 = CONCAT44(uStack_238._4_4_,uVar9);
        (*(code *)PTR_FUN_10134174)(&uStack_2c8,&local_280,0,4,0);
        (*(code *)PTR_FUN_101341d8)(iVar6,&local_2f0);
        (*(code *)PTR_FUN_1013427c)(*param_2,0xfffffff0,0x90000000);
        (*(code *)PTR_FUN_1013427c)(*param_2,0xffffffec,0x40000);
        (*(code *)PTR_FUN_10134280)
                  (*param_2,0xfffffffe,local_2ec,iStack_2e8,local_2e4 - local_2ec,
                   iStack_2e0 - iStack_2e8,0x10);
      }
      if (local_37c != 0) {
        uVar9 = (*pcVar3)();
        (*extraout_w11_08)(uVar9);
        local_380 = 0;
      }
    }
LAB_100de510:
    uVar9 = (*pcVar3)();
    uVar11 = (*extraout_w11_10)(uVar9,&local_330);
    if ((-1 < (int)uVar11) && (local_2fc - 3U < 2)) {
      (*pcVar3)();
      (*extraout_w11_11)(param_1,param_2);
      uVar9 = (*pcVar3)();
      (*extraout_w11_12)(uVar9,local_308,local_330,uStack_32c,local_320,local_2f8);
      (*pcVar3)();
      uVar11 = (*extraout_w11_13)(param_1,param_2,0);
    }
    uVar5 = FUN_100dc570(uVar11,param_2);
    *(undefined1 *)((int)param_2 + 0xd5d) = uVar5;
    *(undefined1 *)((int)param_2 + 0xd5e) = 0;
    uVar11 = 1;
  }
  else {
    iVar7 = FUN_100dcae0();
    FUN_100dc870(param_1,param_2,local_380,0);
LAB_100de50c:
    if (-1 < iVar7) goto LAB_100de510;
    uVar11 = 0;
    *piVar1 = iVar6;
    if (param_3 == 2) {
      uVar12 = (ulonglong)local_380;
      if (local_380 != 0) {
        (*pcVar3)();
        iVar6 = (*extraout_w11_14)(uVar12 & 0xffffffff,auStack_a0);
        if ((-1 < iVar6) &&
           (uVar10 = (*(code *)PTR_FUN_101341f4)(*param_2,0xfffffff0),
           (uVar10 & 0x80c80000) == 0x80000000)) {
          (*(code *)PTR_FUN_101341f8)(*param_2,auStack_340);
          iVar6 = (*(code *)PTR_FUN_101341a4)(auStack_340,auStack_60);
          if (iVar6 != 0) goto LAB_100de6d8;
        }
        goto LAB_100de698;
      }
    }
    else {
LAB_100de698:
      uVar12 = (ulonglong)local_380;
    }
    FUN_100dc870(param_1,param_2,uVar12,0);
  }
  (*pcVar3)();
  (*extraout_w11_15)(param_1,param_2);
LAB_100de6d8:
  if (local_380 != 0) {
    uVar9 = (*pcVar3)();
    (*extraout_w11_16)(uVar9);
  }
  (*(code *)PTR_FUN_101340bc)(iVar13);
  return uVar11;
}

