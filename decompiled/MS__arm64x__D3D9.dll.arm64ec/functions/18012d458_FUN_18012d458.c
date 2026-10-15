/*
 * FUN_18012d458 at 18012d458
 * undefined FUN_18012d458(void)
 * Address ranges: 18012d458-18012e857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_18012d458(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong param_4,uint param_5,
             ulonglong param_6,int *param_7,undefined1 *param_8)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
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
  code *extraout_x11_29;
  code *extraout_x11_30;
  code *extraout_x11_31;
  code *extraout_x11_32;
  code *extraout_x11_33;
  code *extraout_x11_34;
  code *extraout_x11_35;
  code *extraout_x11_36;
  int *piVar29;
  int iVar30;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  undefined1 auStack_70 [48];
  
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  local_f8 = param_5;
  local_f0 = param_2;
  local_d0 = param_6;
  local_c0 = param_8;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  local_100 = (*extraout_x11)();
  local_100 = local_100 & 0xff;
  local_f4 = param_5 - 0x46;
  if (local_f4 < 2) {
    if ((param_3[6] == 0) && (uVar18 = FUN_18012f318(0), (uVar18 & 1) != 0)) {
      uVar26 = 0;
      (*(code *)puVar7)(0x180224000);
      lVar19 = (*extraout_x11_00)(param_1);
      (*(code *)puVar7)(0x180224000);
      uVar18 = (*extraout_x11_01)(param_1);
      if ((lVar19 != 0) && ((&DAT_18024e840)[(uVar18 & 0xffffffff) * 0x4b] != 0)) {
        uVar20 = (*(code *)puVar7)(0x180225000);
        piVar29 = (int *)(*extraout_x11_02)(uVar20,lVar19,0,0,4,2,2,0,0,0);
        local_e0 = piVar29;
        if (piVar29 != (int *)0x0) {
          local_fc = 0;
          (*(code *)puVar7)(0x180224000);
          cVar11 = (*extraout_x11_03)();
          if (cVar11 != '\0') {
            (*(code *)puVar7)(0x180224000);
            cVar11 = (*extraout_x11_04)(piVar29);
            local_fc = 1;
            if (cVar11 != '\0') {
              local_fc = 2;
            }
          }
          piVar29 = local_e0;
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_05)(piVar29);
          if (local_fc != 1) {
            if (local_fc == 2) {
              uVar26 = 3;
            }
            goto LAB_18012d63c;
          }
        }
        uVar26 = 0x207;
        if (*(char *)(param_1 + 0x41) == '\0') {
          uVar26 = 0x204;
        }
      }
LAB_18012d63c:
      param_7[8] = param_7[8] | uVar26;
      FUN_18012f3d0();
    }
  }
  else if (param_5 == 0x216) {
    *(undefined1 *)((longlong)param_3 + 0x44) = 1;
  }
  uVar26 = local_f8;
  if (*(char *)(DAT_18024d928 + 0x882) == '\0') {
    if (local_f8 != 0x113 || local_d0 != 0xaaaa) {
      if (local_100 == 0) {
        if (local_f8 == 0x14) {
          return 1;
        }
LAB_18012dcb4:
        if ((local_f8 == 0x104 && local_d0 == 0xd) && (((uint)param_7 >> 0x1d & 1) != 0)) {
          uVar18 = FUN_18012f318(1);
          if ((uVar18 & 1) == 0) {
            thunk_FUN_180223d88(param_4,0x400,0x44454745,1);
          }
          else {
            (*(code *)puVar7)(0x180224000);
            uVar13 = (*extraout_x11_19)(param_1,param_4);
            FUN_18012e9d8(param_1,uVar13);
            FUN_18012f3d0();
          }
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_20)(param_1,param_4);
          return 0;
        }
        goto LAB_18012dee0;
      }
      if (((local_f8 - 0xa1 < 6) ||
          ((local_f8 - 0x216 < 0x1d &&
           ((0x18000001U >> (ulonglong)(local_f8 - 0x216 & 0x1f) & 1) != 0)))) ||
         ((local_f8 < 6 && ((0x28U >> (ulonglong)(local_f8 & 0x1f) & 1) != 0)))) {
LAB_18012dc94:
        uVar20 = thunk_FUN_180223eb4(param_4,local_f8,local_d0,param_7);
        return uVar20;
      }
      if ((local_f8 < 0x1d) && ((0x10000040U >> (ulonglong)(local_f8 & 0x1f) & 1) != 0)) {
        uVar18 = FUN_18012f318(5);
        if ((uVar18 & 1) != 0) {
          (*(code *)puVar7)(0x180224000);
          cVar11 = (*extraout_x11_17)(param_1);
          if ((cVar11 == '\0') || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
            uVar20 = 0;
          }
          else {
            uVar20 = 1;
          }
          uVar13 = FUN_18012ec60(param_1);
          FUN_18012eda8(param_1,uVar20,uVar13);
          goto LAB_18012dedc;
        }
        goto LAB_18012dee0;
      }
      if (local_f4 < 2) goto LAB_18012dc94;
      if (local_f8 == 0x14) {
        return 1;
      }
      if (local_f8 != 0x214) goto LAB_18012dcb4;
      uStack_b8 = *(undefined8 *)(param_7 + 2);
      local_c0 = *(undefined1 **)param_7;
      if (*(char *)(local_f0 + 0x821) == '\0') goto LAB_18012dc50;
      local_100 = 0;
      local_fc = 0;
      uVar20 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_18)(uVar20,&local_100,&local_fc);
      if ((local_100 == 0) || (local_fc == 0)) goto LAB_18012dc50;
      local_e0 = (int *)0x0;
      local_d8 = 0;
      uVar13 = thunk_FUN_180223d4c(param_4,0xfffffff0);
      uVar14 = thunk_FUN_180223d4c(param_4,0xffffffec);
      thunk_FUN_1802241e8(&local_e0,uVar13,0,uVar14);
      local_c0._0_4_ = (int)local_c0 - (int)local_e0;
      local_c0._4_4_ = local_c0._4_4_ - local_e0._4_4_;
      uStack_b8._0_4_ = (int)uStack_b8 - (int)local_d8;
      uStack_b8._4_4_ = uStack_b8._4_4_ - local_d8._4_4_;
      if (local_fc == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x18012db64);
        (*pcVar9)();
      }
      uVar26 = 0;
      if (local_fc != 0) {
        uVar26 = ((uStack_b8._4_4_ - local_c0._4_4_) * local_100) / local_fc;
      }
      if (local_100 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x18012db78);
        (*pcVar9)();
      }
      uVar4 = 0;
      if (local_100 != 0) {
        uVar4 = (((int)uStack_b8 - (int)local_c0) * local_fc) / local_100;
      }
      uVar28 = (uVar26 - (int)uStack_b8) + (int)local_c0;
      uVar5 = (uVar4 - uStack_b8._4_4_) + local_c0._4_4_;
      if (local_d0 == 4) {
        uVar18 = 3;
LAB_18012dbe4:
        uVar22 = 1;
LAB_18012dbe8:
        if (uVar5 <= uVar28) {
          uVar18 = uVar22;
        }
      }
      else {
        if (local_d0 == 5) {
          uVar18 = 6;
          goto LAB_18012dbe4;
        }
        if (local_d0 != 7) {
          uVar18 = local_d0;
          if (local_d0 != 8) goto LAB_18012dbec;
          uVar18 = 6;
          uVar22 = 2;
          goto LAB_18012dbe8;
        }
        uVar18 = 2;
        if (uVar28 < uVar5) {
          uVar18 = 3;
        }
      }
LAB_18012dbec:
      if (uVar18 == 1) {
        local_c0 = (undefined1 *)CONCAT44(uStack_b8._4_4_ - uVar4,(int)local_c0);
      }
      else if (uVar18 == 2) {
        uStack_b8 = CONCAT44(uVar4 + local_c0._4_4_,(int)uStack_b8);
      }
      else if (uVar18 == 3) {
        local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,(int)uStack_b8 - uVar26);
      }
      else if (uVar18 == 6) {
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar26 + (int)local_c0);
      }
      thunk_FUN_1802241e8(&local_c0,uVar13,0,uVar14);
LAB_18012dc50:
      *(undefined8 *)(param_7 + 2) = uStack_b8;
      *(undefined1 **)param_7 = local_c0;
      *(int *)(param_3 + 3) = param_7[2] - *param_7;
      *(int *)((longlong)param_3 + 0x1c) = param_7[3] - param_7[1];
      return 1;
    }
    uVar18 = FUN_18012f318(0);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    (*(code *)puVar7)(0x180224000);
    local_f8 = (*extraout_x11_06)(param_1);
    uVar13 = 0;
    local_f8 = local_f8 & 0xff;
    if (local_f8 != 0) {
      uVar13 = FUN_18012ec60(param_1);
      *(byte *)(local_f0 + 0x820) = (byte)uVar13 ^ 1;
      (*(code *)puVar7)(0x180224000);
      lVar19 = (*extraout_x11_07)(param_1);
      (*(code *)puVar7)(0x180224000);
      uVar18 = (*extraout_x11_08)(param_1);
      if ((lVar19 != 0) && ((&DAT_18024e840)[(uVar18 & 0xffffffff) * 0x4b] != 0)) {
        uVar20 = (*(code *)puVar7)(0x180225000);
        lVar19 = (*extraout_x11_09)(uVar20,lVar19,0,0,4,2,2,0,0,0);
        if (lVar19 != 0) {
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_10)();
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_11)(lVar19);
        }
      }
      if (*(longlong *)(DAT_18024d928 + 0x3b0) != 0) {
        thunk_FUN_180223d88(*(longlong *)(DAT_18024d928 + 0x3b0),0x408,0,0);
      }
      if (*(char *)(local_f0 + 0x820) != '\0') {
        thunk_FUN_180223d4c(param_4,0xfffffff0);
        bVar10 = (*(uint *)(local_f0 + 0x8c2) & 1) == 0;
        lVar19 = 0x40000;
        if (bVar10) {
          lVar19 = 0x40300;
        }
        local_e0 = (int *)0x10000000;
        if (bVar10) {
          local_e0 = (int *)0x10cf0000;
        }
        local_e8 = (ulonglong)(*(uint *)(local_f0 + 0x8c2) >> 1) | 0xfffffffffffffffe;
        lVar21 = thunk_FUN_180223d4c(param_4,0xffffffec);
        if (lVar21 != lVar19) {
          thunk_FUN_180223d60(param_4,0xffffffec,lVar19);
        }
        uVar18 = thunk_FUN_180223d4c(param_4,0xfffffff0);
        bVar10 = (int *)(uVar18 & 0x10cf0000) != local_e0;
        if (bVar10) {
          thunk_FUN_180223d60(param_4,0xfffffff0);
        }
        thunk_FUN_180224030(param_4,local_e8,0,0,0,0,0x41b);
        if ((bVar10 || lVar21 != lVar19) ||
           ((*(int *)(param_3 + 3) == 0 && (*(int *)((longlong)param_3 + 0x1c) == 0)))) {
          local_f4 = 0;
          local_fc = 0;
          uVar20 = (*(code *)puVar7)(0x180224000);
          uVar20 = (*extraout_x11_12)(uVar20,&local_f4,&local_fc);
          FUN_180220820(uVar20,param_4,param_3,local_f4,local_fc,*(undefined1 *)(local_f0 + 0x824));
        }
      }
    }
    if (((local_100 == 0) || (local_f8 == 0)) || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
    FUN_18012eda8(param_1,uVar20,uVar13);
    (*(code *)puVar7)(0x180224000);
    lVar19 = (*extraout_x11_13)(param_1);
    if (lVar19 == 0) {
      (*(code *)puVar7)(0x180224000);
      uVar18 = (*extraout_x11_14)(param_1);
      if (((uVar18 & 0xff) == 0) && (uVar18 = FUN_18012f210(), (uVar18 & 1) != 0)) {
        uVar22 = thunk_FUN_180223e8c();
        uVar18 = FUN_18012f280();
        if (uVar22 != uVar18) {
          uVar3 = *(ulonglong *)(param_1 + 0x28);
          if (*(ulonglong *)(param_1 + 0x28) == 0xffffffffffffffff) {
            uVar3 = uVar22;
          }
          (*(code *)puVar7)(0x180224000,uVar18,uVar3);
          uVar20 = (*extraout_x11_15)(param_1);
          uVar18 = FUN_18012f2d0(uVar20,uVar18);
        }
        uVar20 = 1;
      }
      else {
        uVar20 = 0;
      }
      (*(code *)puVar7)(0x180224000,uVar18,uVar20);
      (*extraout_x11_16)(param_1);
    }
LAB_18012e628:
    FUN_18012f3d0();
  }
  else {
    if ((local_f8 < 0x1d) && ((0x10000040U >> (ulonglong)(local_f8 & 0x1f) & 1) != 0)) {
      if ((local_100 != 0) && (uVar18 = FUN_18012f318(5), (uVar18 & 1) != 0)) {
        if (local_d0 == 0) {
          if (uVar26 == 0x1c) {
            uVar18 = thunk_FUN_180223ec8(param_4,0);
            bVar10 = param_7 != (int *)(uVar18 & 0xffffffff);
            piVar29 = param_7;
          }
          else {
            uVar18 = thunk_FUN_180223ec8(param_7,0);
            piVar29 = (int *)(uVar18 & 0xffffffff);
            lVar19 = thunk_FUN_180223ea0(param_7,4);
            if ((lVar19 == param_4) && ((*(uint *)(DAT_18024d928 + 0x8c6) & 1) == 0)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
          }
          if (bVar10) {
            (*(code *)puVar7)(0x180224000);
            cVar11 = (*extraout_x11_22)(param_1,(ulonglong)piVar29 & 0xffffffff);
            if (cVar11 == '\0') {
              thunk_FUN_180223e78(param_4,0x405,0x44454745,0x44454745);
            }
            else {
              DAT_18024d958 = 0;
              thunk_FUN_180223d10(param_4,7);
              if (DAT_18024d958 != param_1) {
                (*(code *)puVar7)(0x180224000);
                (*extraout_x11_23)(param_1,param_4);
                FUN_18012eda8(param_1,0,0);
                uVar18 = FUN_18012ec60(param_1);
                if ((uVar18 & 1) != 0) {
                  FUN_18012e9d8(param_1,0);
                }
              }
            }
          }
        }
        else if ((*(char *)((longlong)param_3 + 0x5c) == '\0') &&
                (*(char *)((longlong)param_3 + 0x45) == '\0')) {
          *(undefined1 *)((longlong)param_3 + 0x5c) = 1;
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_21)(param_1,param_4);
          uVar13 = FUN_18012ec60(param_1);
          FUN_18012eda8(param_1,1,uVar13);
          *(undefined1 *)((longlong)param_3 + 0x5c) = 0;
        }
LAB_18012dedc:
        FUN_18012f3d0();
      }
LAB_18012dee0:
      sVar1 = (short)param_7;
      if ((local_f8 - 0x201 < 0xc) && ((0xedbU >> (ulonglong)(local_f8 - 0x201 & 0x1f) & 1) != 0)) {
LAB_18012df18:
        if (*(char *)((longlong)param_3 + 0x5b) != '\0') {
          return 0;
        }
        uVar18 = FUN_18012f318(0);
        if ((uVar18 & 1) != 0) {
          local_100 = 0;
          *(undefined1 *)((longlong)param_3 + 0x5b) = 1;
          (*(code *)puVar7)(0x180224000);
          cVar11 = (*extraout_x11_24)(param_1,&local_a0);
          if (cVar11 != '\0') {
            iVar30 = (int)sVar1;
            local_100 = 1;
            uVar18 = ((longlong)param_7 << 0x20) >> 0x30;
            iVar17 = (int)(short)((ulonglong)param_7 >> 0x10);
            local_e8 = CONCAT44(iVar17,iVar30);
            if (*(char *)(param_3 + 0xb) == '\0') {
              uVar25 = 0;
            }
            else {
              local_f4 = 0;
              local_fc = (uint)*(byte *)(local_f0 + 0x8e6);
              local_e0 = &local_a0;
              if (local_fc == 0) {
                local_e0 = &local_80;
              }
              if (((*(char *)(local_f0 + 0x823) == '\0') || (*(char *)(param_1 + 0x40) == '\0')) &&
                 (iVar15 = thunk_FUN_18022415c(local_e0,local_e8), iVar15 == 0)) {
                if (*(char *)((longlong)param_3 + 0x59) == '\0') {
                  if ((int)sVar1 < *local_e0) {
                    local_f4 = 1;
                    iVar30 = *local_e0;
                  }
                  else {
                    if (local_fc == 0) {
                      local_98 = local_78;
                    }
                    if (local_98 <= sVar1) {
                      iVar30 = local_98 + -1;
                    }
                    local_f4 = (uint)(local_98 <= sVar1);
                  }
                  if (local_fc == 0) {
                    local_9c = local_7c;
                  }
                  if ((int)local_9c <= iVar17) {
                    if (local_fc == 0) {
                      local_94 = local_74;
                    }
                    if (iVar17 < local_94) goto LAB_18012e308;
                    local_9c = local_94 - 1;
                  }
                  uVar18 = (ulonglong)local_9c;
                  local_f4 = 1;
                }
                else {
                  local_f0 = thunk_FUN_180223c98(0,0,3);
                  if (*local_e0 < (int)sVar1) {
                    iVar15 = local_98;
                    if (local_fc == 0) {
                      iVar15 = local_78;
                    }
                    if (iVar15 + -1 <= (int)sVar1) {
                      local_a8 = local_98;
                      iStack_a4 = iVar17;
                      thunk_FUN_180223f7c(*param_3,0,&local_a8,1);
                      iVar15 = thunk_FUN_18022433c(local_f0,local_a8,iStack_a4);
                      iVar30 = local_98;
                      if (local_fc == 0) {
                        iVar30 = local_78;
                      }
                      if (iVar15 == 0) goto LAB_18012e030;
                      local_100 = 0;
                      iVar30 = (local_98 - iVar30) + (int)sVar1 + 1;
                      goto LAB_18012e034;
                    }
                  }
                  else {
                    local_b0 = local_a0 + -1;
                    iStack_ac = iVar17;
                    thunk_FUN_180223f7c(*param_3,0,&local_b0,1);
                    iVar15 = thunk_FUN_18022433c(local_f0,local_b0,iStack_ac);
                    iVar30 = *local_e0;
                    if (iVar15 != 0) {
                      local_100 = 0;
                      iVar30 = (local_a0 - iVar30) + (int)sVar1;
LAB_18012e030:
                      iVar30 = iVar30 + -1;
                    }
LAB_18012e034:
                    local_f4 = 1;
                  }
                  uVar26 = local_9c;
                  if (local_fc == 0) {
                    uVar26 = local_7c;
                  }
                  if ((int)uVar26 < iVar17) {
                    iVar15 = local_94;
                    if (local_fc == 0) {
                      iVar15 = local_74;
                    }
                    if (iVar15 <= iVar17) {
                      local_e0 = (int *)CONCAT44(local_94,iVar30);
                      thunk_FUN_180223f7c(*param_3,0,&local_e0,1);
                      iVar16 = thunk_FUN_18022433c(local_f0,(ulonglong)local_e0 & 0xffffffff,
                                                   local_e0._4_4_);
                      iVar15 = local_94;
                      if (local_fc == 0) {
                        iVar15 = local_74;
                      }
                      if (iVar16 == 0) {
                        uVar26 = iVar15 - 1;
                      }
                      else {
                        uVar26 = (local_94 - iVar15) + iVar17;
                      }
                      uVar18 = (ulonglong)uVar26;
                      local_f4 = 1;
                      if (iVar16 != 0) {
                        local_100 = 0;
                      }
                    }
                  }
                  else {
                    local_e8 = CONCAT44(local_9c - 1,iVar30);
                    thunk_FUN_180223f7c(*param_3,0,&local_e8,1);
                    iVar15 = thunk_FUN_18022433c(local_f0,local_e8 & 0xffffffff,local_e8._4_4_);
                    uVar26 = local_9c;
                    if (local_fc == 0) {
                      uVar26 = local_7c;
                    }
                    if (iVar15 != 0) {
                      local_100 = 0;
                      uVar26 = ((local_9c - uVar26) + iVar17) - 1;
                    }
                    uVar18 = (ulonglong)uVar26;
                    local_f4 = 1;
                  }
                  thunk_FUN_180223cac(0,local_f0);
                }
              }
LAB_18012e308:
              if (local_f4 != 0) {
                local_f0 = CONCAT44((int)uVar18,iVar30);
                thunk_FUN_180223f7c(*param_3,0,&local_f0,1);
                thunk_FUN_180223ce8(local_f0 & 0xffffffff,local_f0._4_4_);
                do {
                  iVar17 = thunk_FUN_180223c0c(auStack_70,*param_3,0x200,0x200,1);
                } while (iVar17 != 0);
              }
              uVar25 = (undefined1)local_100;
            }
            *(undefined1 *)((longlong)param_3 + 0x59) = uVar25;
            param_7 = (int *)((ulonglong)(ushort)iVar30 | (uVar18 & 0xffff) << 0x10);
            local_100 = (uint)(local_100 == 0);
          }
          *(undefined1 *)((longlong)param_3 + 0x5b) = 0;
          FUN_18012f3d0();
          if (local_100 != 0) {
            return 0;
          }
        }
LAB_18012e384:
        if (local_f8 == 0x401 && local_d0 == 0x44454745) {
          uVar18 = FUN_18012f318(0);
          lVar19 = DAT_18024d928;
          if ((uVar18 & 1) == 0) {
            uVar20 = 0x401;
            goto LAB_18012e638;
          }
          (*(code *)puVar7)(0x180224000);
          uVar18 = (*extraout_x11_26)(param_1);
          lVar21 = (uVar18 & 0xffffffff) * 600;
          uVar20 = (&DAT_18024e840)[(uVar18 & 0xffffffff) * 0x4b];
          if ((*(char *)(lVar19 + 0x882) == '\0') &&
             (bVar12 = FUN_18012ec60(param_1), *(byte *)(lVar19 + 0x5fc) != (bVar12 ^ 1))) {
            FUN_18012e9d8(param_1,1);
          }
          if (*(int *)(lVar19 + 0x808) != *(int *)(lVar19 + 0x5e4)) {
            *(int *)(param_1 + 0x10) = *(int *)(lVar19 + 0x5e4);
          }
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_27)(uVar20,lVar19 + 0x5dc,param_7);
          lVar8 = DAT_18024d928;
          *(uint *)(param_1 + 0x14) = *(uint *)(DAT_18024d928 + 0x8c2) >> 2 & 1;
          *(uint *)(param_1 + 0x18) = *(uint *)(lVar8 + 0x8c6) & 1;
          iVar30 = *(int *)(lVar8 + 0x81c);
          if ((iVar30 == 6 || iVar30 < 3) || 8 < iVar30) {
            thunk_FUN_180223bf8(&DAT_18024ea04 + lVar21);
          }
          else {
            uVar26 = *(uint *)(&DAT_18024e9ec + lVar21);
            uVar4 = *(uint *)(&DAT_18024e9f0 + lVar21);
            uVar28 = *(uint *)(lVar8 + 0x8b6);
            uVar5 = *(uint *)(lVar8 + 0x8ba);
            uVar24 = *(uint *)(lVar8 + 0x8b2);
            uVar23 = *(uint *)(lVar8 + 0x8ae);
            uVar27 = uVar5;
            if (uVar28 == 0xffffffff) {
              uVar6 = uVar5 >> 0x10;
              uVar28 = 0;
              uVar27 = 0;
              if ((uVar6 != 0) && (uVar2 = uVar5 & 0xffff, (uVar5 & 0xffff) != 0)) {
                uVar27 = 0;
                if (uVar6 != 0) {
                  uVar27 = (uVar2 * uVar26) / uVar6;
                }
                uVar28 = uVar26;
                if (uVar4 <= uVar27) {
                  if (uVar2 == 0) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(0xf004,0x18012e504);
                    (*pcVar9)();
                  }
                  uVar28 = 0;
                  uVar27 = uVar4;
                  if (uVar2 != 0) {
                    uVar28 = (uVar6 * uVar4) / uVar2;
                  }
                }
              }
            }
            if (uVar23 == 0xffffffff && uVar24 == 0xffffffff) {
              uVar23 = uVar26 - uVar28 >> 1;
              uVar24 = uVar4 - uVar27 >> 1;
            }
            iVar30 = uVar23 + uVar28;
            if ((iVar30 <= (int)uVar23) || (iVar17 = uVar24 + uVar27, iVar17 <= (int)uVar24)) {
              iVar17 = 0;
              uVar24 = 0;
              iVar30 = 0;
              uVar23 = 0;
            }
            thunk_FUN_180223c20(&DAT_18024ea04 + lVar21,uVar23,uVar24,iVar30,iVar17);
          }
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_28)(param_1);
          *(undefined1 *)(lVar19 + 0x7e9) = 0;
          goto LAB_18012e628;
        }
        goto LAB_18012e598;
      }
      if (local_f8 != 0x20) {
        if (local_f8 == 0x200) {
          if (*(char *)((longlong)param_3 + 0x5d) != '\0') {
            return 0;
          }
          goto LAB_18012df18;
        }
        goto LAB_18012e384;
      }
      if (*(char *)((longlong)param_3 + 0x5d) == '\0') {
        uVar18 = FUN_18012f318(0);
        if ((uVar18 & 1) == 0) {
          return 1;
        }
        *(undefined1 *)((longlong)param_3 + 0x5d) = 1;
        if ((((uint)param_7 & 0xffff) == 1) || (*(char *)(param_1 + 0x43) != '\0')) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        (*(code *)puVar7)(0x180224000);
        local_e0 = (int *)(*extraout_x11_30)(param_1);
        local_e8 = FUN_18012f280();
        if ((local_e0 == (int *)0x0) || (!bVar10)) {
          uVar20 = 1;
          if (((ulonglong)param_7 & 0xffff) != 0) {
            uVar20 = thunk_FUN_180223f54(param_3[4],param_4,local_f8,local_d0,param_7);
          }
          if ((local_e0 == (int *)0x0) || (!bVar10)) {
            (*(code *)puVar7)(0x180224000);
            uVar18 = (*extraout_x11_33)(param_1);
            lVar19 = *(longlong *)(param_1 + 0x28);
            if ((uVar18 & 0xff) == 0) {
              if (lVar19 == -1) {
                lVar19 = thunk_FUN_180223e8c();
              }
              if (lVar19 == local_e8) {
                (*(code *)puVar7)(0x180224000);
                (*extraout_x11_35)(param_1);
              }
              else {
                FUN_18012f2d0();
                (*(code *)puVar7)(0x180224000);
                (*extraout_x11_34)(param_1,lVar19);
              }
              uVar18 = FUN_18012f210();
              uVar22 = uVar18 & 0xffffffff;
            }
            else {
              uVar22 = 0;
              if (lVar19 != -1) {
                uVar18 = FUN_18012f2d0(uVar18,lVar19);
                *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
                uVar22 = 0;
              }
            }
            (*(code *)puVar7)(0x180224000,uVar18,uVar22);
            (*extraout_x11_36)(param_1);
            goto LAB_18012e838;
          }
        }
        else {
          uVar20 = 1;
        }
        lVar21 = thunk_FUN_180223e8c();
        (*(code *)puVar7)(0x180224000);
        uVar18 = (*extraout_x11_31)(param_1);
        lVar19 = local_e8;
        if ((uVar18 & 0xff) != 0) {
          (*(code *)puVar7)(0x180224000);
          uVar18 = (*extraout_x11_32)(param_1,0);
          lVar19 = (longlong)local_e0;
        }
        if (lVar21 != local_e8) {
          FUN_18012f2d0(uVar18,lVar19);
        }
LAB_18012e838:
        *(undefined1 *)((longlong)param_3 + 0x5d) = 0;
        FUN_18012f3d0();
        return uVar20;
      }
    }
    else {
      if (local_f8 == 0x14) {
        return 1;
      }
      if (local_f8 != 0x113) goto LAB_18012dee0;
      if (local_d0 == 0xaaaa) {
        uVar18 = FUN_18012f318(0);
        if ((uVar18 & 1) == 0) {
          return 0;
        }
        if (local_100 != 0) {
          (*(code *)puVar7)(0x180224000);
          cVar11 = (*extraout_x11_25)(param_1);
          if ((cVar11 == '\0') || (*(char *)((longlong)param_3 + 0x45) == '\0')) {
            iVar30 = 0;
          }
          else {
            iVar30 = 1;
          }
          uVar18 = FUN_18012ec60(param_1);
          if (((iVar30 != 0) && ((uVar18 & 1) == 0)) && (*(char *)(local_f0 + 0x824) != '\0')) {
            FUN_180220820(uVar18,param_4,param_3,0,0,1);
          }
          FUN_18012eda8(param_1,iVar30,uVar18 & 0xff);
          FUN_18012f000(param_1);
        }
        goto LAB_18012e628;
      }
LAB_18012e598:
      uVar18 = local_d0 & 0xffffff00;
      if (local_f8 == 0x404) {
        if (uVar18 == 0x44454700) {
          uVar18 = FUN_18012f318(0);
          if ((uVar18 & 1) == 0) {
            return 0;
          }
          (*(code *)puVar7)(0x180224000);
          (*extraout_x11_29)(param_1);
          goto LAB_18012e628;
        }
      }
      else if (local_f8 == 0x405) {
        if (uVar18 == 0x44454700) {
          thunk_FUN_180223e3c(param_4);
          return 0;
        }
      }
      else if (local_f8 == 0x400 && uVar18 == 0x44454700) {
        uVar18 = FUN_18012f318(1);
        if ((uVar18 & 1) == 0) {
          uVar20 = 0x400;
LAB_18012e638:
          thunk_FUN_180223d88(param_4,uVar20,0x44454745,param_7);
          return 0;
        }
        FUN_18012e9d8(param_1,param_7 != (int *)0x0);
        goto LAB_18012e628;
      }
    }
    *local_c0 = 1;
  }
  return 0;
}

