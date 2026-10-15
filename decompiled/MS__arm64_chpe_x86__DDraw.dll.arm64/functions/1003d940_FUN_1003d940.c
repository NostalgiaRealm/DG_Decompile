/*
 * FUN_1003d940 at 1003d940
 * undefined FUN_1003d940(void)
 * Address ranges: 1003d940-1003e91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff14 : 0x1003e024 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_1003d940(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 *param_5,
                int param_6,undefined4 *param_7,int *param_8,undefined4 param_9,undefined4 param_10,
                char param_11,undefined4 param_12,char param_13)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  code *pcVar23;
  uint uVar24;
  uint uVar25;
  code *extraout_w11;
  int extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  uint uVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  int local_160;
  undefined *local_148;
  undefined4 *local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  char local_130;
  undefined1 local_12f;
  int local_12c;
  undefined1 local_128;
  int local_120;
  int local_11c;
  code *local_118;
  code *local_114;
  code *local_110;
  code *local_10c;
  uint *local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 *local_fc;
  undefined4 local_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  int *local_70;
  uint uStack_68;
  uint local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_e0 = 0;
  uStack_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  local_78 = 0;
  local_f0 = *(undefined4 *)param_5;
  uVar15 = *(uint *)((int)param_5 + 4);
  local_80 = param_5[0xe];
  uVar18 = param_5[0xd];
  if ((uVar15 >> 1 & 1) == 0) {
    uStack_e8._0_4_ = 0;
    uVar25 = (uint)uStack_e8;
  }
  else {
    uStack_e8 = (ulonglong)*(uint *)(param_5 + 1);
    uVar25 = *(uint *)(param_5 + 1);
  }
  if ((uVar15 >> 2 & 1) == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(uint *)((int)param_5 + 0xc);
    uStack_e8 = CONCAT44(uVar24,(uint)uStack_e8);
  }
  if ((uVar15 >> 3 & 1) == 0) {
    local_e0._0_4_ = 0;
    uVar10 = (uint)local_e0;
  }
  else {
    local_e0 = (ulonglong)*(uint *)(param_5 + 2);
    uVar10 = *(uint *)(param_5 + 2);
  }
  if ((uVar15 >> 0xb & 1) != 0) {
    local_d0 = (ulonglong)*(uint *)((int)param_5 + 0x24) << 0x20;
  }
  if ((uVar15 >> 5 & 1) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)((int)param_5 + 0x14);
    local_e0 = CONCAT44(iVar11,(uint)local_e0);
  }
  if ((uVar15 >> 6 & 1) != 0) {
    local_d8 = (ulonglong)*(uint *)(param_5 + 3);
  }
  if ((uVar15 >> 7 & 1) != 0) {
    local_d8 = CONCAT44(*(undefined4 *)((int)param_5 + 0x1c),(int)local_d8);
  }
  if ((uVar15 >> 0xc & 1) == 0) {
    iVar12 = 0;
    uVar21 = 0;
LAB_1003dac4:
    local_90 = 0;
    uStack_98 = 0;
    uVar20 = 0;
  }
  else {
    iVar12 = *(int *)(param_5 + 9);
    uVar21 = *(uint *)((int)param_5 + 0x4c);
    uStack_a8 = param_5[9];
    if ((uVar21 >> 2 & 1) != 0) {
      uStack_a0 = (ulonglong)*(uint *)(param_5 + 10);
      goto LAB_1003dac4;
    }
    uVar20 = *(uint *)((int)param_5 + 0x54);
    uStack_a0 = (ulonglong)uVar20 << 0x20;
    uStack_98 = param_5[0xb];
    local_90 = param_5[0xc];
  }
  if ((uVar15 >> 0xd & 1) != 0) {
    uStack_c8 = param_5[5];
  }
  if ((uVar15 >> 0xe & 1) != 0) {
    local_c0 = param_5[6];
  }
  if ((uVar15 >> 0xf & 1) != 0) {
    local_b8 = param_5[7];
  }
  if ((uVar15 >> 0x10 & 1) != 0) {
    local_b0 = param_5[8];
  }
  puVar1 = param_5 + 3;
  if ((uVar15 >> 0x11 & 1) != 0) {
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)puVar1);
  }
  if ((uVar15 >> 0x12 & 1) != 0) {
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)puVar1);
  }
  if ((uVar15 >> 0x13 & 1) != 0) {
    uVar10 = *(uint *)(param_5 + 2);
    local_e0 = CONCAT44(local_e0._4_4_,uVar10);
  }
  if ((uVar15 >> 0x14 & 1) != 0) {
    local_78 = *(undefined4 *)(param_5 + 0xf);
  }
  if ((uVar15 >> 0x15 & 1) != 0) {
    iVar12 = *(int *)(param_5 + 9);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar12);
  }
  if ((uVar15 >> 0x16 & 1) != 0) {
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)puVar1);
  }
  uVar22 = (uint)uVar18;
  uVar19 = uVar18 & 0xffffffff;
  uVar7 = uVar15 | 1;
  local_128 = 0;
  local_134 = (uint)(uVar18 >> 0x20);
  local_140 = uVar22 & 0x30004800;
  local_138 = uVar15 & 0x80808;
  local_13c = 0;
  piVar2 = (int *)(param_1 + 0x11c);
  uVar8 = uVar22 >> 9 & 1;
  iVar13 = *piVar2;
  iVar29 = -1;
  local_12c = -1;
  iVar30 = iVar13 * 0xa4;
  iVar28 = iVar13 * 0xa4;
  local_148 = &DAT_100bbc60 + iVar28;
  local_144 = &local_f0;
  local_130 = param_11;
  local_12f = param_2 == 0;
  local_11c = param_2;
  local_108 = (uint *)param_8;
  local_104 = param_3;
  local_100 = param_4;
  local_fc = param_7;
  if (uVar8 != 0) {
    if ((uVar22 & 0x18) != 0x18 && (uVar18 & 0x18) != 0) {
      return -0x7789ff9c;
    }
    if (((uVar18 & 0x4000020) != 0) && (param_11 == '\0')) {
      return -0x7789ff9c;
    }
    uVar25 = uVar15 & 0x20;
    if (((uVar25 == 0) || (iVar11 == 0)) || ((uVar22 >> 5 & 1) != 0)) {
      if (uVar25 != 0) {
        return -0x7ff8ffa9;
      }
      if ((uVar18 & 0x18) != 0) {
        return -0x7ff8ffa9;
      }
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      return -0x7789fdcc;
    }
    if (((*(uint *)(param_1 + 0x104) >> 4 & 1) == 0) && ((uVar18 & 0x38) != 0)) {
      return -0x7789ff1f;
    }
    if ((uVar15 & 0x180e) != 0) {
      return -0x7ff8ffa9;
    }
    if ((uVar18 & 0xfffffeff00000000) != 0) {
      return -0x7ff8ffa9;
    }
    uStack_ec = uVar25 | 0x1007;
    uStack_e8 = *(ulonglong *)(&DAT_100bbc68 + iVar28);
    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(&DAT_100bbc78 + iVar28));
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(&DAT_100bbc70 + iVar28));
    uStack_a0 = *(ulonglong *)(&DAT_100bbcb0 + iVar28);
    uStack_a8 = *(undefined8 *)(&DAT_100bbca8 + iVar28);
    local_90 = *(undefined8 *)(&DAT_100bbcc0 + iVar28);
    uStack_98 = *(undefined8 *)(&DAT_100bbcb8 + iVar28);
    uVar15 = 0x800;
    if (*(char *)(param_1 + 0x14c) == '\0') {
      uVar15 = 0x10004000;
    }
    uVar15 = uVar15 | uVar22 | *(uint *)(&DAT_100bbcc8 + iVar28);
    if ((*(uint *)(&DAT_100bbcc8 + iVar28) >> 0x15 & 1) != 0) {
      uVar15 = uVar15 | 0x200000;
    }
    uStack_88 = CONCAT44(local_134,uVar15);
    local_12c = FUN_1004cd40(param_1,&local_f0);
    iVar29 = local_12c;
    uVar7 = uStack_ec;
    if (local_12c == -1) {
      local_160 = -0x7789ff6f;
    }
    else {
      uVar15 = 0;
      local_160 = 0;
      param_6 = *(int *)(&DAT_100be324 + *piVar2 * 0x228);
      if (DAT_100c2940 != 0) {
        local_160 = 0;
        do {
          iVar29 = local_12c;
          uVar7 = uStack_ec;
          if (param_6 != 0) break;
          uVar16 = (*pcVar9)();
          uVar17 = (*extraout_w11)(uVar16);
          if ((int)uVar17 == *piVar2) {
            iVar11 = *(int *)(*(int *)(DAT_100c2950 + uVar15 * 4) + 0xf4);
            if (iVar11 != 0) {
              local_60 = 0;
              uStack_68 = (uint)*(ushort *)(iVar11 + 0x148);
              local_64 = (uint)*(ushort *)(iVar11 + 0x14a);
              uStack_54 = (uint)*(ushort *)(iVar11 + 0x14c);
              uStack_58 = 0;
              local_50 = (uint)*(ushort *)(iVar11 + 0x14e);
              uVar18 = FUN_10003b00(uVar17,*piVar2,&uStack_68);
              if ((uVar18 & 1) != 0) {
                param_6 = *(int *)(extraout_w11_00 + 4);
                goto LAB_1003de30;
              }
            }
            param_6 = 0;
          }
LAB_1003de30:
          uVar15 = uVar15 + 1;
          iVar29 = local_12c;
          uVar7 = uStack_ec;
        } while (uVar15 < DAT_100c2940);
      }
    }
    goto LAB_1003e274;
  }
  if ((uVar18 & 0x30004800) == 0) {
    if (((*(char *)(param_1 + 0x14c) == '\0') && (local_138 == 0)) &&
       (((uVar22 >> 0xc & 1) == 0 || ((local_134 >> 4 & 1) == 0)))) {
      uVar26 = 0x10004000;
    }
    else {
      uVar26 = 0x800;
    }
    uVar22 = uVar26 | uVar22;
LAB_1003debc:
    uVar19 = (ulonglong)uVar22;
    uStack_88 = CONCAT44(local_134,uVar22);
  }
  else {
    uStack_88 = uVar18;
    if (local_140 != 0x800) {
      if (local_140 == 0x4000) {
        uVar22 = uVar22 | 0x10004000;
        goto LAB_1003debc;
      }
      if ((local_140 + 0xefffc000 & 0xefffffff) != 0) {
        return -0x7789ff9c;
      }
    }
  }
  if ((*(char *)(param_1 + 0x14c) != '\0') && ((uVar18 & 0x30004000) != 0)) {
    return -0x7789ff9c;
  }
  uVar22 = (uint)uVar19;
  local_13c = uVar22 & 0x30004000;
  if ((uVar19 & 0x21000) == 0) {
    local_160 = -0x7ff8ffa9;
    if (((((uVar15 & 0x20026) != 6) || (local_160 = -0x7789ff9c, (uVar19 & 0x4000020) != 0)) ||
        (((uVar22 & 0x200800) == 0x200000 &&
         (((uVar19 & 0x24) == 0 || ((*(uint *)(&DAT_100bbcc8 + iVar30) >> 0x15 & 1) == 0)))))) ||
       (((uVar22 >> 2 & 1) != 0 && (param_11 == '\0')))) goto LAB_1003e274;
    local_160 = -0x7ff8ffa9;
    if ((uVar24 == 0) && (uVar25 == 0)) {
      uVar24 = *(uint *)(&DAT_100bbc6c + iVar30);
      uVar25 = *(uint *)(&DAT_100bbc68 + iVar28);
      uStack_e8 = CONCAT44(uVar24,uVar25);
    }
    if (((uVar24 == 0) || ((0x4000 < uVar24 || uVar25 == 0) || 0x4000 < uVar25)) ||
       ((uVar15 & 0x20000) != 0)) goto LAB_1003e274;
    uStack_ec = uVar7;
    if ((uVar15 & 0x1000) == 0) {
      uStack_ec = uVar15 | 0x1001;
      uStack_a0 = *(ulonglong *)(&DAT_100bbcb0 + iVar30);
      uStack_a8 = *(undefined8 *)(&DAT_100bbca8 + iVar30);
      uVar20 = (uint)(uStack_a0 >> 0x20);
      uVar21 = (uint)((ulonglong)uStack_a8 >> 0x20);
      local_90 = *(undefined8 *)(&DAT_100bbcc0 + iVar13 * 0xa4);
      uStack_98 = *(undefined8 *)(&DAT_100bbcb8 + iVar13 * 0xa4);
    }
    uVar15 = 0;
    if ((uVar21 >> 6 & 1) != 0) {
      uVar15 = uVar20 * uVar24 >> 3;
    }
    if ((local_138 != 0) &&
       ((uVar7 = uStack_ec, (local_138 - 8 & 0xfffff7ff) != 0 ||
        (((uVar19 & 0x30004000) != 0 && ((local_138 != 8 || (uVar15 != uVar10 && uVar10 != 0))))))))
    goto LAB_1003e274;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,0x20);
    auVar31 = FUN_1004cd40(param_1,&local_f0);
    puVar27 = local_144;
    iVar29 = auVar31._0_4_;
    local_12c = iVar29;
    if (iVar29 == -1) {
      local_160 = -0x7789ff6f;
      iVar11 = FUN_1004d0c8(auVar31._0_8_,auVar31._8_8_,local_144);
      uVar7 = uStack_ec;
      if (iVar11 == -1) goto LAB_1003e274;
      if (local_140 == 0) {
        puVar27[0x1a] = puVar27[0x1a] & 0xcfffb7ff;
        local_144[0x1a] = local_144[0x1a] | 0x800;
        local_13c = 0;
        puVar27 = local_144;
        iVar29 = local_12c;
      }
      if (local_13c == 0) {
        puVar27[0x1a] = puVar27[0x1a] | 0x800;
        local_128 = 1;
        iVar29 = iVar11;
        local_12c = iVar11;
      }
    }
  }
  else {
    if ((uVar22 & 0x21040) == 0x1000) {
      uStack_ec = uVar7;
      local_160 = FUN_1003e960(param_1,&local_148);
      iVar29 = local_12c;
      uVar7 = uStack_ec;
      goto LAB_1003e274;
    }
    if ((uVar22 & 0x21040) != 0x20000) {
      return -0x7789ff9c;
    }
    local_160 = -0x7ff8ffa9;
    if ((((uVar15 & 0x20027 | 1) != 7) || (uVar24 == 0)) ||
       ((0x4000 < uVar24 || uVar25 == 0) || 0x4000 < uVar25)) goto LAB_1003e274;
    if ((uVar15 & 0x1000) == 0) {
      if (((uVar15 & 0x40) == 0) || (!(bool)local_12f)) goto LAB_1003e274;
      uStack_a0 = 0;
      local_90 = 0;
      uStack_98 = 0;
      uStack_a8 = 0x20;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_a8._4_4_ = 0x400;
      uStack_ec = uStack_ec | 0x1000;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_a0._4_4_ = (int)local_d8;
      if ((int)local_d8 == 0x20) {
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_a0._4_4_ = 0x18;
      }
      local_12c = FUN_1004cfa8(param_1,local_144,1);
    }
    else {
      iVar11 = 0x20;
      if (iVar12 != 0) {
        iVar11 = iVar12;
      }
      uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar11);
      local_160 = -0x7789ff6f;
      uStack_ec = uVar7;
      local_12c = FUN_1004cfa8(param_1,&local_f0,0);
      if (((local_12c == -1) && (local_12c = FUN_1004cfa8(param_1,local_144,1), local_12c != -1)) &&
         (FUN_10038b50(param_1,&uStack_68,local_12c), ((local_144[0x13] ^ local_64) & 0x4400) != 0))
      {
        local_12c = -1;
      }
    }
    iVar29 = local_12c;
    if (local_12c == 0x18) {
      if (local_144[0x15] != 0x18) goto LAB_1003e268;
      local_128 = 1;
    }
    uVar7 = uStack_ec;
    if (local_12c == -1) goto LAB_1003e274;
  }
LAB_1003e268:
  local_160 = 0;
  uVar7 = uStack_ec;
LAB_1003e274:
  uStack_ec = uVar7;
  if (-1 < local_160) {
    if (param_13 == '\0') {
      local_160 = -0x7789fe84;
      if (((param_6 == 0) && (*(char *)(param_1 + 0x14c) == '\0')) &&
         (uVar18 = FUN_1004d750(&local_f0), (uVar18 & 1) != 0)) {
        uVar18 = FUN_10038de8(&local_f0);
        uVar18 = uVar18 & 0xffffffff;
      }
      else {
        uVar18 = 0;
      }
      if (uVar18 <= *(ulonglong *)(&DAT_100be348 + *piVar2 * 0x228)) {
        piVar3 = (int *)(param_1 + 0x124);
        local_160 = -0x7ff8fff2;
        iVar11 = FUN_100348d8(local_11c,local_104,param_6,*(undefined4 *)(param_1 + 0x118),param_1,0
                              ,&DAT_100be2cc + *piVar2 * 0x45,&local_f0,iVar29);
        if (iVar11 != 0) {
          iVar12 = FUN_1004b308(iVar11);
          uVar16 = local_100;
          *piVar3 = iVar12 + *piVar3;
          uVar19 = FUN_10041d38(iVar11,local_100);
          if ((uVar19 & 1) != 0) {
            (*pcVar9)();
            iVar12 = (*extraout_w11_01)(iVar11,uVar16,local_fc,0);
            if (iVar12 == 0) {
              iVar12 = iVar11;
              if (((uint)local_144[0x1b] >> 9 & 1) != 0) {
                local_110 = (code *)(iVar11 + 0x11c);
                local_10c = (code *)uVar18;
                local_70 = (int *)(iVar11 + 4);
                uVar15 = 1;
                local_120 = iVar11;
                local_118 = (code *)piVar2;
                local_114 = (code *)(param_1 + 0x118);
                do {
                  local_144[0x1b] = local_144[0x1b] & 0xfffe03ff;
                  local_144[0x1b] = *(uint *)(uVar15 * 4 + 0x100b3ce0) & local_134 | local_144[0x1b]
                  ;
                  *piVar3 = *piVar3 + 1;
                  iVar13 = FUN_100348d8(local_11c,local_104,0,*(undefined4 *)local_114,param_1,
                                        *(undefined4 *)(*local_70 + 0x50),
                                        &DAT_100be2cc + *(int *)local_118 * 0x45,local_144,local_12c
                                       );
                  uVar16 = local_100;
                  *(int *)((int)local_110 + uVar15 * 4) = iVar13;
                  iVar12 = local_120;
                  if (iVar13 == 0) {
LAB_1003e7dc:
                    iVar30 = 4;
                    iVar28 = 5;
                    iVar13 = iVar11 + 0x130;
                    do {
                      if (*(int *)(iVar13 + iVar30) != 0) {
                        uVar16 = (*pcVar9)();
                        (*extraout_w11_07)(uVar16);
                        *(undefined4 *)(iVar12 + iVar30 + 0x130) = 0;
                        *(undefined4 *)(iVar12 + iVar30 + 0x11c) = 0;
                      }
                      iVar30 = iVar30 + 4;
                      iVar28 = iVar28 + -1;
                      iVar11 = iVar12;
                    } while (iVar28 != 0);
                    goto LAB_1003e83c;
                  }
                  iVar30 = iVar11 + uVar15 * 4;
                  *(int *)(iVar13 + 0x10c) = iVar11;
                  piVar4 = (int *)(iVar30 + 0x11c);
                  auVar31 = FUN_10041d38(*piVar4,local_100);
                  iVar12 = local_120;
                  if ((auVar31._0_8_ & 1) == 0) {
LAB_1003e7b0:
                    iVar13 = *piVar4;
                    if (iVar13 != 0) {
                      FUN_10041b60(iVar13);
                      FUN_10091460(iVar13,0x1e8);
                    }
                    *piVar4 = 0;
                    goto LAB_1003e7dc;
                  }
                  uVar14 = (*pcVar9)(*piVar4,auVar31._8_8_,iVar30 + 0x130);
                  iVar13 = (*extraout_w11_02)(uVar14,uVar16);
                  iVar12 = local_120;
                  if (iVar13 != 0) {
                    FUN_10042af0(*piVar4);
                    goto LAB_1003e7b0;
                  }
                  if (((uint)local_144[0x1b] >> 9 & 1) != 0) {
                    *piVar3 = local_144[6] + *piVar3 + -1;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < 6);
                uVar18 = ZEXT48(local_10c);
              }
              piVar3 = (int *)(param_1 + 0x128);
              puVar5 = (uint *)(param_1 + 0x130);
              puVar6 = (uint *)(param_1 + 300);
              uVar15 = *puVar5;
              if (*puVar6 == uVar15) {
                uVar25 = uVar15 << 1;
                if (uVar15 == 0) {
                  uVar25 = 0x10;
                }
                iVar13 = uVar25 * 4;
                if (uVar25 >> 0x1e != 0) {
                  iVar13 = -1;
                }
                iVar13 = FUN_100914b0(iVar13);
                puVar27 = local_fc;
                if (iVar13 == 0) {
                  uVar16 = (*pcVar9)();
                  (*extraout_w11_08)(uVar16);
                  *puVar27 = 0;
                  return -0x7ff8fff2;
                }
                FUN_100917a0(iVar13,*piVar3,((ulonglong)*puVar5 & 0x3fffffff) << 2);
                FUN_100914d0(*piVar3);
                *piVar3 = iVar13;
                *puVar5 = uVar25;
              }
              *(int *)(*piVar3 + *puVar6 * 4) = iVar12;
              *puVar6 = *puVar6 + 1;
              if (((uint)uStack_88 >> 9 & 1) != 0) {
                *(int *)(param_1 + 0xf4) = iVar12;
              }
              *(ulonglong *)(&DAT_100be348 + *piVar2 * 0x228) =
                   *(longlong *)(&DAT_100be348 + *piVar2 * 0x228) - uVar18;
              if ((char)uVar8 != '\0') {
                *(undefined4 *)(&DAT_100be324 + *piVar2 * 0x228) = *(undefined4 *)(iVar12 + 4);
              }
              if (local_108 != (uint *)0x0) {
                *local_108 = iVar12;
              }
              (*pcVar9)();
              iVar13 = (*extraout_w11_03)(iVar12);
              uVar16 = DAT_100be0c0;
              if ((*(uint *)(iVar13 + 0x68) & 0x21040) != 0x1000) {
                return 0;
              }
              (*pcVar9)();
              uVar15 = (*extraout_w11_04)(uVar16,&DAT_100b17c0);
              if (uVar15 == 0) {
                return 0;
              }
              (*pcVar9)();
              iVar12 = (*extraout_w11_05)(iVar12);
              if ((*(uint *)(iVar12 + 0x68) & 0x2001) != 0) {
                return 0;
              }
              uVar25 = 0;
              if (uVar15 == 0) {
                return 0;
              }
              local_108 = (uint *)(iVar12 + 0x6c);
              local_118 = pcVar9;
              local_114 = FUN_100a9630;
              local_110 = pcVar9;
              local_10c = FUN_100a9630;
              do {
                (*pcVar9)();
                iVar12 = (*extraout_w11_06)(uVar16,&DAT_100b17c0,uVar25);
                if (iVar12 != 0) {
                  iVar13 = 0;
                  if (param_1 != 0) {
                    iVar13 = param_1 + 0x154;
                  }
                  pcVar23 = local_118;
                  if ((*local_108 >> 9 & 1) != 0) {
                    pcVar23 = local_110;
                  }
                  auVar31 = (*pcVar23)(iVar12,iVar13);
                  (*extraout_w11_09)(auVar31._0_8_ & 0xffffffff,auVar31._8_8_,iVar11 + 0x1e8);
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar15);
              return 0;
            }
LAB_1003e83c:
            FUN_10042af0(iVar11);
          }
          local_160 = -0x7fffbffb;
          FUN_10041b60(iVar11);
          FUN_10091460(iVar11,0x1e8);
        }
      }
    }
    else {
      local_160 = 0;
      param_5[1] = uStack_e8;
      *param_5 = CONCAT44(uStack_ec,local_f0);
      param_5[3] = local_d8;
      param_5[2] = local_e0;
      param_5[5] = uStack_c8;
      param_5[4] = local_d0;
      param_5[7] = local_b8;
      param_5[6] = local_c0;
      param_5[9] = uStack_a8;
      param_5[8] = local_b0;
      param_5[0xb] = uStack_98;
      param_5[10] = uStack_a0;
      param_5[0xd] = uStack_88;
      param_5[0xc] = local_90;
      param_5[0xe] = local_80;
      *(undefined4 *)(param_5 + 0xf) = local_78;
    }
  }
  return local_160;
}

