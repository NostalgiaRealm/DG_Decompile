/*
 * FUN_100b7a98 at 100b7a98
 * undefined FUN_100b7a98(void)
 * Address ranges: 100b7a98-100b831f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b7a98(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined4 *puVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  float local_16c;
  float local_168;
  float local_164;
  undefined4 *local_150;
  int local_13c;
  int local_138;
  int *local_134;
  undefined4 *local_130;
  int local_12c;
  undefined1 auStack_128 [8];
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  uint local_60;
  
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_134 = (int *)(param_8 + 4);
  iVar7 = 0;
  if (param_8 != 0) {
    iVar7 = param_8 + -0xc0;
  }
  iVar4 = param_8 + -0xc0;
  if (*local_134 == 0) {
    iVar4 = iVar7;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar4,param_6,param_7,0);
  (*pcVar12)();
  local_16c = (float)(*extraout_w11_00)(iVar4);
  (*pcVar12)();
  local_168 = (float)(*extraout_w11_01)(iVar4);
  iVar7 = param_6 + *(int *)(iVar4 + 0x2c) * param_7;
  (*pcVar12)();
  cVar13 = (*extraout_w11_02)(iVar4);
  if ((((cVar13 == '\0') || (*(int *)(iVar4 + 0x34) - 3U < 3)) || (*(int *)(iVar4 + 0x148) == 0)) ||
     (iVar14 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar4 + 0x150) + iVar7 * 0x20 + 0x10),
     iVar14 != 0)) {
    local_12c = 0;
    (*pcVar12)();
    (*extraout_w11_03)(iVar4,param_6,param_7,0);
    local_150 = (undefined4 *)(iVar4 + 100);
    local_130 = (undefined4 *)(iVar4 + 0x7c);
    puVar19 = (undefined4 *)(iVar4 + 0x68);
    iVar14 = 0x54;
    iVar1 = 0x58;
  }
  else {
    local_150 = (undefined4 *)(iVar4 + 0x158);
    local_130 = (undefined4 *)(iVar4 + 0x170);
    puVar19 = (undefined4 *)(iVar4 + 0x15c);
    iVar14 = 0x148;
    local_16c = 1.0;
    local_168 = 1.0;
    iVar1 = 0x14c;
    local_12c = iVar4;
  }
  iVar1 = *(int *)(iVar4 + iVar1);
  local_108 = (int)param_3;
  iStack_104 = (int)param_4;
  local_110 = (int)param_1;
  iStack_10c = (int)param_2;
  if (param_3 - (float)local_108 != 0.0) {
    local_108 = local_108 + 1;
  }
  if (param_4 - (float)iStack_104 != 0.0) {
    iStack_104 = iStack_104 + 1;
  }
  param_3 = local_16c * param_3;
  param_4 = local_168 * param_4;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + iVar14);
  }
  (*pcVar12)();
  (*extraout_w11_04)(iVar1,auStack_80);
  if ((local_60 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_60 & 0x3f) & 1) != 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((local_60 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_60 & 0x3f) & 1) != 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (*local_134 != 0) {
    piVar2 = (int *)&DAT_00000034;
    if (param_8 != 0) {
      piVar2 = (int *)(param_8 + -0x8c);
    }
    if (*piVar2 - 3U < 3) {
      bVar9 = true;
      goto LAB_100b7da0;
    }
  }
  bVar9 = false;
LAB_100b7da0:
  piVar2 = (int *)(param_5 + 0x1cf04);
  *(int *)(*(int *)(*piVar2 + 0x1304) + 0x948) = param_5;
  piVar3 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x634);
  *piVar3 = *piVar3 + 1;
  iVar14 = *(int *)(*piVar2 + 0x1304);
  FUN_1011ec30(*(undefined4 *)(iVar14 + 0x8e4),*(undefined4 *)(param_5 + 0x1cf0c),
               *(undefined4 *)(iVar14 + 0x8e0),iVar14,*(undefined8 *)(iVar14 + 0x938));
  FUN_10114b80(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(param_5 + 0x1cf0c));
  uVar15 = 0x10;
  if (!bVar9) {
    uVar15 = 4;
  }
  FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),iVar1,iVar7,0,uVar15);
  local_118 = (int)param_3;
  iStack_114 = (int)param_4;
  local_120 = (int)(local_16c * param_1);
  iStack_11c = (int)(local_168 * param_2);
  if (param_3 - (float)local_118 != 0.0) {
    local_118 = local_118 + 1;
  }
  if (param_4 - (float)iStack_114 != 0.0) {
    iStack_114 = iStack_114 + 1;
  }
  if (bVar9) {
    FUN_10112730(*(undefined4 *)(*piVar2 + 0x15e0),&local_13c,*puVar19,iVar7);
    uVar5 = *(uint *)(&DAT_1016f210 + *(int *)(iVar4 + 0x1c) * 0x2c);
    if (uVar5 == 0) {
      local_164 = 0.0;
    }
    else {
      local_164 = (float)((double)(uVar5 & param_9) / (double)uVar5);
    }
    (*pcVar12)();
    cVar13 = (*extraout_w11_05)(iVar4);
    if (cVar13 == '\0') {
      uVar18 = 0;
      uVar17 = 1;
    }
    else {
      FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),iVar1,
                   param_6 + (*(int *)(iVar4 + 0x24) + param_7) * *(int *)(iVar4 + 0x2c),0,0x10);
      uVar18 = 0;
      uVar5 = *(uint *)(&DAT_1016f214 + *(int *)(iVar4 + 0x1c) * 0x2c);
      if (uVar5 != 0) {
        uVar8 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
        uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        uVar18 = (undefined1)
                 ((uVar5 & param_9) >>
                 (ulonglong)((uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10) & 0x1f));
      }
      uVar17 = 3;
    }
    FUN_101160e0(local_164,*(undefined4 *)(*piVar2 + 0x1304),local_13c,uVar17,uVar18,1,&local_120);
  }
  else {
    uVar17 = FUN_10112730(*(undefined4 *)(*piVar2 + 0x15dc),&local_138,*local_150,iVar7);
    local_13c = *local_134;
    if (local_13c == 0) {
      uVar15 = 0;
    }
    else {
      puVar19 = (undefined4 *)&DAT_00000008;
      if (param_8 != 0) {
        puVar19 = (undefined4 *)(param_8 + -0xb8);
      }
      uVar15 = *puVar19;
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x1c);
    uVar16 = FUN_100cbe08(uVar17,uVar6,uVar15,param_9,!bVar10 && !bVar11,auStack_90);
    if ((uVar16 & 1) == 0) {
      local_138 = 0x1cfe8;
      if (bVar10 || bVar11) {
        local_138 = 0x1cfe4;
      }
      if (local_13c == 0) {
        uVar15 = 0;
      }
      else {
        puVar19 = (undefined4 *)&DAT_00000008;
        if (param_8 != 0) {
          puVar19 = (undefined4 *)(param_8 + -0xb8);
        }
        uVar15 = *puVar19;
      }
      FUN_100cbef0(param_5,uVar6,uVar15,param_9);
      uVar15 = FUN_100b7740(*piVar2 + 0x1600,&DAT_10165b50);
      *(undefined4 *)(param_5 + 0x1cf28) = uVar15;
      uVar15 = FUN_10060cf8(*piVar2 + 0x1620,&DAT_10165b20);
      local_f0 = 0;
      uStack_e8 = 0;
      *(undefined4 *)(param_5 + 0x1cf30) = uVar15;
      local_d4 = 0;
      local_cc = 0;
      local_c4 = 0;
      local_b4 = 0;
      *(undefined4 *)(param_5 + 0x1cf38) = *(undefined4 *)(param_5 + 0x1d028);
      local_9c = 0;
      local_bc = 0;
      local_ac = 0;
      local_a4 = 0;
      local_100 = local_16c * param_1;
      fStack_fc = local_168 * param_2;
      local_f8 = param_3;
      fStack_f4 = param_4;
      local_e0 = param_6;
      iStack_dc = param_7;
      local_d8 = iVar7;
      FUN_10112730(*(undefined4 *)(*piVar2 + 0x15dc),auStack_128,*local_150,iVar7);
      FUN_10115820(*(undefined4 *)(*piVar2 + 0x1304),1,auStack_128,0,0);
      uVar15 = FUN_10061858(*piVar2 + 0x15f0,&DAT_10165ae8);
      *(undefined4 *)(param_5 + 0x1cf34) = uVar15;
      *(undefined4 *)(param_5 + 0x1cf68) = 0;
      *(undefined4 *)(param_5 + 0x1cf44) = 1;
      *(undefined4 *)(param_5 + 0x1cf48) = *local_130;
      *(undefined4 *)(param_5 + 0x1cf4c) = 0;
      local_c8 = iVar1;
      FUN_100b3520(param_5,&local_100,*(undefined4 *)(local_138 + param_5));
    }
    else {
      FUN_10116040(*(undefined4 *)(*piVar2 + 0x1304),local_138,auStack_90,1,&local_120);
    }
  }
  if (local_12c == 0) {
    (*pcVar12)();
    (*extraout_w11_06)(iVar4,iVar7,&local_110);
  }
  else {
    FUN_100c29a0(local_12c,iVar7,&local_110);
  }
  (*pcVar12)();
  (*extraout_w11_07)(iVar4,param_6,param_7);
  FUN_10113d40(*(int *)(*piVar2 + 0x1304) + 4,0);
  return;
}

