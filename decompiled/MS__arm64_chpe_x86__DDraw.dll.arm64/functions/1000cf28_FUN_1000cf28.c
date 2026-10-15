/*
 * FUN_1000cf28 at 1000cf28
 * undefined FUN_1000cf28(void)
 * Address ranges: 1000cf28-1000db3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1000cf28(int param_1,int *param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            undefined4 *param_8,int *param_9,undefined4 param_10,int *param_11)

{
  ulonglong *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *extraout_w8;
  int *extraout_w8_00;
  int *piVar17;
  undefined4 *extraout_w8_01;
  int *extraout_w8_02;
  undefined4 *extraout_w8_03;
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
  int iVar18;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *pcVar19;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  int iVar20;
  undefined1 local_170;
  int *local_164;
  int local_160;
  int local_15c;
  int *local_158;
  int *local_150;
  int iStack_14c;
  int local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  int *local_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int local_118;
  int local_114;
  uint local_108;
  uint uStack_104;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int local_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int *local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  
  local_160 = param_3;
  local_15c = param_5;
  local_158 = param_2;
  local_148 = param_1;
  FUN_1006e8d0(*(undefined4 *)(param_1 + 0xcf00),param_2,param_1);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = param_8[0xc];
  uVar6 = param_8[0xd];
  puVar1 = (ulonglong *)(param_8 + 8);
  uStack_138 = *(undefined8 *)(param_8 + 10);
  local_140 = *puVar1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_164 = (int *)(*extraout_w11)(param_7,param_4);
  (*pcVar10)();
  local_150 = (int *)(*extraout_w11_00)(param_7,param_4);
  (*pcVar10)();
  local_130 = (int *)(*extraout_w11_01)(param_6,param_2);
  (*pcVar10)();
  uStack_d4 = (*extraout_w11_02)(param_6,param_2);
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = local_130;
  local_c8 = local_164;
  uStack_c4 = local_150;
  if ((*(char *)((int)param_8 + 0x41) == '\0') && (*(char *)(param_8 + 0x10) == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    (*(code *)PTR_FUN_100ba244)(&local_140,&local_140,&local_e0);
  }
  local_150 = param_8 + 9;
  (*(code *)PTR_FUN_100ba26c)(&local_140,uVar5 - (int)*puVar1,uVar6 - *local_150);
  if (bVar9) {
    (*(code *)PTR_FUN_100ba244)(&local_140,&local_140,&local_d0);
  }
  (*(code *)PTR_FUN_100ba26c)(&local_140,(int)*puVar1 - uVar5,*local_150 - uVar6);
  piVar17 = local_158;
  local_fc = (uVar5 - (int)local_140) + (int)uStack_138;
  local_100 = 0;
  local_f8 = (uVar6 - local_140._4_4_) + uStack_138._4_4_;
  uStack_f4 = 1;
  piVar7 = (int *)((int)local_158 + *(int *)(param_6 + 0x2c) * local_160);
  local_108 = uVar5;
  uStack_104 = uVar6;
  if ((*(int *)(*(int *)(param_1 + 0xcf00) + *(int *)(local_148 + 0x14) * 0x1510 + 0x520) == 0xa000)
     && (*(int *)(param_7 + 0x34) - 3U < 3)) {
    (*pcVar10)();
    cVar11 = (*extraout_w11_03)(param_6);
    if (cVar11 == '\0') goto LAB_1000d2b0;
    (*pcVar10)();
    (*extraout_w11_04)(param_7,piVar17,local_160,0);
    (*pcVar10)();
    (*extraout_w11_05)(param_6,piVar17,local_160,0);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_c0 = (float)(int)local_140;
    fStack_bc = (float)local_140._4_4_;
    iStack_12c = local_15c;
    local_150 = piVar17;
    iStack_14c = local_160;
    local_b8 = (float)(int)uStack_138;
    fStack_b4 = (float)uStack_138._4_4_;
    fStack_ac = (float)uVar6;
    local_b0 = (float)uVar5;
    local_a8 = (float)((uVar5 - (int)local_140) + (int)uStack_138);
    local_a0 = CONCAT44(local_160,piVar17);
    fStack_a4 = (float)((uVar6 - local_140._4_4_) + uStack_138._4_4_);
    uStack_98 = CONCAT44(local_15c,param_4);
    local_130 = param_4;
    local_170 = FUN_1000cb08(local_148,&local_c0,param_6,param_7);
  }
  else {
LAB_1000d2b0:
    local_170 = 1;
    (*pcVar10)();
    cVar11 = (*extraout_w11_06)(param_7);
    if (cVar11 != '\0') {
      (*pcVar10)();
      (*extraout_w11_07)(param_7,param_4,local_15c);
    }
    (*pcVar10)();
    cVar11 = (*extraout_w11_08)(param_6);
    if (cVar11 != '\0') {
      (*pcVar10)();
      (*extraout_w11_09)(param_6,local_158,local_160,0);
    }
    local_130 = param_8 + 2;
    piVar17 = param_8 + 1;
    if (*piVar17 == *local_130) {
      local_164 = (int *)0x0;
      local_f0 = local_108;
      uStack_ec = uStack_104;
      local_e8 = local_fc;
      iStack_e4 = local_f8;
      local_150 = (int *)(param_7 + 0x2c);
      uVar14 = FUN_1000beb8(local_148,*piVar17,*param_8,&local_164,0,param_4,
                            (int *)((int)param_4 + *local_150 * local_15c),&local_f0);
      local_170 = (undefined1)uVar14;
      if ((uVar14 & 0xff) == 0) goto LAB_1000db00;
      local_15c = 0;
      param_4 = (int *)0x0;
      *piVar17 = (int)local_164;
      FUN_1000ccb8(uVar14,param_8,local_158);
      piVar8 = local_150;
    }
    else {
      piVar8 = (int *)(param_7 + 0x2c);
    }
    if (3 < (uint)param_8[3]) goto LAB_1000db00;
    local_164 = local_130;
    piVar8 = (int *)((int)param_4 + *piVar8 * local_15c);
    uVar14 = ZEXT48(piVar8);
    switch(param_8[3]) {
    case 0:
      iVar12 = (*(code *)PTR_FUN_100ba244)
                         (auStack_70,*(int *)(param_7 + 0x60) + (int)piVar8 * 0x1c + 0xc,param_11);
      if (iVar12 != 0) {
        (*pcVar10)();
        (*extraout_w11_10)(param_7,param_4,local_15c);
      }
      (*pcVar10)();
      (*extraout_w11_11)(param_6,local_158,local_160);
      uVar5 = *(uint *)(&DAT_100b35b0 + *(int *)(param_7 + 0x1c) * 4);
      if ((uVar5 < 8) || (piVar16 = param_11 + 2, 0x20 < *piVar16 - *param_11)) {
LAB_1000d834:
        if (*(char *)((int)param_8 + 0x45) == '\0') {
          piVar16 = param_9 + 1;
          piVar15 = param_9;
          uVar13 = (*pcVar10)();
          (*extraout_w11_17)(uVar13,*extraout_w8_01,piVar7,*piVar15,*piVar16,0,*piVar17,piVar8,
                             &local_108);
          goto LAB_1000dadc;
        }
        uVar13 = (*pcVar10)();
        piVar8 = (int *)*piVar17;
        piVar17 = extraout_w8_00;
        pcVar19 = extraout_w11_16;
      }
      else {
        local_150 = param_11 + 3;
        piVar15 = param_11 + 1;
        if (0x20 < *local_150 - *piVar15) goto LAB_1000d834;
        uVar13 = (*pcVar10)();
        iVar12 = (*extraout_w11_12)(uVar13,*extraout_w8,piVar8,1,0,&local_128);
        if (iVar12 < 0) goto LAB_1000dadc;
        uVar13 = (*pcVar10)();
        iVar12 = (*extraout_w11_13)(uVar13,*local_130,piVar7,2,0,&local_118);
        if (-1 < iVar12) {
          iVar12 = *piVar15;
          if (uVar5 == 0x10) {
            iVar20 = 0;
            local_128 = local_128 + iVar12 * local_124;
            local_118 = local_118 + local_114 * param_9[1];
            if (0 < *local_150 - iVar12) {
              do {
                iVar12 = *param_11;
                if (0 < *piVar16 - iVar12) {
                  iVar18 = 0;
                  do {
                    iVar12 = iVar12 + iVar18;
                    iVar3 = *param_9 + iVar18;
                    iVar18 = iVar18 + 1;
                    *(undefined2 *)(local_118 + iVar3 * 2) = *(undefined2 *)(local_128 + iVar12 * 2)
                    ;
                    iVar12 = *param_11;
                  } while (iVar18 < *piVar16 - iVar12);
                }
                iVar20 = iVar20 + 1;
                local_128 = local_124 + local_128;
                local_118 = local_114 + local_118;
              } while (iVar20 < *local_150 - *piVar15);
            }
          }
          else {
            iVar20 = 0;
            local_128 = local_128 + iVar12 * local_124;
            local_118 = local_118 + local_114 * param_9[1];
            if (0 < *local_150 - iVar12) {
              do {
                if (uVar5 == 8) {
                  iVar12 = *param_11;
                  if (0 < *piVar16 - iVar12) {
                    iVar18 = 0;
                    do {
                      iVar3 = iVar18 + local_128;
                      iVar4 = *param_9 + iVar18;
                      iVar18 = iVar18 + 1;
                      *(undefined1 *)(iVar4 + local_118) = *(undefined1 *)(iVar3 + iVar12);
                      iVar12 = *param_11;
                    } while (iVar18 < *piVar16 - iVar12);
                  }
                }
                else if (((uVar5 - 0x18 & 0xfffffff7) == 0) &&
                        (iVar12 = *param_11, 0 < *piVar16 - iVar12)) {
                  iVar18 = 0;
                  do {
                    iVar12 = iVar12 + iVar18;
                    iVar3 = *param_9 + iVar18;
                    iVar18 = iVar18 + 1;
                    *(undefined4 *)(local_118 + iVar3 * 4) = *(undefined4 *)(local_128 + iVar12 * 4)
                    ;
                    iVar12 = *param_11;
                  } while (iVar18 < *piVar16 - iVar12);
                }
                iVar20 = iVar20 + 1;
                local_128 = local_124 + local_128;
                local_118 = local_114 + local_118;
              } while (iVar20 < *local_150 - *piVar15);
            }
          }
          uVar13 = (*pcVar10)();
          (*extraout_w11_14)(uVar13,*local_164,piVar7);
        }
        uVar13 = (*pcVar10)();
        pcVar19 = extraout_w11_15;
      }
      (*pcVar19)(uVar13,*piVar17,piVar8);
      goto LAB_1000dadc;
    case 1:
      (*pcVar10)();
      (*extraout_w11_20)(param_6,local_158,local_160,0);
      break;
    case 2:
      piVar17 = (int *)(param_7 + 0x74);
      if (*(char *)((int)param_8 + 0x45) == '\0') {
        uVar13 = (*pcVar10)();
        (*extraout_w11_19)(uVar13,*extraout_w8_03,piVar7,local_140 & 0xffffffff,local_140._4_4_,0,
                           *piVar17,uVar14 & 0xffffffff,&local_108);
        goto LAB_1000dadc;
      }
      uVar13 = (*pcVar10)();
      iVar12 = *piVar17;
      piVar17 = extraout_w8_02;
      pcVar19 = extraout_w11_18;
      goto LAB_1000da70;
    }
    if (*(char *)((int)param_8 + 0x45) == '\0') {
      uVar13 = (*pcVar10)();
      (*extraout_w11_23)(uVar13,*local_164,piVar7,local_140 & 0xffffffff,local_140._4_4_,0,*piVar17,
                         piVar8,&local_108);
    }
    else if (((uint)param_8[6] < 2) || (param_8[7] != 1)) {
      uVar13 = (*pcVar10)();
      iVar12 = *piVar17;
      piVar17 = local_164;
      pcVar19 = extraout_w11_22;
LAB_1000da70:
      (*pcVar19)(uVar13,*piVar17,iVar12);
    }
    else {
      if (*(uint *)(param_6 + 0x1c) < 0xe) {
        puVar2 = (uint *)(local_148 + 0x28);
      }
      else {
        iVar12 = FUN_10034140(param_6,auStack_60);
        puVar2 = (uint *)(iVar12 + 4);
      }
      uVar14 = (ulonglong)*puVar2;
      uVar13 = (*pcVar10)();
      (*extraout_w11_21)(uVar13,*local_164,piVar7,*piVar17,piVar8,uVar14 & 0xffffffff);
    }
  }
LAB_1000dadc:
  (*pcVar10)();
  (*extraout_w11_24)(param_6,piVar7,param_9);
LAB_1000db00:
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + 0xcf00) + 0x4a0);
  return local_170;
}

