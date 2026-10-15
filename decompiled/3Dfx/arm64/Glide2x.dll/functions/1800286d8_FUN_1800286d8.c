/*
 * FUN_1800286d8 at 1800286d8
 * int __cdecl FUN_1800286d8(longlong param_1, ulonglong param_2, int param_3)
 * Address ranges: 1800286d8-18002977b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800286d8(longlong param_1,ulonglong param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  BOOL BVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 extraout_x1;
  int *piVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  byte bVar25;
  undefined ***pppuVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong *plVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  longlong *local_410;
  undefined ***local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  int local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  longlong local_3d0 [3];
  float local_3b8;
  float local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  ulonglong local_388;
  longlong local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong local_348;
  undefined4 local_340;
  uint local_33c;
  uint local_338;
  undefined4 local_334;
  undefined4 local_330;
  RECT RStack_32c;
  undefined4 local_31c;
  longlong *local_318;
  longlong lStack_310;
  uint local_308;
  uint uStack_304;
  uint local_300;
  uint uStack_2fc;
  uint local_2f8;
  undefined8 *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined8 *local_2d0;
  longlong lStack_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  RECT local_2a0;
  longlong *local_290;
  longlong local_288;
  undefined4 local_280;
  undefined **local_270;
  longlong lStack_268;
  longlong local_260;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined2 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined1 auStack_200 [16];
  int local_1f0;
  uint local_1e8;
  uint local_1e0;
  longlong local_1c8;
  float *local_1c0;
  int aiStack_1b0 [11];
  undefined1 local_184;
  
  lVar28 = param_1 + (param_2 & 0xffffffff) * 0x170;
  plVar16 = *(longlong **)(lVar28 + 0x220);
  plVar24 = *(longlong **)(lVar28 + 0x228);
  local_410 = (longlong *)CONCAT44(local_410._4_4_,*(int *)(lVar28 + 0x230));
  lVar18 = *(longlong *)(param_1 + 8);
  if (plVar16 == plVar24) {
    plVar16 = (longlong *)0x0;
  }
  local_3d0[0] = CONCAT44(local_3d0[0]._4_4_,*(int *)(lVar28 + 0x230) + 1);
  lVar21 = *(longlong *)(lVar18 + 8);
  iVar12 = *(int *)(lVar21 + 0xeb);
  local_3e8 = param_3;
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      iVar12 = 0;
      if (*(int *)(lVar18 + 0x2c64) == 2) {
        iVar12 = 4;
      }
      if (*(int *)(lVar18 + 0x2c64) == 1) {
        iVar12 = 2;
      }
      if (iVar12 == 0) goto LAB_180028c88;
    }
    else {
      if (iVar12 != 2) goto LAB_180028c88;
      if (*(int *)(lVar21 + 0xe7) == 1) {
        iVar12 = 2;
      }
      else {
        if (*(int *)(lVar21 + 0xe7) != 2) goto LAB_180028c88;
        iVar12 = 4;
      }
    }
    lVar22 = *(longlong *)(param_1 + 0x10);
    uVar9 = *(uint *)(lVar21 + 0xef);
    if (*(uint *)(lVar21 + 0xef) == 0) {
      uVar3 = *(uint *)(lVar18 + 0xa8);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800287b0);
        (*pcVar6)();
      }
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = *(uint *)(lVar18 + 0xb0) / uVar3;
      }
      uVar3 = *(uint *)(lVar18 + 0xac);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800287c4);
        (*pcVar6)();
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = *(uint *)(lVar18 + 0xb4) / uVar3;
      }
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar4 <= uVar9) {
        uVar9 = uVar4;
      }
    }
    if (*(uint *)(lVar18 + 0x2ca0) != uVar9) {
      *(uint *)(lVar18 + 0x2ca0) = uVar9;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3170) = 1;
    }
    FUN_180053058(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x31b0),lVar22,1);
    if (*(longlong *)(lVar22 + 0xda0) != 0) {
      bVar7 = FUN_1800195f0(*(longlong *)(param_1 + 0x140));
      if (plVar16 != (longlong *)0x0) {
        FUN_18004b098(*(ulonglong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                      (ulonglong)plVar24,0,0,0x1000);
        FUN_18004b098(*(ulonglong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                      (ulonglong)plVar16,0,0,0x2000);
        FUN_18004c168(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508)
                      ,plVar24,0,plVar16,0,*(undefined4 *)(lVar28 + 0x14c));
      }
      FUN_180019930(*(longlong *)(param_1 + 0x140),bVar7,0);
      uVar11 = *(undefined4 *)
                (&DAT_180062198 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x34) * 4);
      thunk_FUN_180001218((undefined8 *)aiStack_1b0,(undefined8 *)&DAT_180061c10,0x148);
      local_184 = 0xf;
      uVar13 = FUN_18001b588((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1978),
                             aiStack_1b0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3260) = uVar13;
      uVar13 = FUN_18001b810((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1960),
                             (int *)&DAT_180061b70);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3278) = uVar13;
      uVar13 = FUN_18001b350((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19a8),
                             (uint *)&DAT_180061ba8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3270) = uVar13;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3294) = uVar11;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3298) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x32b4) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x32b8) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x32bc) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32da) = 1;
      lVar18 = *(longlong *)(param_1 + 0x140);
      local_3d0[2] = 0;
      local_3b8 = (float)*(uint *)(lVar18 + 0xb0);
      local_3ac = 0x3f800000;
      local_3b0 = 0;
      local_3b4 = (float)*(uint *)(lVar18 + 0xb4);
      FUN_18004c070(*(longlong *)(*(longlong *)(lVar18 + 0x31c0) + 0x1508),1,
                    (longlong)(local_3d0 + 2));
      local_400 = (longlong *)0x0;
      local_3f8 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0xb0);
      FUN_18004bfa0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),1
                    ,(longlong)&local_400);
      lVar21 = *(longlong *)(param_1 + 0x140);
      uVar9 = *(uint *)(lVar22 + 0xdb4);
      lVar18 = 0x15;
      if (iVar12 != 2) {
        lVar18 = 0x16;
      }
      uVar27 = *(ulonglong *)(lVar22 + 0xda0);
      iVar12 = *(int *)(lVar21 + 0xb0);
      iVar2 = *(int *)(lVar21 + 0xb4);
      uVar13 = *(undefined8 *)(param_1 + lVar18 * 8 + 0x598);
      uVar14 = FUN_1800495e8(*(longlong *)(lVar21 + 0x31c8),1,
                             *(longlong *)
                              (*(longlong *)(*(longlong *)(lVar21 + 0x31c0) + 0x1500) + 0x18),
                             *(longlong *)
                              (*(longlong *)(*(longlong *)(lVar21 + 0x31c0) + 0x1508) + 0xb78),
                             &local_3a0);
      if ((uVar14 & 1) != 0) {
        puVar15 = FUN_180043e88((longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19c0),
                                (byte *)&PTR_s_POSITION_18006b518,1);
        lVar18 = *(longlong *)(param_1 + 0x140);
        uVar20 = *(undefined8 *)(param_1 + 0x660);
        *(undefined8 **)(lVar18 + 0x3280) = puVar15;
        *(undefined8 *)(lVar18 + 0x3230) = uVar20;
        *(undefined8 *)(lVar18 + 0x3238) = uVar13;
        *(undefined4 *)(lVar18 + 0x328c) = 3;
        *(undefined1 *)(lVar18 + 0x32da) = 1;
        FUN_18004b678(*(longlong *)(*(longlong *)(lVar18 + 0x31c0) + 0x1508),5);
        FUN_18004b098(*(ulonglong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                      (ulonglong)plVar24,0,0,0x80);
        FUN_18004b098(*(ulonglong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),uVar27,0,0,
                      4);
        FUN_18004a3f8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938)
                      ,local_3d0,uVar9,0);
        FUN_18004bd88(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508)
                      ,1,local_3d0,0,(longlong *)0x0);
        FUN_18004b488(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508)
                      ,1,&uStack_390);
        lVar21 = *(longlong *)(param_1 + 0x140);
        uVar9 = *(uint *)(lVar21 + 0x31b8);
        lVar18 = *(longlong *)(lVar21 + 0x31b0);
        FUN_18004a3f8(*(longlong *)(*(longlong *)(lVar21 + 0x31c0) + 0x1930),(longlong *)&local_408,
                      (int)local_410 + 1,0);
        plVar16 = *(longlong **)(lVar18 + (ulonglong)uVar9 * 0x20 + 0x6d0);
        (**(code **)(*plVar16 + 0xc0))(plVar16,1,local_398,local_408,0);
        FUN_18004b880(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508)
                      ,2,(longlong)local_3a0);
        FUN_18001a0c8(*(longlong *)(param_1 + 0x140),bVar7);
        local_410 = (longlong *)0x0;
        uVar9 = FUN_1800255b8(param_1,extraout_x1,(longlong *)&local_410);
        if (local_410 != (longlong *)0x0) {
          pfVar1 = (float *)(local_410 + (ulonglong)uVar9 * 2);
          fVar35 = (float)iVar12;
          fVar34 = (float)iVar2;
          uVar3 = *(uint *)(*(longlong *)(param_1 + 8) + 0xb0);
          uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 0xb4);
          pfVar1[2] = 0.0;
          pfVar1[3] = 0.0;
          pfVar1[7] = 0.0;
          pfVar1[10] = 0.0;
          fVar33 = (float)uVar3;
          fVar31 = (float)uVar4;
          pfVar1[6] = fVar35;
          pfVar1[0xf] = fVar34;
          fVar32 = 0.0 / fVar33 - 1.0;
          fVar30 = 1.0 - 0.0 / fVar31;
          *pfVar1 = fVar32;
          pfVar1[1] = fVar30;
          fVar33 = (fVar35 + fVar35) / fVar33 - 1.0;
          pfVar1[4] = fVar33;
          pfVar1[5] = fVar30;
          pfVar1[0xb] = fVar34;
          pfVar1[0xc] = fVar33;
          fVar33 = 1.0 - (fVar34 + fVar34) / fVar31;
          pfVar1[8] = fVar32;
          pfVar1[9] = fVar33;
          pfVar1[0xd] = fVar33;
          pfVar1[0xe] = fVar35;
          if (*(int *)(*(longlong *)(param_1 + 0x668) + 0x34) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x668) + 0x34) = 0;
          }
          local_3e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x668) + 0x80);
          uStack_3d8 = CONCAT44(0x10,*(undefined4 *)(*(longlong *)(param_1 + 0x668) + 0x30));
          FUN_18004bb28(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),0,1,
                        (longlong)&local_3e0);
          FUN_18004c430(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),4,1,uVar9
                        ,0);
        }
      }
      FUN_18001a168(*(longlong *)(param_1 + 0x140));
      plVar16 = (longlong *)0x0;
      plVar24 = *(longlong **)(lVar22 + 0xda0);
      local_3d0[0] = CONCAT44(local_3d0[0]._4_4_,*(undefined4 *)(lVar22 + 0xdb0));
    }
  }
LAB_180028c88:
  lVar18 = *(longlong *)(param_1 + 0x140);
  local_270 = &PTR_FUN_1800649d8;
  local_260 = lVar28 + 0x148;
  local_248 = *(undefined8 *)(lVar18 + 0xa0);
  local_208 = *(undefined4 *)(*(longlong *)(lVar18 + 8) + 0xde);
  uStack_20c = *(undefined4 *)(*(longlong *)(lVar18 + 8) + 0xda);
  local_250 = *(undefined4 *)(lVar18 + 0x31b8);
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  lStack_268 = param_1;
  local_258 = param_1;
  puVar15 = FUN_180052570(*(longlong **)(lVar18 + 0x31b0),&local_258);
  lVar18 = *(longlong *)(param_1 + 0x140);
  if (((*(uint *)(*(longlong *)(lVar18 + 8) + 0xc2) >> 2 & 1) == 0) &&
     (*(char *)(param_1 + 0x12e) == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_338 = *(uint *)(*(longlong *)(lVar18 + 8) + 0xc);
  local_334 = *(undefined4 *)(*(longlong *)(lVar18 + 8) + 0x10);
  local_330 = *(undefined4 *)(*(longlong *)(lVar18 + 8) + 0x14);
  if (bVar7) {
    puVar19 = (undefined8 *)(lVar18 + 0xcc);
  }
  else {
    puVar19 = (undefined8 *)&DAT_180064928;
  }
  RStack_32c._8_8_ = puVar19[1];
  RStack_32c._0_8_ = *puVar19;
  uVar11 = *(undefined4 *)(lVar28 + 0x14c);
  local_410 = (longlong *)CONCAT44(local_410._4_4_,uVar11);
  local_31c = *(undefined4 *)
               (&DAT_1800649e0 + (longlong)*(int *)(*(longlong *)(lVar18 + 8) + 0xca) * 4);
  plVar23 = *(longlong **)(lVar18 + 0x31b0);
  uVar9 = *(uint *)(puVar15 + 2);
  plVar29 = (longlong *)puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1];
  local_350 = (longlong *)puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1];
  pppuVar26 = &local_270;
  if (*(char *)(lVar18 + 0x2bea) == '\0') {
    pppuVar26 = (undefined ***)0x0;
  }
  local_360 = plVar16;
  local_358 = plVar24;
  plVar16 = FUN_18004a3f8(plVar23[(ulonglong)uVar9 * 0x358 + 0x446],&local_348,(uint)local_3d0[0],0)
  ;
  local_33c = 0xffffffff;
  uStack_3d8 = 0;
  local_3e0 = 0;
  local_340 = uVar11;
  if (((int)plVar23[0xd9] != 0) &&
     ((local_360 != (longlong *)0x0 || (local_358 != (longlong *)0x0)))) {
    uVar3 = *(uint *)(puVar15 + 2);
    lVar18 = plVar23[0xd7] + (ulonglong)uVar3 * 0x1ac0;
    if (local_360 != (longlong *)0x0) {
      *(int *)(*(longlong *)(lVar18 + 0x1e08) + 0x684) =
           *(int *)(*(longlong *)(lVar18 + 0x1e08) + 0x684) + 1;
      FUN_180053bf8(plVar16,lVar18 + 0x900,(ulonglong)local_358,(ulonglong)local_360,uVar11);
      lVar28 = *(longlong *)(lVar18 + 0x1e08);
      iVar12 = *(int *)(lVar28 + 0x684) + -1;
      *(int *)(lVar28 + 0x684) = iVar12;
      if ((iVar12 == 0) && (*(int *)(lVar28 + 0x680) <= *(int *)(lVar28 + 0x678))) {
        FUN_18004aca0(lVar28 + 8,0);
      }
      local_360 = (longlong *)0x0;
      local_340 = 0;
    }
    (**(code **)(*local_358 + 0x50))(local_358,&local_318);
    (**(code **)(*(longlong *)puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1] + 0x50))
              ((longlong *)puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1],auStack_200);
    FUN_180051210(plVar23[0xd7],(uint *)&local_3a0,(longlong)puVar15,(int *)&local_338,local_308,
                  local_300,(uint)_local_1f0,local_1e8,0,0);
    lStack_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0.left = 0;
    local_2a0.top = 0;
    local_2a0.bottom = local_300;
    local_2a0.right = local_308;
    local_290 = local_358;
    local_288 = local_348;
    local_2d0 = puVar15;
    local_280 = FUN_1800465f0(*(longlong **)(plVar23[0xd7] + 0x1b500),(ulonglong)local_358);
    BVar10 = IsRectEmpty(&RStack_32c);
    if (BVar10 == 0) {
      local_2a0.right = RStack_32c.right;
      local_2a0.bottom = RStack_32c.bottom;
      local_2a0.left = RStack_32c.left;
      local_2a0.top = RStack_32c.top;
    }
    if (local_3a0._4_4_ == 0) {
      local_2b8 = puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1];
      plVar16 = FUN_18004a3f8(*(longlong *)(lVar18 + 0x2238),(longlong *)&local_408,
                              *(uint *)(puVar15 + 0x1b3),*(int *)(puVar15 + 0x1af));
      local_2c0 = CONCAT44(uStack_374,uStack_378);
      local_2b0 = *plVar16;
      lStack_2c8 = local_380;
      local_2a8 = FUN_1800465f0(*(longlong **)(plVar23[0xd7] + 0x1b500),local_2b8);
    }
    uStack_3d8 = CONCAT44(uStack_374,uStack_378);
    local_400 = (longlong *)0x0;
    local_3f8 = 0;
    local_3f0 = 0;
    uVar14 = 0;
    local_3e0 = local_380;
    if ((int)plVar23[0xd9] != 0) {
      bVar25 = 0;
      local_408 = pppuVar26;
      do {
        plVar16 = *(longlong **)(plVar23[0xd8] + uVar14 * 8);
        bVar8 = (**(code **)(*plVar16 + 0x40))(plVar16,uVar3,&local_2d0,&local_400);
        uVar4 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar4;
        bVar25 = bVar8 | bVar25;
      } while (uVar4 < *(uint *)(plVar23 + 0xd9));
      pppuVar26 = local_408;
      if (bVar25 != 0) {
        if (local_400 == local_350) {
          local_350 = (longlong *)0x0;
        }
        else {
          local_358 = local_400;
          local_348 = local_3f8;
          local_33c = (uint)local_3f0;
        }
      }
    }
  }
  *(int *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0x684) =
       *(int *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0x684) + 1;
  plVar23[(ulonglong)uVar9 * 0x358 + 0x13a] =
       *(longlong *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0xb78);
  if ((local_358 != (longlong *)0x0) || (local_360 != (longlong *)0x0)) {
    iVar12 = (int)local_410;
    uVar14 = FUN_1800540b0(plVar23,(longlong)puVar15,(ulonglong *)&local_360,(int)local_410,
                           &local_338,pppuVar26);
    plVar16 = local_358;
    if ((uVar14 & 1) == 0) {
      if (local_350 != (longlong *)0x0) {
        if (local_360 == (longlong *)0x0) {
          FUN_18004b098(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1],(ulonglong)local_358,0,0,0x800);
          FUN_18004b098(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1],(ulonglong)plVar29,0,0,0x400);
          FUN_18004c1e0(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1],plVar29,plVar16);
        }
        else {
          FUN_180053bf8(uVar14,(longlong)(plVar23 + (ulonglong)uVar9 * 0x358 + 0x120),
                        (ulonglong)plVar29,(ulonglong)local_360,iVar12);
        }
      }
      if (pppuVar26 != (undefined ***)0x0) {
        *(longlong **)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0xb88) = plVar23;
        uVar3 = *(uint *)(puVar15 + 4);
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1800290ec);
          (*pcVar6)();
        }
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = *(uint *)(puVar15 + 3) / uVar3;
        }
        uVar3 = *(uint *)((longlong)puVar15 + 0x24);
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180029100);
          (*pcVar6)();
        }
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = *(uint *)((longlong)puVar15 + 0x1c) / uVar3;
        }
        local_400 = (longlong *)0x0;
        local_3f8 = CONCAT44(uVar5,uVar4);
        (**(code **)(*plVar29 + 0x50))(plVar29,auStack_200);
        local_318 = plVar29;
        FUN_18004a3f8(plVar23[(ulonglong)uVar9 * 0x358 + 0x447],&lStack_310,
                      *(uint *)(puVar15 + 0x1b3),*(int *)(puVar15 + 0x1af));
        local_2e8 = 0x3f800000;
        uStack_2e4 = 0x3f800000;
        local_308 = local_1e0;
        local_2f0 = &local_400;
        local_2e0 = 0;
        uStack_304 = uVar4;
        local_300 = uVar5;
        uStack_2fc = uVar4;
        local_2f8 = uVar5;
        (*(code *)**pppuVar26)(pppuVar26,&local_318);
      }
    }
  }
  if ((int)plVar23[0xd9] != 0) {
    uVar3 = *(uint *)(puVar15 + 2);
    lVar18 = plVar23[0xd7] + (ulonglong)uVar3 * 0x1ac0;
    if (local_33c != 0xffffffff) {
      FUN_18004b098(*(ulonglong *)(lVar18 + 0x1e08),(ulonglong)local_358,0,0,local_33c);
    }
    uStack_390 = uStack_3d8;
    local_398 = local_3e0;
    local_388 = puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1];
    local_3a0 = puVar15;
    FUN_18004a3f8(*(longlong *)(lVar18 + 0x2238),&local_380,*(uint *)(puVar15 + 0x1b3),
                  *(int *)(puVar15 + 0x1af));
    uStack_378 = FUN_1800465f0(*(longlong **)(plVar23[0xd7] + 0x1b500),local_388);
    uVar14 = 0;
    if ((int)plVar23[0xd9] != 0) {
      do {
        plVar16 = *(longlong **)(plVar23[0xd8] + uVar14 * 8);
        (**(code **)(*plVar16 + 0x48))(plVar16,uVar3,&local_3a0);
        uVar4 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(plVar23 + 0xd9));
    }
  }
  if ((*(char *)((longlong)puVar15 + 0xd6a) != '\0') &&
     (plVar16 = (longlong *)puVar15[0x1b7], plVar16 != (longlong *)0x0)) {
    uVar3 = *(uint *)(puVar15 + 2);
    (**(code **)(*plVar16 + 0x50))(plVar16,auStack_200);
    *(int *)(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1] + 0x684) =
         *(int *)(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1] + 0x684) + 1;
    lVar21 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1];
    lVar28 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c0];
    lVar18 = plVar23[(ulonglong)uVar3 * 0x358 + 0x44a];
    plVar23[(ulonglong)uVar3 * 0x358 + 0x13a] = *(longlong *)(lVar21 + 0xb78);
    uVar14 = FUN_1800495e8(lVar18,2,*(longlong *)(lVar28 + 0x18),*(longlong *)(lVar21 + 0xb78),
                           &local_3a0);
    if (((uVar14 & 1) != 0) &&
       (plVar16 = FUN_1800450f0(plVar23[(ulonglong)uVar3 * 0x358 + 0x121] + 0x40,&local_1c8,2,
                                *(longlong *)(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c0] + 0x18),
                                plVar23[(ulonglong)uVar3 * 0x358 + 0x13a]),
       local_1c0 != (float *)0x0)) {
      *(longlong **)(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1] + 0xb88) = plVar23;
      FUN_180051b48(plVar16,(longlong)puVar15,&RStack_32c,local_1f0,local_1e8,local_1c0,
                    (float *)&local_3e0);
      local_410 = (longlong *)puVar15[(ulonglong)*(uint *)(puVar15 + 0x1af) + 0x1b1];
      (**(code **)(*local_410 + 0x50))(local_410,&local_318);
      FUN_18004a3f8(plVar23[(ulonglong)uVar3 * 0x358 + 0x447],(longlong *)&local_408,
                    *(uint *)(puVar15 + 0x1b3),*(int *)(puVar15 + 0x1af));
      plVar24 = (longlong *)plVar23[(ulonglong)*(uint *)(puVar15 + 2) * 4 + 0xda];
      lVar18 = *plVar24;
      plVar16 = FUN_18004a3f8(plVar23[(ulonglong)uVar3 * 0x358 + 0x446],local_3d0,
                              *(uint *)(puVar15 + 0x1b9),0);
      (**(code **)(lVar18 + 0xc0))(plVar24,2,local_398,*plVar16,0);
      *(undefined4 *)(plVar23 + (ulonglong)uVar3 * 0x358 + 0x130) = 1;
      *(uint *)((longlong)plVar23 + (ulonglong)uVar3 * 0x1ac0 + 0x984) = local_2f8;
      lVar18 = FUN_18001b810(plVar23 + (ulonglong)uVar3 * 0x358 + 0x44c,(int *)&DAT_180062250);
      plVar23[(ulonglong)uVar3 * 0x358 + 0x12d] = lVar18;
      lVar18 = FUN_18001b350(plVar23 + (ulonglong)uVar3 * 0x358 + 0x455,(uint *)&DAT_180062288);
      lVar28 = plVar23[(ulonglong)uVar3 * 0x358 + 0x374];
      lVar21 = plVar23[(ulonglong)uVar3 * 0x358 + 0x370];
      plVar23[(ulonglong)uVar3 * 0x358 + 300] = lVar18;
      uVar27 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1];
      uVar14 = plVar23[(ulonglong)uVar3 * 0x358 + 0x123];
      plVar23[(ulonglong)uVar3 * 0x358 + 0x124] = lVar28;
      plVar23[(ulonglong)uVar3 * 0x358 + 0x125] = lVar21;
      plVar23[(ulonglong)uVar3 * 0x358 + 0x12e] = plVar23[(ulonglong)uVar3 * 0x358 + 0x376];
      FUN_1800460a8(*(longlong *)(uVar27 + 0xb18),uVar14,*(ulonglong *)(uVar27 + 0xb10),uVar27,
                    *(ulonglong *)(uVar27 + 0xb78));
      FUN_18004b540(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],
                    plVar23[(ulonglong)uVar3 * 0x358 + 0x123]);
      FUN_18004b488(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,&uStack_390);
      FUN_18004b678(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],5);
      local_3d0[0] = local_1c8;
      local_3d0[1] = 0x1000000200;
      FUN_18004bb28(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],0,1,(longlong)local_3d0);
      FUN_18004bd88(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,(longlong *)&local_408,0,
                    (longlong *)0x0);
      local_3ac = 0x3f800000;
      local_3b0 = 0;
      local_3d0[2] = local_3e0;
      local_3b8 = (float)uStack_3d8;
      local_3b4 = uStack_3d8._4_4_;
      local_400 = (longlong *)CONCAT44((int)local_3e0._4_4_,(int)(float)local_3e0);
      local_3f8 = CONCAT44((int)(uStack_3d8._4_4_ + local_3e0._4_4_),
                           (int)((float)uStack_3d8 + (float)local_3e0));
      FUN_18004c070(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,(longlong)(local_3d0 + 2));
      FUN_18004bfa0(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,(longlong)&local_400);
      FUN_18004b098(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],(ulonglong)local_410,0,0,4);
      if (puVar15[0x1b8] == 0) {
        piVar17 = (int *)&DAT_180065c60;
      }
      else {
        FUN_18004b880(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,
                      (longlong)local_3a0 + (local_388 & 0xffffffff));
        lVar18 = FUN_18001b588(plVar23 + (ulonglong)uVar3 * 0x358 + 0x44f,(int *)&DAT_180065b10);
        plVar23[(ulonglong)uVar3 * 0x358 + 0x12a] = lVar18;
        uVar14 = FUN_180044270((longlong)(plVar23 + (ulonglong)uVar3 * 0x358 + 0x45b),
                               (byte *)(plVar23 + (ulonglong)uVar3 * 0x358 + 0x123));
        uVar27 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1];
        FUN_1800460a8(*(longlong *)(uVar27 + 0xb18),uVar14,*(ulonglong *)(uVar27 + 0xb10),uVar27,
                      *(ulonglong *)(uVar27 + 0xb78));
        FUN_18004b628(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],uVar14);
        FUN_18004b098(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],puVar15[0x1b8],0,0,0x80);
        FUN_18004c430(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],4,1,0,0);
        piVar17 = (int *)&DAT_180065db0;
      }
      lVar18 = FUN_18001b588(plVar23 + (ulonglong)uVar3 * 0x358 + 0x44f,piVar17);
      plVar23[(ulonglong)uVar3 * 0x358 + 0x12a] = lVar18;
      uVar14 = FUN_180044270((longlong)(plVar23 + (ulonglong)uVar3 * 0x358 + 0x45b),
                             (byte *)(plVar23 + (ulonglong)uVar3 * 0x358 + 0x123));
      FUN_18004b628(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],uVar14);
      uVar27 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1];
      FUN_1800460a8(*(longlong *)(uVar27 + 0xb18),uVar14,*(ulonglong *)(uVar27 + 0xb10),uVar27,
                    *(ulonglong *)(uVar27 + 0xb78));
      FUN_18004b880(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],1,(longlong)local_3a0);
      FUN_18004b098(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],puVar15[0x1b7],0,0,0x80);
      FUN_18004c430(plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1],4,1,0,0);
      if (*(int *)(plVar23[(ulonglong)uVar3 * 0x358 + 0x121] + 0x34) != 0) {
        *(undefined4 *)(plVar23[(ulonglong)uVar3 * 0x358 + 0x121] + 0x34) = 0;
      }
      lVar18 = plVar23[(ulonglong)uVar3 * 0x358 + 0x3c1];
      iVar12 = *(int *)(lVar18 + 0x684) + -1;
      *(int *)(lVar18 + 0x684) = iVar12;
      if ((iVar12 == 0) && (*(int *)(lVar18 + 0x680) <= *(int *)(lVar18 + 0x678))) {
        FUN_18004aca0(lVar18 + 8,0);
      }
    }
  }
  FUN_18004b098(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1],(ulonglong)plVar29,0,0,0);
  lVar18 = plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1];
  iVar12 = *(int *)(lVar18 + 0x684) + -1;
  *(int *)(lVar18 + 0x684) = iVar12;
  if (iVar12 == 0) {
    FUN_18004aca0(lVar18 + 8,0);
  }
  uVar14 = *(ulonglong *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0xb78);
  FUN_180046350((longlong *)plVar23[0x36a0],(ulonglong)plVar29,0,0,
                plVar23[(ulonglong)uVar9 * 0x358 + 0x3c0],0xffffffffffffffff,0,uVar14);
  if (((local_3e8 == 0) && (*(char *)((longlong)puVar15 + 0xd6c) != '\0')) &&
     ((*(int *)((longlong)puVar15 + 0x3c) != 2 || (*(char *)((longlong)puVar15 + 0xd6d) == '\0'))))
  {
    uVar13 = 0x200;
  }
  else {
    uVar13 = 0;
  }
  lVar18 = plVar23[(ulonglong)uVar9 * 0x358 + 0x3c0];
  (**(code **)(*(longlong *)puVar15[1] + 0x40))((longlong *)puVar15[1],local_3e8,uVar13);
  plVar16 = *(longlong **)(lVar18 + 0x10);
  (**(code **)(*plVar16 + 0x70))(plVar16,*(undefined8 *)(lVar18 + 0x18),uVar14);
  uVar13 = FUN_1800608c0((longlong *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c0] + 0x28));
  *(undefined8 *)(plVar23[(ulonglong)uVar9 * 0x358 + 0x3c1] + 0xb78) = uVar13;
  uVar11 = (**(code **)(*(longlong *)puVar15[0x1b0] + 0x120))();
  *(undefined4 *)(puVar15 + 0x1af) = uVar11;
  FUN_180053568(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),(longlong)puVar15);
  iVar12 = FUN_1800530d8(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                         *(longlong *)(*(longlong *)(param_1 + 0x140) + 0xa0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  return iVar12;
}

