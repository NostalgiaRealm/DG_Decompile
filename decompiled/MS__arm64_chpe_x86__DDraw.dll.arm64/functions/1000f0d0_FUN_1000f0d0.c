/*
 * FUN_1000f0d0 at 1000f0d0
 * undefined FUN_1000f0d0(void)
 * Address ranges: 1000f0d0-1000f7e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1000f0d0(float param_1,float param_2,float param_3,float param_4,int param_5,ulonglong param_6,
            int param_7,int param_8,uint param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int *piVar19;
  int iVar20;
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
  code *extraout_w11_09;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 local_11e;
  float local_118;
  int *local_114;
  float local_100;
  float local_f8;
  int *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  uint local_60;
  
  FUN_1006e8d0(*(undefined4 *)(param_5 + 0xcf00),param_6,param_5);
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_11e = 1;
  iVar7 = 0;
  if (param_8 != 0) {
    iVar7 = param_8 + -0x88;
  }
  iVar4 = param_8 + -0x88;
  if (*(int *)(param_8 + 4) == 0) {
    iVar4 = iVar7;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar4,param_6 & 0xffffffff,param_7);
  (*pcVar11)();
  local_100 = (float)(*extraout_w11_00)(iVar4);
  (*pcVar11)();
  local_f8 = (float)(*extraout_w11_01)(iVar4);
  uVar21 = (uint)param_6;
  iVar7 = uVar21 + *(int *)(iVar4 + 0x2c) * param_7;
  (*pcVar11)();
  cVar12 = (*extraout_w11_02)(iVar4);
  if ((((cVar12 == '\0') || (*(int *)(iVar4 + 0x34) - 3U < 3)) || (*(int *)(iVar4 + 0xf4) == 0)) ||
     (iVar13 = (*(code *)PTR_FUN_100ba248)(*(int *)(iVar4 + 0x100) + iVar7 * 0x1c + 0xc),
     iVar13 != 0)) {
    local_e4 = 0;
    (*pcVar11)();
    (*extraout_w11_03)(iVar4,param_6 & 0xffffffff,param_7,0);
    local_e8 = (int *)(iVar4 + 0x60);
    local_114 = (int *)(iVar4 + 0x60);
    iVar13 = 0x54;
    piVar19 = (int *)(iVar4 + 0x60);
    iVar1 = 0x58;
  }
  else {
    local_e8 = (int *)(iVar4 + 0x100);
    local_114 = (int *)(iVar4 + 0x100);
    iVar13 = 0xf4;
    local_f8 = 1.0;
    piVar19 = (int *)(iVar4 + 0x100);
    local_100 = 1.0;
    iVar1 = 0xf8;
    local_e4 = iVar4;
  }
  iVar1 = *(int *)(iVar4 + iVar1);
  local_d8 = (uint)param_3;
  local_d4 = (uint)param_4;
  local_e0 = (int)param_1;
  local_dc = (int)param_2;
  if (param_3 - (float)(int)local_d8 != 0.0) {
    local_d8 = local_d8 + 1;
  }
  if (param_4 - (float)(int)local_d4 != 0.0) {
    local_d4 = local_d4 + 1;
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + iVar13);
  }
  (*pcVar11)();
  uVar15 = (*extraout_w11_04)(iVar1,auStack_70);
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
  iVar13 = *(int *)(param_8 + 4);
  if (iVar13 == 0) {
LAB_1000f3c8:
    bVar8 = false;
  }
  else {
    bVar8 = true;
    piVar5 = (int *)&DAT_00000034;
    if (param_8 != 0) {
      piVar5 = (int *)(param_8 + -0x54);
    }
    if (2 < *piVar5 - 3U) goto LAB_1000f3c8;
  }
  if ((local_e0 == 0) && (local_dc == 0)) {
    uVar6 = *(uint *)(iVar4 + 0x14) >> (ulonglong)(uVar21 & 0x1f);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (local_d8 != uVar6) goto LAB_1000f5fc;
    uVar6 = *(uint *)(iVar4 + 0x18) >> (ulonglong)(uVar21 & 0x1f);
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (local_d4 != uVar6) goto LAB_1000f5fc;
    if (bVar8) {
      uVar21 = *(uint *)(&DAT_100bb780 + *(int *)(iVar4 + 0x1c) * 0x2c);
      if (uVar21 == 0) {
        local_118 = 0.0;
      }
      else {
        local_118 = (float)((double)(uVar21 & param_9) / (double)uVar21);
      }
      (*pcVar11)();
      cVar12 = (*extraout_w11_05)(iVar4);
      uVar17 = 0;
      if (cVar12 == '\0') {
        uVar16 = 1;
      }
      else {
        uVar21 = *(uint *)(&DAT_100bb784 + *(int *)(iVar4 + 0x1c) * 0x2c);
        if (uVar21 != 0) {
          uVar6 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          uVar17 = (ulonglong)
                   (byte)((uVar21 & param_9) >>
                         (ulonglong)((uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) & 0x1f));
        }
        uVar16 = 3;
      }
      iVar13 = *(int *)(*piVar19 + iVar7 * 0x1c + 4);
      if (iVar13 == 0) {
        local_11e = 0;
      }
      else {
        auVar22 = (*pcVar11)(*(undefined4 *)(*(int *)(param_5 + 0xcf04) + 4),iVar13,uVar16,uVar17);
        (*extraout_w11_06)(local_118,auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,
                           uVar16 & 0xffffffff,uVar17 & 0xffffffff);
      }
      goto LAB_1000f73c;
    }
    if (iVar13 == 0) {
      uVar14 = 0;
    }
    else {
      puVar18 = (undefined4 *)&DAT_00000008;
      if (param_8 != 0) {
        puVar18 = (undefined4 *)(param_8 + -0x80);
      }
      uVar14 = *puVar18;
    }
    uVar17 = FUN_10031348(uVar15,*(undefined4 *)(iVar4 + 0x1c),uVar14,param_9,!bVar9 && !bVar10,
                          auStack_80);
    if (((uVar17 & 1) != 0) && (*(int *)(*(int *)(param_5 + 0xcf04) + 0x14) != 0x1002)) {
      puVar18 = (undefined4 *)(*local_114 + iVar7 * 0x1c);
      uVar14 = (*pcVar11)();
      (*extraout_w11_07)(uVar14,*puVar18,auStack_80);
      goto LAB_1000f73c;
    }
LAB_1000f608:
    iVar20 = 0xcf6c;
    if (bVar9 || bVar10) {
      iVar20 = 0xcf68;
    }
  }
  else {
LAB_1000f5fc:
    if (!bVar8) goto LAB_1000f608;
    iVar20 = 0xcf70;
  }
  if (iVar13 == 0) {
    uVar14 = 0;
  }
  else {
    puVar18 = (undefined4 *)&DAT_00000008;
    if (param_8 != 0) {
      puVar18 = (undefined4 *)(param_8 + -0x80);
    }
    uVar14 = *puVar18;
  }
  FUN_10031430(param_5,*(undefined4 *)(iVar4 + 0x1c),uVar14,param_9);
  puVar18 = (undefined4 *)(param_5 + 0x14);
  FUN_1006abc0(*(undefined4 *)(param_5 + 0xcf00),*puVar18,&DAT_100b4f00);
  FUN_1006b1e0(*(undefined4 *)(param_5 + 0xcf00),*puVar18);
  local_b0 = CONCAT44(param_7,uVar21);
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_d0 = local_100 * param_1;
  uStack_a8 = 0;
  fStack_cc = local_f8 * param_2;
  local_c8 = local_100 * param_3;
  puVar3 = (undefined4 *)(*local_e8 + iVar7 * 0x1c);
  fStack_c4 = local_f8 * param_4;
  if (bVar8) {
    local_88 = CONCAT44(puVar3[1],iVar1);
    puVar2 = &DAT_100b5008;
  }
  else {
    local_a0 = CONCAT44(*puVar3,iVar1);
    puVar2 = &DAT_100b50a0;
  }
  FUN_1006af20(*(undefined4 *)(param_5 + 0xcf00),*puVar18,puVar2);
  FUN_1000ba20(param_5,&local_d0,*(undefined4 *)(iVar20 + param_5));
LAB_1000f73c:
  if (local_e4 == 0) {
    (*pcVar11)();
    (*extraout_w11_08)(iVar4,iVar7,&local_e0);
  }
  else {
    FUN_10016480(local_e4,iVar7,&local_e0);
  }
  (*pcVar11)();
  (*extraout_w11_09)(iVar4,param_6 & 0xffffffff,param_7);
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_5 + 0xcf00) + 0x4a0);
  return local_11e;
}

