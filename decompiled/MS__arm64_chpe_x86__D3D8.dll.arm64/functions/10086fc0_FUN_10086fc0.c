/*
 * FUN_10086fc0 at 10086fc0
 * undefined FUN_10086fc0(void)
 * Address ranges: 10086fc0-10087b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10086fc0(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8,int *param_9,undefined4 param_10,int *param_11)

{
  ulonglong *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  undefined4 *extraout_w8_02;
  undefined4 *extraout_w8_03;
  undefined4 *extraout_w8_04;
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
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *pcVar17;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  code *pcVar18;
  int iVar19;
  int iVar20;
  undefined1 local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  int *local_120;
  int iStack_11c;
  int *local_118;
  int *local_114;
  int local_110;
  int local_10c;
  int local_100;
  int local_fc;
  uint local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int *local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int *local_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  FUN_100dcf80(*(int *)(param_1 + 0x1cf00),param_2,param_1);
  pcVar18 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = *(uint *)(param_8 + 0x30);
  uVar5 = *(uint *)(param_8 + 0x34);
  puVar1 = (ulonglong *)(param_8 + 0x20);
  uStack_128 = *(undefined8 *)(param_8 + 0x28);
  local_130 = *puVar1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_114 = (int *)(*extraout_w11)(param_7,param_4);
  (*pcVar18)();
  local_120 = (int *)(*extraout_w11_00)(param_7,param_4);
  (*pcVar18)();
  local_118 = (int *)(*extraout_w11_01)(param_6,param_2);
  (*pcVar18)();
  uStack_cc = (*extraout_w11_02)(param_6,param_2);
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = local_118;
  local_c0 = local_114;
  uStack_bc = local_120;
  if ((*(char *)(param_8 + 0x41) == '\0') && (*(char *)(param_8 + 0x40) == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    (*(code *)PTR_FUN_10134208)(&local_130,&local_130,&local_d8);
  }
  local_120 = (int *)(param_8 + 0x24);
  (*(code *)PTR_FUN_10134234)(&local_130,uVar4 - *(int *)puVar1,uVar5 - *local_120);
  if (bVar8) {
    (*(code *)PTR_FUN_10134208)(&local_130,&local_130,&local_c8);
  }
  (*(code *)PTR_FUN_10134234)(&local_130,*(int *)puVar1 - uVar4,*local_120 - uVar5);
  iStack_e4 = (uVar4 - (int)local_130) + (int)uStack_128;
  local_e8 = 0;
  local_e0 = (uVar5 - local_130._4_4_) + uStack_128._4_4_;
  uStack_dc = 1;
  iVar6 = param_2 + *(int *)(param_6 + 0x2c) * param_3;
  local_f0 = uVar4;
  uStack_ec = uVar5;
  if ((*(int *)(*(int *)(param_1 + 0x1cf00) + *(int *)(param_1 + 0x14) * 0x1510 + 0x520) == 0xa000)
     && (*(int *)(param_7 + 0x34) - 3U < 3)) {
    (*pcVar18)();
    cVar9 = (*extraout_w11_03)(param_6);
    if (cVar9 == '\0') goto LAB_10087340;
    (*pcVar18)();
    (*extraout_w11_04)(param_7,param_2,param_3,0);
    (*pcVar18)();
    (*extraout_w11_05)(param_6,param_2,param_3,0);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = (float)(int)local_130;
    fStack_b4 = (float)local_130._4_4_;
    local_b0 = (float)(int)uStack_128;
    fStack_ac = (float)uStack_128._4_4_;
    fStack_a4 = (float)uVar5;
    local_a8 = (float)uVar4;
    local_a0 = (float)((uVar4 - (int)local_130) + (int)uStack_128);
    local_98 = CONCAT44(param_3,param_2);
    fStack_9c = (float)((uVar5 - local_130._4_4_) + uStack_128._4_4_);
    uStack_90 = CONCAT44(param_5,param_4);
    local_120 = param_4;
    iStack_11c = param_5;
    local_150 = FUN_10086d60(param_1,&local_b8,param_6,param_7);
  }
  else {
LAB_10087340:
    local_150 = 1;
    (*pcVar18)();
    cVar9 = (*extraout_w11_06)(param_7);
    if (cVar9 != '\0') {
      (*pcVar18)();
      (*extraout_w11_07)(param_7,param_4,param_5);
    }
    (*pcVar18)();
    cVar9 = (*extraout_w11_08)(param_6);
    if (cVar9 != '\0') {
      (*pcVar18)();
      (*extraout_w11_09)(param_6,param_2,param_3,0);
    }
    if (3 < *(uint *)(param_8 + 0xc)) goto LAB_10087b48;
    piVar7 = (int *)((int)param_4 + *(int *)(param_7 + 0x2c) * param_5);
    uVar16 = ZEXT48(piVar7);
    switch(*(uint *)(param_8 + 0xc)) {
    case 0:
      iVar10 = (*(code *)PTR_FUN_10134208)
                         (auStack_68,*(int *)(param_7 + 0x60) + (int)piVar7 * 0x1c + 0xc,param_11);
      if (iVar10 != 0) {
        (*pcVar18)();
        (*extraout_w11_10)(param_7,param_4,param_5);
      }
      (*pcVar18)();
      (*extraout_w11_11)(param_6,param_2,param_3);
      uVar4 = *(uint *)(&DAT_1012cda0 + *(int *)(param_7 + 0x1c) * 4);
      if ((uVar4 < 8) || (local_120 = param_11 + 2, 0x20 < *local_120 - *param_11)) {
LAB_10087840:
        puVar14 = (undefined4 *)(param_8 + 4);
        if (*(char *)(param_8 + 0x45) == '\0') {
          piVar13 = param_9 + 1;
          uVar11 = (*pcVar18)();
          (*extraout_w11_17)(uVar11,*extraout_w8_00,iVar6,*param_9,*piVar13,0,*puVar14,piVar7,
                             &local_f0);
        }
        else {
          uVar11 = (*pcVar18)();
          piVar7 = (int *)*puVar14;
          puVar14 = extraout_w8;
          pcVar17 = extraout_w11_16;
LAB_10087888:
          (*pcVar17)(uVar11,*puVar14,piVar7);
        }
      }
      else {
        local_118 = param_11 + 3;
        local_114 = param_11 + 1;
        if (0x20 < *local_118 - *local_114) goto LAB_10087840;
        puVar14 = (undefined4 *)(param_8 + 4);
        uVar11 = (*pcVar18)();
        iVar10 = (*extraout_w11_12)(uVar11,*puVar14,piVar7,1,0,&local_110);
        if (-1 < iVar10) {
          uVar11 = (*pcVar18)();
          iVar10 = (*extraout_w11_13)(uVar11,*(undefined4 *)(param_8 + 8),iVar6,2,0,&local_100);
          if (-1 < iVar10) {
            iVar10 = *local_114;
            if (uVar4 == 0x10) {
              iVar20 = 0;
              local_110 = local_110 + iVar10 * local_10c;
              local_100 = local_100 + local_fc * param_9[1];
              if (0 < *local_118 - iVar10) {
                do {
                  iVar10 = *param_11;
                  if (0 < *local_120 - iVar10) {
                    iVar19 = 0;
                    do {
                      iVar10 = iVar10 + iVar19;
                      iVar3 = *param_9 + iVar19;
                      iVar19 = iVar19 + 1;
                      *(undefined2 *)(local_100 + iVar3 * 2) =
                           *(undefined2 *)(local_110 + iVar10 * 2);
                      iVar10 = *param_11;
                    } while (iVar19 < *local_120 - iVar10);
                  }
                  iVar20 = iVar20 + 1;
                  local_110 = local_10c + local_110;
                  local_100 = local_fc + local_100;
                } while (iVar20 < *local_118 - *local_114);
              }
            }
            else {
              iVar20 = 0;
              local_110 = local_110 + iVar10 * local_10c;
              local_100 = local_100 + local_fc * param_9[1];
              if (0 < *local_118 - iVar10) {
                do {
                  if (uVar4 == 8) {
                    iVar10 = *param_11;
                    if (0 < *local_120 - iVar10) {
                      iVar19 = 0;
                      do {
                        iVar10 = iVar10 + iVar19;
                        iVar3 = *param_9 + iVar19;
                        iVar19 = iVar19 + 1;
                        *(undefined1 *)(iVar3 + local_100) = *(undefined1 *)(iVar10 + local_110);
                        iVar10 = *param_11;
                      } while (iVar19 < *local_120 - iVar10);
                    }
                  }
                  else if (((uVar4 - 0x18 & 0xfffffff7) == 0) &&
                          (iVar10 = *param_11, 0 < *local_120 - iVar10)) {
                    iVar19 = 0;
                    do {
                      iVar10 = iVar10 + iVar19;
                      iVar3 = *param_9 + iVar19;
                      iVar19 = iVar19 + 1;
                      *(undefined4 *)(local_100 + iVar3 * 4) =
                           *(undefined4 *)(local_110 + iVar10 * 4);
                      iVar10 = *param_11;
                    } while (iVar19 < *local_120 - iVar10);
                  }
                  iVar20 = iVar20 + 1;
                  local_110 = local_10c + local_110;
                  local_100 = local_fc + local_100;
                } while (iVar20 < *local_118 - *local_114);
              }
            }
            uVar11 = (*pcVar18)();
            (*extraout_w11_14)(uVar11,*(undefined4 *)(param_8 + 8),iVar6);
          }
          uVar11 = (*pcVar18)();
          pcVar17 = extraout_w11_15;
          goto LAB_10087888;
        }
      }
      (*pcVar18)();
      pcVar18 = extraout_w11_18;
      goto LAB_10087b3c;
    case 1:
      (*pcVar18)();
      (*extraout_w11_21)(param_6,param_2,param_3,0);
    case 3:
      if (*(char *)(param_8 + 0x45) == '\0') {
        puVar14 = (undefined4 *)(param_8 + 4);
        uVar11 = (*pcVar18)();
        (*extraout_w11_24)(uVar11,*extraout_w8_04,iVar6,local_130 & 0xffffffff,local_130._4_4_,0,
                           *puVar14,piVar7,&local_f0);
      }
      else if ((*(uint *)(param_8 + 0x18) < 2) || (*(int *)(param_8 + 0x1c) != 1)) {
        puVar14 = (undefined4 *)(param_8 + 4);
        puVar15 = (undefined4 *)(param_8 + 8);
        uVar12 = (*pcVar18)();
        uVar11 = *puVar15;
        pcVar17 = extraout_w11_23;
LAB_10087aac:
        (*pcVar17)(uVar12,uVar11,*puVar14);
      }
      else {
        if (*(uint *)(param_6 + 0x1c) < 0xe) {
          puVar2 = (uint *)(param_1 + 0x28);
        }
        else {
          iVar10 = FUN_100ae580(param_6,auStack_58);
          puVar2 = (uint *)(iVar10 + 4);
        }
        uVar16 = (ulonglong)*puVar2;
        puVar14 = (undefined4 *)(param_8 + 4);
        uVar11 = (*pcVar18)();
        (*extraout_w11_22)(uVar11,*extraout_w8_03,iVar6,*puVar14,piVar7,uVar16 & 0xffffffff);
      }
      break;
    case 2:
      puVar14 = (undefined4 *)(param_7 + 0x74);
      if (*(char *)(param_8 + 0x45) == '\0') {
        uVar11 = (*pcVar18)();
        (*extraout_w11_20)(uVar11,*extraout_w8_02,iVar6,local_130 & 0xffffffff,local_130._4_4_,0,
                           *puVar14,uVar16 & 0xffffffff,&local_f0);
        break;
      }
      uVar12 = (*pcVar18)();
      uVar11 = *extraout_w8_01;
      pcVar17 = extraout_w11_19;
      goto LAB_10087aac;
    }
  }
  (*pcVar18)();
  pcVar18 = extraout_w11_25;
LAB_10087b3c:
  (*pcVar18)(param_6,iVar6,param_9);
LAB_10087b48:
  (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + 0x1cf00) + 0x4a0);
  return local_150;
}

