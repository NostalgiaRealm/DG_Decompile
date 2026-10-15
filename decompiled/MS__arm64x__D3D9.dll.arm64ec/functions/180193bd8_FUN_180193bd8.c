/*
 * FUN_180193bd8 at 180193bd8
 * undefined FUN_180193bd8(void)
 * Address ranges: 180193bd8-18019453f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180193bd8(longlong param_1,ulonglong param_2,int param_3,uint param_4,undefined4 param_5,
             longlong param_6,longlong param_7,longlong param_8,int *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  longlong lVar12;
  int iVar13;
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
  code *pcVar14;
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
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined4 local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  uint local_138;
  undefined4 uStack_134;
  uint local_130;
  int iStack_12c;
  longlong local_128;
  uint local_120;
  longlong local_118;
  uint local_110;
  uint local_108;
  uint uStack_104;
  undefined4 local_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  local_128 = param_1 + 0x1c000;
  local_140 = CONCAT44(local_140._4_4_,param_5);
  uVar16 = (uint)param_2;
  FUN_180202728(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = *(uint *)(param_8 + 0x3c);
  uVar3 = *(uint *)(param_8 + 0x40);
  uStack_148 = *(undefined8 *)(param_8 + 0x34);
  local_150 = *(ulonglong *)(param_8 + 0x2c);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  local_138 = (*extraout_x11)(param_7,param_4);
  (*(code *)puVar6)(0x180224000);
  local_130 = (*extraout_x11_00)(param_7,param_4);
  (*(code *)puVar6)(0x180224000);
  uVar8 = (*extraout_x11_01)(param_6,param_2 & 0xffffffff);
  (*(code *)puVar6)(0x180224000);
  uStack_e4 = (*extraout_x11_02)(param_6,param_2 & 0xffffffff);
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = local_138;
  uStack_d4 = local_130;
  local_e8 = uVar8;
  if ((*(char *)(param_8 + 0x4d) == '\0') && (*(char *)(param_8 + 0x4c) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    thunk_FUN_180223c34(&local_150,&local_150,&local_f0);
  }
  thunk_FUN_180223c5c(&local_150,uVar2 - *(int *)(param_8 + 0x2c),uVar3 - *(int *)(param_8 + 0x30));
  if (bVar5) {
    thunk_FUN_180223c34(&local_150,&local_150,&local_e0);
  }
  thunk_FUN_180223c5c(&local_150,*(int *)(param_8 + 0x2c) - uVar2,*(int *)(param_8 + 0x30) - uVar3);
  iStack_fc = ((int)uStack_148 - (int)local_150) + uVar2;
  local_100 = 0;
  local_f8 = (uStack_148._4_4_ - local_150._4_4_) + uVar3;
  uStack_f4 = 1;
  iVar4 = uVar16 + *(int *)(param_6 + 0x3c) * param_3;
  local_108 = uVar2;
  uStack_104 = uVar3;
  if ((*(int *)(*(longlong *)(local_128 + 0xf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 +
               0x6cc) == 0xa000) && (*(int *)(param_7 + 0x44) - 3U < 3)) {
    (*(code *)puVar6)(0x180224000);
    cVar7 = (*extraout_x11_03)(param_6);
    if (cVar7 == '\0') goto LAB_180193ee8;
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_04)(param_7,param_2 & 0xffffffff,param_3,0);
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_05)(param_6,param_2 & 0xffffffff,param_3,0);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_d0 = (float)(int)local_150;
    local_70 = 0;
    uStack_68 = 0;
    fStack_cc = (float)local_150._4_4_;
    uStack_134 = (int)local_140;
    local_c8 = (float)(int)uStack_148;
    fStack_c4 = (float)uStack_148._4_4_;
    local_c0 = (float)uVar2;
    fStack_bc = (float)uVar3;
    local_b8 = (float)(((int)uStack_148 - (int)local_150) + uVar2);
    fStack_b4 = (float)((uStack_148._4_4_ - local_150._4_4_) + uVar3);
    uStack_a8 = CONCAT44((int)local_140,param_4);
    local_b0 = CONCAT44(param_3,uVar16);
    local_138 = param_4;
    local_130 = uVar16;
    iStack_12c = param_3;
    local_168 = FUN_180193a10(param_1,&local_d0,param_6,param_7);
    goto LAB_180193ecc;
  }
LAB_180193ee8:
  local_168 = 1;
  (*(code *)puVar6)(0x180224000);
  cVar7 = (*extraout_x11_07)(param_7);
  if (cVar7 != '\0') {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_08)(param_7,param_4,local_140 & 0xffffffff);
  }
  (*(code *)puVar6)(0x180224000);
  cVar7 = (*extraout_x11_09)(param_6);
  if (cVar7 != '\0') {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_10)(param_6,param_2 & 0xffffffff,param_3,0);
  }
  uVar2 = param_4 + *(int *)(param_7 + 0x3c) * (int)local_140;
  iVar9 = *(int *)(param_8 + 0x18);
  if (iVar9 == 0) {
    iVar9 = thunk_FUN_180223c34(auStack_60,
                                *(longlong *)(param_7 + 0x90) + (ulonglong)uVar2 * 0x28 + 0x18,
                                param_10);
    if (iVar9 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_17)(param_7,param_4,local_140 & 0xffffffff);
    }
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_18)(param_6,param_2 & 0xffffffff,param_3);
    local_138 = *(uint *)(&DAT_18022e050 + (ulonglong)*(uint *)(param_7 + 0x2c) * 4);
    local_130 = local_138;
    if (((local_138 < 8) || (0x20 < param_10[2] - *param_10)) || (0x20 < param_10[3] - param_10[1]))
    {
      uVar10 = *(undefined8 *)(param_8 + 8);
      if (*(char *)(param_8 + 0x51) == '\0') {
        uVar11 = (*(code *)puVar6)(0x180225000,*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 8)
                                   ,extraout_x1,uVar10);
        (*extraout_x11_24)(uVar11,*(undefined8 *)(param_6 + 0xb8),iVar4,*param_9,param_9[1],0,uVar10
                           ,uVar2,&local_108);
      }
      else {
        uVar10 = (*(code *)puVar6)(0x180224000);
        (*extraout_x11_23)(uVar10,*(undefined8 *)(param_6 + 0xb8));
      }
    }
    else {
      local_140 = param_1 + 0x1c000;
      uVar10 = (*(code *)puVar6)(0x180224000);
      iVar9 = (*extraout_x11_19)(uVar10,*(undefined8 *)(param_8 + 8),uVar2,1,0,&local_128);
      if (-1 < iVar9) {
        uVar10 = (*(code *)puVar6)(0x180224000);
        iVar9 = (*extraout_x11_20)(uVar10,*(undefined8 *)(param_8 + 0x10),iVar4,2,0,&local_118);
        if (-1 < iVar9) {
          iVar9 = param_10[1];
          if (local_130 == 0x10) {
            lVar12 = local_128 + (ulonglong)(iVar9 * local_120);
            local_118 = local_118 + (ulonglong)(param_9[1] * local_110);
            iVar15 = 0;
            if (0 < param_10[3] - iVar9) {
              do {
                iVar9 = *param_10;
                if (0 < param_10[2] - iVar9) {
                  iVar13 = 0;
                  do {
                    iVar9 = iVar9 + iVar13;
                    iVar1 = *param_9 + iVar13;
                    iVar13 = iVar13 + 1;
                    *(undefined2 *)(local_118 + (longlong)iVar1 * 2) =
                         *(undefined2 *)(lVar12 + (longlong)iVar9 * 2);
                    iVar9 = *param_10;
                  } while (iVar13 < param_10[2] - iVar9);
                }
                iVar15 = iVar15 + 1;
                lVar12 = lVar12 + (ulonglong)local_120;
                local_118 = local_118 + (ulonglong)local_110;
              } while (iVar15 < param_10[3] - param_10[1]);
            }
          }
          else {
            lVar12 = local_128 + (ulonglong)(iVar9 * local_120);
            local_118 = local_118 + (ulonglong)(param_9[1] * local_110);
            iVar15 = 0;
            if (0 < param_10[3] - iVar9) {
              do {
                if (local_138 == 8) {
                  iVar9 = *param_10;
                  if (0 < param_10[2] - iVar9) {
                    iVar13 = 0;
                    do {
                      iVar9 = iVar9 + iVar13;
                      iVar1 = *param_9 + iVar13;
                      iVar13 = iVar13 + 1;
                      *(undefined1 *)(local_118 + iVar1) = *(undefined1 *)(lVar12 + iVar9);
                      iVar9 = *param_10;
                    } while (iVar13 < param_10[2] - iVar9);
                  }
                }
                else if (((local_138 - 0x18 & 0xfffffff7) == 0) &&
                        (iVar9 = *param_10, 0 < param_10[2] - iVar9)) {
                  iVar13 = 0;
                  do {
                    iVar9 = iVar9 + iVar13;
                    iVar1 = *param_9 + iVar13;
                    iVar13 = iVar13 + 1;
                    *(undefined4 *)(local_118 + (longlong)iVar1 * 4) =
                         *(undefined4 *)(lVar12 + (longlong)iVar9 * 4);
                    iVar9 = *param_10;
                  } while (iVar13 < param_10[2] - iVar9);
                }
                iVar15 = iVar15 + 1;
                lVar12 = lVar12 + (ulonglong)local_120;
                local_118 = local_118 + (ulonglong)local_110;
              } while (iVar15 < param_10[3] - param_10[1]);
            }
          }
          uVar10 = (*(code *)puVar6)(0x180224000);
          (*extraout_x11_21)(uVar10,*(undefined8 *)(param_8 + 0x10),iVar4);
        }
        uVar10 = (*(code *)puVar6)(0x180224000);
        (*extraout_x11_22)(uVar10,*(undefined8 *)(param_8 + 8),uVar2);
      }
    }
    (*(code *)puVar6)(0x180224000);
    pcVar14 = extraout_x11_25;
  }
  else {
    if (iVar9 == 1) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_13)(param_6,param_2 & 0xffffffff,param_3,0);
LAB_18019405c:
      if (*(char *)(param_8 + 0x51) == '\0') {
        uVar10 = (*(code *)puVar6)(0x180225000);
        (*extraout_x11_16)(uVar10,*(undefined8 *)(param_8 + 0x10),iVar4,local_150 & 0xffffffff,
                           local_150._4_4_,0,*(undefined8 *)(param_8 + 8),uVar2,&local_108);
      }
      else {
        if ((*(uint *)(param_8 + 0x24) < 2) || (*(int *)(param_8 + 0x28) != 1)) {
          uVar10 = (*(code *)puVar6)(0x180224000);
          auVar17._8_8_ = *(undefined8 *)(param_8 + 0x10);
          auVar17._0_8_ = uVar10;
          pcVar14 = extraout_x11_15;
          goto LAB_180193ff8;
        }
        if (0xd < *(uint *)(param_6 + 0x2c)) {
          FUN_1801bad48(auStack_60);
        }
        uVar10 = (*(code *)puVar6)(0x180225000);
        (*extraout_x11_14)(uVar10,*(undefined8 *)(param_8 + 0x10),iVar4,*(undefined8 *)(param_8 + 8)
                           ,uVar2);
      }
    }
    else {
      if (iVar9 != 2) {
        if (iVar9 != 3) goto LAB_180194510;
        goto LAB_18019405c;
      }
      uVar10 = *(undefined8 *)(param_7 + 0xb8);
      if (*(char *)(param_8 + 0x51) == '\0') {
        auVar17 = (*(code *)puVar6)(0x180225000,
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 8),
                                    *(undefined8 *)(param_6 + 0x78),uVar10);
        (*extraout_x11_12)(auVar17._0_8_,auVar17._8_8_,iVar4,local_150 & 0xffffffff,local_150._4_4_,
                           0,uVar10,uVar2,&local_108);
        goto LAB_180193ecc;
      }
      auVar17 = (*(code *)puVar6)(0x180224000);
      pcVar14 = extraout_x11_11;
LAB_180193ff8:
      (*pcVar14)(auVar17._0_8_,auVar17._8_8_);
    }
LAB_180193ecc:
    (*(code *)puVar6)(0x180224000);
    pcVar14 = extraout_x11_06;
  }
  (*pcVar14)(param_6,iVar4,param_9);
LAB_180194510:
  thunk_FUN_18022370c(*(longlong *)(param_1 + 0x1cf10) + 0x620);
  return local_168;
}

