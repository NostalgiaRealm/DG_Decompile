/*
 * FUN_1001c468 at 1001c468
 * undefined FUN_1001c468(void)
 * Address ranges: 1001c468-1001d08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1001c468(int param_1,undefined8 param_2,uint param_3,int *param_4,undefined4 param_5,
            undefined8 param_6,uint *param_7,int param_8,undefined4 param_9,undefined4 param_10,
            undefined1 *param_11)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar12;
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
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  uint *local_4a0;
  undefined4 uStack_49c;
  int local_498;
  int iStack_494;
  int *local_490;
  int local_48c;
  uint *local_488;
  int *local_484;
  uint *local_480;
  uint *local_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 *local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 auStack_448 [1032];
  
  if (param_3 == 0xff) {
    param_3 = 7;
  }
  if (param_4 == (int *)0xff) {
    param_4 = (int *)0x0;
  }
  local_480 = param_7;
  local_468 = param_5;
  iVar7 = FUN_1001d188(param_1);
  if ((0xf < param_3) && ((int)param_3 < 0x100 || iVar7 != 4)) {
    return 0;
  }
  if ((&DAT_00000008 < param_4) && ((int)param_4 < 0xff || iVar7 != 4)) {
    return 0;
  }
  if ((int)param_3 < 0x100) {
    puVar16 = (uint *)(uint)*(ushort *)(param_3 * 4 + 0x1009e3c0);
    puVar15 = (uint *)(uint)*(ushort *)(param_3 * 4 + 0x1009e3c2);
  }
  else {
    puVar16 = (uint *)(param_3 & 0xffff);
    puVar15 = (uint *)((int)param_3 >> 0x10);
  }
  if (puVar16 == (uint *)0x0 || (puVar16 == (uint *)0x0 || puVar15 == (uint *)0x0)) {
    return 0;
  }
  if (param_8 == 1) {
    param_8 = 2;
  }
  else if ((param_8 != 2) && (param_8 != 3)) {
    return 0;
  }
  piVar14 = (int *)(param_1 + 0x1c);
  uVar9 = 0;
  if ((int)param_3 < 0x100) {
    uVar9 = (int)puVar15 * (int)puVar16 * param_8 * 2;
  }
  if (*(uint *)(*piVar14 + 0x78f) < uVar9) {
    return 0;
  }
  local_48c = FUN_10026938(param_1);
  if (*(int *)(*piVar14 + 0x822) == 1) {
    uVar10 = (*(code *)PTR_FUN_1009d184)(local_48c,0xfffffff0);
    *(bool *)(*piVar14 + 0x784) = (uVar10 & 0xc00000) != 0;
  }
  if (local_48c == 0) {
    return 0;
  }
  iVar7 = *piVar14;
  iVar2 = *(int *)(iVar7 + 0xf8);
  *(int *)(iVar7 + 0xf8) = iVar2 + 1;
  if ((iVar2 == 0) && (*(char *)(iVar7 + 0x789) != '\0')) {
    uVar8 = (*(code *)PTR_FUN_1009d0cc)(0x80000002);
    *(undefined4 *)(iVar7 + 0xf4) = uVar8;
  }
  iVar7 = *piVar14;
  iVar2 = *(int *)(iVar7 + 0x308);
  *(int *)(iVar7 + 0x308) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined1 *)(iVar7 + 0x758) = 0;
    DAT_1009f7b8 = (*(code *)PTR_FUN_1009d014)(0,0,0,0);
    if (DAT_1009f7b8 != 0) {
      (*(code *)PTR_FUN_1009d08c)(iVar7 + 0x318);
      uVar8 = (*(code *)PTR_FUN_1009d028)(0,0,FUN_10007180,iVar7,0,iVar7 + 0x30c);
      *(undefined4 *)(iVar7 + 0x310) = uVar8;
      (*(code *)PTR_FUN_1009d100)(DAT_1009f7b8,0xffffffff);
    }
  }
  uVar10 = FUN_1001bf38(param_1);
  if ((uVar10 & 1) == 0) goto LAB_1001d01c;
  puVar1 = (uint *)(param_1 + 0xc);
  local_464 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(*puVar1 + 0xc) = *local_464;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_488 = (uint *)(param_1 + 0x18);
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar9 = (*extraout_w11)(uVar8,0);
  puVar4 = local_464;
  if (0x10 < uVar9) {
    uVar9 = 0x10;
  }
  *(uint *)(*puVar1 + 0x10) = uVar9;
  if (uVar9 != 0) {
    uVar13 = 0;
    local_4a0 = puVar15;
    local_498 = param_1;
    iStack_494 = param_8;
    local_490 = piVar14;
    local_484 = param_4;
    local_478 = puVar16;
    do {
      uVar8 = (*pcVar3)();
      (*extraout_w11_00)(uVar8,&local_460,*puVar4,uVar13);
      *(undefined4 *)(*puVar1 + uVar13 * 8 + 0x14) = local_460;
      iVar7 = uVar13 * 8;
      uVar13 = uVar13 + 1;
      *(undefined4 *)(*puVar1 + iVar7 + 0x18) = local_45c;
      param_1 = local_498;
      param_4 = local_484;
      puVar16 = local_478;
      puVar15 = local_4a0;
      piVar14 = local_490;
      param_8 = iStack_494;
    } while (uVar13 < uVar9);
  }
  *(int *)(*puVar1 + 0x94) = local_48c;
  *(uint **)(*puVar1 + 0xa0) = puVar16;
  *(uint **)(*puVar1 + 0x98) = puVar16;
  *(uint **)(*puVar1 + 0xa4) = puVar15;
  *(uint **)(*puVar1 + 0x9c) = puVar15;
  iVar7 = *piVar14;
  uVar9 = *(uint *)(iVar7 + 0x79f);
  uVar13 = *(uint *)(iVar7 + 0x79b);
  if ((uVar13 < 0xfffffff8) || ((uVar13 != uVar9 || uVar13 == 0xfffffff9) && 0xff < uVar9)) {
    if ((uVar13 != 0) && (uVar9 != 0)) {
      *(uint *)(*puVar1 + 0xa0) = uVar13;
      uVar9 = *puVar1;
      uVar8 = *(undefined4 *)(*piVar14 + 0x79f);
      goto LAB_1001c8d0;
    }
  }
  else {
    uVar9 = *puVar1;
    local_4a0 = (uint *)(uVar9 + 0xa0);
    if (*(uint *)(param_1 + 0x14) < *(uint *)(uVar9 + 0x10)) {
      FUN_10027728(uVar9,&local_478,*(uint *)(param_1 + 0x14),iVar7 + 0x764);
      *local_4a0 = (uint)local_478;
      *(undefined4 *)(*puVar1 + 0xa4) = uStack_474;
    }
    else {
      *local_4a0 = 0x280;
      uVar9 = *puVar1;
      uVar8 = 0x1e0;
LAB_1001c8d0:
      *(undefined4 *)(uVar9 + 0xa4) = uVar8;
    }
  }
  uVar9 = *puVar1;
  local_4a0 = *(uint **)(uVar9 + 0xa0);
  uStack_49c = *(undefined4 *)(uVar9 + 0xa4);
  uVar11 = FUN_10027980(uVar9,&local_478,*(undefined4 *)(param_1 + 0x14),&local_4a0,*piVar14 + 0x764
                       );
  *(uint **)(extraout_w15 + 0xa8) = local_478;
  *(undefined4 *)(*puVar1 + 0xac) = uStack_474;
  iVar7 = *piVar14;
  FUN_10055bc8(uVar11,&local_478,&local_4a0,*(undefined4 *)(iVar7 + 0x812),
               *(undefined4 *)(iVar7 + 0x816),*(undefined4 *)(iVar7 + 0x81a),
               *(undefined4 *)(iVar7 + 0x81e));
  (*(code *)PTR_FUN_1009d1e4)(*puVar1 + 0xbc,local_478,uStack_474,local_470,uStack_46c);
  if ((int)param_4 < 0x100) {
    iVar7 = *(int *)(&DAT_10096958 + (int)param_4 * 4);
  }
  else {
    iVar7 = (int)param_4 >> 0x10;
  }
  iVar12 = 1;
  *(int *)(*puVar1 + 0xb0) = iVar7;
  iVar2 = *piVar14;
  if (((*(char *)(iVar2 + 0x786) != '\0') && (*(int *)(iVar2 + 0x7a7) != 0)) &&
     (*(int *)(iVar2 + 0x7ab) != 0)) {
    iVar7 = *(int *)(iVar2 + 0x7a7);
    iVar12 = *(int *)(iVar2 + 0x7ab);
  }
  *(int *)(*puVar1 + 0xb4) = iVar7;
  *(int *)(*puVar1 + 0xb8) = iVar12;
  *(int *)(*puVar1 + 0xcc) = param_8;
  *(undefined4 *)(*puVar1 + 0xd0) = 0;
  *(undefined4 *)(*puVar1 + 0xd8) = 0x40;
  *(undefined4 *)(*puVar1 + 0xd4) = local_468;
  iVar7 = FUN_1001d188(param_1);
  *(undefined *)(*puVar1 + 0xdc) = (&DAT_1009e192)[iVar7 * 0x18];
  *(undefined1 *)(*puVar1 + 0xdd) = *param_11;
  *(undefined1 *)(*puVar1 + 0xde) = 1;
  *(undefined1 *)(*puVar1 + 0x11a) = local_480._0_1_;
  *(undefined1 *)(*puVar1 + 0x12d) = 0;
  *(undefined4 *)(*puVar1 + 0x10e) = 0;
  *(undefined4 *)(*puVar1 + 0x10a) = 0;
  *(uint **)(*puVar1 + 0x112) = puVar16;
  *(uint **)(*puVar1 + 0x116) = puVar15;
  iVar7 = *(int *)(*piVar14 + 0x797) * *(int *)(*piVar14 + 0x793);
  if (*(int *)(*puVar1 + 0x29c) == 0) {
    uVar8 = FUN_1007a4c0(iVar7);
    *(undefined4 *)(*puVar1 + 0x29c) = uVar8;
  }
  auVar17 = (*pcVar3)(*puVar1,*piVar14 + 0x764);
  cVar5 = (*extraout_w11_01)(auVar17._0_8_ & 0xffffffff,auVar17._8_8_,param_1);
  if (cVar5 != '\0') {
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_02)(uVar8);
    if (cVar5 == '\0') {
      FUN_10026fe0(param_1);
    }
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_03)(uVar8);
    if ((cVar5 == '\0') != (bool)*(char *)(*piVar14 + 0x784)) {
      FUN_10026e58(param_1);
    }
    uVar8 = (*pcVar3)();
    cVar5 = (*extraout_w11_04)(uVar8);
    if (cVar5 != '\0') {
      FUN_10026fe0(param_1);
    }
    if (*(int *)(*puVar1 + 0x29c) != 0) {
      auVar17 = (*pcVar3)();
      (*extraout_w11_05)(auVar17._0_8_ & 0xffffffff,auVar17._8_8_ & 0xffffffff,0,iVar7);
    }
    iVar7 = 0;
    if (0 < *(int *)(*piVar14 + 0x797)) {
      uVar10 = ZEXT48(FUN_1008e9c0);
      local_4a0 = puVar1;
      local_498 = param_1;
      iStack_494 = param_8;
      local_490 = piVar14;
      local_488 = puVar1;
      local_484 = piVar14;
      local_480 = puVar1;
      local_478 = puVar1;
      do {
        uVar8 = (*pcVar3)(*local_480,uVar10);
        (*extraout_w11_06)(uVar8,iVar7,0);
        uVar8 = (*pcVar3)();
        (*extraout_w11_07)(uVar8,iVar7,1);
        uVar8 = (*pcVar3)();
        (*extraout_w11_08)(uVar8,iVar7,2);
        iVar7 = iVar7 + 1;
        uVar10 = extraout_x1;
        param_1 = local_498;
        param_8 = iStack_494;
        piVar14 = local_490;
        puVar1 = local_488;
      } while (iVar7 < *(int *)(*local_484 + 0x797));
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    FUN_1001d290(param_1,*puVar1 + 0xe0,1);
    if (param_8 < 3) {
      FUN_1001db00(param_1,2);
      FUN_1001dbb8(param_1,1);
    }
    FUN_1001d3e8(param_1,0);
    FUN_1001d490(param_1,0,0xff,0xffff);
    FUN_1001d3e8(param_1,1);
    FUN_1001d490(param_1,0,0xff,0xffff);
    if (param_8 < 3) {
      FUN_1001db00(param_1,0);
      FUN_1001dbb8(param_1,0);
    }
    else {
      FUN_1001d3e8(param_1,2);
      FUN_1001d490(param_1,0,0xff,0xffff);
    }
    uVar8 = (*pcVar3)();
    (*extraout_w11_09)(uVar8);
    uVar8 = (*pcVar3)();
    (*extraout_w11_10)(uVar8);
    FUN_1001d290(param_1,*puVar1 + 0xe0,1);
    FUN_1001d3e8(param_1,1 < param_8);
    *(undefined4 *)(param_1 + 0x30) = 0x10001;
    uVar9 = *puVar1;
    FUN_1001fc08(param_1,*(undefined4 *)(param_11 + 4),*(undefined4 *)(uVar9 + 0x94),
                 *(undefined4 *)(uVar9 + 0x98),*(undefined4 *)(uVar9 + 0x9c),param_8,0,local_468);
    if (((*(char *)(*piVar14 + 0x7ba) != '\0') && (*(int *)(param_1 + 0x44) != 0)) &&
       (*(char *)(param_1 + 0x59) != '\0')) {
      (*pcVar3)();
      (*extraout_w11_11)(0,0,0);
    }
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(*piVar14 + 0x7b9);
    uVar8 = (*pcVar3)();
    uVar6 = (*extraout_w11_12)(uVar8);
    FUN_10026bb0(param_1,1,uVar6);
    uVar9 = *puVar1;
    uVar8 = (*pcVar3)();
    uVar6 = (*extraout_w11_13)(uVar8);
    FUN_10027558(uVar9,uVar6);
    *(undefined1 *)(param_1 + 0x3f) = 1;
    (*(code *)PTR_FUN_1009d064)(DAT_1009f7ac,auStack_448,0x400);
    (*(code *)PTR_FUN_1009d094)(auStack_448);
    return *(undefined4 *)(param_1 + 0x30);
  }
LAB_1001d01c:
  FUN_10007360(*piVar14);
  iVar7 = *piVar14;
  iVar2 = *(int *)(iVar7 + 0xf8) + -1;
  *(int *)(iVar7 + 0xf8) = iVar2;
  if ((iVar2 == 0) && (*(char *)(iVar7 + 0x789) != '\0')) {
    (*(code *)PTR_FUN_1009d0cc)(*(undefined4 *)(iVar7 + 0xf4));
    *(undefined4 *)(iVar7 + 0xf4) = 0;
  }
  FUN_10027030(param_1,local_48c);
  return 0;
}

