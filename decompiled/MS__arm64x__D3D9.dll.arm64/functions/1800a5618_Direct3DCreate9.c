/*
 * Direct3DCreate9 at 1800a5618
 * undefined Direct3DCreate9(void)
 * Address ranges: 1800a5618-1800a6b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Direct3DCreate9(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong extraout_x10;
  longlong extraout_x13;
  undefined8 uVar29;
  undefined4 extraout_s0;
  float extraout_s0_00;
  double extraout_d0;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  longlong extraout_d17;
  float extraout_s21;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  longlong local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [320];
  longlong local_68;
  
  local_258 = 0;
  local_250 = 0;
  if ((DAT_1802587a8 != (code *)0x0) ||
     (DAT_1802587a8 = (code *)FUN_1800a3360(s_Direct3DCreate9_180235e98),
     DAT_1802587a8 != (code *)0x0)) {
    uVar19 = (*DAT_1802587a8)(param_1);
    return uVar19;
  }
  if (1 < (param_1 & 0x7fffffff) - 0x1f) {
    return local_250;
  }
  if (DAT_18024de40 == '\0') {
    thunk_FUN_180102fc0(DAT_180253840);
    DAT_180253840 = 0;
    _DAT_180253848 = 0;
    thunk_FUN_180102fc0(0);
    DAT_18024de40 = '\x01';
  }
  if (DAT_18024de58 == (longlong *)0x0) {
    plVar17 = (longlong *)FUN_1800ff988();
    if (plVar17 == (longlong *)0x0) {
      DAT_18024de60 = plVar17;
      return local_250;
    }
    uVar13 = *(uint *)(plVar17 + 0x100);
    bVar6 = false;
    DAT_18024de60 = plVar17;
    if ((uVar13 < 7) && ((0x69U >> (ulonglong)(uVar13 & 0x1f) & 1) != 0)) {
      *(undefined1 *)((longlong)plVar17 + 0x826) = 1;
    }
    uVar19 = DAT_18024e2d0;
    if (uVar13 - 5 < 2) {
      bVar5 = false;
      if ((uVar13 != 6) && (uVar13 != 5)) goto LAB_1800a570c;
LAB_1800a5710:
      uVar13 = *(uint *)((longlong)plVar17 + 0x8d2);
      if (uVar13 < 2) {
LAB_1800a5754:
        uVar29 = 0;
      }
      else if (uVar13 == 2) {
        uVar29 = 1;
      }
      else if (uVar13 == 3) {
        uVar29 = 2;
      }
      else {
        if (uVar13 != 4) goto LAB_1800a5754;
        uVar29 = 3;
      }
      lVar18 = FUN_180102f80(0x490);
      if (lVar18 != 0) {
        DAT_18024de58 = (longlong *)FUN_1800df370(lVar18,uVar19,uVar29);
        *DAT_18024de58 = (longlong)&PTR_FUN_18023b1b8;
        DAT_18024de58[0x90] = 0;
        *(undefined4 *)(DAT_18024de58 + 0x91) = 0xc000;
        *(undefined1 *)(DAT_18024de58 + 0x8f) = 0;
        lVar18 = *DAT_18024de58;
        uVar19 = (**(code **)(*DAT_18024de60 + 0x60))(DAT_18024de60,&DAT_180229478);
        cVar7 = (**(code **)(lVar18 + 8))(DAT_18024de58,DAT_18024de60 + 0x100,uVar19);
        if (cVar7 == '\0') {
          if (DAT_18024de58 != (longlong *)0x0) {
            (**(code **)*DAT_18024de58)(DAT_18024de58,1);
          }
          DAT_18024de58 = (longlong *)0x0;
        }
        else {
          bVar6 = true;
        }
        goto LAB_1800a57ec;
      }
      DAT_18024de58 = (longlong *)0x0;
LAB_1800a57fc:
      uVar19 = DAT_18024e2d0;
      if (bVar5) {
        FUN_1800de630(&local_280,DAT_18024de60 + 0x100);
        uVar13 = *(uint *)(extraout_x13 + 0x8d2);
        if (uVar13 < 2) {
LAB_1800a5854:
          uVar29 = 0;
        }
        else if (uVar13 == 2) {
          uVar29 = 1;
        }
        else if (uVar13 == 3) {
          uVar29 = 2;
        }
        else {
          if (uVar13 != 4) goto LAB_1800a5854;
          uVar29 = 3;
        }
        lVar18 = FUN_180102f80(0x4a0);
        if (lVar18 == 0) {
          DAT_18024de58 = (longlong *)0x0;
        }
        else {
          lVar27 = uStack_278;
          plVar20 = (longlong *)FUN_1800df370(lVar18,uVar19,uVar29);
          *plVar20 = (longlong)&PTR_FUN_18023b108;
          plVar20[0x90] = 0;
          plVar20[0x92] = lVar27;
          plVar20[0x91] = extraout_d17;
          plVar20[0x93] = extraout_x10;
          *(undefined8 *)((longlong)plVar20 + 0x43c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x434) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x44c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x444) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x45c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x454) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x46c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar20 + 0x464) = 0xffffffffffffffff;
          plVar17 = DAT_18024de60;
          DAT_18024de58 = plVar20;
          *(bool *)(plVar20 + 0x8f) = (int)plVar20[0x91] == 5;
          cVar7 = (**(code **)(*plVar20 + 8))(plVar20,plVar17 + 0x100,0);
          if (cVar7 != '\0') goto LAB_1800a58d8;
        }
      }
    }
    else {
      bVar5 = true;
LAB_1800a570c:
      if (uVar13 == 0) goto LAB_1800a5710;
LAB_1800a57ec:
      if (DAT_18024de58 == (longlong *)0x0) goto LAB_1800a57fc;
    }
    if (!bVar6) {
      if (DAT_18024de58 != (longlong *)0x0) {
        (**(code **)*DAT_18024de58)(DAT_18024de58,1);
      }
      DAT_18024de58 = (longlong *)0x0;
      FUN_180100178(DAT_18024de60);
      return local_250;
    }
  }
LAB_1800a58d8:
  lVar18 = FUN_1800ff988();
  if (lVar18 != 0) {
    _DAT_18024bb08 = *(undefined8 *)(lVar18 + 0xd8);
    DAT_18024bb00 = *(undefined8 *)(lVar18 + 0xd0);
    _DAT_18024bb18 = *(undefined8 *)(lVar18 + 0xe8);
    PTR_DAT_18024bb10 = *(undefined **)(lVar18 + 0xe0);
    DAT_18024bb20 = *(undefined8 *)(lVar18 + 0xf0);
    FUN_180100178();
  }
  lVar18 = FUN_1800ff988();
  if (lVar18 != 0) {
    uVar13 = *(uint *)(lVar18 + 0x80);
    if (uVar13 != 0) {
      uVar24 = 0;
      do {
        if (*(undefined ***)(*(longlong *)(lVar18 + 0x78) + uVar24 * 8) == &PTR_PTR_18024c5a0) {
          if ((int)uVar24 != -1) goto LAB_1800a59ec;
          break;
        }
        uVar15 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar15;
      } while (uVar15 < uVar13);
    }
    uVar15 = *(uint *)(lVar18 + 0x84);
    plVar17 = (longlong *)(lVar18 + 0x78);
    if (uVar13 == uVar15) {
      uVar13 = uVar15 << 1;
      if (uVar15 == 0) {
        uVar13 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar13);
      lVar27 = CONCAT44(0,uVar13) << 3;
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        lVar27 = -1;
      }
      lVar27 = thunk_FUN_180102f80(lVar27);
      if (lVar27 != 0) {
        thunk_FUN_180001218(lVar27,*plVar17,(ulonglong)*(uint *)(lVar18 + 0x84) << 3);
        thunk_FUN_180102fc0(*plVar17);
        *plVar17 = lVar27;
        *(uint *)(lVar18 + 0x84) = uVar13;
        goto LAB_1800a59d4;
      }
    }
    else {
LAB_1800a59d4:
      *(undefined ***)(*plVar17 + (ulonglong)*(uint *)(lVar18 + 0x80) * 8) = &PTR_PTR_18024c5a0;
      *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + 1;
    }
LAB_1800a59ec:
    FUN_180100178(lVar18);
  }
  DAT_180248e60 = &DAT_180249b48;
  DAT_180248e68 = &DAT_180249bb0;
  DAT_180248e70 = &DAT_180249b90;
  DAT_180248e78 = &DAT_180249a00;
  DAT_180248e80 = &DAT_180249964;
  DAT_180248e88 = &DAT_180249940;
  DAT_180249010 = &DAT_180249b58;
  DAT_180249018 = &DAT_180249ae0;
  DAT_180249020 = &DAT_180249a38;
  DAT_180249028 = &DAT_180249a10;
  DAT_180249030 = &DAT_180249968;
  DAT_180249038 = &DAT_180249920;
  DAT_1802491c0 = &DAT_180249b28;
  DAT_1802491c8 = &DAT_180249b98;
  DAT_1802491d0 = &DAT_180249b80;
  DAT_1802491d8 = &DAT_1802499d8;
  DAT_1802491e0 = &DAT_180249958;
  DAT_1802491e8 = &DAT_180249930;
  DAT_180249370 = &DAT_180249b38;
  DAT_180249378 = &DAT_180249a90;
  DAT_180249380 = &DAT_180249b88;
  DAT_180249388 = &DAT_1802499e8;
  DAT_180249390 = &DAT_180249960;
  DAT_180249398 = &DAT_180249910;
  DAT_180249520 = &DAT_180249b08;
  DAT_180249528 = &DAT_180249a50;
  DAT_180249530 = &DAT_180249a44;
  DAT_180249538 = &DAT_1802499a0;
  DAT_180249540 = &DAT_180249948;
  DAT_180249548 = &DAT_180249918;
  DAT_1802496d0 = &DAT_180249b18;
  DAT_1802496d8 = &DAT_180249aa8;
  DAT_1802496e0 = &DAT_180249b70;
  DAT_1802496e8 = &DAT_1802499b8;
  DAT_1802496f0 = &DAT_180249950;
  DAT_1802496f8 = &DAT_180249900;
  DAT_180249880 = &DAT_180249ac8;
  DAT_180249888 = &DAT_180249a68;
  DAT_180249890 = &DAT_180249b78;
  DAT_180249898 = &DAT_180249978;
  DAT_1802498a0 = &DAT_180249938;
  DAT_1802498a8 = &DAT_180249908;
  DAT_180248cb0 = &DAT_180249b58;
  DAT_180248cb8 = &DAT_180249ae0;
  DAT_180248cc0 = &DAT_180249a38;
  DAT_180248cc8 = &DAT_180249a10;
  DAT_180248cd0 = &DAT_180249968;
  DAT_180248cd8 = &DAT_180249920;
  lVar18 = FUN_1800a2f40(param_1,0);
  plVar17 = DAT_18024de58;
  if (lVar18 == 0) goto LAB_1800a6b1c;
  if (*(char *)(lVar18 + 0x45) != '\0') {
    *(int *)(lVar18 + 0x10) = (int)DAT_18024de60[0x10b];
    cVar7 = (**(code **)(*plVar17 + 0x10))();
    if (cVar7 != '\0') {
      lVar27 = 0;
      local_290 = lVar18;
      do {
        if ((&DAT_1802539b8)[lVar27 * 0x4b] == 0) {
LAB_1800a5bdc:
          bVar6 = false;
        }
        else {
          local_1f8 = 0x28;
          uStack_1ec = 0;
          local_1f4 = 0;
          uStack_1dc = 0;
          uStack_1e4 = 0;
          local_1d4 = 0;
          iVar9 = (*__imp_USER32_dll_GetMonitorInfoW)((&DAT_1802539b8)[lVar27 * 0x4b],&local_1f8);
          if (iVar9 == 0) goto LAB_1800a5bdc;
          bVar6 = true;
        }
        (&DAT_180253a5c)[lVar27 * 600] = bVar6;
        if ((&DAT_180253850)[lVar27 * 0x4b] == 0 && !bVar6) {
          func_0x000180222c50(&DAT_180253850 + lVar27 * 0x4b,0,600);
        }
        lVar18 = local_290;
        lVar27 = lVar27 + 1;
      } while (lVar27 != 0x20);
      uVar15 = 0;
      uVar13 = 0;
      uVar10 = (**(code **)(*DAT_18024de58 + 0x68))();
      uVar16 = 0;
      if (uVar10 != 0) {
        do {
          local_290 = lVar18;
          local_2a0 = uVar10;
          uVar11 = (**(code **)(*DAT_18024de58 + 0x80))(DAT_18024de58,uVar16);
          uVar10 = 0;
          if (uVar11 != 0) {
            do {
              local_298 = uVar11;
              local_29c = uVar16;
              uVar16 = local_29c;
              if (((0x1f < uVar15) ||
                  ((1 << (ulonglong)(uVar15 & 0x1f) & *(uint *)((longlong)DAT_18024de60 + 0x9ef)) !=
                   0)) && (((int)DAT_18024de60[0x101] == 0 ||
                           ((int)DAT_18024de60[0x101] - 1U == uVar10)))) {
                iVar9 = (**(code **)(*DAT_18024de58 + 0x70))(DAT_18024de58,local_29c);
                (**(code **)(*DAT_18024de58 + 0x88))(DAT_18024de58,auStack_1a8,uVar16,uVar10);
                local_260 = CONCAT44(local_260._4_4_,uVar15);
                uVar24 = 0;
                do {
                  uVar16 = (uint)uVar24;
                  if (((iVar9 == (&DAT_18025386c)[uVar24 * 0x96]) &&
                      (uVar10 == (&DAT_180253870)[uVar24 * 0x96])) &&
                     ((&DAT_1802539b8)[uVar24 * 0x4b] != 0)) {
                    local_1d0 = 0x28;
                    uStack_1c4 = 0;
                    local_1cc = 0;
                    uStack_1b4 = 0;
                    uStack_1bc = 0;
                    local_1ac = 0;
                    iVar12 = (*__imp_USER32_dll_GetMonitorInfoW)
                                       ((&DAT_1802539b8)[uVar24 * 0x4b],&local_1d0);
                    if (iVar12 != 0) break;
                  }
                  uVar16 = uVar16 + 1;
                  uVar24 = (ulonglong)uVar16;
                } while (uVar16 < 0x20);
                uVar15 = (uint)local_260;
                if ((uVar16 == 0x20) && (local_68 != 0)) {
                  local_220 = 0x28;
                  iVar12 = (*__imp_USER32_dll_GetMonitorInfoW)(local_68,&local_220);
                  if (uVar13 < 0x20 && iVar12 != 0) {
                    do {
                      uVar24 = (ulonglong)uVar13;
                      uVar23 = uVar24 * 600;
                      if ((&DAT_1802539b8)[uVar24 * 0x4b] == 0) {
                        local_280 = &DAT_180253850 + uVar24 * 0x4b;
                        local_260 = uVar23;
                        (**(code **)(*DAT_18024de58 + 0x18))(DAT_18024de58,&local_240,iVar9,uVar10);
                        uVar26 = local_260;
                        *(undefined4 *)(local_280 + 1) = 0;
                        *(int *)((longlong)local_280 + 0x1c) = iVar9;
                        *(uint *)(local_280 + 4) = uVar10;
                        *(undefined8 *)((longlong)&DAT_180253850 + local_260) = 0;
                        thunk_FUN_180001218(local_260 + 0x180253878,auStack_1a8,0x150);
                        plVar17 = DAT_18024de58;
                        (&DAT_180253a34)[uVar24 * 0x96] = 0;
                        *(undefined8 *)(&DAT_180253a38 + uVar23) = 0;
                        (&DAT_180253a5e)[uVar23] = 0;
                        *(undefined8 *)((longlong)&DAT_1802539d0 + uVar26) = uStack_238;
                        *(undefined8 *)((longlong)&DAT_1802539c8 + uVar26) = local_240;
                        *(undefined8 *)((longlong)&DAT_1802539d8 + uVar26) = local_230;
                        (&DAT_180253a5c)[uVar23] = 1;
                        *(undefined8 *)(uVar23 + 0x180253a2c) = uStack_214;
                        *(undefined8 *)(&DAT_180253a24 + uVar23) = local_21c;
                        (&DAT_180253a5d)[uVar23] = (byte)local_1fc & 1;
                        uVar8 = (**(code **)(*plVar17 + 0x78))(plVar17,local_29c);
                        uVar13 = uVar13 + 1;
                        (&DAT_180253a5f)[uVar23] = uVar8;
                        break;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < 0x20);
                  }
                }
              }
              uVar10 = uVar10 + 1;
              uVar15 = uVar15 + 1;
              uVar16 = local_29c;
              uVar11 = local_298;
            } while (uVar10 < local_298);
          }
          uVar16 = uVar16 + 1;
          lVar18 = local_290;
          uVar10 = local_2a0;
        } while (uVar16 < local_2a0);
      }
    }
    uVar24 = FUN_1800015a0(&DAT_18024de38);
    if ((int)uVar24 == 1) {
      DAT_18024de30 = (*__imp_KERNEL32_dll_AddVectoredExceptionHandler)(uVar24,FUN_1800203f0);
      uVar24 = (*__imp_KERNEL32_dll_AddVectoredContinueHandler)(1,FUN_1800203f0);
      DAT_18024de48 = uVar24;
    }
    uVar13 = 0;
    local_260 = local_260 & 0xffffffff00000000;
    uVar23 = 0;
    local_290 = lVar18;
    do {
      lVar18 = uVar23 * 600;
      if ((&DAT_180253a5c)[lVar18] != '\0') {
        FUN_1800015a0(&DAT_180253858 + uVar23 * 0x96);
        plVar17 = DAT_18024de60;
        if ((&DAT_180253850)[uVar23 * 0x4b] == 0) {
          if (*(uint *)(local_290 + 0x10) < 7) {
            uVar24 = 0;
            do {
              lVar27 = uVar24 * 600;
              if (((&DAT_18025386c)[uVar24 * 0x96] == (&DAT_18025386c)[uVar23 * 0x96]) &&
                 (lVar28 = (&DAT_180253850)[uVar24 * 0x4b], lVar28 != 0)) goto LAB_1800a5f40;
              uVar15 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar15;
            } while (uVar15 < 0x20);
            lVar28 = 0;
LAB_1800a5f40:
            (&DAT_180253a68)[uVar23 * 0x4b] = *(undefined8 *)((longlong)DAT_18024de60 + 0x85c);
            if (*(longlong **)(local_290 + 8) != (longlong *)0x0) {
              **(longlong **)(local_290 + 8) = (longlong)(plVar17 + 0x1a);
            }
            if (lVar28 == 0) {
              iVar9 = (**(code **)(*DAT_18024de58 + 0x48))();
              local_29c = (&DAT_18025386c)[uVar23 * 0x96];
              if (iVar9 == 2) {
                lVar27 = FUN_180102f80(0x1d198);
                plVar17 = (longlong *)(lVar27 + 0x17U & 0xfffffffffffffff0);
                plVar17[-1] = lVar27;
                FUN_18009fdc0(plVar17,local_29c);
                *plVar17 = (longlong)&PTR_FUN_1802352b8;
                plVar17[3] = (longlong)&PTR_FUN_180234b30;
                plVar17[0x39e2] = 0;
                plVar17[0x39e3] = 0;
                plVar17[0x39e4] = 0;
                plVar17[0x39f9] = 0;
                plVar17[0x39fa] = 0;
                plVar17[0x3a25] = 0;
                plVar17[0x3a26] = 0;
                plVar17[0x3a27] = 0;
                plVar17[0x3a28] = 0;
                *(undefined4 *)(plVar17 + 0x3a29) = 0;
                plVar17[0x3a2a] = 0;
                plVar17[0x3a2b] = 0xffffffff;
                plVar17[0x3a2c] = 0;
                *(undefined4 *)(plVar17 + 0x3a2d) = 0;
                *(undefined4 *)((longlong)plVar17 + 0x1d16c) = 0;
                plVar17[0x3a2e] = 0;
                plVar17[0x39e6] = 0;
                plVar17[0x39e5] = 0;
                plVar17[0x39e8] = 0;
                plVar17[0x39e7] = 0;
                plVar17[0x39ea] = 0;
                plVar17[0x39e9] = 0;
                plVar17[0x39ec] = 0;
                plVar17[0x39eb] = 0;
                plVar17[0x39ee] = 0;
                plVar17[0x39ed] = 0;
                plVar17[0x39f0] = 0;
                plVar17[0x39ef] = 0;
                plVar17[0x39f2] = 0;
                plVar17[0x39f1] = 0;
                plVar17[0x39f4] = 0;
                plVar17[0x39f3] = 0;
                plVar17[0x39f6] = 0;
                plVar17[0x39f5] = 0;
                plVar17[0x39f8] = 0;
                plVar17[0x39f7] = 0;
                plVar17[0x39fc] = 0;
                plVar17[0x39fb] = 0;
                plVar17[0x39fe] = 0;
                plVar17[0x39fd] = 0;
                plVar17[0x3a00] = 0;
                plVar17[0x39ff] = 0;
                plVar17[0x3a02] = 0;
                plVar17[0x3a01] = 0;
                plVar17[0x3a04] = 0;
                plVar17[0x3a03] = 0;
                plVar17[0x3a06] = 0;
                plVar17[0x3a05] = 0;
                plVar17[0x3a08] = 0;
                plVar17[0x3a07] = 0;
                plVar17[0x3a0a] = 0;
                plVar17[0x3a09] = 0;
                plVar17[0x3a0c] = 0;
                plVar17[0x3a0b] = 0;
                plVar17[0x3a0e] = 0;
                plVar17[0x3a0d] = 0;
                plVar17[0x3a10] = 0;
                plVar17[0x3a0f] = 0;
                plVar17[0x3a12] = 0;
                plVar17[0x3a11] = 0;
                plVar17[0x3a14] = 0;
                plVar17[0x3a13] = 0;
                plVar17[0x3a16] = 0;
                plVar17[0x3a15] = 0;
                plVar17[0x3a18] = 0;
                plVar17[0x3a17] = 0;
                plVar17[0x3a1a] = 0;
                plVar17[0x3a19] = 0;
                plVar17[0x3a1c] = 0;
                plVar17[0x3a1b] = 0;
                plVar17[0x3a1e] = 0;
                plVar17[0x3a1d] = 0;
                plVar17[0x3a20] = 0;
                plVar17[0x3a1f] = 0;
                plVar17[0x3a22] = 0;
                plVar17[0x3a21] = 0;
                plVar17[0x3a23] = 0;
                plVar17[0x3a24] = 0;
              }
              else {
                lVar27 = FUN_180102f80(0x1d518);
                plVar17 = (longlong *)(lVar27 + 0x17U & 0xfffffffffffffff0);
                plVar17[-1] = lVar27;
                FUN_18009fdc0(plVar17,local_29c);
                *plVar17 = (longlong)&PTR_FUN_180234b38;
                plVar17[3] = (longlong)&PTR_FUN_180234b30;
                plVar17[0x39e2] = 0;
                plVar17[0x39e3] = 0;
                plVar17[0x3a0e] = 0;
                plVar17[0x3a0f] = 0;
                plVar17[0x3a10] = 0;
                plVar17[0x3a11] = 0;
                *(undefined4 *)(plVar17 + 0x3a12) = 0;
                lVar27 = thunk_FUN_180102f80(0xc0);
                plVar17[0x3a13] = lVar27;
                plVar17[0x3a14] = 8;
                plVar17[0x3a15] = 0;
                *(undefined1 *)(plVar17 + 0x3a16) = 0;
                plVar17[14999] = 0;
                plVar17[15000] = 0;
                lVar27 = thunk_FUN_180102f80(0x4800);
                plVar17[0x3a99] = lVar27;
                plVar17[0x3a9a] = 0x100;
                plVar17[0x3a9b] = 0;
                *(undefined4 *)(plVar17 + 0x3a9c) = 0;
                plVar17[0x3a9d] = 0;
                plVar17[0x3a9e] = 0;
                plVar17[0x3a9f] = 0;
                plVar17[0x39e5] = 0;
                plVar17[0x39e4] = 0;
                plVar17[0x39e7] = 0;
                plVar17[0x39e6] = 0;
                plVar17[0x39e9] = 0;
                plVar17[0x39e8] = 0;
                plVar17[0x39eb] = 0;
                plVar17[0x39ea] = 0;
                plVar17[0x39ed] = 0;
                plVar17[0x39ec] = 0;
                plVar17[0x39ef] = 0;
                plVar17[0x39ee] = 0;
                plVar17[0x39f1] = 0;
                plVar17[0x39f0] = 0;
                plVar17[0x39f3] = 0;
                plVar17[0x39f2] = 0;
                plVar17[0x39f5] = 0;
                plVar17[0x39f4] = 0;
                plVar17[0x39f7] = 0;
                plVar17[0x39f6] = 0;
                plVar17[0x39f9] = 0;
                plVar17[0x39f8] = 0;
                plVar17[0x39fb] = 0;
                plVar17[0x39fa] = 0;
                plVar17[0x39fd] = 0;
                plVar17[0x39fc] = 0;
                plVar17[0x39ff] = 0;
                plVar17[0x39fe] = 0;
                plVar17[0x3a01] = 0;
                plVar17[0x3a00] = 0;
                plVar17[0x3a03] = 0;
                plVar17[0x3a02] = 0;
                plVar17[0x3a05] = 0;
                plVar17[0x3a04] = 0;
                plVar17[0x3a07] = 0;
                plVar17[0x3a06] = 0;
                plVar17[0x3a09] = 0;
                plVar17[0x3a08] = 0;
                plVar17[0x3a0b] = 0;
                plVar17[0x3a0a] = 0;
                plVar17[0x3a0c] = 0;
                plVar17[0x3a0d] = 0;
                plVar17[0x3a18] = 0;
                plVar17[0x3a17] = 0;
                plVar17[0x3a1a] = 0;
                plVar17[0x3a19] = 0;
                plVar17[0x3a1c] = 0;
                plVar17[0x3a1b] = 0;
                plVar17[0x3a1e] = 0;
                plVar17[0x3a1d] = 0;
                plVar17[0x3a20] = 0;
                plVar17[0x3a1f] = 0;
                plVar17[0x3a22] = 0;
                plVar17[0x3a21] = 0;
                plVar17[0x3a24] = 0;
                plVar17[0x3a23] = 0;
                plVar17[0x3a26] = 0;
                plVar17[0x3a25] = 0;
                plVar17[0x3a28] = 0;
                plVar17[0x3a27] = 0;
                plVar17[0x3a2a] = 0;
                plVar17[0x3a29] = 0;
                plVar17[0x3a2c] = 0;
                plVar17[0x3a2b] = 0;
                plVar17[0x3a2e] = 0;
                plVar17[0x3a2d] = 0;
                plVar17[0x3a30] = 0;
                plVar17[0x3a2f] = 0;
                plVar17[0x3a32] = 0;
                plVar17[0x3a31] = 0;
                plVar17[0x3a34] = 0;
                plVar17[0x3a33] = 0;
                plVar17[0x3a36] = 0;
                plVar17[0x3a35] = 0;
                plVar17[0x3a38] = 0;
                plVar17[0x3a37] = 0;
                plVar17[0x3a3a] = 0;
                plVar17[0x3a39] = 0;
                plVar17[0x3a3c] = 0;
                plVar17[0x3a3b] = 0;
                plVar17[0x3a3e] = 0;
                plVar17[0x3a3d] = 0;
                plVar17[0x3a40] = 0;
                plVar17[0x3a3f] = 0;
                plVar17[0x3a42] = 0;
                plVar17[0x3a41] = 0;
                plVar17[0x3a44] = 0;
                plVar17[0x3a43] = 0;
                plVar17[0x3a46] = 0;
                plVar17[0x3a45] = 0;
                plVar17[0x3a48] = 0;
                plVar17[0x3a47] = 0;
                plVar17[0x3a4a] = 0;
                plVar17[0x3a49] = 0;
                plVar17[0x3a4c] = 0;
                plVar17[0x3a4b] = 0;
                plVar17[0x3a4e] = 0;
                plVar17[0x3a4d] = 0;
                plVar17[0x3a50] = 0;
                plVar17[0x3a4f] = 0;
                plVar17[0x3a52] = 0;
                plVar17[0x3a51] = 0;
                plVar17[0x3a54] = 0;
                plVar17[0x3a53] = 0;
                plVar17[0x3a56] = 0;
                plVar17[0x3a55] = 0;
                plVar17[0x3a58] = 0;
                plVar17[0x3a57] = 0;
                plVar17[0x3a5a] = 0;
                plVar17[0x3a59] = 0;
                plVar17[0x3a5c] = 0;
                plVar17[0x3a5b] = 0;
                plVar17[0x3a5e] = 0;
                plVar17[0x3a5d] = 0;
                plVar17[0x3a60] = 0;
                plVar17[0x3a5f] = 0;
                plVar17[0x3a62] = 0;
                plVar17[0x3a61] = 0;
                plVar17[0x3a64] = 0;
                plVar17[0x3a63] = 0;
                plVar17[0x3a66] = 0;
                plVar17[0x3a65] = 0;
                plVar17[0x3a68] = 0;
                plVar17[0x3a67] = 0;
                plVar17[0x3a6a] = 0;
                plVar17[0x3a69] = 0;
                plVar17[0x3a6c] = 0;
                plVar17[0x3a6b] = 0;
                plVar17[0x3a6e] = 0;
                plVar17[0x3a6d] = 0;
                plVar17[0x3a70] = 0;
                plVar17[0x3a6f] = 0;
                plVar17[0x3a72] = 0;
                plVar17[0x3a71] = 0;
                plVar17[0x3a74] = 0;
                plVar17[0x3a73] = 0;
                plVar17[0x3a76] = 0;
                plVar17[0x3a75] = 0;
                plVar17[0x3a78] = 0;
                plVar17[0x3a77] = 0;
                plVar17[0x3a7a] = 0;
                plVar17[0x3a79] = 0;
                plVar17[0x3a7c] = 0;
                plVar17[0x3a7b] = 0;
                plVar17[0x3a7e] = 0;
                plVar17[0x3a7d] = 0;
                plVar17[0x3a80] = 0;
                plVar17[0x3a7f] = 0;
                plVar17[0x3a82] = 0;
                plVar17[0x3a81] = 0;
                plVar17[0x3a84] = 0;
                plVar17[0x3a83] = 0;
                plVar17[0x3a86] = 0;
                plVar17[0x3a85] = 0;
                plVar17[0x3a88] = 0;
                plVar17[0x3a87] = 0;
                plVar17[0x3a8a] = 0;
                plVar17[0x3a89] = 0;
                plVar17[0x3a8c] = 0;
                plVar17[0x3a8b] = 0;
                plVar17[0x3a8e] = 0;
                plVar17[0x3a8d] = 0;
                plVar17[0x3a90] = 0;
                plVar17[0x3a8f] = 0;
                plVar17[0x3a92] = 0;
                plVar17[0x3a91] = 0;
                plVar17[0x3a94] = 0;
                plVar17[0x3a93] = 0;
                plVar17[0x3a96] = 0;
                plVar17[0x3a95] = 0;
                func_0x000180222c50(plVar17 + 0x2018,0,0xc180);
              }
              (&DAT_180253850)[uVar23 * 0x4b] = plVar17;
              if (plVar17 != (longlong *)0x0) {
                iVar9 = *(int *)((longlong)DAT_18024de60 + 0x9db);
                if (iVar9 == 0) {
                  iVar9 = *(int *)((longlong)DAT_18024de60 + 0x8d2);
                  if (iVar9 == 0) {
                    uVar19 = 0x2a;
                  }
                  else {
                    if (((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 4)) goto LAB_1800a6540;
LAB_1800a6574:
                    uVar19 = 6;
                  }
                }
                else if (iVar9 == 2) {
                  uVar19 = 0x15;
                }
                else {
                  if (iVar9 != 3) goto LAB_1800a6574;
LAB_1800a6540:
                  uVar19 = 0x16;
                }
                uVar24 = (**(code **)(*plVar17 + 0x10))
                                   (plVar17,DAT_18024de60 + 0x100,&PTR_PTR_180249bc0,uVar19);
                if ((uVar24 & 0xff) != 0) {
                  uVar24 = FUN_180020640(uVar24,uVar23,(&DAT_180253870)[uVar23 * 0x96]);
                  plVar17 = DAT_18024de58;
                  if ((uVar24 & 1) != 0) {
                    uVar15 = *(uint *)(&DAT_1802539e0 + uVar23 * 0x4b);
                    uVar16 = *(uint *)((longlong)&DAT_1802539e0 + lVar18 + 4);
                    if (0x500 < uVar15) {
                      uVar15 = 0x500;
                    }
                    uVar14 = (&DAT_18025386c)[uVar23 * 0x96];
                    if (0x400 < uVar16) {
                      uVar16 = 0x400;
                    }
                    uVar15 = (*(uint *)((longlong)&DAT_1802539f0 + lVar18 + 4) >> 3) * uVar16 *
                             uVar15;
                    lVar18 = 0;
                    if ((ulonglong)uVar15 < (ulonglong)(&DAT_180253a68)[uVar23 * 0x4b]) {
                      lVar18 = (&DAT_180253a68)[uVar23 * 0x4b] - (ulonglong)uVar15;
                    }
                    (&DAT_180253a70)[uVar23 * 0x4b] = lVar18;
                    uVar14 = (**(code **)(*plVar17 + 0x50))(plVar17,uVar14);
                    (&DAT_180253a34)[uVar23 * 0x96] = uVar14;
                    puVar21 = (undefined4 *)
                              (**(code **)(*DAT_18024de58 + 0x58))
                                        (DAT_18024de58,&local_2a0,(&DAT_18025386c)[uVar23 * 0x96]);
                    (&DAT_180253a58)[uVar23 * 0x96] = *puVar21;
                    if (*(int *)((longlong)DAT_18024de60 + 0x9d7) == 1) {
                      uVar14 = 0x18;
                    }
                    else {
                      uVar14 = 0;
                      if (*(int *)((longlong)DAT_18024de60 + 0x9d7) == 2) {
                        uVar14 = 0x20;
                      }
                    }
                    (**(code **)(*(longlong *)(&DAT_180253850)[uVar23 * 0x4b] + 0x118))
                              ((longlong *)(&DAT_180253850)[uVar23 * 0x4b],uVar14);
                    goto LAB_1800a5fcc;
                  }
                  (**(code **)(*(longlong *)(&DAT_180253850)[uVar23 * 0x4b] + 0x18))();
                }
                (**(code **)(*(longlong *)(&DAT_180253850)[uVar23 * 0x4b] + 8))();
              }
              (&DAT_180253850)[uVar23 * 0x4b] = 0;
            }
            else {
              uVar14 = (&DAT_180253870)[uVar23 * 0x96];
              bVar6 = false;
              (&DAT_180253850)[uVar23 * 0x4b] = lVar28;
              uVar24 = FUN_180020640(lVar27,uVar23,uVar14);
              if ((uVar24 & 1) != 0) {
                uVar15 = *(uint *)(&DAT_1802539e0 + uVar23 * 0x4b);
                uVar16 = *(uint *)((longlong)&DAT_1802539e0 + lVar18 + 4);
                bVar6 = true;
                if (0x500 < uVar15) {
                  uVar15 = 0x500;
                }
                if (0x400 < uVar16) {
                  uVar16 = 0x400;
                }
                uVar15 = (*(uint *)((longlong)&DAT_1802539f0 + lVar18 + 4) >> 3) * uVar16 * uVar15;
                lVar18 = 0;
                if ((ulonglong)uVar15 < (ulonglong)(&DAT_180253a68)[uVar23 * 0x4b]) {
                  lVar18 = (&DAT_180253a68)[uVar23 * 0x4b] - (ulonglong)uVar15;
                }
                (&DAT_180253a70)[uVar23 * 0x4b] = lVar18;
              }
              if (bVar6) goto LAB_1800a5fcc;
            }
          }
          uVar24 = FUN_180001590(&DAT_180253858 + uVar23 * 0x96);
        }
        else {
LAB_1800a5fcc:
          uVar24 = FUN_1800032e8(local_290 + 0x68,&local_260);
        }
      }
      lVar18 = local_290;
      uVar13 = uVar13 + 1;
      uVar23 = (ulonglong)uVar13;
      local_260 = CONCAT44(local_260._4_4_,uVar13);
    } while (uVar13 < 0x20);
    uVar13 = 0;
    if (*(uint *)(local_290 + 0x70) != 0) {
      uVar23 = 0;
      uVar13 = *(uint *)(local_290 + 0x70);
      do {
        local_280 = (undefined8 *)0x0;
        uStack_278 = 0;
        if (uVar13 != 0) {
          uVar25 = 0;
          uStack_278._0_4_ = 0;
          uStack_278._4_4_ = 0;
          uVar15 = 0x7fffffff;
          uVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar18 + 0x68) + uVar23 * 4);
          local_280._0_4_ = 0;
          local_280._4_4_ = 0;
          iVar9 = (int)uStack_278;
          uVar16 = uStack_278._4_4_;
          uVar10 = (uint)local_280;
          iVar12 = local_280._4_4_;
          do {
            uVar2 = (ulonglong)*(uint *)(*(longlong *)(lVar18 + 0x68) + uVar25 * 4);
            uVar11 = (uint)uVar25;
            if ((&DAT_18025386c)[uVar26 * 0x96] == (&DAT_18025386c)[uVar2 * 0x96]) {
              uVar1 = (&DAT_180253870)[uVar2 * 0x96];
              iVar9 = iVar9 + 1;
              uStack_278 = CONCAT44(uStack_278._4_4_,iVar9);
              if (uVar1 < uVar15) {
                uVar15 = uVar1;
                uVar10 = uVar11;
              }
              if (uVar1 < (uint)(&DAT_180253870)[uVar26 * 0x96]) {
                iVar12 = iVar12 + 1;
              }
              local_280 = (undefined8 *)CONCAT44(iVar12,uVar10);
              if ((uint)uVar23 != uVar11) {
                uVar16 = 1 << (ulonglong)(uVar11 & 0x1f) | uVar16;
                uStack_278 = CONCAT44(uVar16,iVar9);
              }
            }
            uVar25 = (ulonglong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar13);
        }
        iVar9 = *(int *)(lVar18 + 0x84);
        if (*(int *)(lVar18 + 0x80) == iVar9) {
          uVar13 = iVar9 << 1;
          if (iVar9 == 0) {
            uVar13 = 0x10;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar13);
          lVar27 = CONCAT44(0,uVar13) << 4;
          if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
            lVar27 = -1;
          }
          lVar27 = thunk_FUN_180102f80(lVar27);
          uVar24 = 0;
          if (lVar27 != 0) {
            thunk_FUN_180001218(lVar27,*(undefined8 *)(lVar18 + 0x78),
                                (ulonglong)*(uint *)(lVar18 + 0x84) << 4);
            uVar24 = thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x78));
            *(longlong *)(lVar18 + 0x78) = lVar27;
            *(uint *)(lVar18 + 0x84) = uVar13;
            goto LAB_1800a60f8;
          }
        }
        else {
LAB_1800a60f8:
          puVar22 = (undefined8 *)
                    (*(longlong *)(lVar18 + 0x78) + (ulonglong)*(uint *)(lVar18 + 0x80) * 0x10);
          puVar22[1] = uStack_278;
          *puVar22 = local_280;
          *(int *)(lVar18 + 0x80) = *(int *)(lVar18 + 0x80) + 1;
        }
        uVar13 = *(uint *)(lVar18 + 0x70);
        uVar15 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar15;
      } while (uVar15 < uVar13);
    }
    if (uVar13 != 0) {
      uVar23 = 0;
      if (uVar13 != 0) {
        while (uVar24 = FUN_18001f9e8(lVar18 + 8,
                                      *(undefined4 *)(*(longlong *)(lVar18 + 0x68) + uVar23 * 4)),
              (uVar24 & 1) != 0) {
          uVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar18 + 0x68) + uVar23 * 4);
          local_280 = (undefined8 *)(uVar26 * 600 + 0x1802539e4);
          thunk_FUN_180102fc0((&DAT_180253a98)[uVar26 * 0x4b]);
          plVar17 = DAT_18024de58;
          (&DAT_180253a98)[uVar26 * 0x4b] = 0;
          (&DAT_180253aa0)[uVar26 * 0x4b] = 0;
          uVar14 = (&DAT_18025386c)[uVar26 * 0x96];
          uVar13 = (**(code **)(*plVar17 + 0x90))(plVar17,uVar14);
          uVar24 = 0;
          if (uVar13 != 0) {
            uVar15 = 0;
            do {
              local_2a0 = (**(code **)(*DAT_18024de58 + 0x98))(DAT_18024de58,uVar14,uVar15);
              uVar24 = FUN_1800032e8(&DAT_180253a98 + uVar26 * 0x4b,&local_2a0);
              puVar22 = local_280;
              if ((uVar24 & 1) == 0) {
                uVar24 = thunk_FUN_180102fc0(*(undefined8 *)((longlong)local_280 + 0xb4));
                *(undefined8 *)((longlong)puVar22 + 0xb4) = 0;
                *(undefined8 *)((longlong)puVar22 + 0xbc) = 0;
                goto LAB_1800a66b0;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar13);
          }
          uVar13 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar13;
          if (*(uint *)(lVar18 + 0x70) <= uVar13) break;
        }
      }
LAB_1800a66b0:
      uVar13 = (uint)uVar23;
      if (uVar13 == *(uint *)(lVar18 + 0x70)) {
        lVar27 = thunk_FUN_180102f80(0x1004);
        *(longlong *)(lVar18 + 0x18) = lVar27;
        uVar24 = 0;
        if (lVar27 != 0) {
          lVar27 = thunk_FUN_180102f80(0x1004);
          *(longlong *)(lVar18 + 0x20) = lVar27;
          if (lVar27 != 0) {
            lVar27 = thunk_FUN_180102f80(0x1004);
            *(longlong *)(lVar18 + 0x28) = lVar27;
            if (lVar27 != 0) {
              lVar27 = thunk_FUN_180102f80(0x1004);
              *(longlong *)(lVar18 + 0x30) = lVar27;
              if (lVar27 != 0) {
                lVar27 = thunk_FUN_180102f80(0x1004);
                *(longlong *)(lVar18 + 0x38) = lVar27;
                if (lVar27 != 0) {
                  fVar32 = 1.0;
                  uVar13 = 0;
                  fVar33 = 0.0009765625;
                  fVar31 = 1.0;
                  do {
                    fVar30 = (float)uVar13 * fVar33;
                    FUN_180102620(0x4000000000000000,fVar30);
                    uVar24 = FUN_180102620((double)fVar30);
                    *(float *)(*(longlong *)(lVar18 + 0x18) + (uVar24 & 0xffffffff) * 4) =
                         (float)extraout_d0 / extraout_s21;
                    uVar13 = FUN_1801022b0(0x40000000);
                    *(undefined4 *)(*(longlong *)(lVar18 + 0x20) + (ulonglong)uVar13 * 4) =
                         extraout_s0;
                    *(float *)(*(longlong *)(lVar18 + 0x28) + (ulonglong)uVar13 * 4) = fVar31;
                    uVar13 = uVar13 + 1;
                    fVar31 = fVar31 + fVar31;
                  } while (uVar13 < 0x401);
                  uVar13 = 0;
                  fVar30 = 2.7182817;
                  fVar31 = fVar32;
                  do {
                    uVar13 = FUN_1801022b0(fVar30,(float)uVar13 * fVar33);
                    *(float *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar13 * 4) =
                         fVar31 / extraout_s0_00;
                    fVar34 = fVar31 / fVar32;
                    fVar32 = fVar32 * fVar30;
                    *(float *)(*(longlong *)(lVar18 + 0x38) + (ulonglong)uVar13 * 4) = fVar34;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < 0x401);
                  *(undefined1 *)(lVar18 + 0x44) = 1;
                  uVar24 = 0;
                  if (*(int *)(lVar18 + 0x70) != 0) {
                    do {
                      uVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar18 + 0x68) + uVar24 * 4);
                      thunk_FUN_180102fc0((&DAT_180253348)[uVar26 * 5]);
                      local_2a0 = 1;
                      (&DAT_180253348)[uVar26 * 5] = 0;
                      (&DAT_180253350)[uVar26 * 5] = 0;
                      FUN_1800032e8(&DAT_180253348 + uVar26 * 5,&local_2a0);
                      uVar23 = 0;
                      cVar7 = (&DAT_180248e90)[(ulonglong)*(uint *)(lVar18 + 0x10) * 0x1b0];
                      uVar13 = (uint)uVar24;
                      while (cVar7 != '\0') {
                        uVar24 = 0;
                        local_298 = uVar13;
                        if (*(int *)(&DAT_180253aa0 + uVar26 * 0x4b) != 0) {
                          do {
                            if (*(uint *)((&DAT_180253a98)[uVar26 * 0x4b] + uVar24 * 4) ==
                                (uint)(byte)(&DAT_180248e90)
                                            [(ulonglong)*(uint *)(lVar18 + 0x10) * 0x1b0 + uVar23])
                            {
                              local_2a0 = (uint)(byte)(&DAT_180248e90)
                                                      [(ulonglong)*(uint *)(lVar18 + 0x10) * 0x1b0 +
                                                       uVar23];
                              FUN_1800032e8(&DAT_180253348 + uVar26 * 5,&local_2a0);
                            }
                            uVar13 = (int)uVar24 + 1;
                            uVar24 = (ulonglong)uVar13;
                          } while (uVar13 < *(uint *)(&DAT_180253aa0 + uVar26 * 0x4b));
                        }
                        uVar23 = (ulonglong)((int)uVar23 + 1);
                        uVar13 = local_298;
                        cVar7 = (&DAT_180248e90)
                                [(ulonglong)*(uint *)(lVar18 + 0x10) * 0x1b0 + uVar23];
                      }
                      uVar24 = (ulonglong)(uVar13 + 1);
                    } while (uVar13 + 1 < *(uint *)(lVar18 + 0x70));
                    uVar24 = 0;
                    if (*(uint *)(lVar18 + 0x70) != 0) {
                      do {
                        uVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar18 + 0x68) + uVar24 * 4);
                        thunk_FUN_180102fc0((&DAT_180253358)[uVar26 * 5]);
                        (&DAT_180253358)[uVar26 * 5] = 0;
                        (&DAT_180253360)[uVar26 * 5] = 0;
                        local_2a0 = 1;
                        FUN_1800032e8(&DAT_180253358 + uVar26 * 5,&local_2a0);
                        uVar23 = 0;
                        uVar15 = (uint)uVar24;
                        uVar13 = local_298;
                        cVar7 = DAT_180248ce0;
                        while (local_298 = uVar15, cVar7 != '\0') {
                          uVar24 = 0;
                          if (*(int *)(&DAT_180253aa0 + uVar26 * 0x4b) != 0) {
                            do {
                              if (*(uint *)((&DAT_180253a98)[uVar26 * 0x4b] + uVar24 * 4) ==
                                  (uint)(byte)(&DAT_180248ce0)[uVar23]) {
                                local_2a0 = (uint)(byte)(&DAT_180248ce0)[uVar23];
                                FUN_1800032e8(&DAT_180253358 + uVar26 * 5,&local_2a0);
                              }
                              uVar13 = (int)uVar24 + 1;
                              uVar24 = (ulonglong)uVar13;
                            } while (uVar13 < *(uint *)(&DAT_180253aa0 + uVar26 * 0x4b));
                          }
                          uVar23 = (ulonglong)((int)uVar23 + 1);
                          uVar15 = local_298;
                          uVar13 = local_298;
                          cVar7 = (&DAT_180248ce0)[uVar23];
                        }
                        uVar15 = local_298 + 1;
                        uVar24 = (ulonglong)uVar15;
                        local_298 = uVar13;
                      } while (uVar15 < *(uint *)(lVar18 + 0x70));
                    }
                  }
                  plVar17 = DAT_18024de60;
                  uVar15 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229448);
                  for (uVar13 = 0; uVar13 < uVar15; uVar13 = uVar13 + 1) {
                    local_280 = (undefined8 *)
                                (**(code **)(*plVar17 + 0x58))(plVar17,&DAT_180229448,uVar13);
                    if ((local_280 == (undefined8 *)0x0) ||
                       (uVar24 = FUN_180006748(lVar18 + 0x90,&local_280), (uVar24 & 1) == 0))
                    goto LAB_1800a6a88;
                  }
                  uVar15 = 1;
                  for (uVar13 = 0; uVar13 < *(uint *)(lVar18 + 0x98); uVar13 = uVar13 + 1) {
                    puVar22 = *(undefined8 **)(*(longlong *)(lVar18 + 0x90) + (ulonglong)uVar13 * 8)
                    ;
                    uVar16 = (**(code **)*puVar22)(puVar22,lVar18 + 0x88);
                    uVar15 = uVar16 & 0xff & uVar15;
                    if (uVar15 == 0) goto joined_r0x0001800a6a58;
                  }
                  goto LAB_1800a6a88;
                }
                thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x30));
                *(undefined8 *)(lVar18 + 0x30) = 0;
              }
              thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x28));
              *(undefined8 *)(lVar18 + 0x28) = 0;
            }
            thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x20));
            *(undefined8 *)(lVar18 + 0x20) = 0;
          }
          uVar24 = thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x18));
          *(undefined8 *)(lVar18 + 0x18) = 0;
        }
      }
      while (uVar13 != 0) {
        uVar13 = (int)uVar23 - 1;
        uVar23 = (ulonglong)uVar13;
        uVar24 = FUN_18001f8b8(uVar24,*(undefined4 *)(*(longlong *)(lVar18 + 0x68) + uVar23 * 4));
      }
    }
    FUN_180020b38();
  }
LAB_1800a6b08:
  FUN_1800a34d0(lVar18);
  FUN_180102fc0(lVar18,0x100);
LAB_1800a6b1c:
  uVar24 = FUN_180001f50();
  if ((uVar24 & 1) != 0) {
    FUN_1800a8548();
  }
  return local_250;
joined_r0x0001800a6a58:
  while (uVar13 != 0) {
    uVar13 = uVar13 - 1;
    plVar17 = *(longlong **)(*(longlong *)(lVar18 + 0x90) + (ulonglong)uVar13 * 8);
    (**(code **)(*plVar17 + 8))(plVar17,lVar18 + 0x88);
  }
  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x90));
  *(undefined8 *)(lVar18 + 0x90) = 0;
  *(undefined8 *)(lVar18 + 0x98) = 0;
LAB_1800a6a88:
  iVar9 = FUN_1800a3db8(lVar18 + 0xa0,&DAT_180229488,&local_258);
  if (-1 < iVar9) {
    return local_258;
  }
  FUN_1800a3600(lVar18);
  local_250 = local_258;
  goto LAB_1800a6b08;
}

