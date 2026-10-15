/*
 * FUN_1001c008 at 1001c008
 * undefined FUN_1001c008(void)
 * Address ranges: 1001c008-1001cc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1001c008(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined8 param_6,uint *param_7,int param_8,int param_9,undefined4 param_10,
            undefined1 *param_11)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar13;
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
  int extraout_w15;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 auVar18 [16];
  uint *local_4a0;
  undefined4 uStack_49c;
  int local_498;
  int iStack_494;
  int local_490;
  int *piStack_48c;
  int local_488;
  uint *local_484;
  int *local_480;
  uint *local_47c;
  uint *local_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  uint local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 auStack_448 [1032];
  
  if (param_3 == 0xff) {
    param_3 = 7;
  }
  if (param_4 == 0xff) {
    param_4 = 0;
  }
  local_47c = param_7;
  local_468 = param_4;
  local_464 = param_5;
  iVar7 = FUN_1001cfc8(param_1);
  if ((0xf < param_3) && ((int)param_3 < 0x100 || iVar7 != 4)) {
    return 0;
  }
  if ((8 < local_468) && ((int)local_468 < 0xff || iVar7 != 4)) {
    return 0;
  }
  if ((int)param_3 < 0x100) {
    puVar17 = (uint *)(uint)*(ushort *)(param_3 * 4 + 0x1009e3c0);
    puVar16 = (uint *)(uint)*(ushort *)(param_3 * 4 + 0x1009e3c2);
  }
  else {
    puVar17 = (uint *)(param_3 & 0xffff);
    puVar16 = (uint *)((int)param_3 >> 0x10);
  }
  if (puVar17 == (uint *)0x0 || (puVar17 == (uint *)0x0 || puVar16 == (uint *)0x0)) {
    return 0;
  }
  iVar7 = param_9;
  if (param_8 == 0) {
    iVar7 = 0;
    param_8 = param_9;
  }
  if (param_8 == 1 && iVar7 < 3) {
    if (1 < iVar7) {
      iVar7 = 1;
    }
    param_8 = 2;
  }
  else if (param_8 != 2 || 1 < iVar7) {
    if (param_8 != 3 || 1 < iVar7) {
      return 0;
    }
    param_8 = 2;
    if (iVar7 != 1) {
      param_8 = 3;
    }
  }
  piVar15 = (int *)(param_1 + 0x1c);
  uVar9 = 0;
  if ((int)param_3 < 0x100) {
    uVar9 = (param_8 + iVar7) * (int)puVar16 * (int)puVar17 * 2;
  }
  if (*(uint *)(*piVar15 + 0x78f) < uVar9) {
    return 0;
  }
  local_488 = FUN_100264b8(param_1,param_2);
  if (*(int *)(*piVar15 + 0x822) == 1) {
    uVar11 = (*(code *)PTR_FUN_1009d184)(local_488,0xfffffff0);
    *(bool *)(*piVar15 + 0x784) = (uVar11 & 0xc00000) != 0;
  }
  if (local_488 == 0) {
    return 0;
  }
  iVar10 = *piVar15;
  iVar2 = *(int *)(iVar10 + 0xf8);
  *(int *)(iVar10 + 0xf8) = iVar2 + 1;
  if ((iVar2 == 0) && (*(char *)(iVar10 + 0x789) != '\0')) {
    uVar8 = (*(code *)PTR_FUN_1009d0cc)(0x80000002);
    *(undefined4 *)(iVar10 + 0xf4) = uVar8;
  }
  iVar10 = *piVar15;
  iVar2 = *(int *)(iVar10 + 0x308);
  *(int *)(iVar10 + 0x308) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined1 *)(iVar10 + 0x758) = 0;
    DAT_1009f7b8 = (*(code *)PTR_FUN_1009d014)(0,0,0,0);
    if (DAT_1009f7b8 != 0) {
      (*(code *)PTR_FUN_1009d08c)(iVar10 + 0x318);
      uVar8 = (*(code *)PTR_FUN_1009d028)(0,0,FUN_10007020,iVar10,0,iVar10 + 0x30c);
      *(undefined4 *)(iVar10 + 0x310) = uVar8;
      (*(code *)PTR_FUN_1009d100)(DAT_1009f7b8,0xffffffff);
    }
  }
  uVar11 = FUN_1001bad8(param_1);
  if ((uVar11 & 1) == 0) goto LAB_1001cbf8;
  puVar1 = (uint *)(param_1 + 0xc);
  local_484 = (uint *)(param_1 + 0x10);
  *(uint *)(*puVar1 + 0xc) = *local_484;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_480 = (int *)(param_1 + 0x18);
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar9 = (*extraout_w11)(uVar8,0);
  puVar4 = local_484;
  if (0x10 < uVar9) {
    uVar9 = 0x10;
  }
  *(uint *)(*puVar1 + 0x10) = uVar9;
  if (uVar9 != 0) {
    uVar14 = 0;
    local_4a0 = puVar16;
    local_498 = param_1;
    iStack_494 = param_8;
    local_490 = iVar7;
    piStack_48c = piVar15;
    local_478 = puVar17;
    do {
      uVar8 = (*pcVar3)();
      (*extraout_w11_00)(uVar8,&local_460,*puVar4,uVar14);
      *(undefined4 *)(*puVar1 + uVar14 * 8 + 0x14) = local_460;
      iVar7 = uVar14 * 8;
      uVar14 = uVar14 + 1;
      *(undefined4 *)(*puVar1 + iVar7 + 0x18) = local_45c;
      param_1 = local_498;
      puVar17 = local_478;
      puVar16 = local_4a0;
      param_8 = iStack_494;
      piVar15 = piStack_48c;
      iVar7 = local_490;
    } while (uVar14 < uVar9);
  }
  *(int *)(*puVar1 + 0x94) = local_488;
  *(uint **)(*puVar1 + 0xa0) = puVar17;
  *(uint **)(*puVar1 + 0x98) = puVar17;
  *(uint **)(*puVar1 + 0xa4) = puVar16;
  *(uint **)(*puVar1 + 0x9c) = puVar16;
  iVar10 = *piVar15;
  uVar9 = *(uint *)(iVar10 + 0x79f);
  uVar14 = *(uint *)(iVar10 + 0x79b);
  if ((uVar14 < 0xfffffff8) || ((uVar14 != uVar9 || uVar14 == 0xfffffff9) && 0xff < uVar9)) {
    if ((uVar14 != 0) && (uVar9 != 0)) {
      *(uint *)(*puVar1 + 0xa0) = uVar14;
      uVar9 = *puVar1;
      uVar8 = *(undefined4 *)(*piVar15 + 0x79f);
      goto LAB_1001c4a4;
    }
  }
  else {
    uVar9 = *puVar1;
    local_4a0 = (uint *)(uVar9 + 0xa0);
    if (*(uint *)(param_1 + 0x14) < *(uint *)(uVar9 + 0x10)) {
      FUN_100272a8(uVar9,&local_478,*(uint *)(param_1 + 0x14),iVar10 + 0x764);
      *local_4a0 = (uint)local_478;
      *(undefined4 *)(*puVar1 + 0xa4) = uStack_474;
    }
    else {
      *local_4a0 = 0x280;
      uVar9 = *puVar1;
      uVar8 = 0x1e0;
LAB_1001c4a4:
      *(undefined4 *)(uVar9 + 0xa4) = uVar8;
    }
  }
  uVar9 = *puVar1;
  local_4a0 = *(uint **)(uVar9 + 0xa0);
  uStack_49c = *(undefined4 *)(uVar9 + 0xa4);
  uVar12 = FUN_10027500(uVar9,&local_478,*(undefined4 *)(param_1 + 0x14),&local_4a0,*piVar15 + 0x764
                       );
  *(uint **)(extraout_w15 + 0xa8) = local_478;
  *(undefined4 *)(*puVar1 + 0xac) = uStack_474;
  iVar10 = *piVar15;
  FUN_10055748(uVar12,&local_478,&local_4a0,*(undefined4 *)(iVar10 + 0x812),
               *(undefined4 *)(iVar10 + 0x816),*(undefined4 *)(iVar10 + 0x81a),
               *(undefined4 *)(iVar10 + 0x81e));
  (*(code *)PTR_FUN_1009d1e4)(*puVar1 + 0xbc,local_478,uStack_474,local_470,uStack_46c);
  if ((int)local_468 < 0x100) {
    iVar10 = *(int *)(&DAT_10096928 + local_468 * 4);
  }
  else {
    iVar10 = (int)local_468 >> 0x10;
  }
  iVar13 = 1;
  *(int *)(*puVar1 + 0xb0) = iVar10;
  iVar2 = *piVar15;
  if (((*(char *)(iVar2 + 0x786) != '\0') && (*(int *)(iVar2 + 0x7a7) != 0)) &&
     (*(int *)(iVar2 + 0x7ab) != 0)) {
    iVar10 = *(int *)(iVar2 + 0x7a7);
    iVar13 = *(int *)(iVar2 + 0x7ab);
  }
  *(int *)(*puVar1 + 0xb4) = iVar10;
  *(int *)(*puVar1 + 0xb8) = iVar13;
  *(int *)(*puVar1 + 0xcc) = param_8;
  *(int *)(*puVar1 + 0xd0) = iVar7;
  *(undefined4 *)(*puVar1 + 0xd8) = 0x40;
  *(undefined4 *)(*puVar1 + 0xd4) = local_464;
  iVar10 = FUN_1001cfc8(param_1);
  *(undefined *)(*puVar1 + 0xdc) = (&DAT_1009e192)[iVar10 * 0x18];
  *(undefined1 *)(*puVar1 + 0xdd) = *param_11;
  *(undefined1 *)(*puVar1 + 0xde) = 1;
  *(undefined1 *)(*puVar1 + 0x11a) = local_47c._0_1_;
  *(undefined1 *)(*puVar1 + 0x12d) = 0;
  *(undefined4 *)(*puVar1 + 0x10e) = 0;
  *(undefined4 *)(*puVar1 + 0x10a) = 0;
  *(uint **)(*puVar1 + 0x112) = puVar17;
  *(uint **)(*puVar1 + 0x116) = puVar16;
  iVar10 = *(int *)(*piVar15 + 0x797) * *(int *)(*piVar15 + 0x793);
  if (*(int *)(*puVar1 + 0x29c) == 0) {
    uVar8 = FUN_1007a040(iVar10);
    *(undefined4 *)(*puVar1 + 0x29c) = uVar8;
  }
  auVar18 = (*pcVar3)(*puVar1,*piVar15 + 0x764);
  cVar5 = (*extraout_w11_01)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_,param_1);
  if (cVar5 != '\0') {
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_02)(uVar8);
    if (cVar5 == '\0') {
      FUN_10026b60(param_1);
    }
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_03)(uVar8);
    if ((cVar5 == '\0') != (bool)*(char *)(*piVar15 + 0x784)) {
      FUN_100269d8(param_1);
    }
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_04)(uVar8);
    if (cVar5 != '\0') {
      FUN_10026b60(param_1);
    }
    if (*(int *)(*puVar1 + 0x29c) != 0) {
      auVar18 = (*pcVar3)();
      (*extraout_w11_05)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff,0,iVar10);
    }
    iVar10 = 0;
    if (0 < *(int *)(*piVar15 + 0x797)) {
      uVar11 = ZEXT48(FUN_1008e3a0);
      local_4a0 = puVar1;
      local_498 = param_1;
      iStack_494 = param_8;
      local_490 = iVar7;
      piStack_48c = piVar15;
      local_484 = puVar1;
      local_480 = piVar15;
      local_47c = puVar1;
      local_478 = puVar1;
      do {
        uVar8 = (*pcVar3)(*local_47c,uVar11);
        (*extraout_w11_06)(uVar8,iVar10,0);
        uVar8 = (*pcVar3)();
        (*extraout_w11_07)(uVar8,iVar10,1);
        uVar8 = (*pcVar3)();
        (*extraout_w11_08)(uVar8,iVar10,2);
        iVar10 = iVar10 + 1;
        uVar11 = extraout_x1;
        param_1 = local_498;
        param_8 = iStack_494;
        piVar15 = piStack_48c;
        puVar1 = local_484;
        iVar7 = local_490;
      } while (iVar10 < *(int *)(*local_480 + 0x797));
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    FUN_1001d0d0(param_1,*puVar1 + 0xe0,1);
    if (param_8 < 3) {
      FUN_1001d680(param_1,2);
      FUN_1001d738(param_1,1);
    }
    FUN_1001d228(param_1,0);
    FUN_1001d2d0(param_1,0,0xff,0xffff);
    FUN_1001d228(param_1,1);
    FUN_1001d2d0(param_1,0,0xff,0xffff);
    if (param_8 < 3) {
      FUN_1001d680(param_1,0);
      FUN_1001d738(param_1,0);
    }
    else {
      FUN_1001d228(param_1,2);
      FUN_1001d2d0(param_1,0,0xff,0xffff);
    }
    uVar8 = (*pcVar3)();
    (*extraout_w11_09)(uVar8);
    uVar8 = (*pcVar3)();
    (*extraout_w11_10)(uVar8);
    FUN_1001d0d0(param_1,*puVar1 + 0xe0,1);
    FUN_1001d228(param_1,1 < param_8);
    *(undefined4 *)(param_1 + 0x30) = 0x10001;
    uVar9 = *puVar1;
    FUN_1001f788(param_1,*(undefined4 *)(param_11 + 4),*(undefined4 *)(uVar9 + 0x94),
                 *(undefined4 *)(uVar9 + 0x98),*(undefined4 *)(uVar9 + 0x9c),param_8,iVar7,local_464
                );
    if (((*(char *)(*piVar15 + 0x7ba) != '\0') && (*(int *)(param_1 + 0x44) != 0)) &&
       (*(char *)(param_1 + 0x59) != '\0')) {
      (*pcVar3)();
      (*extraout_w11_11)(0,0,0);
    }
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(*piVar15 + 0x7b9);
    uVar8 = (*pcVar3)();
    uVar6 = (*extraout_w11_12)(uVar8);
    FUN_10026730(param_1,1,uVar6);
    uVar9 = *puVar1;
    uVar8 = (*pcVar3)();
    uVar6 = (*extraout_w11_13)(uVar8);
    FUN_100270d8(uVar9,uVar6);
    *(undefined1 *)(param_1 + 0x3f) = 1;
    (*(code *)PTR_FUN_1009d064)(DAT_1009f7ac,auStack_448,0x400);
    (*(code *)PTR_FUN_1009d094)(auStack_448);
    return *(undefined4 *)(param_1 + 0x30);
  }
LAB_1001cbf8:
  FUN_10007200(*piVar15);
  iVar7 = *piVar15;
  iVar10 = *(int *)(iVar7 + 0xf8) + -1;
  *(int *)(iVar7 + 0xf8) = iVar10;
  if ((iVar10 == 0) && (*(char *)(iVar7 + 0x789) != '\0')) {
    (*(code *)PTR_FUN_1009d0cc)(*(undefined4 *)(iVar7 + 0xf4));
    *(undefined4 *)(iVar7 + 0xf4) = 0;
  }
  FUN_10026bb0(param_1,local_488);
  return 0;
}

