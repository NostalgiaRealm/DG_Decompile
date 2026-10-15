/*
 * FUN_10098e10 at 10098e10
 * undefined FUN_10098e10(void)
 * Address ranges: 10098e10-100997eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098e10(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int iVar16;
  int iVar17;
  undefined4 *local_1fc;
  int local_1e8;
  undefined4 local_1e0;
  undefined1 auStack_1dc [4];
  uint local_1d8;
  int *local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined **local_1b0;
  int iStack_1ac;
  int *local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 auStack_18c [12];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  undefined8 local_120;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [32];
  uint local_60;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = param_2 + -0xc0;
  }
  piVar1 = (int *)(iVar5 + 0xfc);
  local_1e8 = 0;
  iVar17 = *(int *)(&DAT_1012ea00 + *piVar1 * 4);
  iVar16 = *(int *)(iVar5 + 0x54);
  iVar15 = *(int *)(iVar5 + 0x60);
  piVar2 = (int *)(iVar5 + 0xe8);
  local_1d0 = param_3;
  local_1cc = param_2;
  if (*piVar2 == 0) goto LAB_1009914c;
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar9 = (*extraout_w11)(uVar10);
  if (cVar9 == '\0') {
LAB_10098fa4:
    if (cVar9 != '\0') goto LAB_1009914c;
  }
  else {
    iVar12 = *piVar2;
    if (*(int *)(iVar12 + 0x54) == 0) goto LAB_10098fa4;
    uVar10 = (*pcVar8)();
    (*extraout_w11_00)(uVar10,auStack_80);
    if ((0x1c < local_60) || ((0x19800a00U >> (ulonglong)(local_60 & 0x1f) & 1) == 0))
    goto LAB_10098fa4;
    local_1e8 = *(int *)(iVar12 + 0x58);
    iVar15 = 0x24;
    if (*(int *)(iVar12 + 0x1c) == 0x15) {
      iVar15 = 0x34;
    }
    iVar17 = *(int *)(iVar15 + param_1);
    FUN_100a1a48(iVar12,0,0,0);
    if (*(int *)(iVar12 + 0x58) == 0) {
      if (*(int *)(iVar12 + 0xfc) == 0) {
        FUN_100a0d00(iVar12);
      }
      iVar15 = *(int *)(iVar12 + 0x108);
      if (iVar15 != -1) {
        iVar16 = *(int *)(iVar12 + 0x54);
        goto LAB_10098fa4;
      }
    }
    FUN_100ddba8(*(undefined4 *)(param_1 + 0x1cf00),*(int *)(iVar5 + 0xe4),1);
    if ((param_4[5] == 0) && (iVar17 == *(int *)(&DAT_1012ea00 + *piVar1 * 4))) {
      iVar16 = *(int *)(iVar5 + 0xe4);
      iVar15 = *(int *)(iVar16 + 0xd84);
      iVar16 = *(int *)(iVar16 + 0xd7c);
      goto LAB_1009914c;
    }
    local_1e8 = 0;
  }
  piVar3 = (int *)(iVar5 + 0xe4);
  if (*(int *)(*piVar3 + 0xd7c) == 0) {
    FUN_100ddba8(*(undefined4 *)(param_1 + 0x1cf00),*piVar3,1);
  }
  if (*(int *)(*piVar3 + 0xd7c) != 0) {
    local_134 = 1;
    local_140 = 0;
    local_138 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    (*(code *)PTR_FUN_1013426c)
              (&uStack_150,0,0,*(undefined4 *)(*piVar2 + 0x14),*(undefined4 *)(*piVar2 + 0x18));
    (*(code *)PTR_FUN_1013426c)
              (&local_160,0,0,*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
    if (*(int *)(iVar5 + 0x54) != *(int *)(*piVar3 + 0xd7c)) {
      FUN_1009b228(iVar5 + 0x48,1,1);
      iVar15 = *piVar3;
      FUN_1009ab18(iVar5 + 0x48,*(undefined4 *)(iVar15 + 0xd7c),*(undefined4 *)(iVar15 + 0xd84),
                   *(undefined4 *)(iVar15 + 0xd88),
                   *(undefined4 *)(&DAT_1012ea00 + *(int *)(iVar15 + 0x2c) * 4));
    }
    iVar15 = 0;
    if (*piVar2 != 0) {
      iVar15 = *piVar2 + 0xc0;
    }
    if (iVar5 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = iVar5 + 0xc0;
    }
    FUN_10098208(param_1,0,0,0,0,iVar16,iVar15,&local_160);
  }
  iVar16 = *(int *)(*piVar3 + 0xd7c);
  iVar15 = *(int *)(*piVar3 + 0xd84);
  iVar17 = *(int *)(&DAT_1012ea00 + *piVar1 * 4);
LAB_1009914c:
  local_1fc = (undefined4 *)(param_1 + 0x1cf00);
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (iVar16 != 0) {
    (*pcVar8)();
    puVar11 = (undefined8 *)(*extraout_w11_01)(iVar16,&local_130);
    uStack_b8 = puVar11[1];
    local_c0 = *puVar11;
    local_a8 = puVar11[3];
    local_b0 = puVar11[2];
    uStack_98 = puVar11[5];
    local_a0 = puVar11[4];
  }
  local_1c0 = 0;
  local_1d8 = (uint)local_a8;
  uStack_1b8 = CONCAT44((uint)local_a8,(int)local_b0);
  local_1a0 = local_b0;
  iVar12 = (*(code *)PTR_FUN_10134210)(param_4 + 1);
  if (iVar12 == 0) {
    uStack_1b8 = *(undefined8 *)(param_4 + 3);
    local_1c0 = *(undefined8 *)(param_4 + 1);
  }
  local_1d4 = param_4 + 5;
  if (*local_1d4 != 0) {
    piVar2 = (int *)(iVar5 + 0xe4);
    uVar14 = (uint)(iVar16 == *(int *)(*piVar2 + 0xd7c));
    FUN_100ddba8(*local_1fc,*piVar2,uVar14 + 1);
    if (*(int *)(*piVar2 + uVar14 * 4 + 0xd7c) != 0) {
      piVar3 = (int *)(param_1 + 0x1cf04);
      *(int *)(*(int *)(*piVar3 + 0x1304) + 0x948) = param_1;
      piVar4 = (int *)(*(int *)(*piVar3 + 0x1304) + 0x634);
      *piVar4 = *piVar4 + 1;
      puVar6 = (undefined4 *)&DAT_0000001c;
      if (*param_4 != 0) {
        puVar6 = (undefined4 *)(*param_4 + -0xa4);
      }
      FUN_100ab978(param_1,*puVar6,local_a0 & 0xffffffff,param_4[6]);
      iVar12 = *(int *)(*piVar3 + 0x1304);
      FUN_100ec3e0(*(undefined4 *)(iVar12 + 0x8e4),*(undefined4 *)(param_1 + 0x1cf0c),
                   *(undefined4 *)(iVar12 + 0x8e0),iVar12,*(undefined8 *)(iVar12 + 0x938));
      FUN_100e2330(*(undefined4 *)(*piVar3 + 0x1304),*(undefined4 *)(param_1 + 0x1cf0c));
      FUN_100e1588(*(undefined4 *)(*piVar3 + 0x1304),iVar16,0,0,0x80);
      FUN_100e1588(*(undefined4 *)(*piVar3 + 0x1304),*(undefined4 *)(*piVar2 + uVar14 * 4 + 0xd7c),0
                   ,0,4);
      uVar10 = FUN_10097610(*piVar3 + 0x1600,&DAT_1012f0e0);
      *(undefined4 *)(param_1 + 0x1cf28) = uVar10;
      uVar10 = FUN_100514b8(*piVar3 + 0x15f0,&DAT_1012f078);
      *(undefined4 *)(param_1 + 0x1cf34) = uVar10;
      uVar10 = FUN_10050958(*piVar3 + 0x1620,&DAT_1012f0b0);
      *(undefined4 *)(param_1 + 0x1cf30) = uVar10;
      *(undefined4 *)(param_1 + 0x1cf38) = *(undefined4 *)(param_1 + 0x1d028);
      *(undefined4 *)(param_1 + 0x1cf44) = 1;
      *(undefined4 *)(param_1 + 0x1cf48) =
           *(undefined4 *)(&DAT_1012ea00 + *(int *)(*piVar2 + 0x2c) * 4);
      *(undefined4 *)(param_1 + 0x1cf4c) = 0;
      iVar12 = *piVar3;
      *(undefined4 *)(param_1 + 0x1cf68) = 0;
      uVar13 = FUN_100ed630(*(undefined4 *)(iVar12 + 0x15e8),1,
                            *(undefined4 *)(*(int *)(iVar12 + 0x1300) + 0xc),
                            *(undefined8 *)(*(int *)(iVar12 + 0x1304) + 0x938),&local_198);
      if ((uVar13 & 1) != 0) {
        FUN_100e2240(*(undefined4 *)(*piVar3 + 0x1304),1,auStack_18c);
        FUN_100dfee0(*(undefined4 *)(*piVar3 + 0x15d8),&local_1e0,iVar15,0);
        uVar10 = (*pcVar8)();
        (*extraout_w11_02)(uVar10,1,local_190,local_1e0,0);
        FUN_100e2240(*(undefined4 *)(*piVar3 + 0x1304),1,auStack_18c);
        FUN_100e2850(*(undefined4 *)(*piVar3 + 0x1304),6,local_198);
        FUN_100dfee0(*(undefined4 *)(*piVar3 + 0x15dc),auStack_1dc,*(undefined4 *)(*piVar2 + 0xd88),
                     uVar14);
        FUN_100e2fd0(*(undefined4 *)(*piVar3 + 0x1304),1,auStack_1dc,0,0);
        local_130 = 0;
        local_120 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        fStack_124 = (float)local_1d8;
        local_128 = (float)(local_1a0 & 0xffffffff);
        uStack_f4 = 0;
        uStack_e4 = 0;
        uStack_cc = 0;
        local_f8 = *(undefined4 *)(*piVar2 + uVar14 * 4 + 0xd7c);
        uStack_ec = 0;
        uStack_dc = 0;
        uStack_d4 = 0;
        iVar15 = 0x1d004;
        if (*local_1d4 != 4) {
          iVar15 = 0x1d000;
        }
        fStack_118 = local_128;
        fStack_114 = fStack_124;
        FUN_10093400(param_1,&local_130,*(undefined4 *)(iVar15 + param_1));
        iVar15 = *(int *)(*piVar2 + 0xd84) + uVar14;
        iVar16 = *(int *)(*piVar2 + uVar14 * 4 + 0xd7c);
        iVar17 = *(int *)(&DAT_1012ea00 + *piVar1 * 4);
      }
      FUN_100e14f0(*(int *)(*piVar3 + 0x1304) + 4,0);
    }
  }
  local_1b0 = &PTR_FUN_10129da8;
  iVar12 = *(int *)(param_1 + 4);
  local_180 = *(undefined4 *)(iVar12 + 0xc);
  local_17c = *(undefined4 *)(iVar12 + 0x10);
  local_178 = *(undefined4 *)(iVar12 + 0x14);
  uStack_16c = uStack_1b8;
  local_174 = local_1c0;
  local_164 = *(undefined4 *)(&DAT_1012bad0 + *(int *)(iVar12 + 0xca) * 4);
  iStack_1ac = param_1;
  local_1a8 = param_4;
  FUN_100f1a78(*local_1fc,*(undefined4 *)(iVar5 + 0xe4),iVar16,iVar15,local_1e8,iVar17,local_1d0,
               &local_180,&local_1b0);
  piVar1 = (int *)(param_1 + 0x1d05c);
  do {
    cVar9 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(param_1 + 0x1d060));
  if (local_1cc != 0) {
    uVar10 = (*pcVar8)();
    (*extraout_w11_03)(uVar10,1);
  }
  return;
}

