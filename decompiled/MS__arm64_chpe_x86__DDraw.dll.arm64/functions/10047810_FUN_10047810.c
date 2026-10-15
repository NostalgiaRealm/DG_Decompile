/*
 * FUN_10047810 at 10047810
 * undefined FUN_10047810(void)
 * Address ranges: 10047810-100480bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10047810(float param_1,float param_2,float param_3,float param_4,int param_5,
                 ulonglong *param_6,int param_7,undefined4 *param_8,char param_9,char param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
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
  ulonglong extraout_x11;
  ulonglong extraout_x12;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  char local_4f0;
  uint local_4ec;
  float local_4e8;
  float local_4e4;
  int *local_4e0;
  uint local_4dc;
  uint local_4d8;
  float local_4d4;
  uint local_4d0;
  uint local_4cc;
  int local_4c8;
  int *local_4c4;
  ulonglong *local_4c0;
  int local_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 *local_4b0;
  undefined4 *local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  ulonglong local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  uint local_470;
  uint uStack_46c;
  uint *local_468;
  uint local_460;
  uint uStack_45c;
  uint local_458;
  int local_450;
  int iStack_44c;
  int local_448;
  undefined1 auStack_440 [1024];
  
  local_4c4 = (int *)(param_5 + 4);
  local_4bc = *local_4c4;
  local_4e0 = (int *)(param_7 + 4);
  iVar13 = *local_4e0;
  uVar14 = *(undefined4 *)(local_4bc + 0x4c);
  local_4e8 = param_2;
  local_4e4 = param_1;
  local_4d4 = param_3;
  local_4c8 = param_5;
  local_4c0 = param_6;
  iVar10 = FUN_1004c3a8(param_5 + 0x150);
  iVar11 = FUN_1004c408(extraout_x12 & 0xffffffff);
  uVar12 = FUN_1004d5d0(extraout_x11 & 0xffffffff,iVar10,iVar11);
  local_4d0 = (uint)local_4e4;
  local_4cc = (uint)local_4e8;
  if ((((param_9 == '\0') || (param_10 != '\0')) || ((uVar12 & 1) == 0)) ||
     (((iVar10 - 1U & local_4d0) != 0 || (local_474 = true, (iVar11 - 1U & local_4cc) != 0)))) {
    local_474 = false;
  }
  local_480 = 0;
  local_478 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  local_488 = 0;
  local_490 = 0;
  if ((bool)local_474) {
    (*(code *)PTR_FUN_100ba2b8)(&local_490,local_4d0,local_4cc,(int)local_4d4,(int)param_4);
    puVar18 = (undefined4 *)(iVar13 + 0x70);
    puVar17 = (undefined4 *)(iVar13 + 0x6c);
    uStack_498 = local_4c0[1];
    local_4a0 = *local_4c0;
    puVar21 = (undefined4 *)(*local_4e0 + 0x50);
    puVar20 = (undefined4 *)(*local_4c4 + 0x50);
    puVar16 = (undefined4 *)(local_4bc + 0x70);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar8 = (*extraout_w11)(uVar14,*extraout_w8,*puVar16,*puVar17,*puVar18,*puVar20,*puVar21,
                            &local_4a0);
    return cVar8;
  }
  local_4a8 = *(undefined4 *)(param_7 + 400);
  local_468 = (uint *)(param_7 + 0x1d0);
  local_4a4 = *local_468;
  uVar2 = (uint)*local_4c0 & 0xfffffffc;
  uVar4 = *(uint *)((int)local_4c0 + 4);
  uVar19 = *local_4c0;
  uVar3 = uVar4 & 0xfffffffc;
  local_4d8 = (uint)local_4c0[1] + 3 & 0xfffffffc;
  local_4dc = *(uint *)((int)local_4c0 + 0xc) + 3 & 0xfffffffc;
  local_4ac = (undefined4 *)(iVar13 + 0x6c);
  uStack_4b4 = *local_4ac;
  local_4b0 = (undefined4 *)(iVar13 + 0x70);
  local_4b8 = *local_4b0;
  uVar15 = FUN_10047360(param_7);
  if (((uVar15 & 1) == 0) || (uVar15 = FUN_100473d0(local_4c8), (uVar15 & 1) == 0)) {
    local_4f0 = '\0';
  }
  else {
    local_4f0 = '\x01';
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((((param_10 == '\0') && (*(char *)(param_8 + 1) == '\0')) &&
      (*(char *)((int)param_8 + 5) == '\0')) &&
     (((*(char *)(param_8 + 2) == '\0' && (local_4f0 == '\0')) && ((uVar12 & 1) != 0)))) {
    cVar8 = '\x01';
    if ((*(int *)(param_7 + 0x1cc) != 5) && (*(int *)(param_7 + 0x1cc) != 6)) goto LAB_10047aa8;
LAB_10047d2c:
    iVar13 = *(int *)(*local_4e0 + 0x50);
    local_4ec = local_4d0;
    local_4d0 = local_4cc;
    local_4e0 = (int *)*(int *)(param_7 + 0x1cc);
  }
  else {
LAB_10047aa8:
    uStack_46c = local_4dc - uVar3;
    local_470 = local_4d8 - uVar2;
    iVar13 = FUN_100391d0(*(undefined4 *)(local_4c8 + 0xfc),local_470,uStack_46c,0);
    if (iVar13 == 0) {
      cVar8 = '\0';
      goto LAB_10047d2c;
    }
    if (((uVar12 & 1) == 0) || (*(char *)(param_8 + 2) != '\0')) {
      local_4a0 = 0;
      uStack_498 = CONCAT44((float)uStack_46c,(float)local_470);
      local_490 = CONCAT44((float)uVar3,(float)uVar2);
      local_488 = CONCAT44((float)local_4dc,(float)local_4d8);
      puVar18 = (undefined4 *)(*local_4c4 + 0x50);
      puVar17 = (undefined4 *)(local_4bc + 0x70);
      (*pcVar6)();
      cVar9 = (*extraout_w11_00)(uVar14,0,0,*extraout_w8_00,*puVar17,iVar13,*puVar18,&local_4a0);
      cVar8 = '\0';
      if (cVar9 != '\0') goto LAB_10047b94;
    }
    else {
LAB_10047b94:
      local_480 = CONCAT44(*local_468,*param_8);
      local_490 = CONCAT44(local_4e8,local_4e4);
      local_488 = CONCAT44(param_4,local_4d4);
      local_478 = CONCAT13(local_4f0,
                           CONCAT12(*(undefined1 *)((int)param_8 + 7),
                                    CONCAT11(*(undefined1 *)((int)param_8 + 6),
                                             *(char *)(param_8 + 2))));
      auVar23._0_4_ = (int)*local_4c0 - (int)(uVar19 & 0xfffffffcfffffffc);
      auVar23._4_4_ = (int)(*local_4c0 >> 0x20) - (int)((uVar19 & 0xfffffffcfffffffc) >> 0x20);
      auVar23._8_4_ = (int)local_4c0[1] - uVar2;
      auVar23._12_4_ = (int)(local_4c0[1] >> 0x20) - uVar3;
      auVar23 = NEON_ucvtf(auVar23,4);
      uStack_498 = auVar23._8_8_;
      local_4a0 = auVar23._0_8_;
      puVar18 = (undefined4 *)(*local_4e0 + 0x50);
      (*pcVar6)();
      cVar8 = (*extraout_w11_01)(uVar14,0,0,*local_4ac,*local_4b0,iVar13,*puVar18,&local_4a0);
    }
    piVar1 = (int *)(param_7 + 0x1cc);
    if (*piVar1 == 0) {
      FUN_1004ff20(local_4c8,auStack_440);
      uVar19 = ZEXT48(auStack_440);
    }
    else {
      uVar19 = 0;
    }
    (*pcVar6)();
    local_4a8 = (*extraout_w11_02)(uVar14,local_4a8,*piVar1,6,uVar19 & 0xffffffff,0);
    (*pcVar6)();
    (*extraout_w11_03)(uVar14,&local_460,*piVar1);
    local_4ec = 0;
    local_4e0 = (int *)0x6;
    local_4d0 = 0;
    local_4b8 = 0;
    uStack_4b4 = 0;
    local_4a4 = local_458 | uStack_45c | local_460;
  }
  (*pcVar6)();
  (*extraout_w11_04)(uVar14,&local_450,local_4e0);
  if (local_450 == 0xff) {
    if ((iStack_44c == 0xff00) && (local_448 == 0xff0000)) {
      uVar22 = 1;
      goto LAB_10047e08;
    }
  }
  else if (local_450 == -0x1000000) {
    if ((iStack_44c == 0xff0000) && (local_448 == 0xff00)) {
      uVar22 = 2;
      goto LAB_10047e08;
    }
  }
  else if (((local_450 == 0xff00) && (iStack_44c == 0xff0000)) && (local_448 == -0x1000000)) {
    uVar22 = 3;
    goto LAB_10047e08;
  }
  if (local_450 != 0xff0000) {
    return '\0';
  }
  if (iStack_44c != 0xff00) {
    return '\0';
  }
  uVar22 = 0;
  if (local_448 != 0xff) {
    return '\0';
  }
LAB_10047e08:
  if (cVar8 == '\0') {
    return '\0';
  }
  local_4d4 = 0.0;
  local_4cc = 0;
  (*pcVar6)();
  iVar10 = (*extraout_w11_05)(iVar13,uStack_4b4,local_4b8,1,1,&local_4d4,&local_4cc);
  if (iVar10 != 0) {
    return '\0';
  }
  local_4e8 = 0.0;
  local_4e4 = 0.0;
  local_4ac = (undefined4 *)(local_4bc + 0x70);
  local_4b0 = (undefined4 *)(local_4bc + 0x6c);
  puVar18 = local_4ac;
  uVar14 = (*pcVar6)();
  iVar10 = (*extraout_w11_06)(uVar14,*extraout_w8_01,*puVar18,2,1,&local_4e4,&local_4e8);
  if (iVar10 == 0) {
    bVar7 = local_4e0 != (int *)0x5;
    if ((*(char *)(param_8 + 2) == '\0') && ((*(uint *)(param_7 + 0x154) >> 0x10 & 1) != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    iVar10 = local_4cc * local_4d0 + local_4ec * 4 + (int)local_4d4;
    iVar11 = *(int *)(local_4c8 + 0x1a0);
    if ((iVar11 + 0xcdaba7bcU & 0xfeffffff) == 0) {
      puVar18 = &local_4a8;
      if (!bVar5) {
        puVar18 = (undefined4 *)0x0;
      }
      FUN_10050bd0(iVar10,local_4cc,local_4d8 - uVar2,local_4dc - uVar3,uVar22,puVar18,bVar7,
                   (uVar4 >> 2) * (int)local_4e8 + uVar2 * 4 + (int)local_4e4,local_4e8);
    }
    else if ((iVar11 + 0xcbaba7bcU & 0xfeffffff) == 0) {
      puVar18 = &local_4a8;
      if (!bVar5) {
        puVar18 = (undefined4 *)0x0;
      }
      FUN_10050de0(iVar10,local_4cc,local_4d8 - uVar2,local_4dc - uVar3,uVar22,puVar18,bVar7,
                   (uVar4 >> 2) * (int)local_4e8 + uVar2 * 4 + (int)local_4e4,local_4e8);
    }
    else if (iVar11 == 0x31545844) {
      puVar18 = &local_4a8;
      if (!bVar5) {
        puVar18 = (undefined4 *)0x0;
      }
      FUN_100509b0(iVar10,local_4cc,local_4d8 - uVar2,local_4dc - uVar3,uVar22,puVar18,bVar7,
                   (uVar4 >> 2) * (int)local_4e8 + (uVar2 >> 1) * 4 + (int)local_4e4,local_4e8);
    }
    uVar14 = (*pcVar6)();
    (*extraout_w11_07)(uVar14,*local_4b0,*local_4ac);
  }
  else {
    cVar8 = '\0';
  }
  (*pcVar6)();
  (*extraout_w11_08)(iVar13,uStack_4b4,local_4b8);
  return cVar8;
}

