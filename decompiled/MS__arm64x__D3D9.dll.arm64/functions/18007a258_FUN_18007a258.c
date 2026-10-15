/*
 * FUN_18007a258 at 18007a258
 * undefined FUN_18007a258(void)
 * Address ranges: 18007a258-18007b6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18007a258(longlong param_1,ulonglong param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar24;
  longlong *plVar25;
  undefined4 **ppuVar26;
  longlong *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_fffffffffffffc60;
  undefined8 in_stack_fffffffffffffc68;
  undefined4 *local_380;
  undefined8 uStack_378;
  int *local_370;
  ulonglong local_368;
  longlong *local_360 [2];
  uint local_350 [2];
  undefined4 local_348;
  undefined4 uStack_344;
  int local_340;
  int local_33c;
  uint local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  char local_320;
  char local_31f;
  int local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  int local_2e8;
  undefined4 uStack_2e4;
  ulonglong local_2c8;
  longlong *local_2c0 [2];
  undefined4 **local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 **local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  longlong lStack_278;
  undefined8 local_270;
  longlong *local_268;
  undefined4 **ppuStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 *puStack_204;
  ulonglong uStack_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1d0;
  longlong lStack_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  ulonglong local_180 [5];
  undefined4 local_158;
  uint local_150;
  uint uStack_14c;
  undefined4 local_140;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_90;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc60 >> 0x20);
  local_318 = param_3;
  local_2c8 = param_2;
  FUN_1800e5470(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  bVar9 = param_2 != 0;
  local_380 = (undefined4 *)0x0;
  if (bVar9) {
    local_380 = (undefined4 *)(param_2 - 0xe0);
  }
  local_370 = (int *)&DAT_00000130;
  if (bVar9) {
    local_370 = (int *)(param_2 + 0x50);
  }
  lVar23 = 0;
  iVar12 = *(int *)(&DAT_180232ee0 + (longlong)*local_370 * 4);
  local_368 = 0x60;
  if (bVar9) {
    local_368 = param_2 - 0x80;
  }
  local_360[0] = (longlong *)&DAT_00000078;
  if (bVar9) {
    local_360[0] = (longlong *)(param_2 - 0x68);
  }
  plVar25 = (longlong *)*local_360[0];
  plVar1 = (longlong *)&DAT_00000118;
  if (bVar9) {
    plVar1 = (longlong *)(param_2 + 0x38);
  }
  ppuVar26 = *(undefined4 ***)(*plVar1 + 0xda8);
  plVar14 = (longlong *)&DAT_00000120;
  if (bVar9) {
    plVar14 = (longlong *)(param_2 + 0x40);
  }
  local_2c0[0] = plVar14;
  if ((longlong *)*plVar14 == (longlong *)0x0) goto LAB_18007a59c;
  cVar10 = (**(code **)(*(longlong *)*plVar14 + 0xa8))();
  if (cVar10 != '\0') {
    lVar20 = *plVar14;
    plVar14 = *(longlong **)(lVar20 + 0x78);
    local_2f8 = (undefined4 **)lVar20;
    if (((plVar14 == (longlong *)0x0) ||
        ((**(code **)(*plVar14 + 0x50))(plVar14,&local_a0), 0x1c < local_90)) ||
       ((0x19800a00U >> (ulonglong)(local_90 & 0x1f) & 1) == 0)) goto LAB_18007a59c;
    lVar23 = *(longlong *)(lVar20 + 0x80);
    lVar19 = 0x40;
    if (*(int *)(lVar20 + 0x2c) == 0x15) {
      lVar19 = 0x50;
    }
    iVar12 = *(int *)(param_1 + lVar19);
    FUN_180086dd8(lVar20,0,0,0);
    if (*(longlong *)(lVar20 + 0x80) == 0) {
      if (*(longlong *)(lVar20 + 0x140) == 0) {
        FUN_180086470(lVar20);
      }
      ppuVar26 = *(undefined4 ***)((longlong)local_2f8 + 0x140);
      if (ppuVar26 != (undefined4 **)0x0) {
        plVar25 = *(longlong **)((longlong)local_2f8 + 0x78);
        goto LAB_18007a59c;
      }
    }
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar1,1);
    if (((int)param_4[3] == 0) && (iVar12 == *(int *)(&DAT_180232ee0 + (longlong)*local_370 * 4))) {
      ppuVar26 = *(undefined4 ***)(*plVar1 + 0xda8);
      plVar25 = *(longlong **)(*plVar1 + 0xd88);
      goto LAB_18007a59c;
    }
  }
  lVar23 = 0;
  if (*(longlong *)(*plVar1 + 0xd88) == 0) {
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar1,1);
  }
  if (*(longlong *)(*plVar1 + 0xd88) != 0) {
    uStack_288 = CONCAT35(uStack_288._5_3_,0x100000000);
    local_290 = (undefined4 **)0x0;
    uStack_2a8 = 0;
    local_2b0 = (undefined4 **)0x0;
    local_298 = (longlong *)0x0;
    local_2a0 = 0;
    (*__imp_USER32_dll_SetRect)
              (&local_2a0,0,0,*(undefined4 *)(*local_2c0[0] + 0x24),
               *(undefined4 *)(*local_2c0[0] + 0x28));
    uVar21 = local_2c8;
    puVar5 = (undefined4 *)&DAT_00000028;
    if (local_2c8 != 0) {
      puVar5 = (undefined4 *)(local_2c8 - 0xb8);
    }
    puVar2 = (undefined4 *)&DAT_00000024;
    if (local_2c8 != 0) {
      puVar2 = (undefined4 *)(local_2c8 - 0xbc);
    }
    (*__imp_USER32_dll_SetRect)(&local_2b0,0,0,*puVar2,*puVar5);
    plVar25 = local_360[0];
    if (*local_360[0] != *(longlong *)(*plVar1 + 0xd88)) {
      FUN_180083208(local_368,1,1);
      plVar27 = *(longlong **)(*plVar1 + 0xd98);
      plVar14 = *(longlong **)(*plVar1 + 0xd88);
      FUN_180082ad8(local_368,1,1);
      *plVar25 = (longlong)plVar14;
      puVar3 = (undefined8 *)&DAT_00000090;
      if (uVar21 != 0) {
        puVar3 = (undefined8 *)(uVar21 - 0x50);
      }
      *(longlong **)*puVar3 = plVar27;
      (**(code **)(*plVar27 + 8))(plVar27);
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    lVar20 = 0;
    if (*local_2c0[0] != 0) {
      lVar20 = *local_2c0[0] + 0xe0;
    }
    uVar21 = 0xe0;
    if (local_2c8 != 0) {
      uVar21 = local_2c8;
    }
    uVar4 = 0;
    if (local_380 != (undefined4 *)0x0) {
      uVar4 = uVar21;
    }
    FUN_1800819f8(param_1,0,0,0,0,uVar4,lVar20,&local_2b0);
  }
  plVar25 = *(longlong **)(*plVar1 + 0xd88);
  ppuVar26 = *(undefined4 ***)(*plVar1 + 0xda8);
  iVar12 = *(int *)(&DAT_180232ee0 + (longlong)*local_370 * 4);
LAB_18007a59c:
  local_180[1] = 0;
  local_180[0] = 0;
  local_180[3] = 0;
  local_180[2] = 0;
  local_180[4] = 0;
  local_158 = 0;
  if (plVar25 != (longlong *)0x0) {
    (**(code **)(*plVar25 + 0x50))(plVar25,local_180);
  }
  local_380 = (undefined4 *)0x0;
  uStack_378 = local_180[0];
  iVar11 = (*__imp_USER32_dll_IsRectEmpty)(param_4 + 1);
  if (iVar11 == 0) {
    uStack_378 = param_4[2];
    local_380 = (undefined4 *)param_4[1];
  }
  if ((int)param_4[3] != 0) {
    plVar14 = *(longlong **)(*plVar1 + 0xd88);
    uVar17 = 1;
    if (plVar25 == plVar14) {
      uVar17 = 2;
    }
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar1,uVar17);
    uVar21 = (ulonglong)(plVar25 == plVar14);
    if (*(longlong *)(*plVar1 + uVar21 * 8 + 0xd88) != 0) {
      puVar5 = (undefined4 *)&DAT_0000002c;
      if (*param_4 != 0) {
        puVar5 = (undefined4 *)(*param_4 + -0xb4);
      }
      FUN_1800a0830(param_1,*puVar5,local_180[2] & 0xffffffff,
                    *(undefined4 *)((longlong)param_4 + 0x1c));
      FUN_1800e1940(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),
                    &DAT_180232c60,0,0xffffffff,0);
      FUN_1800e1fe8(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),
                    &DAT_180232e00,0);
      FUN_1800e22c0(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28),
                    &DAT_180232dd8);
      local_2b0 = (undefined4 **)0x0;
      local_2a0 = 0;
      local_290 = (undefined4 **)0x0;
      uStack_288 = 0;
      local_270 = 0;
      uStack_258 = 0;
      local_250 = 0;
      local_248 = 0;
      lVar20 = *plVar1 + uVar21 * 8;
      local_280 = *(longlong *)(lVar20 + 0xd88);
      lStack_278 = *(longlong *)(lVar20 + 0xd98);
      uStack_2a8 = CONCAT44((float)(local_180[0] >> 0x20),(float)(local_180[0] & 0xffffffff));
      local_298 = (longlong *)
                  CONCAT44((float)(local_180[0] >> 0x20),(float)(local_180[0] & 0xffffffff));
      lVar20 = 0x1f;
      if ((int)param_4[3] == 4) {
        lVar20 = 0x20;
      }
      local_268 = plVar25;
      ppuStack_260 = ppuVar26;
      FUN_18007be58(param_1,&local_2b0,*(undefined8 *)(param_1 + lVar20 * 8 + 0x1cf20));
    }
    lVar20 = *plVar1 + uVar21 * 8;
    plVar25 = *(longlong **)(lVar20 + 0xd88);
    ppuVar26 = *(undefined4 ***)(lVar20 + 0xda8);
    iVar12 = *(int *)(&DAT_180232ee0 + (longlong)*local_370 * 4);
  }
  lVar20 = *(longlong *)(param_1 + 8);
  local_1d0 = &PTR_FUN_180234b28;
  lVar22 = *(longlong *)(param_1 + 0x1cf10);
  lVar19 = *plVar1;
  local_210 = *(undefined4 *)(lVar20 + 0xc);
  local_20c = *(undefined4 *)(lVar20 + 0x10);
  local_208 = *(undefined4 *)(lVar20 + 0x14);
  uStack_1fc = uStack_378;
  puStack_204 = local_380;
  local_1f4 = *(undefined4 *)(&DAT_18022aa28 + (longlong)*(int *)(lVar20 + 0xca) * 4);
  lStack_1c8 = param_1;
  local_1c0 = param_4;
  if ((plVar25 != (longlong *)0x0) || (lVar23 != 0)) {
    lVar20 = lVar22 + (ulonglong)*(uint *)(lVar19 + 0x10) * 0x18c0;
    (**(code **)(*plVar25 + 0x50))(plVar25,&local_d0);
    (**(code **)(**(longlong **)(lVar19 + 0xd78) + 0x50))(*(longlong **)(lVar19 + 0xd78),&local_150)
    ;
    FUN_1800e42e0(lVar22,local_350,lVar19,&local_210,local_d0,local_cc,local_150,uStack_14c,
                  CONCAT44(uVar18,iVar12),CONCAT44(uVar24,local_140));
    if ((local_350[0] == 0) && ((local_320 == '\0' && (local_31f == '\0')))) {
      plVar14 = *(longlong **)(lVar20 + 0x6b8);
      if (lVar23 == 0) {
        (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(lVar19 + 0xd78),plVar25);
      }
      else {
        (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(lVar19 + 0xd78),0,lVar23,0,iVar12);
      }
      uVar13 = *(uint *)(lVar19 + 0x20);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x18007a858);
        (*pcVar8)();
      }
      uVar6 = 0;
      if (uVar13 != 0) {
        uVar6 = *(uint *)(lVar19 + 0x18) / uVar13;
      }
      uVar13 = *(uint *)(lVar19 + 0x24);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x18007a86c);
        (*pcVar8)();
      }
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = *(uint *)(lVar19 + 0x1c) / uVar13;
      }
      uStack_288 = 0x3f8000003f800000;
      local_2b0 = *(undefined4 ***)(lVar19 + 0xd78);
      uStack_2a8 = *(longlong *)(lVar19 + 0xd80);
      local_380 = (undefined4 *)0x0;
      uStack_378 = CONCAT44(uVar7,uVar6);
      local_2a0 = CONCAT44(uVar7,uVar6);
      local_298 = (longlong *)CONCAT44(uVar7,uVar6);
      local_290 = &local_380;
      local_280 = 0;
    }
    else {
      if (lVar23 != 0) {
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x1c8))
                  (*(longlong **)(lVar20 + 0x6b8),plVar25,0,lVar23,0,iVar12);
      }
      if (*(int *)(lVar19 + 0x2c) == 7) {
        uVar13 = *(uint *)(lVar19 + 0x10);
        local_370 = (int *)CONCAT44(local_370._4_4_,local_cc);
        local_368 = CONCAT44(local_368._4_4_,local_d0);
        lVar23 = lVar22 + (ulonglong)uVar13 * 0x18c0;
        local_380 = (undefined4 *)(lVar23 + 0x1000);
        if (*(char *)(lVar23 + 0x1f60) == '\0') {
          FUN_1800fb4f8(lVar22,uVar13);
          *(undefined1 *)(local_380 + 0x3d8) = 1;
        }
        if (*(longlong *)(lVar23 + 0x1f08) != 0) {
          local_184 = 0x3f800000;
          local_198 = 0;
          local_188 = 0;
          local_190 = 0x43200000;
          uStack_18c = 0x43480000;
          FUN_1800e2798(lVar22,uVar13,&local_198);
          FUN_1800e1940(lVar22,uVar13,&DAT_180232c60,0,0xffffffff,0);
          FUN_1800e1fe8(lVar22,uVar13,&DAT_180232e00,0);
          FUN_1800e22c0(lVar22,uVar13,&DAT_180232dd8);
          FUN_1800e2ac8(lVar22,uVar13,5,*(undefined8 *)(lVar23 + 0xe88),
                        *(undefined8 *)(lVar23 + 0xe78),*(undefined8 *)(lVar23 + 0xd28),0);
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          FUN_1800e2bd8(lVar22,uVar13,4,&local_1b8,0);
          local_2a0 = 0;
          uStack_2a8 = 0;
          local_290 = (undefined4 **)0x0;
          local_298 = (longlong *)0x0;
          local_280 = 0;
          uStack_288 = 0;
          local_270 = 0;
          lStack_278 = 0;
          ppuStack_260 = (undefined4 **)0x0;
          local_268 = (longlong *)0x0;
          local_250 = 0;
          uStack_258 = 0;
          uStack_240 = 0;
          local_248 = 0;
          local_238 = 0;
          local_2b0 = ppuVar26;
          FUN_1800e2930(lVar22,uVar13,0,0x10,&local_2b0);
          FUN_1800e28b0(lVar22,uVar13,1,1,lVar23 + 0xe90);
          local_1b8 = *(undefined8 *)(lVar23 + 0x1ef8);
          FUN_1800e2bd8(lVar22,uVar13,4,&local_1b8,0);
          local_2c8 = local_2c8 & 0xffffffff00000000;
          local_2c0[0] = (longlong *)CONCAT44(local_2c0[0]._4_4_,0x10);
          FUN_1800e29b0(lVar22,uVar13);
          FUN_1800e2a70(lVar22,uVar13,0,0);
          iVar12 = (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x70))
                             (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0,4,0,
                              &local_380);
          if (-1 < iVar12) {
            fVar29 = (float)(local_368 & 0xffffffff);
            *local_380 = 0xbf800000;
            fVar31 = (float)((ulonglong)local_370 & 0xffffffff);
            local_380[1] = 0x3f800000;
            fVar30 = (fVar29 + 0.5) / fVar29;
            fVar28 = (fVar31 + 0.5) / fVar31;
            local_380[2] = 0.5 / fVar29;
            local_380[3] = 0.5 / fVar31;
            local_380[4] = 0x3f800000;
            local_380[5] = 0x3f800000;
            local_380[6] = fVar30;
            local_380[7] = 0.5 / fVar31;
            local_380[8] = 0xbf800000;
            local_380[9] = 0xbf800000;
            local_380[10] = 0.5 / fVar29;
            local_380[0xb] = fVar28;
            local_380[0xc] = 0x3f800000;
            local_380[0xd] = 0xbf800000;
            local_380[0xe] = fVar30;
            local_380[0xf] = fVar28;
            (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x78))
                      (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0);
          }
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x68))(*(longlong **)(lVar23 + 0x6b8),4,0);
          local_230 = *(undefined8 *)(lVar23 + 0x1f10);
          local_220 = 0;
          uStack_218 = 0;
          local_228 = 0;
          FUN_1800e2bd8(lVar22,uVar13,4,&local_230,0);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x68))(*(longlong **)(lVar23 + 0x6b8),4,0);
          local_1b8 = 0;
          FUN_1800e2bd8(lVar22,uVar13,4,&local_1b8,0);
          uStack_118 = *(undefined8 *)(lVar23 + 0x1f28);
          local_120 = *(undefined8 *)(lVar23 + 0x1f00);
          local_110 = *(undefined8 *)(lVar23 + 0x1f58);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x218))
                    (*(longlong **)(lVar23 + 0x6b8),0,3,&local_120);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x220))
                    (*(longlong **)(lVar23 + 0x6b8),0,1,lVar23 + 0x1f38,0);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x228))
                    (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xd00),0,0);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x148))
                    (*(longlong **)(lVar23 + 0x6b8),0x28,0x19,1);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x228))
                    (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xd08),0,0);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x148))
                    (*(longlong **)(lVar23 + 0x6b8),1,0x19,1);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x228))
                    (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xd10),0,0);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x148))
                    (*(longlong **)(lVar23 + 0x6b8),0x28,0x19,1);
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x178))
                    (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 8000),
                     *(undefined8 *)(lVar23 + 0x1f30));
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x218))
                    (*(longlong **)(lVar23 + 0x6b8),0,3,&local_108);
          local_230 = 0;
          local_228 = 0x4348000043a00000;
          local_220 = 0x3f80000000000000;
          FUN_1800e2798(lVar22,uVar13,&local_230);
          FUN_1800e2ac8(lVar22,uVar13,5,*(undefined8 *)(lVar23 + 0xe88),
                        *(undefined8 *)(lVar23 + 0xe78),*(undefined8 *)(lVar23 + 0xe68),0);
          local_f0 = *(undefined8 *)(lVar23 + 0x1f10);
          local_e0 = 0;
          uStack_d8 = 0;
          uStack_e8 = 0;
          FUN_1800e2bd8(lVar22,uVar13,4,&local_f0,0);
          local_308 = *(undefined8 *)(lVar23 + 0x1f28);
          local_310 = *(longlong *)(lVar23 + 0x1f00);
          local_300 = *(undefined8 *)(lVar23 + 0x1f48);
          FUN_1800e2930(lVar22,uVar13,0,3,&local_310);
          local_368 = CONCAT44(local_368._4_4_,0x10);
          local_370 = (int *)((ulonglong)local_370 & 0xffffffff00000000);
          FUN_1800e29b0(lVar22,uVar13);
          FUN_1800e2a70(lVar22,uVar13,0,0);
          iVar12 = (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x70))
                             (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0,4,0,
                              local_360);
          if (-1 < iVar12) {
            *(undefined4 *)local_360[0] = 0xbf800000;
            *(undefined4 *)((longlong)local_360[0] + 4) = 0x3f800000;
            *(undefined4 *)(local_360[0] + 1) = 0xc2200000;
            *(undefined4 *)((longlong)local_360[0] + 0xc) = 0xc2280000;
            *(undefined4 *)(local_360[0] + 2) = 0x3f800000;
            *(undefined4 *)((longlong)local_360[0] + 0x14) = 0x3f800000;
            *(undefined4 *)(local_360[0] + 3) = 0x43480000;
            *(undefined4 *)((longlong)local_360[0] + 0x1c) = 0xc2280000;
            *(undefined4 *)(local_360[0] + 4) = 0xbf800000;
            *(undefined4 *)((longlong)local_360[0] + 0x24) = 0xbf800000;
            *(undefined4 *)(local_360[0] + 5) = 0xc2200000;
            *(undefined4 *)((longlong)local_360[0] + 0x2c) = 0x43720000;
            *(undefined4 *)(local_360[0] + 6) = 0x3f800000;
            *(undefined4 *)((longlong)local_360[0] + 0x34) = 0xbf800000;
            *(undefined4 *)(local_360[0] + 7) = 0x43480000;
            *(undefined4 *)((longlong)local_360[0] + 0x3c) = 0x43720000;
            (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x78))
                      (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0);
          }
          (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x68))(*(longlong **)(lVar23 + 0x6b8),4,0);
          ppuVar26 = *(undefined4 ***)(lVar20 + 0x1f18);
          plVar25 = *(longlong **)(lVar20 + 0x1f08);
        }
      }
      if (local_320 != '\0') {
        local_2f8 = (undefined4 **)0x0;
        local_2f0 = 0;
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 400))
                  (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar19 + 0xd80),&local_2f8);
      }
      if (*(int *)(lVar19 + 0x2c) != 7) {
        local_2b0 = (undefined4 **)local_350;
        uStack_2a8 = lVar20 + 0x6b0;
        uStack_288 = uStack_288 & 0xffffffff00000000;
        local_2a0 = lVar19;
        local_298 = plVar25;
        local_290 = ppuVar26;
        FUN_1800e47a8(lVar22,local_350,lVar19,&local_2b0);
        plVar25 = local_298;
        ppuVar26 = local_290;
      }
      if ((((local_350[0] == 0) && (local_31f == '\0')) &&
          (local_338 - local_340 == local_328 - local_330)) &&
         (local_334 - local_33c == local_324 - local_32c)) {
        local_2e8 = local_334;
        uStack_2e4 = 1;
        local_2f0 = (ulonglong)local_338 << 0x20;
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x170))
                  (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar19 + 0xd78),0,local_330,
                   local_32c,0,plVar25,0,&local_2f8);
      }
      else {
        FUN_1800e1940(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_180232c60,0,0xffffffff,0);
        FUN_1800e1fe8(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_180232e00,0);
        FUN_1800e22c0(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_180232dd8);
        local_368 = CONCAT44(local_368._4_4_,0x10);
        local_370 = (int *)((ulonglong)local_370 & 0xffffffff00000000);
        FUN_1800e29b0(lVar22,*(undefined4 *)(lVar19 + 0x10));
        FUN_1800e2a70(lVar22,*(undefined4 *)(lVar19 + 0x10),0,0);
        iVar12 = (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x70))
                           (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar20 + 0xea8),0,4,0,
                            &local_2f8);
        if (-1 < iVar12) {
          FUN_1800e4680(lVar22,lVar19);
          thunk_FUN_180001218(local_2f8,lVar20 + 0xeb0,0x1040);
          (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x78))
                    (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar20 + 0xea8),0);
        }
        FUN_1800e2ac8(lVar22,*(undefined4 *)(lVar19 + 0x10),5,*(undefined8 *)(lVar20 + 0xe80),
                      *(undefined8 *)(lVar20 + 0xe70),
                      *(undefined8 *)
                       (lVar20 + (ulonglong)(byte)(&DAT_180232e58)[local_350[0]] * 8 + 0xd18),0);
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x80))
                  (*(longlong **)(lVar20 + 0x6b8),2,1,lVar20 + 0xea8);
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x38))
                  (*(longlong **)(lVar20 + 0x6b8),2,1,lVar20 + 0xea8);
        local_310 = 0;
        local_300 = 0x3f80000000000000;
        local_308 = CONCAT44((float)uStack_14c,(float)local_150);
        FUN_1800e2798(lVar22,*(undefined4 *)(lVar19 + 0x10),&local_310);
        local_1f0 = *(undefined8 *)(lVar19 + 0xd80);
        local_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1e8 = 0;
        FUN_1800e2bd8(lVar22,*(undefined4 *)(lVar19 + 0x10),4,&local_1f0,0);
        local_2f0 = 0;
        local_2f8 = ppuVar26;
        FUN_1800e2930(lVar22,*(undefined4 *)(lVar19 + 0x10),0,2,&local_2f8);
        if ((&DAT_180232e98)[local_350[0]] == '\0') {
          uVar18 = 0;
          uVar24 = 0;
        }
        else {
          FUN_1800e28b0(lVar22,*(undefined4 *)(lVar19 + 0x10),1,1,lVar20 + 0xe90);
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_2f8);
          uVar18 = (undefined4)local_2f8;
          uVar24 = local_2f8._4_4_;
        }
        uVar13 = 0;
        if (*(uint *)(lVar20 + 0xea0) + 4 < 0x401) {
          uVar13 = *(uint *)(lVar20 + 0xea0);
        }
        *(uint *)(lVar20 + 0xea0) = uVar13 + 4;
        uVar17 = 4;
        if (uVar13 != 0) {
          uVar17 = 5;
        }
        uVar15 = (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x70))
                           (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar20 + 0xe98),0,uVar17,
                            0,local_2c0);
        if (-1 < (int)uVar15) {
          FUN_1800e49d8(uVar15,lVar19,local_350,local_2c0[0] + (ulonglong)uVar13 * 2,uVar18,uVar24);
          (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x78))
                    (*(longlong **)(lVar20 + 0x6b8),*(undefined8 *)(lVar20 + 0xe98),0);
        }
        (**(code **)(**(longlong **)(lVar20 + 0x6b8) + 0x68))
                  (*(longlong **)(lVar20 + 0x6b8),4,uVar13);
      }
      local_2f8 = (undefined4 **)0x0;
      local_2f0 = 0;
      FUN_1800e2930(lVar22,*(undefined4 *)(lVar19 + 0x10),0,2,&local_2f8);
      fVar28 = (float)(uint)((local_328 - local_330) * *(int *)(lVar19 + 0x20)) /
               (float)(int)(local_338 - local_340);
      local_2b0 = *(undefined4 ***)(lVar19 + 0xd78);
      uStack_2a8 = *(longlong *)(lVar19 + 0xd80);
      local_2a0 = CONCAT44(uStack_344,local_348);
      fVar29 = (float)(uint)((local_324 - local_32c) * *(int *)(lVar19 + 0x24)) /
               (float)(local_334 - local_33c);
      local_298 = (longlong *)CONCAT44(uStack_14c,local_150);
      local_290 = (undefined4 **)&local_330;
      uStack_288 = CONCAT44(fVar29,fVar28);
      local_280 = CONCAT44((float)local_32c - (float)local_33c * fVar29,
                           (float)local_330 - (float)local_340 * fVar28);
    }
    (*(code *)*local_1d0)(&local_1d0,&local_2b0);
  }
  if ((*(char *)(lVar19 + 0xd6a) != '\0') &&
     (plVar25 = *(longlong **)(lVar19 + 0xdb8), plVar25 != (longlong *)0x0)) {
    lVar23 = lVar22 + (ulonglong)*(uint *)(lVar19 + 0x10) * 0x18c0;
    uVar15 = (**(code **)(*plVar25 + 0x50))(plVar25,&local_a0);
    FUN_1800e4c18(uVar15,lVar19,&puStack_204,local_a0,uStack_9c,&local_2b0,&local_2f8);
    local_300 = 0x3f80000000000000;
    local_310 = (longlong)local_2f8;
    local_308 = local_2f0;
    FUN_1800e2798(lVar22,*(undefined4 *)(lVar19 + 0x10),&local_310);
    FUN_1800e1fe8(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_180232e00,0);
    FUN_1800e22c0(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_180232dd8);
    FUN_1800e2ac8(lVar22,*(undefined4 *)(lVar19 + 0x10),5,*(undefined8 *)(lVar23 + 0xe88),
                  *(undefined8 *)(lVar23 + 0xe78),*(undefined8 *)(lVar23 + 0xe58),0);
    local_1f0 = *(undefined8 *)(lVar19 + 0xd80);
    local_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1e8 = 0;
    FUN_1800e2bd8(lVar22,*(undefined4 *)(lVar19 + 0x10),4,&local_1f0,0);
    local_368 = CONCAT44(local_368._4_4_,0x10);
    local_370 = (int *)((ulonglong)local_370 & 0xffffffff00000000);
    FUN_1800e29b0(lVar22,*(undefined4 *)(lVar19 + 0x10));
    FUN_1800e2a70(lVar22,*(undefined4 *)(lVar19 + 0x10),0,0);
    uVar13 = 0;
    if (*(uint *)(lVar23 + 0xea0) + 4 < 0x401) {
      uVar13 = *(uint *)(lVar23 + 0xea0);
    }
    *(uint *)(lVar23 + 0xea0) = uVar13 + 4;
    uVar18 = 4;
    if (uVar13 != 0) {
      uVar18 = 5;
    }
    iVar12 = (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x70))
                       (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0,uVar18,0,
                        local_2c0);
    if (-1 < iVar12) {
      plVar25 = local_2c0[0] + (ulonglong)uVar13 * 2;
      plVar25[1] = uStack_2a8;
      *plVar25 = (longlong)local_2b0;
      plVar25[3] = (longlong)local_298;
      plVar25[2] = local_2a0;
      plVar25[5] = uStack_288;
      plVar25[4] = (longlong)local_290;
      plVar25[7] = lStack_278;
      plVar25[6] = local_280;
      (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x78))
                (*(longlong **)(lVar23 + 0x6b8),*(undefined8 *)(lVar23 + 0xe98),0);
    }
    FUN_1800e2848(lVar22,*(undefined4 *)(lVar19 + 0x10));
    if (*(longlong *)(lVar19 + 0xdd0) == 0) {
      puVar16 = &DAT_18023b540;
    }
    else {
      local_2f0 = 0;
      local_2f8 = (undefined4 **)*(longlong *)(lVar19 + 0xdd0);
      FUN_1800e2930(lVar22,*(undefined4 *)(lVar19 + 0x10),0,2,&local_2f8);
      FUN_1800e1940(lVar22,*(undefined4 *)(lVar19 + 0x10),&DAT_18023b650,0,0xffffffff,0);
      (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x68))(*(longlong **)(lVar23 + 0x6b8),4,uVar13)
      ;
      puVar16 = &DAT_18023b430;
    }
    FUN_1800e1940(lVar22,*(undefined4 *)(lVar19 + 0x10),puVar16,0,0xffffffff,0);
    local_380 = *(undefined4 **)(lVar19 + 0xdc0);
    uStack_378 = 0;
    FUN_1800e2930(lVar22,*(undefined4 *)(lVar19 + 0x10),0,2,&local_380);
    (**(code **)(**(longlong **)(lVar23 + 0x6b8) + 0x68))(*(longlong **)(lVar23 + 0x6b8),4,uVar13);
    local_380 = (undefined4 *)0x0;
    uStack_378 = 0;
    FUN_1800e2930(lVar22,*(undefined4 *)(lVar19 + 0x10),0,2,&local_380);
  }
  if (((local_318 == 0) && (*(char *)(lVar19 + 0xd6c) != '\0')) &&
     ((*(int *)(lVar19 + 0x3c) != 2 || (*(char *)(lVar19 + 0xd6d) == '\0')))) {
    uVar15 = 0x200;
  }
  else {
    uVar15 = 0;
  }
  uVar13 = (**(code **)(**(longlong **)(lVar19 + 8) + 0x40))
                     (*(longlong **)(lVar19 + 8),local_318,uVar15);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0x1cf10) + 0x620);
  if (-((int)~uVar13 >> 0x1f) != 0) {
    FUN_1800e6b68(*(undefined8 *)(param_1 + 0x1cf10),*plVar1);
  }
  return -((int)~uVar13 >> 0x1f);
}

