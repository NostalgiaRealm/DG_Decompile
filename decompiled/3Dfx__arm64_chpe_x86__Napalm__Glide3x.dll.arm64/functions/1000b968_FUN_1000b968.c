/*
 * FUN_1000b968 at 1000b968
 * undefined FUN_1000b968(void)
 * Address ranges: 1000b968-1000c90b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1000b968(int *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,int *param_6
                ,int *param_7,int *param_8,int *param_9,undefined4 param_10,undefined1 *param_11)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar16;
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
  int extraout_w15;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  int *local_4d0;
  int *local_4cc;
  int *local_4c8;
  int *local_4c4;
  int *local_4c0;
  int *local_4bc;
  int *local_4b8;
  undefined4 uStack_4b4;
  int *local_4b0;
  int *local_4ac;
  uint local_4a8;
  uint uStack_4a4;
  uint local_4a0;
  int *local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 local_480 [2];
  undefined4 local_478;
  int local_474;
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 auStack_448 [1032];
  
  if (param_3 == 0xff) {
    param_3 = 7;
  }
  if (param_4 == 0xff) {
    param_4 = 0;
  }
  local_4b0 = param_6;
  local_4ac = param_7;
  local_488 = param_5;
  iVar9 = FUN_1000cd68(param_1);
  if ((0xf < param_3) && ((int)param_3 < 0x100 || iVar9 != 4)) {
    return 0;
  }
  if ((8 < param_4) && ((int)param_4 < 0xff || iVar9 != 4)) {
    return 0;
  }
  if ((int)param_3 < 0x100) {
    uVar20 = (uint)*(ushort *)(param_3 * 4 + 0x100a9302);
    uVar19 = (uint)*(ushort *)(param_3 * 4 + 0x100a9300);
  }
  else {
    uVar20 = (int)param_3 >> 0x10;
    uVar19 = param_3 & 0xffff;
  }
  if (uVar19 == 0 || (uVar19 == 0 || uVar20 == 0)) {
    return 0;
  }
  local_4c4 = param_9;
  if (param_8 == (int *)0x0) {
    local_4c4 = (int *)0x0;
    param_8 = param_9;
  }
  if (param_8 == (int *)0x1 && (int)local_4c4 < 3) {
    if (1 < (int)local_4c4) {
      local_4c4 = (int *)0x1;
    }
    param_8 = (int *)0x2;
  }
  else if (param_8 != (int *)0x2 || 1 < (int)local_4c4) {
    if (param_8 != (int *)0x3 || 1 < (int)local_4c4) {
      return 0;
    }
    param_8 = (int *)0x2;
    if (local_4c4 != (int *)0x1) {
      param_8 = (int *)0x3;
    }
  }
  piVar18 = param_1 + 7;
  uVar13 = 0;
  if ((int)param_3 < 0x100) {
    uVar13 = ((int)param_8 + (int)local_4c4) * uVar20 * uVar19 * 2;
  }
  if (*(uint *)(*piVar18 + 0x78f) < uVar13) {
    return 0;
  }
  local_4c0 = param_1 + 8;
  local_4c0[0] = 0;
  local_4c0[1] = 0;
  local_4bc = param_1 + 9;
  local_4cc = param_1 + 10;
  local_4cc[0] = 0;
  local_4cc[1] = 0;
  local_4c8 = param_1 + 0xb;
  local_4d0 = param_2;
  iVar9 = (*(code *)PTR_FUN_100a81a0)(param_2);
  if ((iVar9 == 0) && (local_4d0 = (int *)(*(code *)PTR_FUN_100a8164)(), local_4d0 == (int *)0x0)) {
    uVar10 = (*(code *)PTR_FUN_100a8058)();
    (*(code *)PTR_FUN_100a815c)(uVar10,FUN_10015df0,&local_4d0);
    if ((local_4d0 == (int *)0x0) && (iVar9 = (*(code *)PTR_FUN_100a802c)(4,0), iVar9 != -1)) {
      local_480[0] = 0x1c;
      iVar11 = (*(code *)PTR_FUN_100a80e4)(iVar9,local_480);
      uVar13 = param_4;
      if (iVar11 != 0) {
        do {
          local_4a0 = uVar19;
          uStack_4a4 = uVar20;
          local_4a8 = uVar13;
          iVar11 = (*(code *)PTR_FUN_100a8050)();
          if (local_474 == iVar11) {
            (*(code *)PTR_FUN_100a815c)(local_478,FUN_10015df0,&local_4d0);
          }
          iVar11 = (*(code *)PTR_FUN_100a80e8)(iVar9,local_480);
          uVar19 = local_4a0;
          uVar20 = uStack_4a4;
          param_4 = local_4a8;
        } while ((iVar11 != 0) && (uVar13 = local_4a8, local_4d0 == (int *)0x0));
        (*(code *)PTR_FUN_100a800c)(iVar9);
      }
    }
  }
  if ((*(int *)(*piVar18 + 0x822) == 1) &&
     (piVar12 = (int *)(*(code *)PTR_FUN_100a8180)(local_4d0), piVar12 != (int *)0x0)) {
    local_4d0 = piVar12;
  }
  piVar12 = local_4cc;
  if (local_4d0 == (int *)0x0) {
    *local_4cc = 0;
    iVar9 = (*(code *)PTR_FUN_100a8048)();
    *local_4c8 = iVar9;
    piVar1 = local_4d0;
    if (iVar9 != 0) {
      iVar9 = (*(code *)PTR_FUN_100a8028)(0,0,FUN_100152a0,param_1,0,local_4bc);
      *local_4c0 = iVar9;
      piVar1 = local_4d0;
      if (iVar9 != 0) {
        piVar1 = (int *)*piVar12;
        while (piVar1 == (int *)0x0) {
          (*(code *)PTR_FUN_100a80dc)(1);
          piVar1 = (int *)*piVar12;
        }
      }
    }
    local_4d0 = piVar1;
    if (local_4d0 == (int *)0x0) {
      local_4d0 = (int *)FUN_10015cd0();
    }
  }
  local_4cc = local_4d0;
  if (*(int *)(*piVar18 + 0x822) == 1) {
    uVar14 = (*(code *)PTR_FUN_100a8188)(local_4d0,0xfffffff0);
    *(bool *)(*piVar18 + 0x784) = (uVar14 & 0xc00000) != 0;
  }
  if (local_4cc == (int *)0x0) {
    return 0;
  }
  iVar9 = *piVar18;
  iVar11 = *(int *)(iVar9 + 0xf8);
  *(int *)(iVar9 + 0xf8) = iVar11 + 1;
  if ((iVar11 == 0) && (*(char *)(iVar9 + 0x789) != '\0')) {
    uVar10 = (*(code *)PTR_FUN_100a80cc)(0x80000002);
    *(undefined4 *)(iVar9 + 0xf4) = uVar10;
  }
  iVar9 = *piVar18;
  iVar11 = *(int *)(iVar9 + 0x308);
  *(int *)(iVar9 + 0x308) = iVar11 + 1;
  if (iVar11 == 0) {
    *(undefined1 *)(iVar9 + 0x758) = 0;
    DAT_100aaa68 = (*(code *)PTR_FUN_100a8014)(0,0,0,0);
    if (DAT_100aaa68 != 0) {
      (*(code *)PTR_FUN_100a808c)(iVar9 + 0x318);
      uVar10 = (*(code *)PTR_FUN_100a8028)(0,0,FUN_10008880,iVar9,0,iVar9 + 0x30c);
      *(undefined4 *)(iVar9 + 0x310) = uVar10;
      (*(code *)PTR_FUN_100a8100)(DAT_100aaa68,0xffffffff);
    }
  }
  uVar14 = FUN_1000af10(param_1);
  if ((uVar14 & 1) == 0) goto LAB_1000c898;
  piVar12 = param_1 + 3;
  local_498 = param_1 + 4;
  *(int *)(*piVar12 + 0xc) = *local_498;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_4b8 = param_1 + 6;
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar13 = (*extraout_w11)(uVar10,0);
  piVar1 = local_498;
  if (0x10 < uVar13) {
    uVar13 = 0x10;
  }
  *(uint *)(*piVar12 + 0x10) = uVar13;
  if (uVar13 != 0) {
    uVar17 = 0;
    local_4c8 = piVar18;
    local_4c0 = param_1;
    local_4bc = param_8;
    local_4a8 = param_4;
    uStack_4a4 = uVar20;
    local_4a0 = uVar19;
    do {
      uVar10 = (*pcVar2)();
      (*extraout_w11_00)(uVar10,&local_460,*piVar1,uVar17);
      *(undefined4 *)(*piVar12 + uVar17 * 8 + 0x14) = local_460;
      iVar9 = uVar17 * 8;
      uVar17 = uVar17 + 1;
      *(undefined4 *)(*piVar12 + iVar9 + 0x18) = local_45c;
      param_1 = local_4c0;
      param_4 = local_4a8;
      uVar20 = uStack_4a4;
      uVar19 = local_4a0;
      param_8 = local_4bc;
      piVar18 = local_4c8;
    } while (uVar17 < uVar13);
  }
  *(int **)(*piVar12 + 0x94) = local_4cc;
  *(uint *)(*piVar12 + 0xa0) = uVar19;
  *(uint *)(*piVar12 + 0x98) = uVar19;
  *(uint *)(*piVar12 + 0xa4) = uVar20;
  *(uint *)(*piVar12 + 0x9c) = uVar20;
  iVar9 = *piVar18;
  uVar13 = *(uint *)(iVar9 + 0x79f);
  uVar17 = *(uint *)(iVar9 + 0x79b);
  if ((uVar17 < 0xfffffff8) || ((uVar17 != uVar13 || uVar17 == 0xfffffff9) && 0xff < uVar13)) {
    if ((uVar17 != 0) && (uVar13 != 0)) {
      *(uint *)(*piVar12 + 0xa0) = uVar17;
      iVar9 = *piVar12;
      uVar10 = *(undefined4 *)(*piVar18 + 0x79f);
      goto LAB_1000c020;
    }
  }
  else {
    iVar11 = *piVar12;
    local_4b8 = (int *)(iVar11 + 0xa0);
    if ((uint)param_1[5] < *(uint *)(iVar11 + 0x10)) {
      FUN_10011048(iVar11,&local_498,param_1[5],iVar9 + 0x764);
      *local_4b8 = (int)local_498;
      *(undefined4 *)(*piVar12 + 0xa4) = uStack_494;
    }
    else {
      *local_4b8 = 0x280;
      iVar9 = *piVar12;
      uVar10 = 0x1e0;
LAB_1000c020:
      *(undefined4 *)(iVar9 + 0xa4) = uVar10;
    }
  }
  iVar9 = *piVar12;
  local_4b8 = *(int **)(iVar9 + 0xa0);
  uStack_4b4 = *(undefined4 *)(iVar9 + 0xa4);
  uVar15 = FUN_100112a0(iVar9,&local_498,param_1[5],&local_4b8,*piVar18 + 0x764);
  *(int **)(extraout_w15 + 0xa8) = local_498;
  *(undefined4 *)(*piVar12 + 0xac) = uStack_494;
  iVar9 = *piVar18;
  FUN_1005eb88(uVar15,&local_498,&local_4b8,*(undefined4 *)(iVar9 + 0x812),
               *(undefined4 *)(iVar9 + 0x816),*(undefined4 *)(iVar9 + 0x81a),
               *(undefined4 *)(iVar9 + 0x81e));
  (*(code *)PTR_FUN_100a81e8)(*piVar12 + 0xbc,local_498,uStack_494,local_490,uStack_48c);
  if ((int)param_4 < 0x100) {
    iVar9 = *(int *)(&DAT_1009fe18 + param_4 * 4);
  }
  else {
    iVar9 = (int)param_4 >> 0x10;
  }
  iVar16 = 1;
  *(int *)(*piVar12 + 0xb0) = iVar9;
  iVar11 = *piVar18;
  if (((*(char *)(iVar11 + 0x786) != '\0') && (*(int *)(iVar11 + 0x7a7) != 0)) &&
     (*(int *)(iVar11 + 0x7ab) != 0)) {
    iVar9 = *(int *)(iVar11 + 0x7a7);
    iVar16 = *(int *)(iVar11 + 0x7ab);
  }
  *(int *)(*piVar12 + 0xb4) = iVar9;
  *(int *)(*piVar12 + 0xb8) = iVar16;
  *(int **)(*piVar12 + 0xcc) = param_8;
  *(int **)(*piVar12 + 0xd0) = local_4c4;
  *(undefined4 *)(*piVar12 + 0xdc) = 0x40;
  *(undefined4 *)(*piVar12 + 0xd8) = local_488;
  iVar9 = FUN_1000cd68(param_1);
  *(undefined *)(*piVar12 + 0xe0) = (&DAT_100aa5c2)[iVar9 * 0x18];
  *(undefined1 *)(*piVar12 + 0xe1) = *param_11;
  *(undefined1 *)(*piVar12 + 0xe2) = 1;
  *(int **)(*piVar12 + 0xd4) = local_4b0;
  *(undefined1 *)(*piVar12 + 0x13d) = local_4ac._0_1_;
  *(undefined1 *)(*piVar12 + 0x150) = 0;
  *(undefined4 *)(*piVar12 + 0x131) = 0;
  *(undefined4 *)(*piVar12 + 0x12d) = 0;
  *(uint *)(*piVar12 + 0x135) = uVar19;
  *(uint *)(*piVar12 + 0x139) = uVar20;
  iVar9 = *(int *)(*piVar18 + 0x797) * *(int *)(*piVar18 + 0x793);
  if (*(int *)(*piVar12 + 0x454) == 0) {
    uVar10 = FUN_10083400(iVar9);
    *(undefined4 *)(*piVar12 + 0x454) = uVar10;
  }
  auVar21 = (*pcVar2)(*piVar12,*piVar18 + 0x764);
  cVar7 = (*extraout_w11_01)(auVar21._0_8_ & 0xffffffff,auVar21._8_8_,param_1);
  if (cVar7 == '\0') {
LAB_1000c898:
    FUN_10008a60(*piVar18);
    iVar9 = *piVar18;
    iVar11 = *(int *)(iVar9 + 0xf8) + -1;
    *(int *)(iVar9 + 0xf8) = iVar11;
    if ((iVar11 == 0) && (*(char *)(iVar9 + 0x789) != '\0')) {
      (*(code *)PTR_FUN_100a80cc)(*(undefined4 *)(iVar9 + 0xf4));
      *(undefined4 *)(iVar9 + 0xf4) = 0;
    }
    FUN_10016290(param_1,local_4cc);
    return 0;
  }
  uVar10 = (*pcVar2)();
  cVar7 = (*extraout_w11_02)(uVar10);
  if (cVar7 == '\0') {
    FUN_10016240(param_1);
  }
  uVar10 = (*pcVar2)();
  cVar7 = (*extraout_w11_03)(uVar10);
  if ((cVar7 == '\0') != (bool)*(char *)(*piVar18 + 0x784)) {
    FUN_100160b8(param_1);
  }
  uVar10 = (*pcVar2)();
  cVar7 = (*extraout_w11_04)(uVar10);
  if (cVar7 != '\0') {
    FUN_10016240(param_1);
  }
  if (*(int *)(*piVar12 + 0x454) != 0) {
    auVar21 = (*pcVar2)();
    (*extraout_w11_05)(auVar21._0_8_ & 0xffffffff,auVar21._8_8_ & 0xffffffff,0,iVar9);
  }
  iVar9 = 0;
  piVar1 = param_1;
  piVar3 = piVar12;
  piVar4 = piVar12;
  piVar5 = piVar12;
  piVar6 = piVar18;
  if (0 < *(int *)(*piVar18 + 0x797)) {
    do {
      local_498 = piVar6;
      local_4ac = piVar5;
      local_4b0 = piVar4;
      local_4b8 = piVar3;
      local_4bc = param_8;
      local_4c0 = piVar1;
      local_4c8 = piVar18;
      local_4cc = piVar12;
      uVar10 = (*pcVar2)();
      (*extraout_w11_06)(uVar10,iVar9,0);
      uVar10 = (*pcVar2)();
      (*extraout_w11_07)(uVar10,iVar9,1);
      uVar10 = (*pcVar2)();
      (*extraout_w11_08)(uVar10,iVar9,2);
      iVar9 = iVar9 + 1;
      param_1 = local_4c0;
      param_8 = local_4bc;
      piVar18 = local_4c8;
      piVar12 = local_4cc;
      piVar1 = local_4c0;
      piVar3 = local_4b8;
      piVar4 = local_4b0;
      piVar5 = local_4ac;
      piVar6 = local_498;
    } while (iVar9 < *(int *)(*local_498 + 0x797));
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_1000ce98(param_1,*piVar12 + 0xe4,1);
  if ((int)param_8 < 3) {
    FUN_1000d590(param_1,2);
    FUN_1000d648(param_1,1);
  }
  FUN_1000d018(param_1,0);
  FUN_1000d1d0(param_1,0,0xff,0xffff);
  FUN_1000d018(param_1,1);
  FUN_1000d1d0(param_1,0,0xff,0xffff);
  if ((int)param_8 < 3) {
    FUN_1000d590(param_1,0);
    FUN_1000d648(param_1,0);
  }
  else {
    FUN_1000d018(param_1,2);
    FUN_1000d1d0(param_1,0,0xff,0xffff);
  }
  uVar10 = (*pcVar2)();
  (*extraout_w11_09)(uVar10);
  uVar10 = (*pcVar2)();
  (*extraout_w11_10)(uVar10);
  FUN_1000ce98(param_1,*piVar12 + 0xe4,1);
  FUN_10009bd8(param_1,&DAT_100aaa80);
  FUN_1000d018(param_1,1 < (int)param_8);
  local_4c8 = param_1 + 0xc;
  *local_4c8 = 0x10001;
  iVar9 = *piVar12;
  local_4b0 = *(int **)(iVar9 + 0x9c);
  local_4b8 = *(int **)(iVar9 + 0x98);
  local_498 = *(int **)(iVar9 + 0x94);
  local_4cc = (int *)((int)param_1 + 0x59);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(bool *)local_4cc = local_4c4 != (int *)0x0;
  iVar9 = (*(code *)PTR_FUN_100a8094)(*(undefined4 *)(param_11 + 4));
  piVar1 = param_1 + 0x11;
  *piVar1 = iVar9;
  if (iVar9 != 0) {
    iVar9 = (*(code *)PTR_FUN_100a8070)(iVar9,s__fxSplashInit_24_1009fbd0);
    local_4ac = param_1 + 0x12;
    *local_4ac = iVar9;
    if (iVar9 != 0) {
      iVar9 = (*(code *)PTR_FUN_100a8070)(*piVar1,s__fxSplashShutdown_0_1009fbe8);
      param_1[0x13] = iVar9;
      if (iVar9 != 0) {
        iVar9 = (*(code *)PTR_FUN_100a8070)(*piVar1,s__fxSplashPlug_16_1009fc00);
        param_1[0x14] = iVar9;
        if (iVar9 != 0) {
          iVar9 = (*(code *)PTR_FUN_100a8070)(*piVar1,s__fxSplash_20_1009fc18);
          param_1[0x15] = iVar9;
          if (iVar9 != 0) {
            (*pcVar2)();
            (*extraout_w11_11)(local_498,local_4b8,local_4b0,param_8,1,local_488);
            goto LAB_1000c76c;
          }
        }
      }
    }
    (*(code *)PTR_FUN_100a8044)(*piVar1);
    *piVar1 = 0;
  }
LAB_1000c76c:
  if (((*(char *)(*piVar18 + 0x7ba) != '\0') && (*piVar1 != 0)) && ((char)*local_4cc != '\0')) {
    (*pcVar2)();
    (*extraout_w11_12)(0,0,0);
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(*piVar18 + 0x7b9);
  uVar10 = (*pcVar2)();
  uVar8 = (*extraout_w11_13)(uVar10);
  FUN_10015e10(param_1,1,uVar8);
  iVar9 = *piVar12;
  uVar10 = (*pcVar2)();
  uVar8 = (*extraout_w11_14)(uVar10);
  FUN_10010e78(iVar9,uVar8);
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  (*(code *)PTR_FUN_100a8064)(DAT_100aaa5c,auStack_448,0x400);
  (*(code *)PTR_FUN_100a8094)(auStack_448);
  return *local_4c8;
}

