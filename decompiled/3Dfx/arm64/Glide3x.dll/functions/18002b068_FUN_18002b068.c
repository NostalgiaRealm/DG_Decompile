/*
 * FUN_18002b068 at 18002b068
 * int __cdecl FUN_18002b068(longlong param_1, ulonglong param_2, int param_3, undefined * * * * param_4)
 * Address ranges: 18002b068-18002c513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18002b068(longlong param_1,ulonglong param_2,int param_3,undefined ****param_4)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined ****ppppuVar15;
  undefined8 uVar16;
  longlong *plVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined ****ppppuVar22;
  char cVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  undefined ****ppppuVar29;
  undefined ***pppuVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *local_3b0;
  undefined8 local_3a8;
  uint local_3a0;
  undefined4 uStack_39c;
  uint local_398;
  uint local_394;
  float *local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 local_37c;
  int local_378 [2];
  undefined **local_370;
  undefined8 uStack_368;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  undefined8 local_350;
  int iStack_348;
  int iStack_344;
  undefined8 local_340;
  undefined **ppuStack_338;
  int local_330;
  undefined ***local_328 [2];
  float local_318 [6];
  longlong local_300 [4];
  undefined ***local_2e0;
  longlong *plStack_2d8;
  undefined8 *local_2d0;
  undefined ****local_2c8;
  float *local_2c0;
  undefined4 local_2b8;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  RECT RStack_2a4;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  float local_260 [3];
  float local_254;
  undefined4 local_250;
  undefined4 local_24c;
  float local_248 [6];
  undefined **local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  uint local_218;
  uint uStack_214;
  undefined8 *local_210;
  float local_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  int local_1e8;
  uint local_1c8;
  uint local_1c4;
  undefined **local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_180;
  longlong lStack_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  float *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar26 = *(longlong *)(param_1 + 0x140);
  lVar11 = param_1 + (param_2 & 0xffffffff) * 0x180;
  local_330 = param_3;
  if (*(char *)(lVar26 + 0x44dc) != '\0') {
    local_328[0] = (undefined ***)0x0;
    local_378[0] = 0;
    FUN_1800542d8(*(longlong *)(*(longlong *)(lVar26 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(lVar26 + 0x44e0) + 0x3338),0,param_4,(longlong *)local_328
                  ,local_378,local_378);
    param_4 = (undefined ****)0x2a;
    FUN_180054360(*(longlong *)(*(longlong *)(lVar26 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(lVar26 + 0x44e0) + 0x3338),0,0x2a);
    *(undefined1 *)(lVar26 + 0x44dc) = 0;
  }
  lVar26 = *(longlong *)(param_1 + 8);
  ppppuVar22 = *(undefined *****)(lVar11 + 0x218);
  ppppuVar29 = *(undefined *****)(lVar11 + 0x230);
  pppuVar30 = *(undefined ****)(lVar11 + 0x240);
  lVar24 = *(longlong *)(lVar26 + 8);
  if (ppppuVar22 == ppppuVar29) {
    ppppuVar22 = (undefined ****)0x0;
  }
  iVar6 = *(int *)(lVar24 + 0xeb);
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      iVar6 = 0;
      if (*(int *)(lVar26 + 0x2d04) == 2) {
        iVar6 = 4;
      }
      if (*(int *)(lVar26 + 0x2d04) == 1) {
        iVar6 = 2;
      }
      if (iVar6 != 0) goto LAB_18002b174;
    }
    else if (iVar6 == 2) {
      if (*(int *)(lVar24 + 0xe7) == 1) {
        iVar6 = 2;
      }
      else {
        if (*(int *)(lVar24 + 0xe7) != 2) goto LAB_18002b4c4;
        iVar6 = 4;
      }
LAB_18002b174:
      lVar27 = *(longlong *)(param_1 + 0x10);
      uVar19 = *(uint *)(lVar24 + 0xef);
      if (*(uint *)(lVar24 + 0xef) == 0) {
        uVar28 = *(uint *)(lVar26 + 0xa8);
        if (uVar28 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18002b190);
          (*pcVar3)();
        }
        uVar19 = 0;
        if (uVar28 != 0) {
          uVar19 = *(uint *)(lVar26 + 0xb0) / uVar28;
        }
        uVar28 = *(uint *)(lVar26 + 0xac);
        if (uVar28 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18002b1a4);
          (*pcVar3)();
        }
        uVar21 = 0;
        if (uVar28 != 0) {
          uVar21 = *(uint *)(lVar26 + 0xb4) / uVar28;
        }
        if (uVar19 == 0) {
          uVar19 = 1;
        }
        if (uVar21 == 0) {
          uVar21 = 1;
        }
        if (uVar21 <= uVar19) {
          uVar19 = uVar21;
        }
      }
      if (*(uint *)(lVar26 + 0x2d40) != uVar19) {
        *(uint *)(lVar26 + 0x2d40) = uVar19;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x32f0) = 1;
      }
      FUN_180056be8(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),lVar27,1);
      if (*(longlong *)(lVar27 + 0xd88) != 0) {
        if (ppppuVar22 != (undefined ****)0x0) {
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
          (**(code **)(*plVar7 + 0x1c8))
                    (plVar7,ppppuVar29,0,ppppuVar22,0,*(undefined4 *)(lVar11 + 0x14c));
          param_4 = ppppuVar22;
        }
        lVar26 = *(longlong *)(param_1 + 0x140);
        if (*(char *)(lVar26 + 0x32f0) != '\0') {
          param_4 = (undefined ****)&DAT_00000004;
          plVar7 = *(longlong **)(*(longlong *)(lVar26 + 0x3340) + 8);
          iVar4 = (**(code **)(*plVar7 + 0x70))
                            (plVar7,*(undefined8 *)(lVar26 + 0x3348),0,4,0,&local_3b0);
          if (-1 < iVar4) {
            thunk_FUN_1800010d8((undefined8 *)local_3b0,(undefined8 *)(lVar26 + 0x2c90),0x660);
            plVar7 = *(longlong **)(*(longlong *)(lVar26 + 0x3340) + 8);
            (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(lVar26 + 0x3348),0);
            *(undefined1 *)(lVar26 + 0x32f0) = 0;
          }
        }
        DAT_18006f744 = 0xf;
        FUN_180053700(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                      (int *)&DAT_18006f720,param_4,-1);
        lVar26 = *(longlong *)(param_1 + 0x140);
        FUN_1800539b0(*(longlong *)(lVar26 + 0x3330),(ulonglong)*(uint *)(lVar26 + 0x3338),
                      (int *)&DAT_18006f6e8,*(int *)(lVar26 + 0x2b2c));
        DAT_18006f6a4 = 0;
        FUN_180053c88(*(ulonglong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                      (uint *)&DAT_18006f688);
        lVar26 = *(longlong *)(param_1 + 0x140);
        local_260[0] = 0.0;
        local_260[1] = 0.0;
        local_260[2] = (float)*(uint *)(lVar26 + 0xb0);
        local_24c = 0x3f800000;
        local_250 = 0;
        local_254 = (float)*(uint *)(lVar26 + 0xb4);
        FUN_180054160(*(longlong *)(lVar26 + 0x3330),(ulonglong)*(uint *)(lVar26 + 0x3338),local_260
                     );
        (*(code *)(*ppppuVar29)[10])(ppppuVar29,&local_230);
        lVar24 = *(longlong *)(param_1 + 0x140);
        lVar26 = 0x15;
        if (iVar6 != 2) {
          lVar26 = 0x16;
        }
        pfVar25 = *(float **)(lVar27 + 0xd98);
        iVar6 = *(int *)(lVar24 + 0xb0);
        iVar4 = *(int *)(lVar24 + 0xb4);
        local_328[0] = pppuVar30;
        FUN_1800543b8(*(longlong *)(lVar24 + 0x3330),(ulonglong)*(uint *)(lVar24 + 0x3338),5,
                      *(longlong *)(param_1 + 0xca8),*(longlong *)(param_1 + 0xc90),
                      *(longlong *)(param_1 + lVar26 * 8 + 0xbc8));
        local_3a8 = 0;
        local_3b0 = pfVar25;
        FUN_1800544c0(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),2,
                      (longlong)&local_3b0,0);
        FUN_180054258(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,1,
                      (longlong)local_328);
        plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
        iVar5 = (**(code **)(*plVar7 + 0x70))
                          (plVar7,*(undefined8 *)(param_1 + 0xcb0),0,4,0,&local_390);
        if (-1 < iVar5) {
          fVar36 = (float)iVar6;
          fVar35 = (float)iVar4;
          uVar19 = *(uint *)(*(longlong *)(param_1 + 8) + 0xb0);
          uVar28 = *(uint *)(*(longlong *)(param_1 + 8) + 0xb4);
          local_390[2] = 0.0;
          local_390[3] = 0.0;
          local_390[7] = 0.0;
          local_390[10] = 0.0;
          fVar34 = (float)uVar19;
          fVar32 = (float)uVar28;
          local_390[6] = fVar36;
          local_390[0xf] = fVar35;
          fVar33 = 0.0 / fVar34 - 1.0;
          fVar31 = 1.0 - 0.0 / fVar32;
          *local_390 = fVar33;
          local_390[1] = fVar31;
          fVar34 = (fVar36 + fVar36) / fVar34 - 1.0;
          local_390[4] = fVar34;
          local_390[5] = fVar31;
          local_390[0xb] = fVar35;
          local_390[0xc] = fVar34;
          fVar34 = 1.0 - (fVar35 + fVar35) / fVar32;
          local_390[8] = fVar33;
          local_390[9] = fVar34;
          local_390[0xd] = fVar34;
          local_390[0xe] = fVar36;
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
          (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xcb0),0);
        }
        plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
        (**(code **)(*plVar7 + 0x68))(plVar7,4,0);
        local_328[0] = (undefined ***)0x0;
        FUN_180054258(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),0,1,
                      (longlong)local_328);
        ppppuVar29 = *(undefined *****)(lVar27 + 0xd88);
        ppppuVar22 = (undefined ****)0x0;
        pppuVar30 = *(undefined ****)(lVar27 + 0xda8);
      }
    }
  }
LAB_18002b4c4:
  lVar26 = *(longlong *)(param_1 + 0x140);
  local_198 = &PTR_FUN_180067868;
  local_188 = lVar11 + 0x148;
  local_140 = *(undefined8 *)(lVar26 + 0xa0);
  local_100 = *(undefined4 *)(*(longlong *)(lVar26 + 8) + 0xde);
  uStack_104 = *(undefined4 *)(*(longlong *)(lVar26 + 8) + 0xda);
  local_148 = *(undefined4 *)(lVar26 + 0x3338);
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  lStack_190 = param_1;
  local_150 = param_1;
  puVar8 = FUN_180056100(*(longlong **)(lVar26 + 0x3330),&local_150);
  lVar26 = *(longlong *)(param_1 + 0x140);
  if (((*(uint *)(*(longlong *)(lVar26 + 8) + 0xc2) >> 2 & 1) == 0) &&
     (*(char *)(param_1 + 0x12e) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_2b0 = *(uint *)(*(longlong *)(lVar26 + 8) + 0xc);
  local_2ac = *(uint *)(*(longlong *)(lVar26 + 8) + 0x10);
  local_2a8 = *(uint *)(*(longlong *)(lVar26 + 8) + 0x14);
  if (bVar2) {
    puVar14 = (undefined8 *)(lVar26 + 0xcc);
  }
  else {
    puVar14 = (undefined8 *)&DAT_180067858;
  }
  RStack_2a4._8_8_ = puVar14[1];
  RStack_2a4._0_8_ = *puVar14;
  local_294 = *(undefined4 *)
               (&DAT_180067810 + (longlong)*(int *)(*(longlong *)(lVar26 + 8) + 0xca) * 4);
  plVar7 = *(longlong **)(lVar26 + 0x3330);
  local_328[0] = &local_198;
  if (*(char *)(lVar26 + 0x2c82) == '\0') {
    local_328[0] = (undefined ***)0x0;
  }
  if ((ppppuVar29 == (undefined ****)0x0) && (ppppuVar22 == (undefined ****)0x0))
  goto LAB_18002c1b0;
  uVar19 = *(uint *)(puVar8 + 2);
  iVar6 = *(int *)(lVar11 + 0x14c);
  (*(code *)(*ppppuVar29)[10])(ppppuVar29,&local_1c8);
  (**(code **)(*(longlong *)puVar8[0x1af] + 0x50))((longlong *)puVar8[0x1af],&local_1f8);
  ppppuVar15 = (undefined ****)&local_2b0;
  FUN_180054da0((longlong)plVar7,(uint *)&local_370,(longlong)puVar8,(int *)ppppuVar15,local_1c8,
                local_1c4,local_1f8,uStack_1f4,iVar6,local_1e8);
  if (((int)local_370 == 0) && (((char)local_340 == '\0' && (local_340._1_1_ == '\0')))) {
    plVar9 = (longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7];
    if (ppppuVar22 == (undefined ****)0x0) {
      (**(code **)(*plVar9 + 0x178))(plVar9,puVar8[0x1af],ppppuVar29);
    }
    else {
      (**(code **)(*plVar9 + 0x1c8))(plVar9,puVar8[0x1af],0,ppppuVar22,0,iVar6);
    }
    if (local_328[0] == (undefined ***)0x0) goto LAB_18002c1b0;
    uVar19 = *(uint *)(puVar8 + 4);
    if (uVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18002b6b8);
      (*pcVar3)();
    }
    local_360 = 0;
    if (uVar19 != 0) {
      local_360 = *(uint *)(puVar8 + 3) / uVar19;
    }
    uVar19 = *(uint *)((longlong)puVar8 + 0x24);
    if (uVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18002b6cc);
      (*pcVar3)();
    }
    local_35c = 0;
    if (uVar19 != 0) {
      local_35c = *(uint *)((longlong)puVar8 + 0x1c) / uVar19;
    }
    iStack_348 = 0x3f800000;
    iStack_344 = 0x3f800000;
    local_370 = (undefined **)puVar8[0x1af];
    uStack_368 = (undefined **)puVar8[0x1b0];
    local_3b0 = (float *)0x0;
    pppuVar30 = &local_370;
    local_3a8 = CONCAT44(local_35c,local_360);
    local_350 = &local_3b0;
    local_340 = (undefined **)0x0;
    local_358 = local_360;
    local_354 = local_35c;
  }
  else {
    if (ppppuVar22 != (undefined ****)0x0) {
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x1c8))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],ppppuVar29,0,ppppuVar22,0,
                 iVar6);
      ppppuVar15 = ppppuVar22;
    }
    iVar6 = (int)local_370;
    cVar18 = local_340._1_1_;
    cVar23 = (char)local_340;
    if (*(int *)((longlong)puVar8 + 0x2c) == 7) {
      uVar28 = *(uint *)(puVar8 + 2);
      local_394 = local_1c4;
      local_398 = local_1c8;
      local_390 = (float *)(plVar7 + (ulonglong)uVar28 * 0x318 + 0x200);
      if ((char)plVar7[(ulonglong)uVar28 * 0x318 + 0x3ec] == '\0') {
        FUN_180061920((longlong)plVar7,(ulonglong)uVar28);
        *(undefined1 *)(local_390 + 0x3d8) = 1;
        iVar6 = (int)local_370;
        cVar23 = (char)local_340;
        cVar18 = local_340._1_1_;
      }
      if (plVar7[(ulonglong)uVar28 * 0x318 + 0x3e1] != 0) {
        local_248[5] = 1.0;
        local_248[0] = 0.0;
        local_248[1] = 0.0;
        local_248[4] = 0.0;
        local_248[2] = 160.0;
        local_248[3] = 200.0;
        FUN_180054160((longlong)plVar7,(ulonglong)uVar28,local_248);
        FUN_180053700((longlong)plVar7,(ulonglong)uVar28,(int *)&DAT_180065db0,ppppuVar15,-1);
        FUN_1800539b0((longlong)plVar7,(ulonglong)uVar28,(int *)&DAT_180065f20,0);
        FUN_180053c88((ulonglong)plVar7,(ulonglong)uVar28,(uint *)&DAT_180065ef8);
        FUN_1800543b8((longlong)plVar7,(ulonglong)uVar28,5,plVar7[(ulonglong)uVar28 * 0x318 + 0x1d1]
                      ,plVar7[(ulonglong)uVar28 * 0x318 + 0x1cf],
                      plVar7[(ulonglong)uVar28 * 0x318 + 0x1a5]);
        local_290 = 0;
        uStack_288 = 0;
        local_280 = 0;
        uStack_278 = 0;
        FUN_1800544c0((longlong)plVar7,(ulonglong)uVar28,4,(longlong)&local_290,0);
        uVar10 = 0x10;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        local_80 = 0;
        local_f8 = (float *)pppuVar30;
        FUN_180054258((longlong)plVar7,(ulonglong)uVar28,0,0x10,(longlong)&local_f8);
        FUN_180054210((longlong)plVar7,uVar28,1,uVar10,plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d2);
        local_290 = plVar7[(ulonglong)uVar28 * 0x318 + 0x3df];
        puVar14 = &local_290;
        FUN_1800544c0((longlong)plVar7,(ulonglong)uVar28,4,(longlong)puVar14,0);
        local_378[0] = 0;
        local_390 = (float *)CONCAT44(local_390._4_4_,0x10);
        FUN_1800542d8((longlong)plVar7,uVar28,0,puVar14,plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d3,
                      (int *)&local_390,local_378);
        FUN_180054360((longlong)plVar7,uVar28,0,0);
        iVar6 = (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x70))
                          ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                           plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3],0,4,0,&local_3b0);
        if (-1 < iVar6) {
          fVar31 = (float)local_398;
          *local_3b0 = -1.0;
          fVar33 = (float)local_394;
          local_3b0[1] = 1.0;
          fVar32 = (fVar31 + 0.5) / fVar31;
          fVar34 = (fVar33 + 0.5) / fVar33;
          local_3b0[2] = 0.5 / fVar31;
          local_3b0[3] = 0.5 / fVar33;
          local_3b0[4] = 1.0;
          local_3b0[5] = 1.0;
          local_3b0[6] = fVar32;
          local_3b0[7] = 0.5 / fVar33;
          local_3b0[8] = -1.0;
          local_3b0[9] = -1.0;
          local_3b0[10] = 0.5 / fVar31;
          local_3b0[0xb] = fVar34;
          local_3b0[0xc] = 1.0;
          local_3b0[0xd] = -1.0;
          local_3b0[0xe] = fVar32;
          local_3b0[0xf] = fVar34;
          (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x78))
                    ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                     plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3],0);
        }
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x68))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],4,0);
        local_2e0 = (undefined ***)plVar7[(ulonglong)uVar28 * 0x318 + 0x3e2];
        local_2d0 = (undefined8 *)0x0;
        local_2c8 = (undefined ****)0x0;
        plStack_2d8 = (longlong *)0x0;
        FUN_1800544c0((longlong)plVar7,(ulonglong)uVar28,4,(longlong)&local_2e0,0);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x68))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],4,0);
        local_290 = 0;
        FUN_1800544c0((longlong)plVar7,(ulonglong)uVar28,4,(longlong)&local_290,0);
        lStack_178 = plVar7[(ulonglong)uVar28 * 0x318 + 0x3e5];
        local_180 = plVar7[(ulonglong)uVar28 * 0x318 + 0x3e0];
        local_170 = plVar7[(ulonglong)uVar28 * 0x318 + 0x3eb];
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x218))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],0,3,&local_180);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x220))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],0,1,
                   plVar7 + (ulonglong)uVar28 * 0x318 + 999,0);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x228))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar28 * 0x318 + 0x1a0],0,0);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x148))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],0x28,0x19,1);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x228))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar28 * 0x318 + 0x1a1],0,0);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x148))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],1,0x19,1);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x228))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar28 * 0x318 + 0x1a2],0,0);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x148))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],0x28,0x19,1);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x178))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar28 * 0x318 + 1000],
                   plVar7[(ulonglong)uVar28 * 0x318 + 0x3e6]);
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x218))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],0,3,&local_168);
        local_318[5] = 1.0;
        local_318[0] = 0.0;
        local_318[1] = 0.0;
        local_318[2] = 320.0;
        local_318[3] = 200.0;
        local_318[4] = 0.0;
        FUN_180054160((longlong)plVar7,(ulonglong)uVar28,local_318);
        FUN_1800543b8((longlong)plVar7,(ulonglong)uVar28,5,plVar7[(ulonglong)uVar28 * 0x318 + 0x1d1]
                      ,plVar7[(ulonglong)uVar28 * 0x318 + 0x1cf],
                      plVar7[(ulonglong)uVar28 * 0x318 + 0x1cd]);
        local_300[0] = plVar7[(ulonglong)uVar28 * 0x318 + 0x3e2];
        local_300[2] = 0;
        local_300[3] = 0;
        local_300[1] = 0;
        FUN_1800544c0((longlong)plVar7,(ulonglong)uVar28,4,(longlong)local_300,0);
        plStack_2d8 = (longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0x3e5];
        local_2e0 = (undefined ***)plVar7[(ulonglong)uVar28 * 0x318 + 0x3e0];
        uVar10 = 3;
        local_2d0 = (undefined8 *)plVar7[(ulonglong)uVar28 * 0x318 + 0x3e9];
        FUN_180054258((longlong)plVar7,(ulonglong)uVar28,0,3,(longlong)&local_2e0);
        local_398 = 0x10;
        local_394 = 0;
        FUN_1800542d8((longlong)plVar7,uVar28,0,uVar10,plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d3,
                      (int *)&local_398,(int *)&local_394);
        FUN_180054360((longlong)plVar7,uVar28,0,0);
        ppppuVar15 = (undefined ****)&DAT_00000004;
        iVar6 = (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x70))
                          ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                           plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3],0,4,0,&local_390);
        if (-1 < iVar6) {
          *local_390 = -1.0;
          local_390[1] = 1.0;
          local_390[2] = -40.0;
          local_390[3] = -42.0;
          local_390[4] = 1.0;
          local_390[5] = 1.0;
          local_390[6] = 200.0;
          local_390[7] = -42.0;
          local_390[8] = -1.0;
          local_390[9] = -1.0;
          local_390[10] = -40.0;
          local_390[0xb] = 242.0;
          local_390[0xc] = 1.0;
          local_390[0xd] = -1.0;
          local_390[0xe] = 200.0;
          local_390[0xf] = 242.0;
          (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x78))
                    ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                     plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3],0);
        }
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x68))
                  ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],4,0);
        pppuVar30 = (undefined ***)plVar7[(ulonglong)uVar19 * 0x318 + 0x3e3];
        ppppuVar29 = (undefined ****)plVar7[(ulonglong)uVar19 * 0x318 + 0x3e1];
        iVar6 = (int)local_370;
        cVar18 = local_340._1_1_;
        cVar23 = (char)local_340;
      }
    }
    if (cVar23 != '\0') {
      local_3b0 = (float *)0x0;
      local_3a8 = 0;
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 400))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],puVar8[0x1b0],&local_3b0);
      iVar6 = (int)local_370;
      cVar18 = local_340._1_1_;
    }
    if (*(int *)((longlong)puVar8 + 0x2c) != 7) {
      local_2e0 = &local_370;
      plStack_2d8 = plVar7 + (ulonglong)uVar19 * 0x318 + 0xd6;
      ppppuVar15 = &local_2e0;
      local_2b8 = 0;
      local_2d0 = puVar8;
      local_2c8 = ppppuVar29;
      local_2c0 = (float *)pppuVar30;
      FUN_180055268(plVar7,(uint *)&local_370,(longlong)puVar8,ppppuVar15);
      ppppuVar29 = local_2c8;
      pppuVar30 = (undefined ***)local_2c0;
      iVar6 = (int)local_370;
      cVar18 = local_340._1_1_;
    }
    if ((iVar6 == 0) && (cVar18 == '\0')) {
      ppppuVar15 = (undefined ****)((ulonglong)local_350 & 0xffffffff);
      if ((local_358 - local_360 != iStack_348 - (int)local_350) ||
         (local_354 - local_35c != iStack_344 - local_350._4_4_)) goto LAB_18002be38;
      local_3a0 = local_354;
      uStack_39c = 1;
      local_3a8 = (ulonglong)local_358 << 0x20;
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x170))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],puVar8[0x1af],0,ppppuVar15,
                 local_350._4_4_,0,ppppuVar29,0,&local_3b0);
    }
    else {
LAB_18002be38:
      FUN_180053700((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(int *)&DAT_180065db0,
                    ppppuVar15,-1);
      uVar10 = 0;
      FUN_1800539b0((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(int *)&DAT_180065f20,0);
      FUN_180053c88((ulonglong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(uint *)&DAT_180065ef8);
      local_398 = 0x10;
      local_394 = 0;
      FUN_1800542d8((longlong)plVar7,*(uint *)(puVar8 + 2),0,uVar10,
                    plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d3,(int *)&local_398,(int *)&local_394);
      FUN_180054360((longlong)plVar7,*(uint *)(puVar8 + 2),0,0);
      uVar16 = 4;
      uVar10 = 0;
      iVar6 = (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x70))
                        ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],
                         plVar7[(ulonglong)uVar19 * 0x318 + 0x1d5],0,4,0,&local_3b0);
      if (-1 < iVar6) {
        FUN_180055140((longlong)plVar7,(longlong)puVar8,uVar10,uVar16,local_1f8,uStack_1f4,local_2b0
                      ,local_2ac,local_2a8,(float *)(plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d6));
        thunk_FUN_1800010d8((undefined8 *)local_3b0,plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d6,
                            0x1040);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x78))
                  ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar19 * 0x318 + 0x1d5],0);
      }
      FUN_1800543b8((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),5,
                    plVar7[(ulonglong)uVar19 * 0x318 + 0x1d0],
                    plVar7[(ulonglong)uVar19 * 0x318 + 0x1ce],
                    plVar7[(ulonglong)uVar19 * 0x318 +
                           (ulonglong)(byte)(&DAT_180065fc8)[(ulonglong)local_370 & 0xffffffff] +
                           0x1a3]);
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x80))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],2,1,
                 plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d5);
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x38))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],2,1,
                 plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d5);
      local_318[5] = 1.0;
      local_318[0] = 0.0;
      local_318[1] = 0.0;
      local_318[4] = 0.0;
      local_318[2] = (float)local_1f8;
      local_318[3] = (float)uStack_1f4;
      FUN_180054160((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),local_318);
      local_300[0] = puVar8[0x1b0];
      local_300[2] = 0;
      local_300[3] = 0;
      local_300[1] = 0;
      FUN_1800544c0((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),4,(longlong)local_300,0);
      uVar10 = 2;
      local_3a8 = 0;
      local_3b0 = (float *)pppuVar30;
      FUN_180054258((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),0,2,(longlong)&local_3b0);
      if ((&DAT_180066008)[(ulonglong)local_370 & 0xffffffff] == '\0') {
        uVar28 = 0;
        uVar21 = 0;
      }
      else {
        FUN_180054210((longlong)plVar7,*(uint *)(puVar8 + 2),1,uVar10,
                      plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d2);
        (*(code *)(*ppppuVar29)[10])(ppppuVar29,&local_290);
        uVar28 = (uint)local_290;
        uVar21 = local_290._4_4_;
      }
      plVar9 = (longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7];
      lVar11 = plVar7[(ulonglong)uVar19 * 0x318 + 0x1d3];
      uVar1 = 0;
      if (*(uint *)(plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d4) + 4 < 0x401) {
        uVar1 = *(uint *)(plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d4);
      }
      *(uint *)(plVar7 + (ulonglong)uVar19 * 0x318 + 0x1d4) = uVar1 + 4;
      uVar20 = 4;
      if (uVar1 != 0) {
        uVar20 = 5;
      }
      uVar10 = (**(code **)(*plVar9 + 0x70))(plVar9,lVar11,0,uVar20,0,&local_390);
      if (-1 < (int)uVar10) {
        FUN_180055498(uVar10,(longlong)puVar8,(longlong)&local_370,local_390 + (ulonglong)uVar1 * 4,
                      uVar28,uVar21);
        (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x78))
                  ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],
                   plVar7[(ulonglong)uVar19 * 0x318 + 0x1d3],0);
      }
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7] + 0x68))
                ((longlong *)plVar7[(ulonglong)uVar19 * 0x318 + 0xd7],4,uVar1);
    }
    local_3b0 = (float *)0x0;
    local_3a8 = 0;
    FUN_180054258((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),0,2,(longlong)&local_3b0);
    if (local_328[0] == (undefined ***)0x0) goto LAB_18002c1b0;
    pppuVar30 = &local_230;
    local_208 = (float)(uint)((iStack_348 - (int)local_350) * *(int *)(puVar8 + 4)) /
                (float)(int)(local_358 - local_360);
    local_230 = (undefined **)puVar8[0x1af];
    uStack_228 = puVar8[0x1b0];
    local_220 = (undefined4)uStack_368;
    uStack_21c = uStack_368._4_4_;
    fStack_204 = (float)(uint)((iStack_344 - local_350._4_4_) * *(int *)((longlong)puVar8 + 0x24)) /
                 (float)(int)(local_354 - local_35c);
    local_218 = local_1f8;
    uStack_214 = uStack_1f4;
    local_210 = &local_350;
    local_200 = (float)(int)local_350 - (float)(int)local_360 * local_208;
    fStack_1fc = (float)local_350._4_4_ - (float)(int)local_35c * fStack_204;
  }
  (*(code *)**local_328[0])(local_328[0],pppuVar30);
LAB_18002c1b0:
  if ((*(char *)((longlong)puVar8 + 0xd6a) != '\0') &&
     (plVar9 = (longlong *)puVar8[0x1b7], plVar9 != (longlong *)0x0)) {
    uVar28 = *(uint *)(puVar8 + 2);
    uVar10 = (**(code **)(*plVar9 + 0x50))(plVar9,&local_1c8);
    FUN_1800556d8(uVar10,(longlong)puVar8,&RStack_2a4,local_1c8,local_1c4,(float *)&local_370,
                  (float *)&local_3b0);
    local_37c = 0x3f800000;
    local_380 = 0;
    local_390 = local_3b0;
    local_388 = (undefined4)local_3a8;
    uStack_384 = local_3a8._4_4_;
    FUN_180054160((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(float *)&local_390);
    FUN_1800539b0((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(int *)&DAT_180065f20,0);
    FUN_180053c88((ulonglong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(uint *)&DAT_180065ef8);
    FUN_1800543b8((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),5,
                  plVar7[(ulonglong)uVar28 * 0x318 + 0x1d1],
                  plVar7[(ulonglong)uVar28 * 0x318 + 0x1cf],
                  plVar7[(ulonglong)uVar28 * 0x318 + 0x1cb]);
    local_300[0] = puVar8[0x1b0];
    plVar9 = local_300;
    local_300[2] = 0;
    local_300[3] = 0;
    local_300[1] = 0;
    FUN_1800544c0((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),4,(longlong)plVar9,0);
    local_398 = 0x10;
    local_394 = 0;
    FUN_1800542d8((longlong)plVar7,*(uint *)(puVar8 + 2),0,plVar9,
                  plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d3,(int *)&local_398,(int *)&local_394);
    FUN_180054360((longlong)plVar7,*(uint *)(puVar8 + 2),0,0);
    plVar9 = (longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7];
    lVar11 = plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3];
    uVar19 = 0;
    if (*(uint *)(plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d4) + 4 < 0x401) {
      uVar19 = *(uint *)(plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d4);
    }
    *(uint *)(plVar7 + (ulonglong)uVar28 * 0x318 + 0x1d4) = uVar19 + 4;
    uVar21 = 4;
    if (uVar19 != 0) {
      uVar21 = 5;
    }
    plVar17 = (longlong *)(ulonglong)uVar21;
    iVar6 = (**(code **)(*plVar9 + 0x70))(plVar9,lVar11,0,plVar17,0,local_328);
    if (-1 < iVar6) {
      pppuVar30 = local_328[0] + (ulonglong)uVar19 * 2;
      pppuVar30[1] = uStack_368;
      *pppuVar30 = local_370;
      pppuVar30[3] = (undefined **)CONCAT44(local_354,local_358);
      pppuVar30[2] = (undefined **)CONCAT44(local_35c,local_360);
      pppuVar30[5] = (undefined **)CONCAT44(iStack_344,iStack_348);
      pppuVar30[4] = (undefined **)local_350;
      pppuVar30[7] = ppuStack_338;
      pppuVar30[6] = local_340;
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x78))
                ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],
                 plVar7[(ulonglong)uVar28 * 0x318 + 0x1d3],0);
    }
    uVar21 = *(uint *)(puVar8 + 2);
    plVar9 = (longlong *)
             FUN_180059158(plVar7 + (ulonglong)uVar21 * 0x318 + 0x19b,(ulonglong *)&DAT_180065ec0);
    if ((longlong *)plVar7[(ulonglong)uVar21 * 0x318 + 0xf2] != plVar9) {
      FUN_180059338(plVar7 + (ulonglong)uVar21 * 0x318 + 0x19b,
                    (longlong *)plVar7[(ulonglong)uVar21 * 0x318 + 0xf2]);
      plVar7[(ulonglong)uVar21 * 0x318 + 0xf2] = (longlong)plVar9;
      plVar17 = plVar7 + (ulonglong)uVar21 * 0x318 + 0xf2;
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar21 * 0x318 + 0xd7] + 0x50))
                ((longlong *)plVar7[(ulonglong)uVar21 * 0x318 + 0xd7],0,1);
    }
    uVar12 = (ulonglong)*(uint *)(puVar8 + 2);
    if ((float *)puVar8[0x1ba] == (float *)0x0) {
      piVar13 = (int *)&DAT_180069ae0;
    }
    else {
      local_3a8 = 0;
      plVar17 = (longlong *)0x2;
      local_3b0 = (float *)puVar8[0x1ba];
      FUN_180054258((longlong)plVar7,uVar12,0,2,(longlong)&local_3b0);
      FUN_180053700((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),(int *)&DAT_1800699d0,plVar17,
                    -1);
      (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x68))
                ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],4,uVar19);
      piVar13 = (int *)&DAT_1800698c0;
      uVar12 = (ulonglong)*(uint *)(puVar8 + 2);
    }
    FUN_180053700((longlong)plVar7,uVar12,piVar13,plVar17,-1);
    local_3b0 = (float *)puVar8[0x1b8];
    local_3a8 = 0;
    FUN_180054258((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),0,2,(longlong)&local_3b0);
    (**(code **)(*(longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7] + 0x68))
              ((longlong *)plVar7[(ulonglong)uVar28 * 0x318 + 0xd7],4,uVar19);
    local_3b0 = (float *)0x0;
    local_3a8 = 0;
    FUN_180054258((longlong)plVar7,(ulonglong)*(uint *)(puVar8 + 2),0,2,(longlong)&local_3b0);
  }
  if (((local_330 == 0) && (*(char *)((longlong)puVar8 + 0xd6c) != '\0')) &&
     ((*(int *)((longlong)puVar8 + 0x3c) != 2 || (*(char *)((longlong)puVar8 + 0xd6d) == '\0')))) {
    uVar10 = 0x200;
  }
  else {
    uVar10 = 0;
  }
  (**(code **)(*(longlong *)puVar8[1] + 0x40))((longlong *)puVar8[1],local_330,uVar10);
  FUN_1800570f8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),(longlong)puVar8);
  iVar6 = FUN_180056c68(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),
                        *(longlong *)(*(longlong *)(param_1 + 0x140) + 0xa0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  return iVar6;
}

