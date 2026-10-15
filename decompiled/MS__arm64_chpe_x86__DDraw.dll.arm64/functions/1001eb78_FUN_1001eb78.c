/*
 * FUN_1001eb78 at 1001eb78
 * undefined FUN_1001eb78(void)
 * Address ranges: 1001eb78-1001f4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eb78(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  code *pcVar7;
  ulonglong uVar8;
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
  undefined4 local_1d8;
  undefined1 auStack_1d4 [4];
  int *local_1d0;
  undefined4 local_1cc;
  int local_1c8;
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
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [32];
  uint local_60;
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = param_2 + -0xc0;
  }
  piVar1 = (int *)(iVar4 + 0xfc);
  local_1e8 = 0;
  iVar17 = *(int *)(&DAT_100b5468 + *piVar1 * 4);
  iVar16 = *(int *)(iVar4 + 0x54);
  iVar15 = *(int *)(iVar4 + 0x60);
  piVar2 = (int *)(iVar4 + 0xe8);
  local_1cc = param_3;
  local_1c8 = param_2;
  if (*piVar2 == 0) goto LAB_1001eec0;
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar9 = (*extraout_w11)(uVar10);
  if (cVar9 == '\0') {
LAB_1001ed18:
    if (cVar9 != '\0') goto LAB_1001eec0;
  }
  else {
    iVar12 = *piVar2;
    if (*(int *)(iVar12 + 0x54) == 0) goto LAB_1001ed18;
    uVar10 = (*pcVar7)();
    (*extraout_w11_00)(uVar10,auStack_80);
    if ((0x1c < local_60) || ((0x19800a00U >> (ulonglong)(local_60 & 0x1f) & 1) == 0))
    goto LAB_1001ed18;
    local_1e8 = *(int *)(iVar12 + 0x58);
    iVar15 = 0x24;
    if (*(int *)(iVar12 + 0x1c) == 0x15) {
      iVar15 = 0x34;
    }
    iVar17 = *(int *)(iVar15 + param_1);
    FUN_100276f8(iVar12,0,0,0);
    if (*(int *)(iVar12 + 0x58) == 0) {
      if (*(int *)(iVar12 + 0xfc) == 0) {
        FUN_100269b0(iVar12);
      }
      iVar15 = *(int *)(iVar12 + 0x108);
      if (iVar15 != -1) {
        iVar16 = *(int *)(iVar12 + 0x54);
        goto LAB_1001ed18;
      }
    }
    FUN_1006f4f8(*(undefined4 *)(param_1 + 0xcf00),*(int *)(iVar4 + 0xe4),1);
    if ((param_4[5] == 0) && (iVar17 == *(int *)(&DAT_100b5468 + *piVar1 * 4))) {
      iVar16 = *(int *)(iVar4 + 0xe4);
      iVar15 = *(int *)(iVar16 + 0xd84);
      iVar16 = *(int *)(iVar16 + 0xd7c);
      goto LAB_1001eec0;
    }
    local_1e8 = 0;
  }
  piVar3 = (int *)(iVar4 + 0xe4);
  if (*(int *)(*piVar3 + 0xd7c) == 0) {
    FUN_1006f4f8(*(undefined4 *)(param_1 + 0xcf00),*piVar3,1);
  }
  if (*(int *)(*piVar3 + 0xd7c) != 0) {
    local_134 = 1;
    local_140 = 0;
    local_138 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    (*(code *)PTR_FUN_100ba2b8)
              (&uStack_150,0,0,*(undefined4 *)(*piVar2 + 0x14),*(undefined4 *)(*piVar2 + 0x18));
    (*(code *)PTR_FUN_100ba2b8)
              (&local_160,0,0,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    if (*(int *)(iVar4 + 0x54) != *(int *)(*piVar3 + 0xd7c)) {
      FUN_10020e88(iVar4 + 0x48,1,1);
      iVar15 = *piVar3;
      FUN_10020778(iVar4 + 0x48,*(undefined4 *)(iVar15 + 0xd7c),*(undefined4 *)(iVar15 + 0xd84),
                   *(undefined4 *)(iVar15 + 0xd88),
                   *(undefined4 *)(&DAT_100b5468 + *(int *)(iVar15 + 0x2c) * 4));
    }
    iVar15 = 0;
    if (*piVar2 != 0) {
      iVar15 = *piVar2 + 0xc0;
    }
    if (iVar4 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = iVar4 + 0xc0;
    }
    FUN_1001df08(param_1,0,0,0,0,iVar16,iVar15,&local_160);
  }
  iVar16 = *(int *)(*piVar3 + 0xd7c);
  iVar15 = *(int *)(*piVar3 + 0xd84);
  iVar17 = *(int *)(&DAT_100b5468 + *piVar1 * 4);
LAB_1001eec0:
  local_1fc = (undefined4 *)(param_1 + 0xcf00);
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (iVar16 != 0) {
    (*pcVar7)();
    puVar11 = (undefined8 *)(*extraout_w11_01)(iVar16,&local_130);
    uStack_b8 = puVar11[1];
    local_c0 = *puVar11;
    local_a8 = puVar11[3];
    local_b0 = puVar11[2];
    uStack_98 = puVar11[5];
    local_a0 = puVar11[4];
  }
  uVar8 = local_a8;
  local_1c0 = 0;
  uStack_1b8 = CONCAT44((undefined4)local_a8,(int)local_b0);
  local_1a0 = local_b0;
  iVar12 = (*(code *)PTR_FUN_100ba248)(param_4 + 1);
  if (iVar12 == 0) {
    uStack_1b8 = *(undefined8 *)(param_4 + 3);
    local_1c0 = *(undefined8 *)(param_4 + 1);
  }
  local_1d0 = param_4 + 5;
  if (*local_1d0 != 0) {
    piVar2 = (int *)(iVar4 + 0xe4);
    uVar14 = (uint)(iVar16 == *(int *)(*piVar2 + 0xd7c));
    FUN_1006f4f8(*local_1fc,*piVar2,uVar14 + 1);
    if (*(int *)(*piVar2 + uVar14 * 4 + 0xd7c) != 0) {
      *(int *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x948) = param_1;
      piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 0x634);
      *piVar3 = *piVar3 + 1;
      puVar5 = (undefined4 *)&DAT_0000001c;
      if (*param_4 != 0) {
        puVar5 = (undefined4 *)(*param_4 + -0xa4);
      }
      FUN_100315f0(param_1,*puVar5,local_a0 & 0xffffffff,param_4[6]);
      FUN_1007d4d8(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),
                   *(undefined4 *)(param_1 + 0xcf0c));
      FUN_1007e490(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),
                   *(undefined4 *)(param_1 + 0xcf0c));
      FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),iVar16,0,0,0x80);
      FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),
                   *(undefined4 *)(*piVar2 + uVar14 * 4 + 0xd7c),0,0,4);
      uVar10 = FUN_1001cbb0(*(int *)(param_1 + 0xcf04) + 0x1600,&DAT_100b57d0);
      *(undefined4 *)(param_1 + 0xcf28) = uVar10;
      uVar10 = FUN_1001d200(*(int *)(param_1 + 0xcf04) + 0x15f0,&DAT_100b5760);
      *(undefined4 *)(param_1 + 0xcf34) = uVar10;
      uVar10 = FUN_1001cf08(*(int *)(param_1 + 0xcf04) + 0x1620,&DAT_100b5798);
      *(undefined4 *)(param_1 + 0xcf30) = uVar10;
      *(undefined4 *)(param_1 + 0xcf38) = *(undefined4 *)(param_1 + 0xd028);
      *(undefined4 *)(param_1 + 0xcf44) = 1;
      iVar12 = *(int *)(*piVar2 + 0x2c);
      *(undefined4 *)(param_1 + 0xcf68) = 0;
      *(undefined4 *)(param_1 + 0xcf48) = *(undefined4 *)(&DAT_100b5468 + iVar12 * 4);
      *(undefined4 *)(param_1 + 0xcf4c) = 0;
      iVar12 = *(int *)(param_1 + 0xcf04);
      uVar13 = FUN_1007c0d0(*(undefined4 *)(iVar12 + 0x15e8),1,
                            *(undefined4 *)(*(int *)(iVar12 + 0x1300) + 0xc),
                            *(undefined8 *)(*(int *)(iVar12 + 0x1304) + 0x938),&local_198);
      if ((uVar13 & 1) != 0) {
        FUN_1007e3a0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),1,auStack_18c);
        FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15d8),&local_1d8,iVar15,0);
        uVar10 = (*pcVar7)();
        (*extraout_w11_02)(uVar10,1,local_190,local_1d8,0);
        FUN_1007e3a0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),1,auStack_18c);
        FUN_1007e9b0(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),6,local_198);
        FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15dc),auStack_1d4,
                     *(undefined4 *)(*piVar2 + 0xd88),uVar14);
        FUN_1007f130(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),1,auStack_1d4,0,0);
        local_130 = 0;
        local_120 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        fStack_124 = (float)(uVar8 & 0xffffffff);
        local_128 = (float)(local_1a0 & 0xffffffff);
        uStack_f4 = 0;
        local_f8 = *(undefined4 *)(*piVar2 + uVar14 * 4 + 0xd7c);
        uStack_e4 = 0;
        uStack_cc = 0;
        uStack_ec = 0;
        uStack_dc = 0;
        uStack_d4 = 0;
        iVar15 = 0xd004;
        if (*local_1d0 != 4) {
          iVar15 = 0xd000;
        }
        fStack_118 = local_128;
        fStack_114 = fStack_124;
        FUN_100187b8(param_1,&local_130,*(undefined4 *)(iVar15 + param_1));
        iVar15 = *(int *)(*piVar2 + 0xd84) + uVar14;
        iVar16 = *(int *)(*piVar2 + uVar14 * 4 + 0xd7c);
        iVar17 = *(int *)(&DAT_100b5468 + *piVar1 * 4);
      }
      FUN_1007d440(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 4,0);
    }
  }
  local_1b0 = &PTR_FUN_100b1f6c;
  iVar12 = *(int *)(param_1 + 4);
  local_180 = *(undefined4 *)(iVar12 + 0xc);
  local_17c = *(undefined4 *)(iVar12 + 0x10);
  local_178 = *(undefined4 *)(iVar12 + 0x14);
  uStack_16c = uStack_1b8;
  local_174 = local_1c0;
  local_164 = *(undefined4 *)(&DAT_100b3450 + *(int *)(iVar12 + 0xca) * 4);
  iStack_1ac = param_1;
  local_1a8 = param_4;
  FUN_10075208(*local_1fc,*(undefined4 *)(iVar4 + 0xe4),iVar16,iVar15,local_1e8,iVar17,local_1cc,
               &local_180,&local_1b0);
  piVar1 = (int *)(param_1 + 0xd05c);
  do {
    cVar9 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(param_1 + 0xd060));
  if (local_1c8 != 0) {
    uVar10 = (*pcVar7)();
    (*extraout_w11_03)(uVar10,1);
  }
  return;
}

