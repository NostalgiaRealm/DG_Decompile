/*
 * FUN_1800b8b48 at 1800b8b48
 * undefined FUN_1800b8b48(void)
 * Address ranges: 1800b8b48-1800b9943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b8b48(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5,
                 undefined1 param_6,uint param_7,longlong *param_8,undefined8 *param_9)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  uint uVar20;
  code *pcVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  char *pcVar27;
  undefined1 auStack_160 [8];
  longlong local_158;
  uint local_150;
  uint local_14c;
  longlong *local_148;
  longlong local_140;
  ulonglong *local_130;
  ulonglong uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_110;
  uint local_10c;
  longlong *local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e8;
  ulonglong local_e4;
  undefined4 local_dc;
  int iStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b0;
  longlong lStack_a8;
  longlong *local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  
  local_110 = param_5 & 0xff;
  local_14c = param_7 & 0xff;
  plVar14 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    plVar14 = param_3 + -1;
  }
  iVar13 = -0x7ff8fff2;
  local_10c = param_4;
  local_108 = param_3;
  local_c8 = param_8;
  local_c0 = param_2;
  if (plVar14 == (longlong *)0x0) {
    plVar25 = *(longlong **)(param_1 + 0xe98);
    cVar10 = *(char *)(param_1 + 0x6894);
    plVar14 = (longlong *)FUN_180102f80(0x188);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14[0x26] = 0;
      *(undefined4 *)(plVar14 + 0x27) = 0;
      plVar14[0x28] = (longlong)plVar14;
      plVar14[0x2a] = 0;
      plVar14[0x29] = 0;
      plVar14[0x2c] = 0;
      plVar14[0x2b] = 0;
      plVar14[0x2e] = 0;
      plVar14[0x2d] = 0;
      lVar22 = *(longlong *)(param_1 + 0xe28);
      plVar14[3] = 0;
      *(undefined4 *)(plVar14 + 4) = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar14[0x10] = 0;
      plVar14[0x11] = (longlong)plVar25;
      lVar15 = 0;
      if (lVar22 != 0) {
        lVar15 = lVar22 + 8;
      }
      plVar14[0x21] = 0;
      plVar14[0x22] = 0;
      *(undefined4 *)(plVar14 + 9) = 1;
      plVar14[5] = 0;
      plVar14[6] = -1;
      plVar14[1] = (longlong)&PTR_FUN_1802336b8;
      plVar14[2] = lVar15;
      plVar14[0x13] = 0;
      plVar14[0x14] = 0;
      plVar14[10] = (longlong)&PTR_FUN_180233670;
      plVar14[0xb] = param_1;
      plVar14[0x15] = 0;
      *(undefined4 *)(plVar14 + 0x23) = 0;
      *(uint *)((longlong)plVar14 + 0x11c) = param_4;
      plVar14[0x24] = 0;
      *(undefined2 *)(plVar14 + 0x25) = 0;
      lVar16 = *param_2;
      lVar22 = param_2[3];
      lVar15 = param_2[2];
      plVar14[0x13] = param_2[1];
      plVar14[0x12] = lVar16;
      plVar14[0x15] = lVar22;
      plVar14[0x14] = lVar15;
      lVar16 = param_2[4];
      lVar22 = param_2[7];
      lVar15 = param_2[6];
      plVar14[0x17] = param_2[5];
      plVar14[0x16] = lVar16;
      plVar14[0x19] = lVar22;
      plVar14[0x18] = lVar15;
      lVar16 = param_2[8];
      lVar22 = param_2[0xb];
      lVar15 = param_2[10];
      plVar14[0x1b] = param_2[9];
      plVar14[0x1a] = lVar16;
      plVar14[0x1d] = lVar22;
      plVar14[0x1c] = lVar15;
      lVar15 = param_2[0xc];
      plVar14[0x1f] = param_2[0xd];
      plVar14[0x1e] = lVar15;
      plVar14[0x20] = param_2[0xe];
      plVar14[0xd] = 0;
      plVar14[0xc] = 0;
      plVar14[0xf] = 0;
      plVar14[0xe] = 0;
      iVar11 = (**(code **)(*plVar25 + 0x38))(plVar25);
      *(bool *)((longlong)plVar14 + 0x49) = iVar11 == 1;
      plVar14[0x2f] = param_1;
      *(char *)(plVar14 + 0x30) = cVar10;
      *(undefined1 *)((longlong)plVar14 + 0x181) = param_6;
      *plVar14 = (longlong)&PTR_FUN_180236a48;
      plVar14[1] = (longlong)&PTR_FUN_180236990;
      plVar14[10] = (longlong)&PTR_FUN_180233670;
      FUN_1800a5438(plVar14 + 0x26,&DAT_1802296b8);
      FUN_1800a5438(plVar14 + 0x26,&DAT_180229518);
      if (cVar10 != '\0') {
        FUN_1800a5438(plVar14 + 0x26,&DAT_180229598);
      }
    }
    if (plVar14 == (longlong *)0x0) {
      return -0x7ff8fff2;
    }
  }
  else {
    lVar16 = *param_2;
    lVar22 = param_2[3];
    lVar15 = param_2[2];
    bVar9 = param_3 != (longlong *)0x0;
    plVar25 = (longlong *)&DAT_00000090;
    if (bVar9) {
      plVar25 = param_3 + 0x11;
    }
    plVar25[1] = param_2[1];
    *plVar25 = lVar16;
    plVar25[3] = lVar22;
    plVar25[2] = lVar15;
    lVar16 = param_2[4];
    lVar22 = param_2[7];
    lVar15 = param_2[6];
    plVar25[5] = param_2[5];
    plVar25[4] = lVar16;
    plVar25[7] = lVar22;
    plVar25[6] = lVar15;
    lVar16 = param_2[8];
    lVar22 = param_2[0xb];
    lVar15 = param_2[10];
    plVar25[9] = param_2[9];
    plVar25[8] = lVar16;
    plVar25[0xb] = lVar22;
    plVar25[10] = lVar15;
    lVar15 = param_2[0xc];
    plVar25[0xd] = param_2[0xd];
    plVar25[0xc] = lVar15;
    plVar25[0xe] = param_2[0xe];
    puVar4 = (uint *)&DAT_0000011c;
    if (bVar9) {
      puVar4 = (uint *)((longlong)param_3 + 0x114);
    }
    *puVar4 = param_4;
    plVar25 = (longlong *)&DAT_00000128;
    if (bVar9) {
      plVar25 = param_3 + 0x24;
    }
    *(undefined1 *)plVar25 = 0;
  }
  plVar25 = plVar14 + 1;
  local_150 = (uint)*(byte *)((longlong)plVar14 + 0x181);
  local_148 = plVar14;
  local_100 = plVar14;
  FUN_18000cd40(auStack_160);
  lVar15 = DAT_18024de60;
  *(uint *)((longlong)plVar14 + 0x1c) = *(uint *)(DAT_18024de60 + 0x8c2) >> 2 & 1;
  *(uint *)(plVar14 + 4) = *(uint *)(DAT_18024de60 + 0x8c6) & 1;
  iVar11 = *(int *)(lVar15 + 0x160);
  *(int *)(lVar15 + 0x160) = iVar11 + 1;
  if ((iVar11 == 0) && (*(char *)(lVar15 + 0x825) != '\0')) {
    uVar12 = (*__imp_KERNEL32_dll_SetThreadExecutionState)(0x80000002);
    *(undefined4 *)(lVar15 + 0x15c) = uVar12;
  }
  uStack_f4 = (undefined4)plVar14[0x13];
  uStack_ec = *(undefined4 *)((longlong)plVar14 + 0x9c);
  bVar9 = true;
  iVar11 = (int)plVar14[0x1d];
  local_d4 = *(undefined4 *)((longlong)plVar14 + 0xec);
  local_e4 = 0x100000001;
  local_f8 = (undefined4)plVar14[0x16];
  local_f0 = *(undefined4 *)((longlong)plVar14 + 0xb4);
  local_dc = 0;
  iStack_d8 = iVar11;
  uStack_d0 = uStack_f4;
  local_cc = uStack_ec;
  if (*(int *)((longlong)plVar14 + 0xd4) == -1) {
LAB_1800b8ea4:
    bVar9 = true;
    iVar6 = *(int *)((longlong)plVar14 + 0xe4);
    if (iVar6 != 0) {
      if (local_14c != 0) {
        local_e4 = local_e4 | 0x200000000;
        puVar5 = (undefined4 *)0x0;
        if (local_150 == 0) {
          puVar5 = &local_f8;
        }
        local_e8 = iVar6;
        lVar15 = (**(code **)(*plVar25 + 0xa8))
                           (plVar25,&local_e8,puVar5,*(undefined4 *)((longlong)plVar14 + 0xdc),
                            iVar6 == 0x46 && iVar11 == 0,0xffffffff);
        bVar9 = lVar15 != 0;
        plVar14[0x10] = lVar15;
      }
      if (!bVar9) goto LAB_1800b960c;
    }
    lVar15 = DAT_18024de60;
    uVar26 = 0;
    lVar22 = plVar14[0x12];
    uVar1 = *(uint *)(DAT_18024de60 + 0x148);
    if (uVar1 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(DAT_18024de60 + 0x140) + uVar26 * 0x18) == lVar22)
        goto LAB_1800b9054;
        uVar20 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar20;
      } while (uVar20 < uVar1);
    }
    if ((uint)uVar26 == uVar1) {
      iVar11 = (*__imp_USER32_dll_IsWindowUnicode)(lVar22);
      local_120 = CONCAT44(CONCAT31(local_120._5_3_,iVar11 != 0),*(int *)(lVar15 + 0x158));
      *(int *)(lVar15 + 0x158) = *(int *)(lVar15 + 0x158) + 1;
      iVar11 = (*__imp_USER32_dll_IsWindowUnicode)(lVar22);
      pcVar21 = __imp_USER32_dll_GetWindowLongPtrA;
      if (iVar11 != 0) {
        pcVar21 = __imp_USER32_dll_GetWindowLongPtrW;
      }
      lVar16 = (*pcVar21)(lVar22,0xfffffffc);
      iVar11 = *(int *)(lVar15 + 0x14c);
      if (*(int *)(lVar15 + 0x148) == iVar11) {
        uVar1 = iVar11 << 1;
        if (iVar11 == 0) {
          uVar1 = 0x10;
        }
        local_158 = CONCAT44(local_158._4_4_,uVar1);
        lVar23 = (ulonglong)uVar1 * 0x18;
        if (SUB168(ZEXT416(uVar1) * ZEXT816(0x18),8) != 0) {
          lVar23 = -1;
        }
        local_140 = thunk_FUN_180102f80(lVar23);
        if (local_140 == 0) goto LAB_1800b9054;
        thunk_FUN_180001218(local_140,*(undefined8 *)(lVar15 + 0x140),
                            (ulonglong)*(uint *)(lVar15 + 0x14c) * 0x18);
        thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0x140));
        *(longlong *)(lVar15 + 0x140) = local_140;
        *(undefined4 *)(lVar15 + 0x14c) = (undefined4)local_158;
      }
      plVar3 = (longlong *)
               (*(longlong *)(lVar15 + 0x140) + (ulonglong)*(uint *)(lVar15 + 0x148) * 0x18);
      plVar3[1] = lVar16;
      *plVar3 = lVar22;
      plVar3[2] = local_120;
      *(int *)(lVar15 + 0x148) = *(int *)(lVar15 + 0x148) + 1;
    }
LAB_1800b9054:
    cVar10 = (**(code **)(*(longlong *)plVar14[0x11] + 0xc0))
                       ((longlong *)plVar14[0x11],plVar14[0x12],(int)plVar14[0x19],(int)plVar14[4],
                        *(undefined4 *)((longlong)plVar14 + 0x1c),
                        *(undefined4 *)((longlong)plVar14 + 0xf4),(int)plVar14[0x1f],
                        *(char *)((longlong)plVar14 + 0x101) == '\0');
    if (cVar10 == '\0') goto LAB_1800b960c;
    (**(code **)(*(longlong *)plVar14[0x11] + 0xe0))
              ((longlong *)plVar14[0x11],plVar14[0x12],(int)plVar14[0x18],
               *(undefined4 *)((longlong)plVar14 + 0xc4));
    lVar22 = plVar14[0x12];
    *(int *)(plVar14 + 3) = (int)plVar14[0x1f];
    if (*(int *)(lVar15 + 0x138) == 0) {
      lVar16 = (*__imp_USER32_dll_GetActiveWindow)();
      *(bool *)(lVar15 + 0xa0c) = lVar16 != 0;
    }
    lVar16 = func_0x000180220598(lVar15,lVar22);
    if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x20) != 0)) {
      FUN_180100d48();
    }
    local_130 = (ulonglong *)(lVar15 + 0x150);
    local_120 = local_120 & 0xffffffff00000000;
    lStack_98 = 0;
    lStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    lStack_80 = 0;
    uStack_128 = ~*local_130;
    lStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    lStack_60 = 0;
    uVar26 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20);
    local_b0 = lVar22;
    lStack_a8 = 0;
    local_a0 = plVar25;
    uVar20 = (uint)uVar26;
    uVar1 = 0;
    while ((1 - (uVar20 >> 6) & 0xff) == 0) {
      uVar2 = uVar1 + 0x40;
      uVar26 = local_120 >> 0x20;
      local_120 = CONCAT44((int)uVar26,uVar2);
      if (0x3f < uVar2) {
        uVar26 = 0xffffffff;
        goto LAB_1800b91a8;
      }
      uVar26 = 0;
      if (-uVar1 < 0x40) {
        uVar26 = 0xffffffffffffffff;
      }
      uStack_128 = ~(local_130[uVar2 >> 6] | uVar26);
      uVar26 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20);
      uVar1 = uVar2;
      uVar20 = (uint)uVar26;
    }
    *(byte *)((longlong)&uStack_128 + (uVar26 >> 3)) =
         *(byte *)((longlong)&uStack_128 + (uVar26 >> 3)) & ((byte)(1 << (uVar26 & 7)) ^ 0xff);
    uVar26 = (ulonglong)(uint)((int)local_120 + (int)uVar26);
LAB_1800b91a8:
    local_78 = CONCAT44(local_78._4_4_,(int)uVar26);
    lVar16 = lVar15 + ((uVar26 >> 6) + 0x2a) * 8;
    uVar24 = uVar26 >> 3 & 7;
    *(byte *)(lVar16 + uVar24) = *(byte *)(lVar16 + uVar24) | (byte)(1 << (uVar26 & 7));
    local_158 = *(longlong *)(lVar15 + 0x100);
    lVar16 = *(longlong *)(lVar15 + 0x110) + (ulonglong)(uint)((int)uVar26 * 0x70);
    uVar18 = FUN_1800010b8();
    uVar18 = thunk_FUN_180001218(lVar16,uVar18,0x70);
    *(longlong *)(lVar16 + 0x60) = local_158;
    *(code **)(lVar16 + 0x58) = FUN_180100da0;
    *(undefined8 *)(lVar16 + 0x68) = 0;
    local_90 = FUN_180100d48(uVar18,lVar22,lVar16);
    lStack_88 = lVar16;
    lVar16 = (*__imp_USER32_dll_GetActiveWindow)();
    local_70._0_6_ = CONCAT15(lVar16 == lVar22,(undefined5)local_70);
    iVar11 = *(int *)(lVar15 + 0x13c);
    if (*(int *)(lVar15 + 0x138) == iVar11) {
      uVar1 = iVar11 << 1;
      if (iVar11 == 0) {
        uVar1 = 0x10;
      }
      lVar16 = CONCAT44(0,uVar1) * 0x60;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = CONCAT44(0,uVar1);
      if (SUB168(auVar7 * ZEXT816(0x60),8) != 0) {
        lVar16 = -1;
      }
      local_158 = thunk_FUN_180102f80(lVar16);
      if (local_158 != 0) {
        thunk_FUN_180001218(local_158,*(undefined8 *)(lVar15 + 0x130),
                            (ulonglong)*(uint *)(lVar15 + 0x13c) * 0x60);
        thunk_FUN_180102fc0(*(undefined8 *)(lVar15 + 0x130));
        *(uint *)(lVar15 + 0x13c) = uVar1;
        *(longlong *)(lVar15 + 0x130) = local_158;
        goto LAB_1800b92c8;
      }
    }
    else {
LAB_1800b92c8:
      plVar3 = (longlong *)
               (*(longlong *)(lVar15 + 0x130) + (ulonglong)*(uint *)(lVar15 + 0x138) * 0x60);
      plVar3[1] = lStack_a8;
      *plVar3 = local_b0;
      plVar3[3] = lStack_98;
      plVar3[2] = (longlong)local_a0;
      plVar3[5] = lStack_88;
      plVar3[4] = local_90;
      plVar3[7] = local_78;
      plVar3[6] = lStack_80;
      plVar3[9] = lStack_68;
      plVar3[8] = local_70;
      plVar3[0xb] = lStack_58;
      plVar3[10] = lStack_60;
      *(int *)(lVar15 + 0x138) = *(int *)(lVar15 + 0x138) + 1;
    }
    if (*(uint *)(lVar15 + 0x148) != 0) {
      uVar26 = 0;
      do {
        plVar3 = (longlong *)(*(longlong *)(lVar15 + 0x140) + uVar26 * 0x18);
        if (*plVar3 == lVar22) {
          uVar1 = *(uint *)(plVar3 + 2);
          if (uVar1 != 0xffffffff) {
            if (*(char *)(*(longlong *)(lVar15 + 0x140) + (ulonglong)uVar1 * 0x18 + 0x14) == '\0') {
              local_158 = (*__imp_USER32_dll_GetWindowLongPtrA)(lVar22,0xfffffffc);
              local_140 = *(longlong *)(lVar15 + 0xf8);
              lVar16 = *(longlong *)(lVar15 + 0x108) + (ulonglong)(uVar1 * 0x2c);
              uVar18 = FUN_18000102c();
              thunk_FUN_180001218(lVar16,uVar18,0x2c);
            }
            else {
              local_158 = (*__imp_USER32_dll_GetWindowLongPtrW)();
              local_140 = *(longlong *)(lVar15 + 0x100);
              lVar16 = *(longlong *)(lVar15 + 0x108) + (ulonglong)(uVar1 * 0x2c);
              uVar18 = FUN_18000102c();
              thunk_FUN_180001218(lVar16,uVar18,0x2c);
            }
            *(longlong *)(lVar16 + 0x1c) = local_158;
            *(longlong *)(lVar16 + 0x24) = local_140;
            FUN_180100d48(local_158,lVar22,lVar16);
          }
          break;
        }
        uVar1 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(lVar15 + 0x148));
    }
    (*__imp_USER32_dll_SetTimer)(lVar22,0xaaaa,2000,0);
    *(int *)(lVar15 + 0x128) = *(int *)(lVar15 + 0x128) + 1;
    if ((*(char *)((longlong)plVar14 + 0x101) == '\0') && (*(char *)(lVar15 + 0x882) == '\0')) {
      lVar22 = (*__imp_USER32_dll_GetWindowLongPtrW)(plVar14[0x12],0xffffffec);
      if (lVar22 != 0x40300) {
        (*__imp_USER32_dll_SetWindowLongPtrW)(plVar14[0x12],0xffffffec,0x40300);
      }
      uVar26 = (*__imp_USER32_dll_GetWindowLongPtrW)(plVar14[0x12],0xfffffff0);
      if ((uVar26 & 0xcf0000) != 0xcf0000) {
        (*__imp_USER32_dll_SetWindowLongPtrW)(plVar14[0x12],0xfffffff0,0xcf0000);
      }
    }
    lVar22 = (**(code **)(*(longlong *)plVar14[0x11] + 0x60))
                       ((longlong *)plVar14[0x11],plVar14[0x12],(int)plVar14[0x16],
                        *(undefined4 *)((longlong)plVar14 + 0xb4),(int)plVar14[0x19],(int)plVar14[4]
                        ,*(undefined4 *)((longlong)plVar14 + 0x1c),(int)plVar14[0x17],
                        *(undefined4 *)((longlong)plVar14 + 0xbc),0);
    plVar14[0x21] = lVar22;
    if (lVar22 == 0) {
LAB_1800b95fc:
      (**(code **)(*(longlong *)plVar14[0x11] + 200))((longlong *)plVar14[0x11],plVar14[0x12]);
      goto LAB_1800b960c;
    }
    if (*(char *)((longlong)plVar14 + 0x101) == '\0') {
      iVar11 = (*__imp_USER32_dll_IsWindowVisible)(plVar14[0x12]);
      if (iVar11 == 0) {
        (*__imp_USER32_dll_ShowWindow)(plVar14[0x12],1);
      }
      local_120 = plVar14[0x15];
      local_130 = (ulonglong *)plVar14[0x16];
      uStack_128 = plVar14[0x17];
      *(bool *)(plVar14 + 9) = local_150 == 0;
      FUN_180022a78(plVar25);
      if (*(char *)(lVar15 + 0x9f6) == '\0') {
        pcVar27 = (char *)((longlong)plVar14 + 0x102);
        if (*(char *)((longlong)plVar14 + 0x102) != '\0') goto LAB_1800b9588;
        uVar18 = 0;
      }
      else {
        pcVar27 = (char *)((longlong)local_148 + 0x102);
LAB_1800b9588:
        uVar18 = 1;
      }
      cVar10 = (**(code **)(*(longlong *)plVar14[0x11] + 0xe8))
                         ((longlong *)plVar14[0x11],plVar14[0x12],&local_130,uVar18);
      if (cVar10 == '\0') {
        bVar9 = false;
      }
      FUN_180022ac8(plVar25);
      FUN_180022b10(plVar25);
      if ((*(char *)(lVar15 + 0x9f6) != '\0') && (*pcVar27 == '\0')) {
        (*__imp_USER32_dll_PostMessageW)(plVar14[0x12],0x400,0x44454745,0);
      }
      if (!bVar9) {
        (**(code **)(*(longlong *)plVar14[0x21] + 0x20))();
        plVar14[0x21] = 0;
        goto LAB_1800b95fc;
      }
    }
    iVar11 = FUN_1800015a0(&DAT_18024de3c);
    puVar17 = DAT_18024de50;
    if (iVar11 == 1) {
      puVar17 = (undefined8 *)FUN_180102f80(0x90);
      lVar15 = DAT_18024de60;
      if (puVar17 == (undefined8 *)0x0) {
        DAT_18024de50 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)0x0;
      }
      else {
        puVar17[2] = 0;
        puVar17[3] = 0;
        DAT_18024de50 = puVar17;
        *puVar17 = &PTR_FUN_180233898;
        puVar17[1] = lVar15;
        puVar17[5] = 0;
        puVar17[4] = 0;
        puVar17[7] = 0;
        puVar17[6] = 0;
        *(undefined4 *)(puVar17 + 8) = 0;
        puVar17[10] = 0;
        puVar17[9] = 0;
        puVar17[0xc] = 0;
        puVar17[0xb] = 0;
        puVar17[0xe] = 0;
        puVar17[0xd] = 0;
        puVar17[0x10] = 0;
        puVar17[0xf] = 0;
        puVar17[0x11] = 0;
      }
    }
    plVar3 = (longlong *)0x0;
    if (plVar25 != (longlong *)0x0) {
      plVar3 = plVar14 + 10;
    }
    if (puVar17 != (undefined8 *)0x0) {
      iVar11 = *(int *)((longlong)puVar17 + 0x1c);
      if (*(int *)(puVar17 + 3) == iVar11) {
        uVar1 = iVar11 << 1;
        if (iVar11 == 0) {
          uVar1 = 0x10;
        }
        lVar15 = CONCAT44(0,uVar1) << 3;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = CONCAT44(0,uVar1);
        if (SUB168(auVar8 * ZEXT816(8),8) != 0) {
          lVar15 = -1;
        }
        lVar15 = thunk_FUN_180102f80(lVar15);
        if (lVar15 == 0) goto LAB_1800b97a0;
        thunk_FUN_180001218(lVar15,puVar17[2],(ulonglong)*(uint *)((longlong)puVar17 + 0x1c) << 3);
        thunk_FUN_180102fc0(puVar17[2]);
        puVar17[2] = lVar15;
        *(uint *)((longlong)puVar17 + 0x1c) = uVar1;
      }
      *(longlong **)(puVar17[2] + (ulonglong)*(uint *)(puVar17 + 3) * 8) = plVar3;
      *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
    }
LAB_1800b97a0:
    if (*(char *)((longlong)plVar14 + 0x101) == '\0') {
LAB_1800b97c4:
      uVar19 = 1;
    }
    else {
      lVar15 = (*__imp_USER32_dll_GetActiveWindow)();
      uVar19 = 0;
      if (lVar15 == plVar14[0x12]) goto LAB_1800b97c4;
    }
    *(undefined1 *)((longlong)plVar14 + 0x129) = uVar19;
    bVar9 = true;
  }
  else {
    uVar26 = 0;
    puVar5 = (undefined4 *)0x0;
    if (local_150 == 0) {
      puVar5 = &local_f8;
    }
    do {
      if (!bVar9) goto LAB_1800b960c;
      local_e8 = (int)plVar14[0x1c];
      if ((((char)plVar14[0x20] == '\0') || (iVar11 != 0)) && ((int)uVar26 != 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      lVar15 = (**(code **)(*plVar25 + 0xa8))
                         (plVar25,&local_e8,puVar5,(int)plVar14[0x1b],uVar18,uVar26);
      if (lVar15 == 0) {
        bVar9 = false;
      }
      else {
        plVar14[uVar26 + 0xc] = lVar15;
      }
      uVar1 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar1;
    } while (uVar1 < *(int *)((longlong)plVar14 + 0xd4) + 1U);
    if (bVar9) goto LAB_1800b8ea4;
LAB_1800b960c:
    lVar15 = DAT_18024de60;
    iVar11 = *(int *)(DAT_18024de60 + 0x160) + -1;
    *(int *)(DAT_18024de60 + 0x160) = iVar11;
    if ((iVar11 == 0) && (*(char *)(lVar15 + 0x825) != '\0')) {
      (*__imp_KERNEL32_dll_SetThreadExecutionState)(*(undefined4 *)(lVar15 + 0x15c));
      *(undefined4 *)(lVar15 + 0x15c) = 0;
    }
    bVar9 = false;
  }
  FUN_18000cde0(auStack_160);
  if (bVar9) {
    if (local_14c != 0) {
      FUN_1800ab218(plVar14[0x2f],0,plVar14[0xd]);
      FUN_1800ab350(plVar14[0x2f],plVar14[0x10]);
    }
    if (local_110 != 0) {
      if (local_108 == (longlong *)0x0) {
        FUN_1800015a0(plVar14 + 0x27);
      }
      *(undefined2 *)(param_1 + 0xc50b) = 0x101;
      iVar13 = 0;
LAB_1800b9838:
      plVar3 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        plVar3 = plVar25;
      }
      *local_c8 = (longlong)plVar3;
      if (*(char *)((longlong)local_c0 + 0x71) == '\0') {
        local_120 = local_c0[3];
        uStack_128 = local_c0[2];
        local_130 = (ulonglong *)local_c0[1];
        local_118 = (undefined4)local_c0[9];
        FUN_180003008(*(undefined8 *)(param_1 + 0x6888),(int)local_c0[0xc],&local_130,local_c0 + 4);
      }
      uVar26 = (ulonglong)*(uint *)(param_1 + 0xea8);
      if ((&DAT_180253a5e)[uVar26 * 600] == '\0') {
        FUN_180002220(*(undefined8 *)(param_1 + 0x6888),uVar26);
      }
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(&DAT_180253340 + uVar26 * 0x28);
      return iVar13;
    }
    plVar3 = (longlong *)0x0;
    if (plVar14 != (longlong *)0x0) {
      plVar3 = plVar25;
    }
    local_108 = plVar3;
    uVar26 = FUN_180006748(param_1 + 0xeb0,&local_108);
    if ((uVar26 & 1) != 0) {
      local_148 = (longlong *)0x0;
      iVar13 = FUN_1800c5c78(plVar14,&DAT_180229518,&local_148);
      if (-1 < iVar13) {
        if (param_9 != (undefined8 *)0x0) {
          *param_9 = local_148;
        }
        (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
             (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] - (ulonglong)local_10c;
        goto LAB_1800b9838;
      }
      FUN_180005a60(param_1,plVar3);
    }
    FUN_1800c5710(plVar14);
  }
  else {
    if (plVar14[0x10] != 0) {
      FUN_1800c43c0();
      plVar14[0x10] = 0;
    }
    plVar25 = local_100;
    lVar15 = 0;
    do {
      if (plVar25[lVar15 + 0xc] != 0) {
        FUN_1800c43c0();
        plVar25[lVar15 + 0xc] = 0;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
  }
  FUN_1800c5538(plVar14);
  FUN_180102fc0(plVar14,0x188);
  return iVar13;
}

