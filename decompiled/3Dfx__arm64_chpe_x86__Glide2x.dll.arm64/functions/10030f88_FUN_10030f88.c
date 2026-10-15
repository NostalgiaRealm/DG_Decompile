/*
 * FUN_10030f88 at 10030f88
 * undefined FUN_10030f88(void)
 * Address ranges: 10030f88-100319ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030f88(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5,
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
  longlong lVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *pcVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  int local_f8;
  undefined4 *local_f4;
  ulonglong local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  uint *local_b8;
  int iStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  uint local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar19 = *piVar1;
  local_98 = CONCAT44(local_98._4_4_,param_4);
  local_b0 = CONCAT44(local_b0._4_4_,param_6);
  local_f0 = CONCAT44(local_f0._4_4_,param_8);
  cVar8 = *(char *)(*(int *)(iVar19 + 0x3180) + *(int *)(iVar19 + 0x3184) * 0x18 + 0x530);
  iVar25 = param_1 + param_2 * 0x120;
  iVar14 = iVar25 + 0x140;
  iVar20 = *(int *)(iVar19 + 0x3188);
  local_f8 = param_1;
  local_e8 = param_5;
  local_a0 = param_7;
  uVar12 = FUN_100200d0(iVar19);
  puVar2 = (uint *)(iVar25 + 0x160);
  puVar3 = (uint *)(iVar25 + 0x164);
  *(undefined1 *)(*piVar1 + 0x3234) = uVar12;
  cVar9 = *(char *)(iVar25 + 0x1bc);
  iVar19 = 8;
  if (cVar9 != '\0') {
    iVar19 = 0xc;
  }
  *(undefined4 *)(*piVar1 + 0x2c74) = *(undefined4 *)(iVar19 + iVar14);
  puVar7 = (undefined4 *)(iVar20 + 0x1304);
  local_e0 = 0;
  local_d8 = CONCAT44((float)*puVar3,(float)*puVar2);
  uStack_d0 = 0x3f80000000000000;
  local_f4 = puVar7;
  local_b8 = puVar3;
  FUN_10061ae0(*puVar7,1,&local_e0);
  uStack_80 = *puVar2;
  local_88 = 0;
  uStack_7c = *puVar3;
  FUN_100619b0(*puVar7,1,&local_88);
  *(float *)(*piVar1 + 0x2bd0) = (float)*puVar2;
  *(float *)(*piVar1 + 0x2bd4) = (float)*puVar3;
  iVar19 = *piVar1;
  uVar13 = FUN_10022380(iVar20 + 0x1600,&DAT_10096c10);
  *(undefined4 *)(iVar19 + 0x31d8) = uVar13;
  uVar13 = FUN_100229d0(iVar20 + 0x15f0,&DAT_10096b18);
  *(undefined4 *)(*piVar1 + 0x31e4) = uVar13;
  uVar13 = FUN_100226d8(iVar20 + 0x1620,&DAT_10096b70);
  puVar7 = local_f4;
  piVar4 = (int *)(iVar25 + 0x1fc);
  piVar5 = (int *)(iVar25 + 0x1f8);
  *(undefined4 *)(*piVar1 + 0x31e0) = uVar13;
  *(undefined1 *)(*piVar1 + 0x3236) = 1;
  iVar19 = *piVar4;
  if (*piVar5 != iVar19) {
    FUN_10060198(*local_f4,iVar19,0,0,0x1000);
    FUN_10060198(*puVar7,*piVar5,0,0,0x2000);
    FUN_10061c50(*puVar7,*piVar4,0,*piVar5,0,*(undefined4 *)(iVar25 + 0x144));
    iVar19 = *piVar4;
  }
  uVar24 = *local_b8;
  local_a8 = (float)*(uint *)(iVar25 + 0x168) / (float)*puVar2;
  local_90 = (float)local_e8;
  bVar11 = *(int *)(iVar25 + 0x1a0) == 1;
  uVar23 = (uint)local_98;
  if (bVar11) {
    uVar23 = uVar24 - (uint)local_98;
  }
  fStack_a4 = (float)*(uint *)(iVar25 + 0x16c) / (float)uVar24;
  local_98 = CONCAT44((float)(local_98 & 0xffffffff),(float)param_3);
  fStack_8c = (float)(local_b0 & 0xffffffff);
  uVar21 = (uint)(code *)local_b0;
  if (bVar11) {
    uVar21 = uVar24 - (int)(code *)local_b0;
  }
  local_b0 = CONCAT44((float)uVar23 * fStack_a4,local_a8 * (float)param_3);
  iVar20 = 0xfc;
  if (cVar9 == '\0') {
    iVar20 = 0xdc;
  }
  local_a8 = local_a8 * local_90;
  puVar7 = (undefined4 *)(iVar20 + iVar14);
  fStack_a4 = (float)uVar21 * fStack_a4;
  iVar20 = 0x4a0;
  if (*(char *)(iVar25 + 0x188) != '\0') {
    iVar20 = 0x4a4;
  }
  FUN_1002fc78(local_f8,&local_98,&local_b0,*(undefined4 *)(iVar20 + local_f8),iVar19,0,*puVar7,
               puVar7[1],0);
  if (cVar8 != '\0' && param_9 != 0) {
    FUN_10060198(*local_f4,*puVar7,0,0,0);
    uVar15 = FUN_100602c0(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304));
    *(undefined8 *)(iVar25 + 0x1f0) = uVar15;
  }
  FUN_10060100(*(int *)(*(int *)(*piVar1 + 0x3188) + 0x1304) + 4,0);
  uVar21 = local_a0;
  uStack_74 = 1;
  uVar18 = (uint)local_f0;
  uVar17 = (uint)param_13;
  *(undefined1 *)(*piVar1 + 0x2bc1) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc0) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc2) = 1;
  *(undefined1 *)(*piVar1 + 0x2bc3) = 1;
  *(undefined1 *)(*piVar1 + 0x3151) = 1;
  uVar24 = *local_b8;
  uVar23 = *puVar2;
  auVar27 = FUN_10034938(local_a0,local_f0 & 0xffffffff,*puVar2,uVar24,param_11);
  uStack_7c = uVar23;
  local_98 = auVar27._8_8_;
  local_b0 = auVar27._0_8_;
  local_88 = 0;
  uVar23 = auVar27._4_4_;
  uStack_80 = 0;
  uVar26 = auVar27._12_4_;
  *(int *)(iVar25 + 0x184) = *(int *)(iVar25 + 0x184) + (uVar26 - uVar23 >> 4);
  local_f4 = (undefined4 *)((uVar17 + 1) * 2);
  param_11 = (int)local_f4 * param_11;
  local_78 = uVar24;
  if ((uVar21 < uVar18) &&
     (local_88 = (ulonglong)uVar23 << 0x20, local_78 = uVar26, auVar27._8_4_ != 0)) {
    local_78 = uVar26 + 1;
  }
  iVar19 = iVar14 + uVar17 * 0x20;
  puVar7 = (undefined4 *)(iVar19 + 0xdc);
  iVar20 = *(int *)(*piVar1 + 0x3180);
  if ((*(char *)(iVar20 + *(int *)(*piVar1 + 0x3184) * 0x18 + 0x530) != '\0') && (param_9 != 0)) {
    uVar16 = FUN_10059b50(*(undefined4 *)(iVar20 + 0x172c0),*puVar7);
    auVar27._8_8_ = local_98;
    auVar27._0_8_ = local_b0;
    if ((uVar16 & 1) != 0) {
      FUN_10030ec8(local_f8,iVar14,param_13);
      pcVar22 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar14 = (*extraout_w11)(uVar13,0,0,0);
      if (iVar14 < 0) {
        return;
      }
      uVar24 = uVar23;
      if ((code *)local_b0 != (code *)0x0) {
        local_e0 = CONCAT44(uVar23,(code *)local_b0);
        if (uVar26 == uVar23) {
          uVar21 = (uint)local_98;
        }
        else {
          uVar21 = *puVar2;
        }
        uVar24 = uVar23 + 1;
        local_d8 = (ulonglong)uVar21 << 0x20;
        uStack_d0 = CONCAT44(1,uVar24);
        auVar27 = (*pcVar22)(*puVar7,param_9 + uVar23 * param_11 +
                                     (int)local_f4 * (int)(code *)local_b0);
        (*extraout_w11_00)(auVar27._0_8_ & 0xffffffff,auVar27._8_8_,param_11,0,0,&local_e0);
      }
      if (uVar24 <= uVar26) {
        uVar21 = (uint)local_98;
        local_e0 = (ulonglong)uVar24 << 0x20;
        local_d8 = (ulonglong)*puVar2 << 0x20;
        uVar23 = uVar26;
        if ((uint)local_98 == *puVar2) {
          uVar23 = uVar26 + 1;
        }
        uStack_d0 = CONCAT44(1,uVar23);
        auVar27 = (*pcVar22)(*puVar7,param_9 + uVar24 * param_11);
        (*extraout_w11_01)(auVar27._0_8_ & 0xffffffff,auVar27._8_8_,param_11,0,0,&local_e0);
        uVar23 = uVar26;
        if (((uVar21 != *puVar2) || (uVar23 = uVar26 + 1, uVar26 == uVar26 + 1)) &&
           ((uint)local_98 != 0)) {
          local_d8 = local_98 << 0x20;
          local_e0 = (ulonglong)uVar23 << 0x20;
          uStack_d0 = CONCAT44(1,uVar26 + 1);
          auVar27 = (*pcVar22)(*puVar7,param_9 + uVar23 * param_11);
          (*extraout_w11_02)(auVar27._0_8_ & 0xffffffff,auVar27._8_8_,param_11,0,0,&local_e0);
        }
      }
      goto LAB_1003195c;
    }
  }
  local_98 = auVar27._8_8_;
  local_b0 = auVar27._0_8_;
  puVar6 = (undefined4 *)(iVar19 + 0xe4);
  uStack_70 = *puVar7;
  local_e0 = CONCAT44(1,*puVar6);
  uStack_6c = 0;
  puVar3 = (uint *)(iVar19 + 0xf8);
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  local_d8 = 0;
  local_68 = 0;
  uStack_d0 = CONCAT44(*puVar2,*(undefined4 *)(iVar19 + 0xf4));
  _local_c8 = CONCAT44(1,*local_b8);
  uStack_c0 = (ulonglong)*puVar3;
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),uStack_70,0,0,0x800);
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),*puVar6,0,1,0x400);
  FUN_10061e10(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),&local_e0,0,local_88._4_4_,0,
               &uStack_70,&local_88);
  FUN_10060198(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304),*puVar6,0,1,0);
  uVar15 = FUN_100602c0(*(undefined4 *)(*(int *)(*piVar1 + 0x3188) + 0x1304));
  *(undefined8 *)(iVar25 + 0x1f0) = uVar15;
  FUN_10030ec8(local_f8,iVar14,param_13);
  pcVar22 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_9 == 0) {
    return;
  }
  local_f8 = 0;
  local_b8 = (uint *)(*puVar3 * local_88._4_4_);
  iStack_b4 = *puVar3 * local_78;
  uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar14 = (*extraout_w11_03)(uVar13,0,&local_b8,&local_f8);
  if (iVar14 < 0) {
    return;
  }
  iVar14 = local_f8 + *puVar3 * uVar23;
  if ((code *)local_b0 != (code *)0x0) {
    local_f0._0_4_ = (int *)iVar14;
    FUN_1007a780(local_a0 + param_9,iVar14 + (int)local_f4 * (int)(code *)local_b0,
                 (*(int *)(iVar25 + 0x160) - (int)(code *)local_b0) * (int)local_f4);
    uVar23 = uVar23 + 1;
    iVar14 = (int)(int *)local_f0 + *puVar3;
  }
  lVar10 = local_98;
  puVar7 = local_f4;
  param_9 = param_9 + uVar23 * param_11;
  if (uVar23 <= uVar26) {
    local_f0 = CONCAT44(local_f0._4_4_,iVar25 + 0x160);
    local_b0 = CONCAT44(local_b0._4_4_,pcVar22);
    local_e8 = puVar6;
    do {
      iVar25 = (int)lVar10;
      if (uVar23 != uVar26) {
        iVar25 = *(int *)local_f0;
      }
      FUN_1007a780(param_9,iVar14,iVar25 * (int)puVar7);
      uVar23 = uVar23 + 1;
      param_9 = param_9 + param_11;
      iVar14 = *puVar3 + iVar14;
    } while (uVar23 <= uVar26);
    pcVar22 = (code *)local_b0;
  }
LAB_1003195c:
  local_f0 = 0;
  uVar13 = (*pcVar22)();
  (*extraout_w11_04)(uVar13,0,&local_f0);
  return;
}

