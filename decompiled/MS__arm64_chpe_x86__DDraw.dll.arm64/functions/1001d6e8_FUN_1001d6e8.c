/*
 * FUN_1001d6e8 at 1001d6e8
 * undefined FUN_1001d6e8(void)
 * Address ranges: 1001d6e8-1001def7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d6e8(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  undefined4 *puVar18;
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
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_134 = (int *)(param_8 + 4);
  iVar6 = 0;
  if (param_8 != 0) {
    iVar6 = param_8 + -0xc0;
  }
  iVar3 = param_8 + -0xc0;
  if (*local_134 == 0) {
    iVar3 = iVar6;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar3,param_6,param_7,0);
  (*pcVar11)();
  local_16c = (float)(*extraout_w11_00)(iVar3);
  (*pcVar11)();
  local_168 = (float)(*extraout_w11_01)(iVar3);
  iVar6 = param_6 + *(int *)(iVar3 + 0x2c) * param_7;
  (*pcVar11)();
  cVar12 = (*extraout_w11_02)(iVar3);
  if ((((cVar12 == '\0') || (*(int *)(iVar3 + 0x34) - 3U < 3)) || (*(int *)(iVar3 + 0x148) == 0)) ||
     (iVar13 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar3 + 0x150) + iVar6 * 0x20 + 0x10),
     iVar13 != 0)) {
    local_12c = 0;
    (*pcVar11)();
    (*extraout_w11_03)(iVar3,param_6,param_7,0);
    local_150 = (undefined4 *)(iVar3 + 100);
    local_130 = (undefined4 *)(iVar3 + 0x7c);
    puVar18 = (undefined4 *)(iVar3 + 0x68);
    iVar1 = 0x54;
    iVar13 = 0x58;
  }
  else {
    local_150 = (undefined4 *)(iVar3 + 0x158);
    local_130 = (undefined4 *)(iVar3 + 0x170);
    puVar18 = (undefined4 *)(iVar3 + 0x15c);
    iVar1 = 0x148;
    local_16c = 1.0;
    local_168 = 1.0;
    iVar13 = 0x14c;
    local_12c = iVar3;
  }
  iVar13 = *(int *)(iVar3 + iVar13);
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
  if (iVar13 == 0) {
    iVar13 = *(int *)(iVar3 + iVar1);
  }
  (*pcVar11)();
  (*extraout_w11_04)(iVar13,auStack_80);
  if ((local_60 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_60 & 0x3f) & 1) != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((local_60 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_60 & 0x3f) & 1) != 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (*local_134 != 0) {
    piVar2 = (int *)&DAT_00000034;
    if (param_8 != 0) {
      piVar2 = (int *)(param_8 + -0x8c);
    }
    if (*piVar2 - 3U < 3) {
      bVar8 = true;
      goto LAB_1001d9f4;
    }
  }
  bVar8 = false;
LAB_1001d9f4:
  *(int *)(*(int *)(*(int *)(param_5 + 0xcf04) + 0x1304) + 0x948) = param_5;
  piVar2 = (int *)(*(int *)(*(int *)(param_5 + 0xcf04) + 0x1304) + 0x634);
  *piVar2 = *piVar2 + 1;
  FUN_1007d4d8(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),
               *(undefined4 *)(param_5 + 0xcf0c));
  FUN_1007e490(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),
               *(undefined4 *)(param_5 + 0xcf0c));
  uVar14 = 0x10;
  if (!bVar8) {
    uVar14 = 4;
  }
  FUN_1007d820(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),iVar13,iVar6,0,uVar14);
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
  if (bVar8) {
    FUN_10073b50(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x15e0),&local_13c,*puVar18,iVar6);
    uVar4 = *(uint *)(&DAT_100bb780 + *(int *)(iVar3 + 0x1c) * 0x2c);
    if (uVar4 == 0) {
      local_164 = 0.0;
    }
    else {
      local_164 = (float)((double)(uVar4 & param_9) / (double)uVar4);
    }
    (*pcVar11)();
    cVar12 = (*extraout_w11_05)(iVar3);
    if (cVar12 == '\0') {
      uVar17 = 0;
      uVar16 = 1;
    }
    else {
      FUN_1007d820(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),iVar13,
                   param_6 + (*(int *)(iVar3 + 0x24) + param_7) * *(int *)(iVar3 + 0x2c),0,0x10);
      uVar17 = 0;
      uVar4 = *(uint *)(&DAT_100bb784 + *(int *)(iVar3 + 0x1c) * 0x2c);
      if (uVar4 != 0) {
        uVar7 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
        uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        uVar17 = (undefined1)
                 ((uVar4 & param_9) >>
                 (ulonglong)((uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10) & 0x1f));
      }
      uVar16 = 3;
    }
    FUN_1007f9f0(local_164,*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),local_13c,uVar16,
                 uVar17,1,&local_120);
  }
  else {
    uVar16 = FUN_10073b50(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x15dc),&local_138,*local_150
                          ,iVar6);
    local_13c = *local_134;
    if (local_13c == 0) {
      uVar14 = 0;
    }
    else {
      puVar18 = (undefined4 *)&DAT_00000008;
      if (param_8 != 0) {
        puVar18 = (undefined4 *)(param_8 + -0xb8);
      }
      uVar14 = *puVar18;
    }
    uVar5 = *(undefined4 *)(iVar3 + 0x1c);
    uVar15 = FUN_10031348(uVar16,uVar5,uVar14,param_9,!bVar9 && !bVar10,auStack_90);
    if ((uVar15 & 1) == 0) {
      local_138 = 0xcfe8;
      if (bVar9 || bVar10) {
        local_138 = 0xcfe4;
      }
      if (local_13c == 0) {
        uVar14 = 0;
      }
      else {
        puVar18 = (undefined4 *)&DAT_00000008;
        if (param_8 != 0) {
          puVar18 = (undefined4 *)(param_8 + -0xb8);
        }
        uVar14 = *puVar18;
      }
      FUN_10031430(param_5,uVar5,uVar14,param_9);
      uVar14 = FUN_1001cbb0(*(int *)(param_5 + 0xcf04) + 0x1600,&DAT_100b57d0);
      *(undefined4 *)(param_5 + 0xcf28) = uVar14;
      uVar14 = FUN_1001cf08(*(int *)(param_5 + 0xcf04) + 0x1620,&DAT_100b5798);
      *(undefined4 *)(param_5 + 0xcf30) = uVar14;
      local_f0 = 0;
      uStack_e8 = 0;
      *(undefined4 *)(param_5 + 0xcf38) = *(undefined4 *)(param_5 + 0xd028);
      local_d4 = 0;
      local_cc = 0;
      local_c4 = 0;
      local_b4 = 0;
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
      local_d8 = iVar6;
      FUN_10073b50(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x15dc),auStack_128,*local_150,iVar6
                  );
      FUN_1007f130(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),1,auStack_128,0,0);
      uVar14 = FUN_1001d200(*(int *)(param_5 + 0xcf04) + 0x15f0,&DAT_100b5760);
      *(undefined4 *)(param_5 + 0xcf68) = 0;
      *(undefined4 *)(param_5 + 0xcf34) = uVar14;
      *(undefined4 *)(param_5 + 0xcf44) = 1;
      *(undefined4 *)(param_5 + 0xcf48) = *local_130;
      *(undefined4 *)(param_5 + 0xcf4c) = 0;
      local_c8 = iVar13;
      FUN_100187b8(param_5,&local_100,*(undefined4 *)(local_138 + param_5));
    }
    else {
      FUN_1007f950(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 0x1304),local_138,auStack_90,1,
                   &local_120);
    }
  }
  if (local_12c == 0) {
    (*pcVar11)();
    (*extraout_w11_06)(iVar3,iVar6,&local_110);
  }
  else {
    FUN_10028010(local_12c,iVar6,&local_110);
  }
  (*pcVar11)();
  (*extraout_w11_07)(iVar3,param_6,param_7);
  FUN_1007d440(*(int *)(*(int *)(param_5 + 0xcf04) + 0x1304) + 4,0);
  return;
}

