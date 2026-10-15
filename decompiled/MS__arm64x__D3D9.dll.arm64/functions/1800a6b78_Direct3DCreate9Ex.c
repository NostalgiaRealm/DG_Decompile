/*
 * Direct3DCreate9Ex at 1800a6b78
 * undefined Direct3DCreate9Ex(void)
 * Address ranges: 1800a6b78-1800a80bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Direct3DCreate9Ex(undefined4 param_1,undefined8 *param_2)

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
  code *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong extraout_x10;
  longlong extraout_x13;
  undefined8 uVar30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  double extraout_d0;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  longlong extraout_d17;
  float extraout_s21;
  uint local_290;
  uint local_28c;
  uint local_288;
  longlong local_280;
  int local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  ulonglong local_250;
  undefined8 *local_248;
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
  
  pcVar17 = DAT_1802587a0;
  *param_2 = 0;
  local_248 = param_2;
  if ((pcVar17 != (code *)0x0) ||
     (pcVar17 = (code *)FUN_1800a3360(s_Direct3DCreate9Ex_180235e80), DAT_1802587a0 = pcVar17,
     pcVar17 != (code *)0x0)) {
    iVar9 = (*pcVar17)(param_1,local_248);
    return iVar9;
  }
  local_278 = -0x7fffbffb;
  if (DAT_18024de40 == '\0') {
    thunk_FUN_180102fc0(DAT_180253840);
    DAT_180253840 = 0;
    _DAT_180253848 = 0;
    thunk_FUN_180102fc0(0);
    DAT_18024de40 = '\x01';
  }
  if (DAT_18024de58 == (longlong *)0x0) {
    plVar18 = (longlong *)FUN_1800ff988();
    if (plVar18 == (longlong *)0x0) {
      DAT_18024de60 = plVar18;
      return local_278;
    }
    uVar13 = *(uint *)(plVar18 + 0x100);
    bVar6 = false;
    DAT_18024de60 = plVar18;
    if ((uVar13 < 7) && ((0x69U >> (ulonglong)(uVar13 & 0x1f) & 1) != 0)) {
      *(undefined1 *)((longlong)plVar18 + 0x826) = 1;
    }
    uVar20 = DAT_18024e2d0;
    if (uVar13 - 5 < 2) {
      bVar5 = false;
      if ((uVar13 != 6) && (uVar13 != 5)) goto LAB_1800a6c68;
LAB_1800a6c6c:
      uVar13 = *(uint *)((longlong)plVar18 + 0x8d2);
      if (uVar13 < 2) {
LAB_1800a6cb0:
        uVar30 = 0;
      }
      else if (uVar13 == 2) {
        uVar30 = 1;
      }
      else if (uVar13 == 3) {
        uVar30 = 2;
      }
      else {
        if (uVar13 != 4) goto LAB_1800a6cb0;
        uVar30 = 3;
      }
      lVar19 = FUN_180102f80(0x490);
      if (lVar19 != 0) {
        DAT_18024de58 = (longlong *)FUN_1800df370(lVar19,uVar20,uVar30);
        *DAT_18024de58 = (longlong)&PTR_FUN_18023b1b8;
        DAT_18024de58[0x90] = 0;
        *(undefined4 *)(DAT_18024de58 + 0x91) = 0xc000;
        *(undefined1 *)(DAT_18024de58 + 0x8f) = 0;
        lVar19 = *DAT_18024de58;
        uVar20 = (**(code **)(*DAT_18024de60 + 0x60))(DAT_18024de60,&DAT_180229478);
        cVar7 = (**(code **)(lVar19 + 8))(DAT_18024de58,DAT_18024de60 + 0x100,uVar20);
        if (cVar7 == '\0') {
          if (DAT_18024de58 != (longlong *)0x0) {
            (**(code **)*DAT_18024de58)(DAT_18024de58,1);
          }
          DAT_18024de58 = (longlong *)0x0;
        }
        else {
          bVar6 = true;
        }
        goto LAB_1800a6d48;
      }
      DAT_18024de58 = (longlong *)0x0;
LAB_1800a6d58:
      uVar20 = DAT_18024e2d0;
      if (bVar5) {
        FUN_1800de630(&local_270,DAT_18024de60 + 0x100);
        uVar13 = *(uint *)(extraout_x13 + 0x8d2);
        if (uVar13 < 2) {
LAB_1800a6db0:
          uVar30 = 0;
        }
        else if (uVar13 == 2) {
          uVar30 = 1;
        }
        else if (uVar13 == 3) {
          uVar30 = 2;
        }
        else {
          if (uVar13 != 4) goto LAB_1800a6db0;
          uVar30 = 3;
        }
        lVar19 = FUN_180102f80(0x4a0);
        if (lVar19 == 0) {
          DAT_18024de58 = (longlong *)0x0;
        }
        else {
          lVar28 = uStack_268;
          plVar21 = (longlong *)FUN_1800df370(lVar19,uVar20,uVar30);
          *plVar21 = (longlong)&PTR_FUN_18023b108;
          plVar21[0x90] = 0;
          plVar21[0x92] = lVar28;
          plVar21[0x91] = extraout_d17;
          plVar21[0x93] = extraout_x10;
          *(undefined8 *)((longlong)plVar21 + 0x43c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x434) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x44c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x444) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x45c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x454) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x46c) = 0xffffffffffffffff;
          *(undefined8 *)((longlong)plVar21 + 0x464) = 0xffffffffffffffff;
          plVar18 = DAT_18024de60;
          DAT_18024de58 = plVar21;
          *(bool *)(plVar21 + 0x8f) = (int)plVar21[0x91] == 5;
          cVar7 = (**(code **)(*plVar21 + 8))(plVar21,plVar18 + 0x100,0);
          if (cVar7 != '\0') goto LAB_1800a6e34;
        }
      }
    }
    else {
      bVar5 = true;
LAB_1800a6c68:
      if (uVar13 == 0) goto LAB_1800a6c6c;
LAB_1800a6d48:
      if (DAT_18024de58 == (longlong *)0x0) goto LAB_1800a6d58;
    }
    if (!bVar6) {
      if (DAT_18024de58 != (longlong *)0x0) {
        (**(code **)*DAT_18024de58)(DAT_18024de58,1);
      }
      DAT_18024de58 = (longlong *)0x0;
      FUN_180100178(DAT_18024de60);
      return local_278;
    }
  }
LAB_1800a6e34:
  lVar19 = FUN_1800ff988();
  if (lVar19 != 0) {
    _DAT_18024bb08 = *(undefined8 *)(lVar19 + 0xd8);
    DAT_18024bb00 = *(undefined8 *)(lVar19 + 0xd0);
    _DAT_18024bb18 = *(undefined8 *)(lVar19 + 0xe8);
    PTR_DAT_18024bb10 = *(undefined **)(lVar19 + 0xe0);
    DAT_18024bb20 = *(undefined8 *)(lVar19 + 0xf0);
    FUN_180100178();
  }
  lVar19 = FUN_1800ff988();
  if (lVar19 != 0) {
    uVar13 = *(uint *)(lVar19 + 0x80);
    if (uVar13 != 0) {
      uVar25 = 0;
      do {
        if (*(undefined ***)(*(longlong *)(lVar19 + 0x78) + uVar25 * 8) == &PTR_PTR_18024c5a0) {
          if ((int)uVar25 != -1) goto LAB_1800a6f48;
          break;
        }
        uVar15 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar15;
      } while (uVar15 < uVar13);
    }
    uVar15 = *(uint *)(lVar19 + 0x84);
    plVar18 = (longlong *)(lVar19 + 0x78);
    if (uVar13 == uVar15) {
      uVar13 = uVar15 << 1;
      if (uVar15 == 0) {
        uVar13 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar13);
      lVar28 = CONCAT44(0,uVar13) << 3;
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        lVar28 = -1;
      }
      lVar28 = thunk_FUN_180102f80(lVar28);
      if (lVar28 != 0) {
        thunk_FUN_180001218(lVar28,*plVar18,(ulonglong)*(uint *)(lVar19 + 0x84) << 3);
        thunk_FUN_180102fc0(*plVar18);
        *plVar18 = lVar28;
        *(uint *)(lVar19 + 0x84) = uVar13;
        goto LAB_1800a6f30;
      }
    }
    else {
LAB_1800a6f30:
      *(undefined ***)(*plVar18 + (ulonglong)*(uint *)(lVar19 + 0x80) * 8) = &PTR_PTR_18024c5a0;
      *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + 1;
    }
LAB_1800a6f48:
    FUN_180100178(lVar19);
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
  lVar19 = FUN_1800a2f40(param_1,1);
  plVar18 = DAT_18024de58;
  if (lVar19 == 0) goto LAB_1800a807c;
  if (*(char *)(lVar19 + 0x45) != '\0') {
    *(int *)(lVar19 + 0x10) = (int)DAT_18024de60[0x10b];
    cVar7 = (**(code **)(*plVar18 + 0x10))();
    if (cVar7 != '\0') {
      lVar28 = 0;
      local_280 = lVar19;
      do {
        if ((&DAT_1802539b8)[lVar28 * 0x4b] == 0) {
LAB_1800a7138:
          bVar6 = false;
        }
        else {
          local_1f8 = 0x28;
          uStack_1ec = 0;
          local_1f4 = 0;
          uStack_1dc = 0;
          uStack_1e4 = 0;
          local_1d4 = 0;
          iVar9 = (*__imp_USER32_dll_GetMonitorInfoW)((&DAT_1802539b8)[lVar28 * 0x4b],&local_1f8);
          if (iVar9 == 0) goto LAB_1800a7138;
          bVar6 = true;
        }
        (&DAT_180253a5c)[lVar28 * 600] = bVar6;
        if ((&DAT_180253850)[lVar28 * 0x4b] == 0 && !bVar6) {
          func_0x000180222c50(&DAT_180253850 + lVar28 * 0x4b,0,600);
        }
        lVar19 = local_280;
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x20);
      uVar15 = 0;
      uVar13 = 0;
      uVar10 = (**(code **)(*DAT_18024de58 + 0x68))();
      uVar16 = 0;
      if (uVar10 != 0) {
        do {
          local_280 = lVar19;
          local_290 = uVar10;
          uVar11 = (**(code **)(*DAT_18024de58 + 0x80))(DAT_18024de58,uVar16);
          uVar10 = 0;
          if (uVar11 != 0) {
            do {
              local_288 = uVar11;
              local_28c = uVar16;
              uVar16 = local_28c;
              if (((0x1f < uVar15) ||
                  ((1 << (ulonglong)(uVar15 & 0x1f) & *(uint *)((longlong)DAT_18024de60 + 0x9ef)) !=
                   0)) && (((int)DAT_18024de60[0x101] == 0 ||
                           ((int)DAT_18024de60[0x101] - 1U == uVar10)))) {
                iVar9 = (**(code **)(*DAT_18024de58 + 0x70))(DAT_18024de58,local_28c);
                (**(code **)(*DAT_18024de58 + 0x88))(DAT_18024de58,auStack_1a8,uVar16,uVar10);
                local_250 = CONCAT44(local_250._4_4_,uVar15);
                uVar25 = 0;
                do {
                  uVar16 = (uint)uVar25;
                  if (((iVar9 == (&DAT_18025386c)[uVar25 * 0x96]) &&
                      (uVar10 == (&DAT_180253870)[uVar25 * 0x96])) &&
                     ((&DAT_1802539b8)[uVar25 * 0x4b] != 0)) {
                    local_1d0 = 0x28;
                    uStack_1c4 = 0;
                    local_1cc = 0;
                    uStack_1b4 = 0;
                    uStack_1bc = 0;
                    local_1ac = 0;
                    iVar12 = (*__imp_USER32_dll_GetMonitorInfoW)
                                       ((&DAT_1802539b8)[uVar25 * 0x4b],&local_1d0);
                    if (iVar12 != 0) break;
                  }
                  uVar16 = uVar16 + 1;
                  uVar25 = (ulonglong)uVar16;
                } while (uVar16 < 0x20);
                uVar15 = (uint)local_250;
                if ((uVar16 == 0x20) && (local_68 != 0)) {
                  local_220 = 0x28;
                  iVar12 = (*__imp_USER32_dll_GetMonitorInfoW)(local_68,&local_220);
                  if (uVar13 < 0x20 && iVar12 != 0) {
                    do {
                      uVar25 = (ulonglong)uVar13;
                      uVar24 = uVar25 * 600;
                      if ((&DAT_1802539b8)[uVar25 * 0x4b] == 0) {
                        local_270 = &DAT_180253850 + uVar25 * 0x4b;
                        local_250 = uVar24;
                        (**(code **)(*DAT_18024de58 + 0x18))(DAT_18024de58,&local_240,iVar9,uVar10);
                        uVar27 = local_250;
                        *(undefined4 *)(local_270 + 1) = 0;
                        *(int *)((longlong)local_270 + 0x1c) = iVar9;
                        *(uint *)(local_270 + 4) = uVar10;
                        *(undefined8 *)((longlong)&DAT_180253850 + local_250) = 0;
                        thunk_FUN_180001218(local_250 + 0x180253878,auStack_1a8,0x150);
                        plVar18 = DAT_18024de58;
                        (&DAT_180253a34)[uVar25 * 0x96] = 0;
                        *(undefined8 *)(&DAT_180253a38 + uVar24) = 0;
                        (&DAT_180253a5e)[uVar24] = 0;
                        *(undefined8 *)((longlong)&DAT_1802539d0 + uVar27) = uStack_238;
                        *(undefined8 *)((longlong)&DAT_1802539c8 + uVar27) = local_240;
                        *(undefined8 *)((longlong)&DAT_1802539d8 + uVar27) = local_230;
                        (&DAT_180253a5c)[uVar24] = 1;
                        *(undefined8 *)(uVar24 + 0x180253a2c) = uStack_214;
                        *(undefined8 *)(&DAT_180253a24 + uVar24) = local_21c;
                        (&DAT_180253a5d)[uVar24] = (byte)local_1fc & 1;
                        uVar8 = (**(code **)(*plVar18 + 0x78))(plVar18,local_28c);
                        uVar13 = uVar13 + 1;
                        (&DAT_180253a5f)[uVar24] = uVar8;
                        break;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < 0x20);
                  }
                }
              }
              uVar10 = uVar10 + 1;
              uVar15 = uVar15 + 1;
              uVar16 = local_28c;
              uVar11 = local_288;
            } while (uVar10 < local_288);
          }
          uVar16 = uVar16 + 1;
          lVar19 = local_280;
          uVar10 = local_290;
        } while (uVar16 < local_290);
      }
    }
    uVar25 = FUN_1800015a0(&DAT_18024de38);
    if ((int)uVar25 == 1) {
      DAT_18024de30 = (*__imp_KERNEL32_dll_AddVectoredExceptionHandler)(uVar25,FUN_1800203f0);
      uVar25 = (*__imp_KERNEL32_dll_AddVectoredContinueHandler)(1,FUN_1800203f0);
      DAT_18024de48 = uVar25;
    }
    uVar13 = 0;
    local_250 = local_250 & 0xffffffff00000000;
    uVar24 = 0;
    local_280 = lVar19;
    do {
      lVar19 = uVar24 * 600;
      if ((&DAT_180253a5c)[lVar19] != '\0') {
        FUN_1800015a0(&DAT_180253858 + uVar24 * 0x96);
        plVar18 = DAT_18024de60;
        if ((&DAT_180253850)[uVar24 * 0x4b] == 0) {
          if (*(uint *)(local_280 + 0x10) < 7) {
            uVar25 = 0;
            do {
              lVar28 = uVar25 * 600;
              if (((&DAT_18025386c)[uVar25 * 0x96] == (&DAT_18025386c)[uVar24 * 0x96]) &&
                 (lVar29 = (&DAT_180253850)[uVar25 * 0x4b], lVar29 != 0)) goto LAB_1800a74ac;
              uVar15 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar15;
            } while (uVar15 < 0x20);
            lVar29 = 0;
LAB_1800a74ac:
            (&DAT_180253a68)[uVar24 * 0x4b] = *(undefined8 *)((longlong)DAT_18024de60 + 0x85c);
            if (*(longlong **)(local_280 + 8) != (longlong *)0x0) {
              **(longlong **)(local_280 + 8) = (longlong)(plVar18 + 0x1a);
            }
            if (lVar29 == 0) {
              iVar9 = (**(code **)(*DAT_18024de58 + 0x48))();
              local_28c = (&DAT_18025386c)[uVar24 * 0x96];
              if (iVar9 == 2) {
                lVar28 = FUN_180102f80(0x1d198);
                plVar18 = (longlong *)(lVar28 + 0x17U & 0xfffffffffffffff0);
                plVar18[-1] = lVar28;
                FUN_18009fdc0(plVar18,local_28c);
                *plVar18 = (longlong)&PTR_FUN_1802352b8;
                plVar18[3] = (longlong)&PTR_FUN_180234b30;
                plVar18[0x39e2] = 0;
                plVar18[0x39e3] = 0;
                plVar18[0x39e4] = 0;
                plVar18[0x39f9] = 0;
                plVar18[0x39fa] = 0;
                plVar18[0x3a25] = 0;
                plVar18[0x3a26] = 0;
                plVar18[0x3a27] = 0;
                plVar18[0x3a28] = 0;
                *(undefined4 *)(plVar18 + 0x3a29) = 0;
                plVar18[0x3a2a] = 0;
                plVar18[0x3a2b] = 0xffffffff;
                plVar18[0x3a2c] = 0;
                *(undefined4 *)(plVar18 + 0x3a2d) = 0;
                *(undefined4 *)((longlong)plVar18 + 0x1d16c) = 0;
                plVar18[0x3a2e] = 0;
                plVar18[0x39e6] = 0;
                plVar18[0x39e5] = 0;
                plVar18[0x39e8] = 0;
                plVar18[0x39e7] = 0;
                plVar18[0x39ea] = 0;
                plVar18[0x39e9] = 0;
                plVar18[0x39ec] = 0;
                plVar18[0x39eb] = 0;
                plVar18[0x39ee] = 0;
                plVar18[0x39ed] = 0;
                plVar18[0x39f0] = 0;
                plVar18[0x39ef] = 0;
                plVar18[0x39f2] = 0;
                plVar18[0x39f1] = 0;
                plVar18[0x39f4] = 0;
                plVar18[0x39f3] = 0;
                plVar18[0x39f6] = 0;
                plVar18[0x39f5] = 0;
                plVar18[0x39f8] = 0;
                plVar18[0x39f7] = 0;
                plVar18[0x39fc] = 0;
                plVar18[0x39fb] = 0;
                plVar18[0x39fe] = 0;
                plVar18[0x39fd] = 0;
                plVar18[0x3a00] = 0;
                plVar18[0x39ff] = 0;
                plVar18[0x3a02] = 0;
                plVar18[0x3a01] = 0;
                plVar18[0x3a04] = 0;
                plVar18[0x3a03] = 0;
                plVar18[0x3a06] = 0;
                plVar18[0x3a05] = 0;
                plVar18[0x3a08] = 0;
                plVar18[0x3a07] = 0;
                plVar18[0x3a0a] = 0;
                plVar18[0x3a09] = 0;
                plVar18[0x3a0c] = 0;
                plVar18[0x3a0b] = 0;
                plVar18[0x3a0e] = 0;
                plVar18[0x3a0d] = 0;
                plVar18[0x3a10] = 0;
                plVar18[0x3a0f] = 0;
                plVar18[0x3a12] = 0;
                plVar18[0x3a11] = 0;
                plVar18[0x3a14] = 0;
                plVar18[0x3a13] = 0;
                plVar18[0x3a16] = 0;
                plVar18[0x3a15] = 0;
                plVar18[0x3a18] = 0;
                plVar18[0x3a17] = 0;
                plVar18[0x3a1a] = 0;
                plVar18[0x3a19] = 0;
                plVar18[0x3a1c] = 0;
                plVar18[0x3a1b] = 0;
                plVar18[0x3a1e] = 0;
                plVar18[0x3a1d] = 0;
                plVar18[0x3a20] = 0;
                plVar18[0x3a1f] = 0;
                plVar18[0x3a22] = 0;
                plVar18[0x3a21] = 0;
                plVar18[0x3a23] = 0;
                plVar18[0x3a24] = 0;
              }
              else {
                lVar28 = FUN_180102f80(0x1d518);
                plVar18 = (longlong *)(lVar28 + 0x17U & 0xfffffffffffffff0);
                plVar18[-1] = lVar28;
                FUN_18009fdc0(plVar18,local_28c);
                *plVar18 = (longlong)&PTR_FUN_180234b38;
                plVar18[3] = (longlong)&PTR_FUN_180234b30;
                plVar18[0x39e2] = 0;
                plVar18[0x39e3] = 0;
                plVar18[0x3a0e] = 0;
                plVar18[0x3a0f] = 0;
                plVar18[0x3a10] = 0;
                plVar18[0x3a11] = 0;
                *(undefined4 *)(plVar18 + 0x3a12) = 0;
                lVar28 = thunk_FUN_180102f80(0xc0);
                plVar18[0x3a13] = lVar28;
                plVar18[0x3a14] = 8;
                plVar18[0x3a15] = 0;
                *(undefined1 *)(plVar18 + 0x3a16) = 0;
                plVar18[14999] = 0;
                plVar18[15000] = 0;
                lVar28 = thunk_FUN_180102f80(0x4800);
                plVar18[0x3a99] = lVar28;
                plVar18[0x3a9a] = 0x100;
                plVar18[0x3a9b] = 0;
                *(undefined4 *)(plVar18 + 0x3a9c) = 0;
                plVar18[0x3a9d] = 0;
                plVar18[0x3a9e] = 0;
                plVar18[0x3a9f] = 0;
                plVar18[0x39e5] = 0;
                plVar18[0x39e4] = 0;
                plVar18[0x39e7] = 0;
                plVar18[0x39e6] = 0;
                plVar18[0x39e9] = 0;
                plVar18[0x39e8] = 0;
                plVar18[0x39eb] = 0;
                plVar18[0x39ea] = 0;
                plVar18[0x39ed] = 0;
                plVar18[0x39ec] = 0;
                plVar18[0x39ef] = 0;
                plVar18[0x39ee] = 0;
                plVar18[0x39f1] = 0;
                plVar18[0x39f0] = 0;
                plVar18[0x39f3] = 0;
                plVar18[0x39f2] = 0;
                plVar18[0x39f5] = 0;
                plVar18[0x39f4] = 0;
                plVar18[0x39f7] = 0;
                plVar18[0x39f6] = 0;
                plVar18[0x39f9] = 0;
                plVar18[0x39f8] = 0;
                plVar18[0x39fb] = 0;
                plVar18[0x39fa] = 0;
                plVar18[0x39fd] = 0;
                plVar18[0x39fc] = 0;
                plVar18[0x39ff] = 0;
                plVar18[0x39fe] = 0;
                plVar18[0x3a01] = 0;
                plVar18[0x3a00] = 0;
                plVar18[0x3a03] = 0;
                plVar18[0x3a02] = 0;
                plVar18[0x3a05] = 0;
                plVar18[0x3a04] = 0;
                plVar18[0x3a07] = 0;
                plVar18[0x3a06] = 0;
                plVar18[0x3a09] = 0;
                plVar18[0x3a08] = 0;
                plVar18[0x3a0b] = 0;
                plVar18[0x3a0a] = 0;
                plVar18[0x3a0c] = 0;
                plVar18[0x3a0d] = 0;
                plVar18[0x3a18] = 0;
                plVar18[0x3a17] = 0;
                plVar18[0x3a1a] = 0;
                plVar18[0x3a19] = 0;
                plVar18[0x3a1c] = 0;
                plVar18[0x3a1b] = 0;
                plVar18[0x3a1e] = 0;
                plVar18[0x3a1d] = 0;
                plVar18[0x3a20] = 0;
                plVar18[0x3a1f] = 0;
                plVar18[0x3a22] = 0;
                plVar18[0x3a21] = 0;
                plVar18[0x3a24] = 0;
                plVar18[0x3a23] = 0;
                plVar18[0x3a26] = 0;
                plVar18[0x3a25] = 0;
                plVar18[0x3a28] = 0;
                plVar18[0x3a27] = 0;
                plVar18[0x3a2a] = 0;
                plVar18[0x3a29] = 0;
                plVar18[0x3a2c] = 0;
                plVar18[0x3a2b] = 0;
                plVar18[0x3a2e] = 0;
                plVar18[0x3a2d] = 0;
                plVar18[0x3a30] = 0;
                plVar18[0x3a2f] = 0;
                plVar18[0x3a32] = 0;
                plVar18[0x3a31] = 0;
                plVar18[0x3a34] = 0;
                plVar18[0x3a33] = 0;
                plVar18[0x3a36] = 0;
                plVar18[0x3a35] = 0;
                plVar18[0x3a38] = 0;
                plVar18[0x3a37] = 0;
                plVar18[0x3a3a] = 0;
                plVar18[0x3a39] = 0;
                plVar18[0x3a3c] = 0;
                plVar18[0x3a3b] = 0;
                plVar18[0x3a3e] = 0;
                plVar18[0x3a3d] = 0;
                plVar18[0x3a40] = 0;
                plVar18[0x3a3f] = 0;
                plVar18[0x3a42] = 0;
                plVar18[0x3a41] = 0;
                plVar18[0x3a44] = 0;
                plVar18[0x3a43] = 0;
                plVar18[0x3a46] = 0;
                plVar18[0x3a45] = 0;
                plVar18[0x3a48] = 0;
                plVar18[0x3a47] = 0;
                plVar18[0x3a4a] = 0;
                plVar18[0x3a49] = 0;
                plVar18[0x3a4c] = 0;
                plVar18[0x3a4b] = 0;
                plVar18[0x3a4e] = 0;
                plVar18[0x3a4d] = 0;
                plVar18[0x3a50] = 0;
                plVar18[0x3a4f] = 0;
                plVar18[0x3a52] = 0;
                plVar18[0x3a51] = 0;
                plVar18[0x3a54] = 0;
                plVar18[0x3a53] = 0;
                plVar18[0x3a56] = 0;
                plVar18[0x3a55] = 0;
                plVar18[0x3a58] = 0;
                plVar18[0x3a57] = 0;
                plVar18[0x3a5a] = 0;
                plVar18[0x3a59] = 0;
                plVar18[0x3a5c] = 0;
                plVar18[0x3a5b] = 0;
                plVar18[0x3a5e] = 0;
                plVar18[0x3a5d] = 0;
                plVar18[0x3a60] = 0;
                plVar18[0x3a5f] = 0;
                plVar18[0x3a62] = 0;
                plVar18[0x3a61] = 0;
                plVar18[0x3a64] = 0;
                plVar18[0x3a63] = 0;
                plVar18[0x3a66] = 0;
                plVar18[0x3a65] = 0;
                plVar18[0x3a68] = 0;
                plVar18[0x3a67] = 0;
                plVar18[0x3a6a] = 0;
                plVar18[0x3a69] = 0;
                plVar18[0x3a6c] = 0;
                plVar18[0x3a6b] = 0;
                plVar18[0x3a6e] = 0;
                plVar18[0x3a6d] = 0;
                plVar18[0x3a70] = 0;
                plVar18[0x3a6f] = 0;
                plVar18[0x3a72] = 0;
                plVar18[0x3a71] = 0;
                plVar18[0x3a74] = 0;
                plVar18[0x3a73] = 0;
                plVar18[0x3a76] = 0;
                plVar18[0x3a75] = 0;
                plVar18[0x3a78] = 0;
                plVar18[0x3a77] = 0;
                plVar18[0x3a7a] = 0;
                plVar18[0x3a79] = 0;
                plVar18[0x3a7c] = 0;
                plVar18[0x3a7b] = 0;
                plVar18[0x3a7e] = 0;
                plVar18[0x3a7d] = 0;
                plVar18[0x3a80] = 0;
                plVar18[0x3a7f] = 0;
                plVar18[0x3a82] = 0;
                plVar18[0x3a81] = 0;
                plVar18[0x3a84] = 0;
                plVar18[0x3a83] = 0;
                plVar18[0x3a86] = 0;
                plVar18[0x3a85] = 0;
                plVar18[0x3a88] = 0;
                plVar18[0x3a87] = 0;
                plVar18[0x3a8a] = 0;
                plVar18[0x3a89] = 0;
                plVar18[0x3a8c] = 0;
                plVar18[0x3a8b] = 0;
                plVar18[0x3a8e] = 0;
                plVar18[0x3a8d] = 0;
                plVar18[0x3a90] = 0;
                plVar18[0x3a8f] = 0;
                plVar18[0x3a92] = 0;
                plVar18[0x3a91] = 0;
                plVar18[0x3a94] = 0;
                plVar18[0x3a93] = 0;
                plVar18[0x3a96] = 0;
                plVar18[0x3a95] = 0;
                func_0x000180222c50(plVar18 + 0x2018,0,0xc180);
              }
              (&DAT_180253850)[uVar24 * 0x4b] = plVar18;
              if (plVar18 != (longlong *)0x0) {
                iVar9 = *(int *)((longlong)DAT_18024de60 + 0x9db);
                if (iVar9 == 0) {
                  iVar9 = *(int *)((longlong)DAT_18024de60 + 0x8d2);
                  if (iVar9 == 0) {
                    uVar20 = 0x2a;
                  }
                  else {
                    if (((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 4)) goto LAB_1800a7aac;
LAB_1800a7ae0:
                    uVar20 = 6;
                  }
                }
                else if (iVar9 == 2) {
                  uVar20 = 0x15;
                }
                else {
                  if (iVar9 != 3) goto LAB_1800a7ae0;
LAB_1800a7aac:
                  uVar20 = 0x16;
                }
                uVar25 = (**(code **)(*plVar18 + 0x10))
                                   (plVar18,DAT_18024de60 + 0x100,&PTR_PTR_180249bc0,uVar20);
                if ((uVar25 & 0xff) != 0) {
                  uVar25 = FUN_180020640(uVar25,uVar24,(&DAT_180253870)[uVar24 * 0x96]);
                  plVar18 = DAT_18024de58;
                  if ((uVar25 & 1) != 0) {
                    uVar15 = *(uint *)(&DAT_1802539e0 + uVar24 * 0x4b);
                    uVar16 = *(uint *)((longlong)&DAT_1802539e0 + lVar19 + 4);
                    if (0x500 < uVar15) {
                      uVar15 = 0x500;
                    }
                    uVar14 = (&DAT_18025386c)[uVar24 * 0x96];
                    if (0x400 < uVar16) {
                      uVar16 = 0x400;
                    }
                    uVar15 = (*(uint *)((longlong)&DAT_1802539f0 + lVar19 + 4) >> 3) * uVar16 *
                             uVar15;
                    lVar19 = 0;
                    if ((ulonglong)uVar15 < (ulonglong)(&DAT_180253a68)[uVar24 * 0x4b]) {
                      lVar19 = (&DAT_180253a68)[uVar24 * 0x4b] - (ulonglong)uVar15;
                    }
                    (&DAT_180253a70)[uVar24 * 0x4b] = lVar19;
                    uVar14 = (**(code **)(*plVar18 + 0x50))(plVar18,uVar14);
                    (&DAT_180253a34)[uVar24 * 0x96] = uVar14;
                    puVar22 = (undefined4 *)
                              (**(code **)(*DAT_18024de58 + 0x58))
                                        (DAT_18024de58,&local_290,(&DAT_18025386c)[uVar24 * 0x96]);
                    (&DAT_180253a58)[uVar24 * 0x96] = *puVar22;
                    if (*(int *)((longlong)DAT_18024de60 + 0x9d7) == 1) {
                      uVar14 = 0x18;
                    }
                    else {
                      uVar14 = 0;
                      if (*(int *)((longlong)DAT_18024de60 + 0x9d7) == 2) {
                        uVar14 = 0x20;
                      }
                    }
                    (**(code **)(*(longlong *)(&DAT_180253850)[uVar24 * 0x4b] + 0x118))
                              ((longlong *)(&DAT_180253850)[uVar24 * 0x4b],uVar14);
                    goto LAB_1800a7538;
                  }
                  (**(code **)(*(longlong *)(&DAT_180253850)[uVar24 * 0x4b] + 0x18))();
                }
                (**(code **)(*(longlong *)(&DAT_180253850)[uVar24 * 0x4b] + 8))();
              }
              (&DAT_180253850)[uVar24 * 0x4b] = 0;
            }
            else {
              uVar14 = (&DAT_180253870)[uVar24 * 0x96];
              bVar6 = false;
              (&DAT_180253850)[uVar24 * 0x4b] = lVar29;
              uVar25 = FUN_180020640(lVar28,uVar24,uVar14);
              if ((uVar25 & 1) != 0) {
                uVar15 = *(uint *)(&DAT_1802539e0 + uVar24 * 0x4b);
                uVar16 = *(uint *)((longlong)&DAT_1802539e0 + lVar19 + 4);
                bVar6 = true;
                if (0x500 < uVar15) {
                  uVar15 = 0x500;
                }
                if (0x400 < uVar16) {
                  uVar16 = 0x400;
                }
                uVar15 = (*(uint *)((longlong)&DAT_1802539f0 + lVar19 + 4) >> 3) * uVar16 * uVar15;
                lVar19 = 0;
                if ((ulonglong)uVar15 < (ulonglong)(&DAT_180253a68)[uVar24 * 0x4b]) {
                  lVar19 = (&DAT_180253a68)[uVar24 * 0x4b] - (ulonglong)uVar15;
                }
                (&DAT_180253a70)[uVar24 * 0x4b] = lVar19;
              }
              if (bVar6) goto LAB_1800a7538;
            }
          }
          uVar25 = FUN_180001590(&DAT_180253858 + uVar24 * 0x96);
        }
        else {
LAB_1800a7538:
          uVar25 = FUN_1800032e8(local_280 + 0x68,&local_250);
        }
      }
      lVar19 = local_280;
      uVar13 = uVar13 + 1;
      uVar24 = (ulonglong)uVar13;
      local_250 = CONCAT44(local_250._4_4_,uVar13);
    } while (uVar13 < 0x20);
    uVar13 = 0;
    if (*(uint *)(local_280 + 0x70) != 0) {
      uVar24 = 0;
      uVar13 = *(uint *)(local_280 + 0x70);
      do {
        local_270 = (undefined8 *)0x0;
        uStack_268 = 0;
        if (uVar13 != 0) {
          uVar26 = 0;
          uStack_268._0_4_ = 0;
          uStack_268._4_4_ = 0;
          uVar15 = 0x7fffffff;
          uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x68) + uVar24 * 4);
          local_270._0_4_ = 0;
          local_270._4_4_ = 0;
          iVar9 = (int)uStack_268;
          uVar16 = uStack_268._4_4_;
          uVar10 = (uint)local_270;
          iVar12 = local_270._4_4_;
          do {
            uVar2 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x68) + uVar26 * 4);
            uVar11 = (uint)uVar26;
            if ((&DAT_18025386c)[uVar27 * 0x96] == (&DAT_18025386c)[uVar2 * 0x96]) {
              uVar1 = (&DAT_180253870)[uVar2 * 0x96];
              iVar9 = iVar9 + 1;
              uStack_268 = CONCAT44(uStack_268._4_4_,iVar9);
              if (uVar1 < uVar15) {
                uVar15 = uVar1;
                uVar10 = uVar11;
              }
              if (uVar1 < (uint)(&DAT_180253870)[uVar27 * 0x96]) {
                iVar12 = iVar12 + 1;
              }
              local_270 = (undefined8 *)CONCAT44(iVar12,uVar10);
              if ((uint)uVar24 != uVar11) {
                uVar16 = 1 << (ulonglong)(uVar11 & 0x1f) | uVar16;
                uStack_268 = CONCAT44(uVar16,iVar9);
              }
            }
            uVar26 = (ulonglong)(uVar11 + 1);
          } while (uVar11 + 1 < uVar13);
        }
        iVar9 = *(int *)(lVar19 + 0x84);
        if (*(int *)(lVar19 + 0x80) == iVar9) {
          uVar13 = iVar9 << 1;
          if (iVar9 == 0) {
            uVar13 = 0x10;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,uVar13);
          lVar28 = CONCAT44(0,uVar13) << 4;
          if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
            lVar28 = -1;
          }
          lVar28 = thunk_FUN_180102f80(lVar28);
          uVar25 = 0;
          if (lVar28 != 0) {
            thunk_FUN_180001218(lVar28,*(undefined8 *)(lVar19 + 0x78),
                                (ulonglong)*(uint *)(lVar19 + 0x84) << 4);
            uVar25 = thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x78));
            *(longlong *)(lVar19 + 0x78) = lVar28;
            *(uint *)(lVar19 + 0x84) = uVar13;
            goto LAB_1800a7664;
          }
        }
        else {
LAB_1800a7664:
          puVar23 = (undefined8 *)
                    (*(longlong *)(lVar19 + 0x78) + (ulonglong)*(uint *)(lVar19 + 0x80) * 0x10);
          puVar23[1] = uStack_268;
          *puVar23 = local_270;
          *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + 1;
        }
        uVar13 = *(uint *)(lVar19 + 0x70);
        uVar15 = (uint)uVar24 + 1;
        uVar24 = (ulonglong)uVar15;
      } while (uVar15 < uVar13);
    }
    if (uVar13 != 0) {
      uVar24 = 0;
      if (uVar13 != 0) {
        while (uVar25 = FUN_18001f9e8(lVar19 + 8,
                                      *(undefined4 *)(*(longlong *)(lVar19 + 0x68) + uVar24 * 4)),
              (uVar25 & 1) != 0) {
          uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x68) + uVar24 * 4);
          local_270 = (undefined8 *)(uVar27 * 600 + 0x1802539e4);
          thunk_FUN_180102fc0((&DAT_180253a98)[uVar27 * 0x4b]);
          plVar18 = DAT_18024de58;
          (&DAT_180253a98)[uVar27 * 0x4b] = 0;
          (&DAT_180253aa0)[uVar27 * 0x4b] = 0;
          uVar14 = (&DAT_18025386c)[uVar27 * 0x96];
          uVar13 = (**(code **)(*plVar18 + 0x90))(plVar18,uVar14);
          uVar25 = 0;
          if (uVar13 != 0) {
            uVar15 = 0;
            do {
              local_290 = (**(code **)(*DAT_18024de58 + 0x98))(DAT_18024de58,uVar14,uVar15);
              uVar25 = FUN_1800032e8(&DAT_180253a98 + uVar27 * 0x4b,&local_290);
              puVar23 = local_270;
              if ((uVar25 & 1) == 0) {
                uVar25 = thunk_FUN_180102fc0(*(undefined8 *)((longlong)local_270 + 0xb4));
                *(undefined8 *)((longlong)puVar23 + 0xb4) = 0;
                *(undefined8 *)((longlong)puVar23 + 0xbc) = 0;
                goto LAB_1800a7c1c;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar13);
          }
          uVar13 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar13;
          if (*(uint *)(lVar19 + 0x70) <= uVar13) break;
        }
      }
LAB_1800a7c1c:
      uVar13 = (uint)uVar24;
      if (uVar13 == *(uint *)(lVar19 + 0x70)) {
        lVar28 = thunk_FUN_180102f80(0x1004);
        *(longlong *)(lVar19 + 0x18) = lVar28;
        uVar25 = 0;
        if (lVar28 != 0) {
          lVar28 = thunk_FUN_180102f80(0x1004);
          *(longlong *)(lVar19 + 0x20) = lVar28;
          if (lVar28 != 0) {
            lVar28 = thunk_FUN_180102f80(0x1004);
            *(longlong *)(lVar19 + 0x28) = lVar28;
            if (lVar28 != 0) {
              lVar28 = thunk_FUN_180102f80(0x1004);
              *(longlong *)(lVar19 + 0x30) = lVar28;
              if (lVar28 != 0) {
                lVar28 = thunk_FUN_180102f80(0x1004);
                *(longlong *)(lVar19 + 0x38) = lVar28;
                if (lVar28 != 0) {
                  fVar33 = 1.0;
                  uVar13 = 0;
                  fVar34 = 0.0009765625;
                  fVar32 = 1.0;
                  do {
                    fVar31 = (float)uVar13 * fVar34;
                    FUN_180102620(0x4000000000000000,fVar31);
                    uVar25 = FUN_180102620((double)fVar31);
                    *(float *)(*(longlong *)(lVar19 + 0x18) + (uVar25 & 0xffffffff) * 4) =
                         (float)extraout_d0 / extraout_s21;
                    uVar13 = FUN_1801022b0(0x40000000);
                    *(undefined4 *)(*(longlong *)(lVar19 + 0x20) + (ulonglong)uVar13 * 4) =
                         extraout_s0;
                    *(float *)(*(longlong *)(lVar19 + 0x28) + (ulonglong)uVar13 * 4) = fVar32;
                    uVar13 = uVar13 + 1;
                    fVar32 = fVar32 + fVar32;
                  } while (uVar13 < 0x401);
                  uVar13 = 0;
                  fVar31 = 2.7182817;
                  fVar32 = fVar33;
                  do {
                    uVar13 = FUN_1801022b0(fVar31,(float)uVar13 * fVar34);
                    *(float *)(*(longlong *)(lVar19 + 0x30) + (ulonglong)uVar13 * 4) =
                         fVar32 / extraout_s0_00;
                    fVar35 = fVar32 / fVar33;
                    fVar33 = fVar33 * fVar31;
                    *(float *)(*(longlong *)(lVar19 + 0x38) + (ulonglong)uVar13 * 4) = fVar35;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < 0x401);
                  *(undefined1 *)(lVar19 + 0x44) = 1;
                  uVar25 = 0;
                  if (*(int *)(lVar19 + 0x70) != 0) {
                    do {
                      uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x68) + uVar25 * 4);
                      thunk_FUN_180102fc0((&DAT_180253348)[uVar27 * 5]);
                      local_290 = 1;
                      (&DAT_180253348)[uVar27 * 5] = 0;
                      (&DAT_180253350)[uVar27 * 5] = 0;
                      FUN_1800032e8(&DAT_180253348 + uVar27 * 5,&local_290);
                      uVar24 = 0;
                      cVar7 = (&DAT_180248e90)[(ulonglong)*(uint *)(lVar19 + 0x10) * 0x1b0];
                      uVar13 = (uint)uVar25;
                      while (cVar7 != '\0') {
                        uVar25 = 0;
                        local_288 = uVar13;
                        if (*(int *)(&DAT_180253aa0 + uVar27 * 0x4b) != 0) {
                          do {
                            if (*(uint *)((&DAT_180253a98)[uVar27 * 0x4b] + uVar25 * 4) ==
                                (uint)(byte)(&DAT_180248e90)
                                            [(ulonglong)*(uint *)(lVar19 + 0x10) * 0x1b0 + uVar24])
                            {
                              local_290 = (uint)(byte)(&DAT_180248e90)
                                                      [(ulonglong)*(uint *)(lVar19 + 0x10) * 0x1b0 +
                                                       uVar24];
                              FUN_1800032e8(&DAT_180253348 + uVar27 * 5,&local_290);
                            }
                            uVar13 = (int)uVar25 + 1;
                            uVar25 = (ulonglong)uVar13;
                          } while (uVar13 < *(uint *)(&DAT_180253aa0 + uVar27 * 0x4b));
                        }
                        uVar24 = (ulonglong)((int)uVar24 + 1);
                        uVar13 = local_288;
                        cVar7 = (&DAT_180248e90)
                                [(ulonglong)*(uint *)(lVar19 + 0x10) * 0x1b0 + uVar24];
                      }
                      uVar25 = (ulonglong)(uVar13 + 1);
                    } while (uVar13 + 1 < *(uint *)(lVar19 + 0x70));
                    uVar25 = 0;
                    if (*(uint *)(lVar19 + 0x70) != 0) {
                      do {
                        uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x68) + uVar25 * 4);
                        thunk_FUN_180102fc0((&DAT_180253358)[uVar27 * 5]);
                        (&DAT_180253358)[uVar27 * 5] = 0;
                        (&DAT_180253360)[uVar27 * 5] = 0;
                        local_290 = 1;
                        FUN_1800032e8(&DAT_180253358 + uVar27 * 5,&local_290);
                        uVar24 = 0;
                        uVar15 = (uint)uVar25;
                        uVar13 = local_288;
                        cVar7 = DAT_180248ce0;
                        while (local_288 = uVar15, cVar7 != '\0') {
                          uVar25 = 0;
                          if (*(int *)(&DAT_180253aa0 + uVar27 * 0x4b) != 0) {
                            do {
                              if (*(uint *)((&DAT_180253a98)[uVar27 * 0x4b] + uVar25 * 4) ==
                                  (uint)(byte)(&DAT_180248ce0)[uVar24]) {
                                local_290 = (uint)(byte)(&DAT_180248ce0)[uVar24];
                                FUN_1800032e8(&DAT_180253358 + uVar27 * 5,&local_290);
                              }
                              uVar13 = (int)uVar25 + 1;
                              uVar25 = (ulonglong)uVar13;
                            } while (uVar13 < *(uint *)(&DAT_180253aa0 + uVar27 * 0x4b));
                          }
                          uVar24 = (ulonglong)((int)uVar24 + 1);
                          uVar15 = local_288;
                          uVar13 = local_288;
                          cVar7 = (&DAT_180248ce0)[uVar24];
                        }
                        uVar15 = local_288 + 1;
                        uVar25 = (ulonglong)uVar15;
                        local_288 = uVar13;
                      } while (uVar15 < *(uint *)(lVar19 + 0x70));
                    }
                  }
                  plVar18 = DAT_18024de60;
                  uVar15 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229448);
                  for (uVar13 = 0; uVar13 < uVar15; uVar13 = uVar13 + 1) {
                    local_270 = (undefined8 *)
                                (**(code **)(*plVar18 + 0x58))(plVar18,&DAT_180229448,uVar13);
                    if ((local_270 == (undefined8 *)0x0) ||
                       (uVar25 = FUN_180006748(lVar19 + 0x90,&local_270), (uVar25 & 1) == 0))
                    goto LAB_1800a7ff4;
                  }
                  uVar15 = 1;
                  for (uVar13 = 0; uVar13 < *(uint *)(lVar19 + 0x98); uVar13 = uVar13 + 1) {
                    puVar23 = *(undefined8 **)(*(longlong *)(lVar19 + 0x90) + (ulonglong)uVar13 * 8)
                    ;
                    uVar16 = (**(code **)*puVar23)(puVar23,lVar19 + 0x88);
                    uVar15 = uVar16 & 0xff & uVar15;
                    if (uVar15 == 0) goto joined_r0x0001800a7fc4;
                  }
                  goto LAB_1800a7ff4;
                }
                thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x30));
                *(undefined8 *)(lVar19 + 0x30) = 0;
              }
              thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x28));
              *(undefined8 *)(lVar19 + 0x28) = 0;
            }
            thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x20));
            *(undefined8 *)(lVar19 + 0x20) = 0;
          }
          uVar25 = thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x18));
          *(undefined8 *)(lVar19 + 0x18) = 0;
        }
      }
      while (uVar13 != 0) {
        uVar13 = (int)uVar24 - 1;
        uVar24 = (ulonglong)uVar13;
        uVar25 = FUN_18001f8b8(uVar25,*(undefined4 *)(*(longlong *)(lVar19 + 0x68) + uVar24 * 4));
      }
    }
    FUN_180020b38();
  }
LAB_1800a8068:
  FUN_1800a34d0(lVar19);
  FUN_180102fc0(lVar19,0x100);
LAB_1800a807c:
  uVar25 = FUN_180001f50();
  if ((uVar25 & 1) != 0) {
    FUN_1800a8548();
  }
  return local_278;
joined_r0x0001800a7fc4:
  while (uVar13 != 0) {
    uVar13 = uVar13 - 1;
    plVar18 = *(longlong **)(*(longlong *)(lVar19 + 0x90) + (ulonglong)uVar13 * 8);
    (**(code **)(*plVar18 + 8))(plVar18,lVar19 + 0x88);
  }
  thunk_FUN_180102fc0(*(undefined8 *)(lVar19 + 0x90));
  *(undefined8 *)(lVar19 + 0x90) = 0;
  *(undefined8 *)(lVar19 + 0x98) = 0;
LAB_1800a7ff4:
  local_278 = FUN_1800a3db8(lVar19 + 0xa0,&DAT_180229578,local_248);
  if (-1 < local_278) {
    return local_278;
  }
  FUN_1800a3600(lVar19);
  goto LAB_1800a8068;
}

