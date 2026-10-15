/*
 * FUN_10041d38 at 10041d38
 * undefined FUN_10041d38(void)
 * Address ranges: 10041d38-10042ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10041d38(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 extraout_w1;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  undefined4 *extraout_w8_02;
  undefined4 *extraout_w8_03;
  undefined4 *extraout_w9;
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
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x11_01;
  ulonglong extraout_x11_02;
  int extraout_w12;
  int extraout_w12_00;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  code *pcVar21;
  int iVar22;
  undefined1 auVar23 [16];
  byte local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  int local_130;
  uint local_124;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  ulonglong *local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined4 local_48;
  
  piVar2 = (int *)(param_1 + 4);
  iVar14 = *piVar2;
  if (iVar14 == 0) {
    return 0;
  }
  uVar12 = FUN_1004b308(param_1);
  pcVar21 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_f0 = (uint *)(param_1 + 0x1b8);
  uVar19 = *local_f0;
  puVar3 = (uint *)(param_1 + 0x1bc);
  local_f4 = uVar19 >> 0xb & 1;
  local_f8 = *puVar3 & 0x20010;
  bVar1 = 1 < *(int *)(DAT_100be0c0 + 0x7e0) - 2U;
  bVar9 = (uVar19 >> 0xc & 1) == 0;
  bVar10 = uVar12 != 1;
  if ((uVar19 >> 3 & 1) != 0) {
    puVar4 = (ulonglong *)(param_1 + 0x150);
    uStack_b8 = *(ulonglong *)(param_1 + 0x158);
    local_c0 = *puVar4;
    local_a8 = *(ulonglong *)(param_1 + 0x168);
    uStack_b0 = *(ulonglong *)(param_1 + 0x160);
    local_50 = *(ulonglong *)(param_1 + 0x1c0);
    local_140 = 0;
    uStack_98 = *(ulonglong *)(param_1 + 0x178);
    local_a0 = *(ulonglong *)(param_1 + 0x170);
    uStack_88 = *(ulonglong *)(param_1 + 0x188);
    uStack_90 = *(ulonglong *)(param_1 + 0x180);
    uStack_78 = *(ulonglong *)(param_1 + 0x198);
    local_80 = *(ulonglong *)(param_1 + 400);
    uStack_68 = *(ulonglong *)(param_1 + 0x1a8);
    uStack_70 = *(ulonglong *)(param_1 + 0x1a0);
    uStack_58 = *(ulonglong *)(param_1 + 0x1b8);
    local_60 = *(ulonglong *)(param_1 + 0x1b0);
    local_48 = *(undefined4 *)(param_1 + 0x1c8);
    uVar19 = *(uint *)(iVar14 + 0x4c);
    uVar8 = *(undefined4 *)(iVar14 + 0x70);
    local_130 = param_1;
    if (uVar12 != 0) {
      uStack_58._4_4_ = (uint)(uStack_58 >> 0x20);
      local_148 = 0;
      local_c0._4_4_ = (uint)(local_c0 >> 0x20);
      uStack_b8._4_4_ = (uint)(uStack_b8 >> 0x20);
      local_140 = 0;
      local_100 = uStack_58._4_4_;
      local_13c = (uint)uStack_58;
      local_138 = (uint)uStack_b8;
      local_134 = uStack_b8._4_4_;
      local_124 = local_c0._4_4_;
      local_fc = uVar12;
      local_d0 = extraout_w1;
      local_cc = puVar4;
      do {
        if ((local_13c >> 0xc & 1) != 0) {
          if (local_140 == 0) {
LAB_10041f20:
            if (local_140 == 0) goto LAB_100420e4;
          }
          else {
            local_a8 = local_a8 & 0xffffffff00000000;
            uVar12 = local_13c & 0xfffdfff7;
            uStack_58 = CONCAT44(uStack_58._4_4_,local_13c) & 0xfffffffffffdfff7;
            local_134 = local_134 >> 1;
            if (local_134 == 0) {
              local_134 = 1;
            }
            local_138 = local_138 >> 1;
            if (local_138 == 0) {
              local_138 = 1;
            }
            uStack_b8 = CONCAT44(local_134,local_138);
            local_13c = uVar12;
            if ((*puVar3 >> 9 & 1) == 0) {
              uVar13 = (*pcVar21)();
              cVar11 = (*extraout_w11)(uVar13);
              if (cVar11 != '\0') goto LAB_10041f20;
            }
            uStack_58 = CONCAT44(local_100,(uint)uStack_58) | 0x1000000000000;
            local_100 = local_100 | 0x10000;
          }
LAB_10041f6c:
          uVar12 = local_140;
          if ((local_13c & 0x1000) == 0) {
            uVar12 = 0;
          }
          if (uVar12 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(*(int *)(local_130 + 4) + 0x50);
          }
          iVar14 = FUN_100348d8(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xf8),0,
                                uVar19,*(int *)(param_1 + 0xfc),uVar13,
                                &DAT_100be2cc + *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x45,
                                &local_c0,*(undefined4 *)(local_130 + 0x1cc));
          uVar13 = local_d0;
          piVar5 = (int *)(local_130 + 0x110);
          *piVar5 = iVar14;
          if (iVar14 != 0) {
            auVar23 = FUN_10041d38(iVar14,local_d0);
            if ((auVar23._0_8_ & 1) != 0) {
              uVar15 = (*pcVar21)(*piVar5,auVar23._8_8_,local_130 + 0x114);
              iVar14 = (*extraout_w11_00)(uVar15,uVar13);
              if (-1 < iVar14) {
                *(int *)(*piVar5 + 0x10c) = local_130;
                *(undefined1 *)(*piVar5 + 0x32) = 1;
                local_130 = *piVar5;
                *(uint *)(local_130 + 0x1b8) = *(uint *)(local_130 + 0x1b8) | 8;
                goto LAB_100425d8;
              }
              FUN_10042af0(*piVar5);
            }
            iVar14 = *piVar5;
            if (iVar14 != 0) {
              FUN_10041b60(iVar14);
              FUN_10091460(iVar14,0x1e8);
            }
            *piVar5 = 0;
          }
          goto joined_r0x1004265c;
        }
        uVar12 = local_13c & 0xffff7dc3;
        if (local_140 != 0) {
          local_c0 = CONCAT44(local_124,(undefined4)local_c0) & 0xffffffdfffffffff;
          if (local_140 == 1) {
            local_13c = uVar12 | 0x14;
          }
          else {
            local_13c = uVar12 | 0x10;
          }
          uStack_58 = CONCAT44(uStack_58._4_4_,local_13c);
          local_124 = local_124 & 0xffffffdf;
          goto LAB_10041f6c;
        }
        local_148 = 1;
        uStack_58 = CONCAT44(uStack_58._4_4_,local_13c) & 0xffffffffffff7dc3 | 0x8238;
        local_13c = uVar12 | 0x8238;
LAB_100420e4:
        local_cc[1] = uStack_b8;
        *local_cc = local_c0;
        local_cc[3] = local_a8;
        local_cc[2] = uStack_b0;
        local_cc[5] = uStack_98;
        local_cc[4] = local_a0;
        local_cc[7] = uStack_88;
        local_cc[6] = uStack_90;
        local_cc[9] = uStack_78;
        local_cc[8] = local_80;
        local_cc[0xb] = uStack_68;
        local_cc[10] = uStack_70;
        local_cc[0xd] = uStack_58;
        local_cc[0xc] = local_60;
        local_cc[0xe] = local_50;
        *(undefined4 *)(local_cc + 0xf) = local_48;
        uVar12 = *(uint *)(*piVar2 + 200);
        *(uint *)(*piVar2 + 200) = (uVar12 ^ (uint)local_148 << 1) & 2 ^ uVar12;
        if ((*(uint *)(param_1 + 0x154) >> 0x11 & 1) == 0) {
          uVar12 = 1;
        }
        else {
          uVar12 = *(uint *)(param_1 + 0x168);
        }
        iVar14 = *piVar2;
        if (*(int *)(iVar14 + 0x50) == 0) {
          FUN_100395c8(*(undefined4 *)(param_1 + 0xfc),&local_110);
          if (((*local_f0 >> 9 & 1) == 0) ||
             ((local_110 == iStack_10c && (local_108 == iStack_104)))) {
            iVar22 = 0;
          }
          else {
            iVar22 = 1;
          }
          if (((*local_f0 & 0x2001) == 0) && (iVar22 == 0)) {
            uVar18 = uVar12;
            if ((!bVar1 && !bVar9) && !bVar10) {
              uVar18 = 0;
              uVar7 = local_134;
              if (local_134 < local_138) {
                uVar7 = local_138;
              }
              if (uVar7 == 0) {
                uVar7 = 1;
              }
              if (uVar7 != 0) {
                uVar16 = (ulonglong)uVar7;
                do {
                  uVar18 = uVar18 + 1;
                  uVar16 = uVar16 >> 1;
                } while ((int)uVar16 != 0);
              }
            }
            uVar16 = (ulonglong)uVar18;
            uVar20 = (ulonglong)uVar19;
            FUN_1004d7d0(puVar4);
            puVar17 = (undefined4 *)(param_1 + 0x1cc);
            (*pcVar21)();
            iVar14 = (*extraout_w11_01)(uVar20 & 0xffffffff,local_134,local_138,*puVar17,
                                        uVar16 & 0xffffffff);
          }
          else {
            uVar13 = FUN_1004d7d0(puVar4);
            FUN_1004c7e0(param_1,&local_e0,local_134,local_138,uVar13,&local_110,iVar22);
            puVar6 = (uint *)(iVar14 + 200);
            uVar16 = (ulonglong)local_e0._4_4_;
            *puVar6 = *puVar6 & 0xfffffffe | uStack_d8._4_1_ & 1;
            uVar18 = uVar12;
            if ((!bVar1 && !bVar9) && !bVar10) {
              uVar7 = (uint)local_e0;
              if ((uint)local_e0 < local_e0._4_4_) {
                uVar7 = local_e0._4_4_;
              }
              uVar18 = 0;
              if (uVar7 == 0) {
                uVar7 = 1;
              }
              if (uVar7 != 0) {
                uVar20 = (ulonglong)uVar7;
                do {
                  uVar18 = uVar18 + 1;
                  uVar20 = uVar20 >> 1;
                } while ((int)uVar20 != 0);
              }
            }
            uVar20 = (ulonglong)uVar18;
            FUN_1004d7d0(puVar4);
            uVar13 = (*pcVar21)();
            iVar14 = (*extraout_w11_02)(uVar19,extraout_x1 & 0xffffffff,uVar16 & 0xffffffff,
                                        local_134,local_138,uStack_d8 & 0xffffffff,*extraout_w8,
                                        uVar20 & 0xffffffff,uVar13);
            if ((iVar22 != 0) && (iVar14 != 0)) {
              (*pcVar21)();
              (*extraout_w11_03)(iVar14);
            }
          }
          *(int *)(*piVar2 + 0x50) = iVar14;
        }
        if (*(int *)(*piVar2 + 0x50) == 0) goto joined_r0x1004265c;
        if (*(int *)(*piVar2 + 0xcc) == 0) {
          FUN_1004c3a8(puVar4);
          FUN_1004c408(extraout_x11 & 0xffffffff);
          FUN_1004c308(extraout_x11_00 & 0xffffffff);
          FUN_10007120(extraout_x12 & 0xffffffff,*(undefined4 *)(param_1 + 0x15c),
                       *(undefined4 *)(param_1 + 0x158));
          *(undefined1 *)(extraout_w12 + 0x1f) = 0;
        }
        uVar18 = *puVar3 >> 9 & 1;
        FUN_1004b350(param_1,0);
        if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
          if (uVar18 == 0) {
            if (((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) && (uVar18 = 0, uVar12 != 0)) {
              do {
                (*pcVar21)();
                (*extraout_w11_04)(0,0,uVar19,uVar18,uVar8,*extraout_w8_00,0);
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar12);
            }
          }
          else {
LAB_10042508:
            if ((((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) && ((*puVar3 & 0xfc00) == 0)) &&
               (uVar18 = 0, uVar12 != 0)) {
              do {
                (*pcVar21)();
                (*extraout_w11_05)(0,0,uVar19,uVar18,uVar8,*extraout_w8_01,
                                   *(undefined4 *)(param_1 + 0x178));
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar12);
            }
          }
        }
        else if (uVar18 != 0) goto LAB_10042508;
LAB_100425d8:
        local_140 = local_140 + 1;
        uVar12 = local_fc;
      } while (local_140 < local_fc);
    }
    iVar14 = 1;
    if (local_140 != uVar12) {
joined_r0x1004265c:
      for (; local_130 != 0; local_130 = *(int *)(local_130 + 0x10c)) {
        iVar14 = *(int *)(local_130 + 0x110);
        if (iVar14 != 0) {
          FUN_10042af0(iVar14);
          iVar14 = *(int *)(local_130 + 0x110);
          if (iVar14 != 0) {
            FUN_10041b60(iVar14);
            FUN_10091460(iVar14,0x1e8);
          }
        }
      }
      iVar14 = 0;
    }
    goto LAB_10042a10;
  }
  if (*(int *)(iVar14 + 0x50) == 0) {
    uVar8 = *(undefined4 *)(iVar14 + 0x4c);
    FUN_100395c8(*(undefined4 *)(param_1 + 0xfc),&local_110);
    if (((uVar19 & 0x210) == 0) || ((local_110 == iStack_10c && (local_108 == iStack_104)))) {
      iVar22 = 0;
    }
    else {
      iVar22 = 1;
    }
    if (((uVar19 & 0x22001) == 0) && (iVar22 == 0)) {
      if ((bVar1 || bVar9) || bVar10) {
        uVar16 = 1;
      }
      else {
        uVar18 = *(uint *)(param_1 + 0x158);
        uVar19 = 0;
        uVar12 = *(uint *)(param_1 + 0x15c);
        if (uVar12 < uVar18) {
          uVar12 = uVar18;
        }
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        if (uVar12 != 0) {
          uVar16 = (ulonglong)uVar12;
          do {
            uVar19 = uVar19 + 1;
            uVar16 = uVar16 >> 1;
          } while ((int)uVar16 != 0);
        }
        uVar16 = (ulonglong)uVar19;
      }
      FUN_1004d7d0(param_1 + 0x150);
      pcVar21 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar14 = (*extraout_w11_06)(uVar8,*(uint *)(param_1 + 0x15c),*(uint *)(param_1 + 0x158),
                                  *extraout_w8_02,uVar16 & 0xffffffff);
LAB_100428f8:
      iVar22 = 0;
      if (iVar14 != 0) {
LAB_10042900:
        iVar22 = iVar14;
        if ((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) {
          (*pcVar21)();
          (*extraout_w11_09)(0,0,uVar8,0,0,iVar22,0);
        }
      }
    }
    else {
      uVar13 = FUN_1004d7d0(param_1 + 0x150);
      FUN_1004c7e0(param_1,&local_e0,*(undefined4 *)(param_1 + 0x15c),*extraout_w9,uVar13,&local_110
                   ,iVar22);
      uVar16 = (ulonglong)local_e0._4_4_;
      *(uint *)(iVar14 + 200) = *(uint *)(iVar14 + 200) & 0xfffffffe | uStack_d8._4_1_ & 1;
      if ((bVar1 || bVar9) || bVar10) {
        uVar20 = 1;
      }
      else {
        if ((uint)local_e0 < local_e0._4_4_) {
          local_e0._0_4_ = local_e0._4_4_;
        }
        uVar19 = 0;
        if ((uint)local_e0 == 0) {
          local_e0._0_4_ = 1;
        }
        if ((uint)local_e0 != 0) {
          uVar20 = (ulonglong)(uint)local_e0;
          do {
            uVar19 = uVar19 + 1;
            uVar20 = uVar20 >> 1;
          } while ((int)uVar20 != 0);
        }
        uVar20 = (ulonglong)uVar19;
      }
      FUN_1004d7d0(param_1 + 0x150);
      pcVar21 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar14 = (*extraout_w11_07)(uVar8,extraout_x1_00 & 0xffffffff,uVar16 & 0xffffffff,
                                  *(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x158),
                                  uStack_d8 & 0xffffffff,*extraout_w8_03,uVar20 & 0xffffffff,uVar13)
      ;
      if (iVar22 == 0) goto LAB_100428f8;
      iVar22 = 0;
      if (iVar14 != 0) {
        (*pcVar21)();
        (*extraout_w11_08)(iVar14);
        goto LAB_10042900;
      }
    }
    *(int *)(*piVar2 + 0x50) = iVar22;
  }
  if (*(int *)(*piVar2 + 0x50) == 0) {
    iVar14 = 0;
  }
  else {
    if (*(int *)(*piVar2 + 0xcc) == 0) {
      FUN_1004c408(param_1 + 0x150);
      FUN_1004c3a8(extraout_x11_01 & 0xffffffff);
      FUN_1004c308(extraout_x11_02 & 0xffffffff);
      FUN_10007120(extraout_x12_00 & 0xffffffff,*(undefined4 *)(param_1 + 0x15c),
                   *(undefined4 *)(param_1 + 0x158));
      *(undefined1 *)(extraout_w12_00 + 0x1f) = 0;
    }
    FUN_1004b350(param_1,0);
    iVar14 = 1;
  }
LAB_10042a10:
  if (*(int *)(*piVar2 + 0xcc) == 0) {
    FUN_1004d138(param_1);
    FUN_1004c0a8(param_1);
  }
  if ((*local_f0 >> 9 & 1) != 0) {
    iVar22 = *(int *)(param_1 + 0xfc);
    if (((*(uint *)(iVar22 + 0x104) >> 4 & 1) == 0) &&
       (uVar16 = FUN_10005fb0(iVar22 + 0x10), (uVar16 & 1) == 0)) {
      iVar22 = *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228;
      uStack_d8 = *(undefined8 *)(iVar22 + 0x100be318);
      local_e0 = *(undefined8 *)(&DAT_100be310 + iVar22);
      FUN_100475d0(param_1,&local_110,param_1,&local_e0);
    }
  }
  if (iVar14 != 0) {
    *(int *)(*piVar2 + 0xcc) = *(int *)(*piVar2 + 0xcc) + 1;
  }
  return iVar14;
}

