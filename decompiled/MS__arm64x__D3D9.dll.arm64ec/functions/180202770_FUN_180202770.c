/*
 * FUN_180202770 at 180202770
 * undefined FUN_180202770(void)
 * Address ranges: 180202770-18020294b;18020295c-18020337b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180202770(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  undefined8 extraout_x8;
  longlong lVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  code *extraout_x11_21;
  code *extraout_x11_22;
  code *extraout_x11_23;
  code *extraout_x11_24;
  code *extraout_x11_25;
  code *extraout_x11_26;
  code *extraout_x11_27;
  code *extraout_x11_28;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong local_188;
  undefined8 local_180;
  int local_178;
  int iStack_174;
  int local_170;
  int local_16c;
  longlong local_168;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 local_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [88];
  undefined8 local_48;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  local_170 = *(int *)(param_2 + 4);
  local_16c = *(int *)((longlong)param_2 + 0x24);
  if (local_170 == 0) {
    local_170 = 1;
  }
  if (local_16c == 0) {
    local_16c = 1;
  }
  iVar11 = *(int *)(param_2 + 3) * local_170;
  iVar12 = *(int *)((longlong)param_2 + 0x1c) * local_16c;
  if (((*(int *)(param_2 + 3) == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) &&
      (*(int *)(param_2 + 5) == 0)) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  iVar8 = *(int *)(param_2 + 6);
  if ((iVar8 - 3U & 0xfffffffa) == 0 && iVar8 != 7) {
    iVar20 = 1;
  }
  else if (iVar8 - 5U < 3) {
    iVar20 = 2;
  }
  else {
    iVar20 = *(int *)((longlong)param_2 + 0x34);
  }
  uVar10 = *(uint *)(param_1 + 0x650);
  local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(&DAT_1802388e8 + (longlong)iVar8 * 4));
  uVar15 = 0;
  if (uVar10 != 0) {
    do {
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x648) + uVar15 * 8);
      if ((*plVar13 == param_2[2]) && ((int)plVar13[2] == *(int *)(param_2 + 1)))
      goto LAB_180202c20;
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar1;
    } while (uVar1 < uVar10);
  }
  if ((uint)uVar15 == uVar10) {
    puVar18 = (undefined8 *)0x0;
    if (!bVar6) {
      uVar17 = param_2[2];
      iVar8 = thunk_FUN_180223ec8(uVar17,0);
      iVar9 = thunk_FUN_180223978();
      if ((iVar9 == iVar8) &&
         (uVar10 = thunk_FUN_18022406c(uVar17,0xffffffec), (uVar10 >> 3 & 1) != 0)) {
        thunk_FUN_180224030(uVar17,0xfffffffffffffffe,0,0,0,0,0x41b);
      }
      puVar4 = __hybrid_os_arm64x_dispatch_icall;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      puVar18 = (undefined8 *)(*extraout_x11)(param_1);
      if (puVar18 != (undefined8 *)0x0) {
        iVar8 = *(int *)(param_1 + 0x654);
        if (*(int *)(param_1 + 0x650) == iVar8) {
          uVar10 = iVar8 << 1;
          if (iVar8 == 0) {
            uVar10 = 0x10;
          }
          lVar16 = CONCAT44(0,uVar10) << 3;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = CONCAT44(0,uVar10);
          if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
            lVar16 = -1;
          }
          lVar16 = FUN_1802229a8(lVar16);
          if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar16,*(undefined8 *)(param_1 + 0x648),
                                (ulonglong)*(uint *)(param_1 + 0x654) << 3);
          }
        }
        else {
          *(undefined8 **)
           (*(longlong *)(param_1 + 0x648) + (ulonglong)*(uint *)(param_1 + 0x650) * 8) = puVar18;
          *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + 1;
          *(undefined4 *)(puVar18 + 2) = *(undefined4 *)(param_2 + 1);
          iStack_158 = *(int *)(param_2 + 5);
          iStack_154 = *(int *)((longlong)param_2 + 0x2c);
          local_150 = *(undefined4 *)(&DAT_180238818 + (longlong)*(int *)(param_2 + 7) * 4);
          uStack_14c = (uint)(*(char *)((longlong)param_2 + 0x45) != '\0');
          local_148 = (int)local_180;
          local_160 = iVar11;
          iStack_15c = iVar12;
          (*(code *)puVar4)(0x180224000);
          cVar7 = (*extraout_x11_00)(param_1,puVar18,&local_160,
                                     *(undefined4 *)((longlong)param_2 + 0x3c),param_2[2]);
          if (cVar7 != '\0') {
            *(int *)(puVar18 + 3) = iVar11;
            *(int *)((longlong)puVar18 + 0x1c) = iVar12;
            *(int *)(puVar18 + 4) = local_170;
            *(int *)((longlong)puVar18 + 0x24) = local_16c;
            iVar11 = *(int *)(param_2 + 7);
            *(int *)((longlong)puVar18 + 0x34) = iVar11;
            uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
            *(undefined4 *)((longlong)puVar18 + 0x14) = 0;
            *(undefined4 *)(puVar18 + 7) = uVar2;
            *(undefined4 *)((longlong)puVar18 + 0x3c) = 0;
            *(undefined1 *)((longlong)puVar18 + 0xd6b) = 1;
            if (iVar11 == 2) {
              local_188 = 0;
              uVar17 = (*(code *)puVar4)(0x180224000);
              iVar11 = (*extraout_x11_01)(uVar17,&DAT_180229378,&local_188);
              if (-1 < iVar11) {
                uVar17 = (*(code *)puVar4)(0x180224000);
                (*extraout_x11_02)(uVar17,0xc);
                (*(code *)puVar4)(0x180224000);
                (*extraout_x11_03)();
              }
            }
            (*(code *)puVar4)(0x180224000);
            cVar7 = (*extraout_x11_04)(param_1,puVar18,*(undefined4 *)(param_2 + 9));
            if (cVar7 != '\0') {
              uVar17 = (*(code *)puVar4)(0x180224000);
              (*extraout_x11_05)(uVar17,param_2[2],1);
              *puVar18 = param_2[2];
              puVar18[0x1ae] = *param_2;
              iVar11 = *(int *)(param_2 + 6);
              if ((iVar11 == 7) && (*(char *)(param_1 + 0x67c) == '\0')) {
                iVar11 = 3;
              }
              *(int *)((longlong)puVar18 + 0x2c) = iVar11;
              *(int *)(puVar18 + 6) = iVar20;
              if ((*(char *)((longlong)param_2 + 0x44) == '\0') &&
                 (*(char *)(param_1 + 0x312) != '\0')) {
                uVar14 = 0;
              }
              else {
                uVar14 = 1;
              }
              *(undefined1 *)(puVar18 + 0x1ad) = uVar14;
              iVar11 = 0;
              if (*(int *)((longlong)param_2 + 0x4c) != -1) {
                iVar11 = *(int *)((longlong)param_2 + 0x4c);
              }
              *(int *)(puVar18 + 0x1aa) = iVar11;
              iVar11 = *(int *)(param_2 + 10);
              if (iVar11 == -1) {
                iVar11 = 1;
              }
              *(int *)((longlong)puVar18 + 0xd54) = iVar11;
              if (*(int *)(param_2 + 8) == 1) {
                *(undefined4 *)((longlong)puVar18 + 0x3c) = 1;
                FUN_1802022d0(param_1,puVar18,0,0);
              }
              uVar10 = *(uint *)((longlong)param_2 + 0x4c);
              uVar1 = *(uint *)(param_2 + 10);
              if (uVar10 != 0xffffffff || uVar1 != 0xffffffff) {
                puVar18[0x1ab] = 0;
                puVar18[0x1ac] = 0;
                if (uVar10 != 0) {
                  thunk_FUN_180223900(&local_168);
                  lVar16 = 0;
                  if ((ulonglong)uVar10 != 0) {
                    lVar16 = (longlong)((ulonglong)uVar1 * local_168) / (longlong)(ulonglong)uVar10;
                  }
                  puVar18[0x1ab] = lVar16;
                }
              }
              (*(code *)puVar4)(0x180224000);
              (*extraout_x11_06)(param_1,puVar18);
              *(undefined1 *)((longlong)puVar18 + 0xd6b) = 0;
              goto LAB_180202bc0;
            }
            *(undefined1 *)((longlong)puVar18 + 0xd6b) = 0;
          }
          if (*(int *)(param_1 + 0x650) != 0) {
            *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + -1;
          }
        }
      }
      FUN_1802229d8(puVar18,0xd78);
      puVar18 = (undefined8 *)0x0;
    }
LAB_180202bc0:
    puVar19 = puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_180202bd4;
  }
  else {
LAB_180202c20:
    puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x648) + uVar15 * 8);
    puVar19 = (undefined8 *)0x0;
    if (*(char *)((longlong)puVar18 + 0xd6b) != '\0') goto LAB_180202bd4;
    *(undefined1 *)((longlong)puVar18 + 0xd6b) = 1;
    puVar4 = __hybrid_os_arm64x_dispatch_icall;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    local_b0 = 0;
    if (puVar18[1] != 0) {
      uVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11_07)(uVar17,&local_f0);
    }
    puVar18[0x1ae] = *param_2;
    iVar8 = *(int *)((longlong)param_2 + 0x4c);
    if ((*(int *)(puVar18 + 0x1aa) != iVar8 && iVar8 != -1) ||
       (*(int *)((longlong)puVar18 + 0xd54) != *(int *)(param_2 + 10) &&
        *(int *)(param_2 + 10) != -1)) {
      *(int *)(puVar18 + 0x1aa) = iVar8;
      *(undefined4 *)((longlong)puVar18 + 0xd54) = *(undefined4 *)(param_2 + 10);
      uVar10 = *(uint *)((longlong)param_2 + 0x4c);
      local_140 = (ulonglong)uVar10;
      local_188 = (ulonglong)*(uint *)(param_2 + 10);
      if (uVar10 != 0xffffffff || *(uint *)(param_2 + 10) != 0xffffffff) {
        puVar18[0x1ab] = 0;
        puVar18[0x1ac] = 0;
        if (uVar10 != 0) {
          thunk_FUN_180223900(&local_168);
          if (local_140 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180202cfc);
            (*pcVar5)();
          }
          lVar16 = 0;
          if (local_140 != 0) {
            lVar16 = (longlong)(local_188 * local_168) / (longlong)local_140;
          }
          puVar18[0x1ab] = lVar16;
        }
      }
    }
    if (bVar6) goto LAB_180202bc0;
    bVar6 = *(char *)((longlong)param_2 + 0x45) != '\0';
    uVar10 = (uint)bVar6;
    if (((((*(int *)(puVar18 + 3) == iVar11) && (*(int *)((longlong)puVar18 + 0x1c) == iVar12)) &&
         (*(int *)(puVar18 + 4) == local_170)) &&
        ((*(int *)((longlong)puVar18 + 0x24) == local_16c &&
         ((int)uStack_e8 == *(int *)(param_2 + 5))))) &&
       (uStack_e8._4_4_ == *(int *)((longlong)param_2 + 0x2c))) {
      if ((((int)local_d8 != (int)local_180) || (*(int *)(puVar18 + 6) != iVar20)) ||
         ((*(int *)((longlong)puVar18 + 0x34) != *(int *)(param_2 + 7) ||
          ((uStack_e0._4_4_ != uVar10 || (puVar18[1] == 0)))))) goto LAB_180202ddc;
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_08)(param_1,puVar18,*(undefined4 *)(param_2 + 9));
    }
    else {
LAB_180202ddc:
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_09)(param_1,puVar18);
      iVar8 = 0;
      local_188 = local_188 & 0xffffffff00000000;
      local_168 = 0;
      *(int *)(puVar18 + 3) = iVar11;
      *(int *)((longlong)puVar18 + 0x1c) = iVar12;
      *(int *)(puVar18 + 4) = local_170;
      *(int *)((longlong)puVar18 + 0x24) = local_16c;
      *(undefined4 *)((longlong)puVar18 + 0x34) = *(undefined4 *)(param_2 + 7);
      if (puVar18[1] == 0) {
        lVar16 = 0;
      }
      else {
        uVar17 = (*(code *)puVar4)(0x180224000);
        (*extraout_x11_10)(uVar17,&local_188,&local_168);
        lVar16 = puVar18[1];
        iVar8 = (int)local_188;
      }
      local_150 = *(undefined4 *)(&DAT_180238818 + (longlong)*(int *)(param_2 + 7) * 4);
      iStack_158 = *(int *)(param_2 + 5);
      iStack_154 = *(int *)((longlong)param_2 + 0x2c);
      local_148 = (int)local_180;
      local_160 = iVar11;
      iStack_15c = iVar12;
      if ((*(int *)((longlong)puVar18 + 0x3c) != 0) && (iVar20 - 1U < 2)) {
        local_148 = 0;
        local_160 = (int)local_f0;
        iStack_15c = local_f0._4_4_;
      }
      uStack_14c = uVar10;
      if (((int)uStack_e8 == iStack_158) && (uStack_e8._4_4_ == iStack_154)) {
        if (iVar8 == 0) {
          thunk_FUN_180224044(*puVar18,&local_140);
          thunk_FUN_180223be4(*puVar18,&local_180);
          thunk_FUN_180224030(*puVar18,0,0,0,
                              (((int)uStack_138 - (int)local_140) - local_178) + (int)local_180 +
                              local_160,
                              ((uStack_138._4_4_ - local_140._4_4_) - iStack_174) + local_180._4_4_
                              + iStack_15c,0x216);
        }
        else {
          local_130 = (ulonglong)CONCAT14(bVar6,local_150);
          local_140 = CONCAT44(iStack_15c,local_160);
          local_180 = 0;
          uStack_138 = param_2[5];
          local_128 = local_148;
          uVar17 = (*(code *)puVar4)(0x180224000);
          iVar11 = (*extraout_x11_11)(uVar17,&local_180);
          if (-1 < iVar11) {
            uVar17 = (*(code *)puVar4)(0x180224000);
            iVar11 = (*extraout_x11_12)(uVar17,auStack_a0);
            if (-1 < iVar11) {
              uStack_118 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
              local_120 = 0x28;
              local_100 = 0;
              iVar11 = thunk_FUN_180223dec(local_48,&local_120);
              if (iVar11 != 0) {
                local_140 = CONCAT44((int)uStack_110 - (int)uStack_118,
                                     uStack_118._4_4_ - local_120._4_4_);
              }
            }
            (*(code *)puVar4)(0x180224000);
            (*extraout_x11_13)();
          }
          uVar17 = (*(code *)puVar4)(0x180224000);
          (*extraout_x11_14)(uVar17,&local_140);
        }
        uVar17 = (*(code *)puVar4)(0x180224000);
        (*extraout_x11_15)(uVar17,2,local_160,iStack_15c,local_150);
      }
      else {
        if (lVar16 != 0) {
          (*(code *)puVar4)();
          (*extraout_x11_16)(extraout_x8,0,0);
          (*(code *)puVar4)(0x180224000);
          (*extraout_x11_17)();
        }
        uVar17 = param_2[2];
        iVar11 = thunk_FUN_180223ec8(uVar17,0);
        iVar12 = thunk_FUN_180223978();
        if ((iVar12 == iVar11) &&
           (uVar10 = thunk_FUN_18022406c(uVar17,0xffffffec), (uVar10 >> 3 & 1) != 0)) {
          thunk_FUN_180224030(uVar17,0xfffffffffffffffe,0,0,0,0,0x41b);
        }
        (*(code *)puVar4)(0x180224000);
        cVar7 = (*extraout_x11_18)(param_1,puVar18,&local_160,
                                   *(undefined4 *)((longlong)param_2 + 0x3c),param_2[2]);
        if (cVar7 != '\0') {
          if (*(int *)((longlong)puVar18 + 0x34) == 2) {
            local_180 = 0;
            uVar17 = (*(code *)puVar4)(0x180224000);
            iVar11 = (*extraout_x11_19)(uVar17,&DAT_180229378,&local_180);
            if (-1 < iVar11) {
              uVar17 = (*(code *)puVar4)(0x180224000);
              (*extraout_x11_20)(uVar17,0xc);
              (*(code *)puVar4)(0x180224000);
              (*extraout_x11_21)();
            }
          }
          uVar17 = (*(code *)puVar4)(0x180224000);
          (*extraout_x11_22)(uVar17,local_188 & 0xffffffff,local_168);
        }
        if (local_168 != 0) {
          (*(code *)puVar4)(0x180224000);
          (*extraout_x11_23)();
        }
      }
      if (puVar18[1] == 0) {
        (*(code *)puVar4)(0x180224000);
        (*extraout_x11_27)(param_1,puVar18);
        (*(code *)puVar4)(0x180224000);
        (*extraout_x11_28)(param_1,puVar18);
        uVar10 = *(uint *)(param_1 + 0x650);
        if (uVar10 != 0) {
          uVar15 = 0;
          do {
            if (*(undefined8 **)(*(longlong *)(param_1 + 0x648) + uVar15 * 8) == puVar18) {
              if ((int)uVar15 != -1) {
                while (uVar1 = (int)uVar15 + 1, uVar1 < uVar10) {
                  *(undefined8 *)(*(longlong *)(param_1 + 0x648) + uVar15 * 8) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x648) + (ulonglong)uVar1 * 8);
                  uVar15 = (ulonglong)uVar1;
                  uVar10 = *(uint *)(param_1 + 0x650);
                }
                *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + -1;
              }
              break;
            }
            uVar1 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar1;
          } while (uVar1 < uVar10);
        }
        FUN_1802229d8(puVar18,0xd78);
        *(undefined1 *)((longlong)puVar18 + 0xd6b) = 0;
        puVar19 = (undefined8 *)0x0;
        goto LAB_180202bd4;
      }
      uVar17 = (*(code *)puVar4)(0x180224000);
      (*extraout_x11_24)(uVar17,param_2[2],1);
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_25)(param_1,puVar18,*(undefined4 *)(param_2 + 9));
      *(int *)(puVar18 + 6) = iVar20;
      if ((*(char *)((longlong)param_2 + 0x44) == '\0') && (*(char *)(param_1 + 0x312) != '\0')) {
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
      *(undefined1 *)(puVar18 + 0x1ad) = uVar14;
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_26)(param_1,puVar18);
    }
    puVar19 = puVar18;
    if (puVar18 == (undefined8 *)0x0) goto LAB_180202bd4;
    iVar11 = *(int *)(param_2 + 6);
    if ((iVar11 == 7) && (*(char *)(param_1 + 0x67c) == '\0')) {
      iVar11 = 3;
    }
    *(int *)((longlong)puVar18 + 0x2c) = iVar11;
    if (((*(uint *)((longlong)puVar18 + 0x3c) < 2) && (uVar10 = *(uint *)(param_2 + 8), uVar10 < 2))
       && (uVar10 != *(uint *)((longlong)puVar18 + 0x3c))) {
      *(uint *)((longlong)puVar18 + 0x3c) = uVar10;
      FUN_1802022d0(param_1,puVar18,0,0);
    }
  }
  *(undefined1 *)((longlong)puVar18 + 0xd6b) = 0;
  *(int *)((longlong)puVar18 + 0x14) = *(int *)((longlong)puVar18 + 0x14) + 1;
  puVar19 = puVar18;
LAB_180202bd4:
  thunk_FUN_18022370c(param_1 + 0x620);
  return puVar19;
}

