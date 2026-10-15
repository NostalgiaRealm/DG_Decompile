/*
 * FUN_10039f80 at 10039f80
 * undefined FUN_10039f80(void)
 * Address ranges: 10039f80-1003a5fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039f80(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,int param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,byte param_13)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *extraout_w8;
  int iVar18;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  int local_80;
  longlong local_78;
  float local_70;
  float fStack_6c;
  uint local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar11 = param_1 + param_2 * 0x104;
  FUN_100148c8(*piVar1,0);
  cVar4 = *(char *)(iVar11 + 0x1b8);
  puVar2 = (uint *)(iVar11 + 0x15c);
  puVar3 = (uint *)(iVar11 + 0x160);
  iVar17 = 0x144;
  if (cVar4 != '\0') {
    iVar17 = 0x148;
  }
  *(undefined4 *)(*piVar1 + 0x2e64) = *(undefined4 *)(iVar17 + iVar11);
  local_78 = 0;
  local_68 = 0;
  local_70 = (float)*puVar2;
  fStack_6c = (float)*puVar3;
  local_64 = 0x3f800000;
  FUN_100709b0(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),&local_78);
  *(float *)(*piVar1 + 0x2dc0) = (float)*puVar2;
  *(float *)(*piVar1 + 0x2dc4) = (float)*puVar3;
  DAT_100aa524 = 0;
  DAT_100aa3b4 = 0xf;
  DAT_100aa3d4 = 0xf;
  FUN_10070000(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),&DAT_100aa390);
  iVar17 = *piVar1;
  FUN_10070368(*(undefined4 *)(iVar17 + 0x3680),*(undefined4 *)(iVar17 + 0x3684),0x100aa498,
               *(undefined4 *)(iVar17 + 0x2c54));
  FUN_10070640(*(undefined4 *)(*piVar1 + 0x3680),*(undefined4 *)(*piVar1 + 0x3684),&DAT_100aa508);
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar13 = (ulonglong)*(uint *)(iVar11 + 0x1e8);
  if (*(uint *)(iVar11 + 0x1e8) != *(uint *)(iVar11 + 500)) {
    auVar23 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar23._0_8_ & 0xffffffff,auVar23._8_8_ & 0xffffffff,0,uVar13 & 0xffffffff,0,
                    *extraout_w8);
  }
  uVar12 = *puVar3;
  local_48 = (float)param_5;
  local_58 = (float)*(uint *)(iVar11 + 0x164) / (float)*puVar2;
  bVar8 = *(int *)(iVar11 + 0x19c) == 1;
  uVar19 = param_4;
  if (bVar8) {
    uVar19 = uVar12 - param_4;
  }
  fStack_54 = (float)*(uint *)(iVar11 + 0x168) / (float)uVar12;
  local_50 = CONCAT44((float)param_4,(float)param_3);
  fStack_44 = (float)param_6;
  local_60 = local_58 * (float)param_3;
  if (bVar8) {
    param_6 = uVar12 - param_6;
  }
  fStack_5c = (float)uVar19 * fStack_54;
  local_58 = local_58 * local_48;
  fStack_54 = (float)param_6 * fStack_54;
  if (cVar4 == '\0') {
    iVar21 = 0x208;
    iVar17 = 0x20c;
  }
  else {
    iVar21 = 0x220;
    iVar17 = 0x224;
  }
  iVar18 = 0x858;
  if (*(char *)(iVar11 + 0x184) != '\0') {
    iVar18 = 0x85c;
  }
  FUN_10039378(param_1,&local_50,&local_60,*(undefined4 *)(iVar18 + param_1),
               *(undefined4 *)(iVar11 + 0x1f8),0,*(undefined4 *)(iVar11 + iVar21),
               *(undefined4 *)(iVar11 + iVar17),0);
  FUN_100147e0(*piVar1);
  *(undefined1 *)(*piVar1 + 0x2da9) = 1;
  *(undefined1 *)(*piVar1 + 0x2da8) = 1;
  *(undefined1 *)(*piVar1 + 0x2daa) = 1;
  *(undefined1 *)(*piVar1 + 0x2dab) = 1;
  uVar12 = *(uint *)(iVar11 + 0x160);
  piVar1 = (int *)(iVar11 + 0x15c);
  iVar17 = *piVar1;
  uVar14 = param_7;
  auVar23 = FUN_10024418(param_7,param_8,*piVar1,uVar12,param_11,param_13);
  fStack_6c = (float)iVar17;
  local_50 = auVar23._8_8_;
  local_70 = 0.0;
  uVar19 = auVar23._4_4_;
  local_78 = 0;
  uVar22 = auVar23._12_4_;
  *(int *)(iVar11 + 0x180) = *(int *)(iVar11 + 0x180) + (uVar22 - uVar19 >> 4);
  local_64 = 1;
  uVar20 = (uint)param_13;
  if (uVar14 < param_8) {
    local_68 = uVar22;
    if (auVar23._8_4_ != 0) {
      local_68 = uVar22 + 1;
    }
    uVar13 = (ulonglong)uVar19;
    local_78 = (ulonglong)uVar19 << 0x20;
    if (uVar19 == 0) goto LAB_1003a3c4;
  }
  else {
    uVar13 = 0;
    local_68 = uVar12;
LAB_1003a3c4:
    if ((local_68 == uVar12) && (*(char *)(iVar11 + 0x185) == '\0')) {
      if (uVar20 == 0) {
        iVar21 = 0x238;
        iVar17 = 0x200;
      }
      else {
        iVar21 = 0x23c;
        iVar17 = 0x218;
      }
      puVar16 = (undefined4 *)(iVar11 + iVar17);
      puVar15 = (undefined4 *)(iVar11 + iVar21);
      uVar9 = (*pcVar5)();
      (*extraout_w11_01)(uVar9,*puVar15,*puVar16);
      goto LAB_1003a470;
    }
  }
  if (uVar20 == 0) {
    puVar15 = (undefined4 *)(iVar11 + 0x200);
    uVar9 = (*pcVar5)();
    (*extraout_w11_02)(uVar9,*extraout_w8_01,0,0,uVar13 & 0xffffffff,0,*puVar15,0,&local_78);
  }
  else {
    puVar15 = (undefined4 *)(iVar11 + 0x218);
    uVar9 = (*pcVar5)();
    (*extraout_w11_00)(uVar9,*extraout_w8_00,0,0,uVar13 & 0xffffffff,0,*puVar15,0,&local_78);
  }
LAB_1003a470:
  if (param_9 != 0) {
    uVar9 = *(undefined4 *)(iVar11 + uVar20 * 4 + 0x238);
    uVar10 = (*pcVar5)();
    iVar11 = (*extraout_w11_03)(uVar10,uVar9,0,3,0,&local_60);
    fVar6 = fStack_5c;
    if (-1 < iVar11) {
      iVar17 = (uVar20 + 1) * 2;
      local_80 = auVar23._0_4_;
      iVar11 = (int)local_60 + (int)fStack_5c * uVar19;
      if (local_80 != 0) {
        FUN_10083b40(param_7 + param_9,iVar11 + local_80 * iVar17,(*piVar1 - local_80) * iVar17);
        uVar19 = uVar19 + 1;
        iVar11 = (int)fVar6 + iVar11;
      }
      uVar7 = local_50;
      param_9 = param_9 + uVar19 * iVar17 * param_11;
      for (; uVar19 <= uVar22; uVar19 = uVar19 + 1) {
        iVar21 = (int)uVar7;
        if (uVar19 != uVar22) {
          iVar21 = *piVar1;
        }
        FUN_10083b40(param_9,iVar11,iVar21 * iVar17);
        iVar11 = (int)fVar6 + iVar11;
        param_9 = param_9 + iVar17 * param_11;
      }
      uVar10 = (*pcVar5)();
      (*extraout_w11_04)(uVar10,uVar9,0);
    }
  }
  return;
}

