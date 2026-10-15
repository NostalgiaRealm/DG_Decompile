/*
 * FUN_10020998 at 10020998
 * undefined FUN_10020998(void)
 * Address ranges: 10020998-10021473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020998(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,code *param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8,int param_9,undefined4 param_10,
                 int param_11,undefined4 param_12,byte param_13)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  char *pcVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *pcVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  int local_f8;
  char *local_f4;
  uint *local_f0;
  undefined4 *local_ec;
  code *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  uint *local_b0;
  int iStack_ac;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  uint local_88;
  undefined8 local_80;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar19 = *piVar1;
  local_a8 = CONCAT44(local_a8._4_4_,param_3);
  local_98 = CONCAT44(local_98._4_4_,param_6);
  local_e0 = CONCAT44(local_e0._4_4_,param_8);
  cVar8 = *(char *)(*(int *)(iVar19 + 0x3680) + *(int *)(iVar19 + 0x3684) * 0x18 + 0x530);
  iVar28 = param_1 + param_2 * 0x120;
  iVar16 = iVar28 + 0x140;
  iVar23 = *(int *)(iVar19 + 0x3688);
  local_f8 = param_1;
  local_ec = param_4;
  local_e8 = param_5;
  local_88 = param_7;
  uVar14 = FUN_10011830(iVar19);
  *(undefined1 *)(*piVar1 + 0x3734) = uVar14;
  cVar9 = *(char *)(iVar28 + 0x1bc);
  if ((((cVar9 == '\0') ||
       (iVar19 = *piVar1,
       *(char *)(*(int *)(iVar19 + 0x3680) + *(int *)(iVar19 + 0x3684) * 0x18 + 0x531) == '\0')) ||
      (*(char *)(iVar28 + 0x188) == '\0')) || (*(int *)(iVar28 + 0x210) == -1)) {
    iVar19 = *piVar1;
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_f4 = (char *)(iVar28 + 0x188);
  iVar22 = 8;
  if (cVar9 != '\0') {
    iVar22 = 0xc;
  }
  puVar2 = (uint *)(iVar28 + 0x160);
  puVar3 = (uint *)(iVar28 + 0x164);
  *(undefined4 *)(iVar19 + 0x2e64) = *(undefined4 *)(iVar22 + iVar16);
  puVar6 = (undefined4 *)(iVar23 + 0x1304);
  local_d8 = 0;
  local_d0 = CONCAT44((float)*puVar3,(float)*puVar2);
  uStack_c8 = 0x3f80000000000000;
  local_f0 = puVar2;
  local_b0 = puVar3;
  FUN_1006ae10(*puVar6,1,&local_d8);
  uStack_78 = *puVar2;
  local_80 = 0;
  uStack_74 = *puVar3;
  FUN_1006ace0(*puVar6,1,&local_80);
  *(float *)(*piVar1 + 0x2dc0) = (float)*puVar2;
  *(float *)(*piVar1 + 0x2dc4) = (float)*puVar3;
  iVar19 = *piVar1;
  uVar15 = FUN_10012b70(iVar23 + 0x1600,&DAT_1009ff80);
  *(undefined4 *)(iVar19 + 0x36d8) = uVar15;
  uVar15 = FUN_100131c0(iVar23 + 0x15f0,&DAT_1009fe80);
  *(undefined4 *)(*piVar1 + 0x36e4) = uVar15;
  uVar15 = FUN_10012ec8(iVar23 + 0x1620,&DAT_1009fee0);
  *(undefined4 *)(*piVar1 + 0x36e0) = uVar15;
  piVar4 = (int *)(iVar28 + 0x1fc);
  *(undefined1 *)(*piVar1 + 0x3736) = 1;
  piVar5 = (int *)(iVar28 + 0x1f8);
  iVar19 = *piVar4;
  if (*piVar5 != iVar19) {
    FUN_100694c8(*puVar6,iVar19,0,0,0x1000);
    FUN_100694c8(*puVar6,*piVar5,0,0,0x2000);
    FUN_1006af80(*puVar6,*piVar4,0,*piVar5,0,*(undefined4 *)(iVar28 + 0x144));
    iVar19 = *piVar4;
  }
  uVar26 = *local_b0;
  local_90 = (float)*(uint *)(iVar28 + 0x168) / (float)*local_f0;
  local_a0 = (float)local_e8;
  bVar13 = *(int *)(iVar28 + 0x1a0) == 1;
  puVar7 = local_ec;
  if (bVar13) {
    puVar7 = (undefined4 *)(uVar26 - (int)local_ec);
  }
  fStack_8c = (float)*(uint *)(iVar28 + 0x16c) / (float)uVar26;
  uVar18 = local_a8 & 0xffffffff;
  local_a8 = CONCAT44((float)local_ec,(float)uVar18);
  fStack_9c = (float)(local_98 & 0xffffffff);
  uVar27 = (uint)(int *)local_98;
  if (bVar13) {
    uVar27 = uVar26 - (int)(int *)local_98;
  }
  local_98 = CONCAT44((float)puVar7 * fStack_8c,local_90 * (float)uVar18);
  local_90 = local_90 * local_a0;
  iVar23 = 0xfc;
  if (cVar9 == '\0') {
    iVar23 = 0xdc;
  }
  puVar7 = (undefined4 *)(iVar23 + iVar16);
  fStack_8c = (float)uVar27 * fStack_8c;
  if (bVar10) {
    uVar15 = *(undefined4 *)(iVar28 + 0x20c);
  }
  else {
    uVar15 = 0;
  }
  if (*local_f4 == '\0') {
    iVar23 = 0x920;
  }
  else {
    iVar23 = 0x97c;
    if (!bVar10) {
      iVar23 = 0x924;
    }
  }
  FUN_1001f498(local_f8,&local_a8,&local_98,*(undefined4 *)(iVar23 + local_f8),iVar19,uVar15,*puVar7
               ,puVar7[1],0);
  if (cVar8 != '\0' && param_9 != 0) {
    FUN_100694c8(*puVar6,*puVar7,0,0,0);
    uVar17 = FUN_100695f0(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304));
    *(undefined8 *)(iVar28 + 0x1f0) = uVar17;
  }
  FUN_10069430(*(int *)(*(int *)(*piVar1 + 0x3688) + 0x1304) + 4,0);
  uVar24 = local_88;
  uStack_6c = 1;
  uVar21 = (uint)local_e0;
  *(undefined1 *)(*piVar1 + 0x2da9) = 1;
  uVar20 = (uint)param_13;
  *(undefined1 *)(*piVar1 + 0x2da8) = 1;
  *(undefined1 *)(*piVar1 + 0x2daa) = 1;
  *(undefined1 *)(*piVar1 + 0x2dab) = 1;
  *(undefined1 *)(*piVar1 + 0x3651) = 1;
  uVar27 = *local_b0;
  uVar26 = *local_f0;
  auVar30 = FUN_10024418(local_88,local_e0 & 0xffffffff,*local_f0,uVar27,param_11);
  uStack_74 = uVar26;
  local_98 = auVar30._0_8_;
  local_80 = 0;
  uVar26 = auVar30._4_4_;
  uStack_78 = 0;
  uVar29 = auVar30._12_4_;
  *(int *)(iVar28 + 0x184) = *(int *)(iVar28 + 0x184) + (uVar29 - uVar26 >> 4);
  local_f4 = (char *)((uVar20 + 1) * 2);
  param_11 = (int)local_f4 * param_11;
  local_70 = uVar27;
  if (uVar24 < uVar21) {
    local_a8._0_4_ = auVar30._8_4_;
    local_80 = (ulonglong)uVar26 << 0x20;
    local_70 = uVar29;
    if ((uint)local_a8 != 0) {
      local_70 = uVar29 + 1;
    }
  }
  iVar19 = iVar16 + uVar20 * 0x20;
  puVar6 = (undefined4 *)(iVar19 + 0xdc);
  iVar23 = *(int *)(*piVar1 + 0x3680);
  if ((*(char *)(iVar23 + *(int *)(*piVar1 + 0x3684) * 0x18 + 0x530) != '\0') && (param_9 != 0)) {
    local_a8 = auVar30._8_8_;
    uVar18 = FUN_10062e90(*(undefined4 *)(iVar23 + 0x172c0),*puVar6);
    auVar30._8_8_ = local_a8;
    auVar30._0_8_ = local_98;
    if ((uVar18 & 1) != 0) {
      FUN_100208d8(local_f8,iVar16,param_13);
      pcVar25 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar16 = (*extraout_w11)(uVar15,0,0,0);
      if (iVar16 < 0) {
        return;
      }
      uVar27 = uVar26;
      if ((int *)local_98 != (int *)0x0) {
        local_d8 = CONCAT44(uVar26,(int *)local_98);
        if (uVar29 == uVar26) {
          uVar24 = (uint)local_a8;
        }
        else {
          uVar24 = *local_f0;
        }
        uVar27 = uVar26 + 1;
        local_d0 = (ulonglong)uVar24 << 0x20;
        uStack_c8 = CONCAT44(1,uVar27);
        auVar30 = (*pcVar25)(*puVar6,param_9 + (int)local_f4 * (int)(int *)local_98 +
                                     uVar26 * param_11);
        (*extraout_w11_00)(auVar30._0_8_ & 0xffffffff,auVar30._8_8_,param_11,0,0,&local_d8);
      }
      puVar2 = local_f0;
      if (uVar27 <= uVar29) {
        local_d8 = (ulonglong)uVar27 << 0x20;
        local_d0 = (ulonglong)*local_f0 << 0x20;
        uVar26 = uVar29;
        if ((uint)local_a8 == *local_f0) {
          uVar26 = uVar29 + 1;
        }
        uStack_c8 = CONCAT44(1,uVar26);
        auVar30 = (*pcVar25)(*puVar6,param_9 + uVar27 * param_11);
        (*extraout_w11_01)(auVar30._0_8_ & 0xffffffff,auVar30._8_8_,param_11,0,0,&local_d8);
        uVar26 = uVar29;
        if ((((uint)local_a8 != *puVar2) || (uVar26 = uVar29 + 1, uVar29 == uVar29 + 1)) &&
           ((uint)local_a8 != 0)) {
          local_d0 = local_a8 << 0x20;
          local_d8 = (ulonglong)uVar26 << 0x20;
          uStack_c8 = CONCAT44(1,uVar29 + 1);
          auVar30 = (*pcVar25)(*puVar6,param_9 + uVar26 * param_11);
          (*extraout_w11_02)(auVar30._0_8_ & 0xffffffff,auVar30._8_8_,param_11,0,0,&local_d8);
        }
      }
      local_e0 = 0;
      uVar15 = (*pcVar25)();
      pcVar25 = extraout_w11_03;
      goto LAB_10021444;
    }
  }
  local_a8 = auVar30._8_8_;
  local_98 = auVar30._0_8_;
  puVar7 = (undefined4 *)(iVar19 + 0xe4);
  uStack_68 = *puVar6;
  local_d0 = 0;
  local_d8 = CONCAT44(1,*puVar7);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_c8 = CONCAT44(*local_f0,*(undefined4 *)(iVar19 + 0xf4));
  puVar2 = (uint *)(iVar19 + 0xf8);
  _local_c0 = CONCAT44(1,*local_b0);
  local_b8 = (ulonglong)*puVar2;
  FUN_100694c8(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),uStack_68,0,0,0x800);
  FUN_100694c8(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),*puVar7,0,1,0x400);
  FUN_1006b140(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),&local_d8,0,local_80._4_4_,0,
               &uStack_68,&local_80);
  FUN_100694c8(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304),*puVar7,0,1,0);
  uVar17 = FUN_100695f0(*(undefined4 *)(*(int *)(*piVar1 + 0x3688) + 0x1304));
  *(undefined8 *)(iVar28 + 0x1f0) = uVar17;
  FUN_100208d8(local_f8,iVar16,param_13);
  pcVar25 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_9 == 0) {
    return;
  }
  local_f8 = 0;
  local_b0 = (uint *)(*puVar2 * local_80._4_4_);
  iStack_ac = *puVar2 * local_70;
  uVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar16 = (*extraout_w11_04)(uVar15,0,&local_b0,&local_f8);
  if (iVar16 < 0) {
    return;
  }
  local_e0 = CONCAT44(local_e0._4_4_,puVar2);
  iVar16 = local_f8 + *puVar2 * uVar26;
  local_ec = puVar7;
  if ((int *)local_98 != (int *)0x0) {
    FUN_10083b40(local_88 + param_9,iVar16 + (int)local_f4 * (int)(int *)local_98,
                 (*(int *)(iVar28 + 0x160) - (int)(int *)local_98) * (int)local_f4);
    uVar26 = uVar26 + 1;
    iVar16 = iVar16 + *puVar2;
  }
  lVar12 = local_a8;
  pcVar11 = local_f4;
  param_9 = param_9 + uVar26 * param_11;
  if (uVar26 <= uVar29) {
    local_e8 = pcVar25;
    local_98 = CONCAT44(local_98._4_4_,iVar28 + 0x160);
    piVar1 = (int *)local_e0;
    do {
      iVar28 = (int)lVar12;
      if (uVar26 != uVar29) {
        iVar28 = *(int *)local_98;
      }
      FUN_10083b40(param_9,iVar16,iVar28 * (int)pcVar11);
      uVar26 = uVar26 + 1;
      param_9 = param_9 + param_11;
      iVar16 = *piVar1 + iVar16;
      pcVar25 = local_e8;
    } while (uVar26 <= uVar29);
  }
  local_e0 = 0;
  uVar15 = (*pcVar25)();
  pcVar25 = extraout_w11_05;
LAB_10021444:
  (*pcVar25)(uVar15,0,&local_e0);
  return;
}

