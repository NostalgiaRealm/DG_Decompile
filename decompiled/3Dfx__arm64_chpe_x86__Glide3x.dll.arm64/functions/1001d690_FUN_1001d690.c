/*
 * FUN_1001d690 at 1001d690
 * undefined FUN_1001d690(void)
 * Address ranges: 1001d690-1001dc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d690(int param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_198;
  undefined4 uStack_194;
  char acStack_190 [4];
  undefined8 *local_18c;
  undefined8 *local_188;
  undefined8 *local_184;
  int local_180;
  int local_17c;
  uint local_178;
  int local_170 [4];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(char *)(*(int *)(param_1 + 4) + 0x52) != '\0') && (param_2 == 0)) {
    param_2 = 1;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  piVar3 = (int *)(param_1 + 0x32dc);
  FUN_1001bac0(*piVar3);
  if (*(char *)(param_1 + 0x2c69) != '\0') {
    *(undefined1 *)(param_1 + 0x2c69) = 0;
    FUN_1001aff0(*piVar3);
  }
  (*pcVar6)();
  (*extraout_w11_00)(param_1);
  uVar8 = (*pcVar6)();
  iVar9 = (*extraout_w11_01)(uVar8,0);
  local_180 = iVar9;
  local_170[0] = iVar9;
  uVar8 = (*pcVar6)();
  iVar10 = (*extraout_w11_02)(uVar8,1);
  local_17c = iVar10;
  local_170[1] = iVar10;
  uVar8 = (*pcVar6)();
  local_198 = (*extraout_w11_03)(uVar8,2);
  local_18c = (undefined8 *)(iVar9 + 0x4c);
  uStack_158 = *(undefined8 *)(iVar9 + 0x54);
  local_160 = *local_18c;
  uStack_148 = *(undefined8 *)(iVar9 + 100);
  uStack_150 = *(undefined8 *)(iVar9 + 0x5c);
  local_170[2] = local_198;
  uStack_138 = *(undefined8 *)(iVar9 + 0x74);
  local_140 = *(undefined8 *)(iVar9 + 0x6c);
  uStack_128 = *(undefined8 *)(iVar9 + 0x84);
  uStack_130 = *(undefined8 *)(iVar9 + 0x7c);
  uStack_118 = *(undefined8 *)(iVar9 + 0x94);
  local_120 = *(undefined8 *)(iVar9 + 0x8c);
  local_110 = *(undefined8 *)(iVar9 + 0x9c);
  local_188 = (undefined8 *)(iVar10 + 0x4c);
  uStack_f8 = *(undefined8 *)(iVar10 + 0x54);
  local_100 = *local_188;
  uStack_e8 = *(undefined8 *)(iVar10 + 100);
  uStack_f0 = *(undefined8 *)(iVar10 + 0x5c);
  uStack_d8 = *(undefined8 *)(iVar10 + 0x74);
  local_e0 = *(undefined8 *)(iVar10 + 0x6c);
  uStack_c8 = *(undefined8 *)(iVar10 + 0x84);
  uStack_d0 = *(undefined8 *)(iVar10 + 0x7c);
  uStack_b8 = *(undefined8 *)(iVar10 + 0x94);
  local_c0 = *(undefined8 *)(iVar10 + 0x8c);
  local_b0 = *(undefined8 *)(iVar10 + 0x9c);
  local_184 = (undefined8 *)(local_198 + 0x4c);
  uStack_98 = *(undefined8 *)(local_198 + 0x54);
  local_a0 = *local_184;
  uStack_88 = *(undefined8 *)(local_198 + 100);
  uStack_90 = *(undefined8 *)(local_198 + 0x5c);
  uStack_78 = *(undefined8 *)(local_198 + 0x74);
  local_80 = *(undefined8 *)(local_198 + 0x6c);
  uStack_68 = *(undefined8 *)(local_198 + 0x84);
  uStack_70 = *(undefined8 *)(local_198 + 0x7c);
  uStack_58 = *(undefined8 *)(local_198 + 0x94);
  local_60 = *(undefined8 *)(local_198 + 0x8c);
  local_50 = *(undefined8 *)(local_198 + 0x9c);
  bVar5 = false;
  uVar14 = 0;
  local_178 = param_2;
  do {
    if ((*(int *)(local_170[uVar14] + 100) == 0) && (*(int *)(local_170[uVar14] + 0x68) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    acStack_190[uVar14] = bVar4;
    bVar5 = (bool)(bVar4 | bVar5);
    if (bVar4) {
      FUN_1001c2c0(*piVar3,uVar14,1,0,0,*(undefined4 *)(param_1 + 0x98),
                   *(undefined4 *)(param_1 + 0x9c),0);
    }
    FUN_1001bf18(*piVar3,uVar14,1,0);
    uVar12 = local_178;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 3);
  (*pcVar6)();
  (*extraout_w11_04)(param_1);
  if ((*(char *)(param_1 + 0xdd) != '\0') || (bVar5)) {
    local_18c[1] = uStack_158;
    *local_18c = local_160;
    local_18c[3] = uStack_148;
    local_18c[2] = uStack_150;
    local_18c[5] = uStack_138;
    local_18c[4] = local_140;
    local_18c[7] = uStack_128;
    local_18c[6] = uStack_130;
    local_18c[9] = uStack_118;
    local_18c[8] = local_120;
    local_18c[10] = local_110;
    local_188[1] = uStack_f8;
    *local_188 = local_100;
    local_188[3] = uStack_e8;
    local_188[2] = uStack_f0;
    local_188[5] = uStack_d8;
    local_188[4] = local_e0;
    local_188[7] = uStack_c8;
    local_188[6] = uStack_d0;
    local_188[9] = uStack_b8;
    local_188[8] = local_c0;
    local_188[10] = local_b0;
    local_184[1] = uStack_98;
    *local_184 = local_a0;
    local_184[3] = uStack_88;
    local_184[2] = uStack_90;
    local_184[5] = uStack_78;
    local_184[4] = local_80;
    local_184[7] = uStack_68;
    local_184[6] = uStack_70;
    local_184[9] = uStack_58;
    local_184[8] = local_60;
    local_184[10] = local_50;
    FUN_10023e18(local_180);
    FUN_10023e18(local_17c);
    FUN_10023e18(local_198);
  }
  uVar14 = 0;
  local_178 = uVar12;
  do {
    if (acStack_190[uVar14] != '\0') {
      iVar9 = local_170[uVar14];
      FUN_1001c058(*piVar3,uVar14,*(undefined4 *)(iVar9 + 0x5c),*(undefined4 *)(iVar9 + 0x60),
                   *(undefined1 *)(iVar9 + 0x7d),*(undefined1 *)(iVar9 + 0x81),0,0,
                   *(undefined1 *)(iVar9 + 0x7f));
      if (*(uint *)(param_1 + 0x29e0) == uVar14) {
        FUN_10023d50(iVar9,*(undefined4 *)(param_1 + 0x9c));
      }
    }
    uVar12 = local_178;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 3);
  iVar9 = *piVar3;
  uVar15 = (ulonglong)local_178;
  puVar1 = (uint *)(iVar9 + 0x38);
  *puVar1 = (*puVar1 + 1) % 7;
  (*(code *)PTR_FUN_100a00b0)(&local_198);
  uVar14 = *puVar1;
  lVar11 = CONCAT44(uStack_194,local_198);
  if (lVar11 <= *(longlong *)(iVar9 + (uVar14 + 4) * 0x10)) {
    do {
      (*(code *)PTR_FUN_100a00b0)(&local_198);
      uVar14 = *puVar1;
      lVar11 = CONCAT44(uStack_194,local_198);
    } while (lVar11 <= *(longlong *)(iVar9 + (uVar14 + 4) * 0x10));
  }
  plVar2 = (longlong *)(iVar9 + 0x30);
  lVar13 = *(longlong *)(iVar9 + 0x10);
  if (*plVar2 < lVar11) {
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      uVar7 = SoftwareBreakpoint(0xf004,0x1001db70);
      (*(code *)uVar7)();
    }
    iVar10 = 0;
    if (lVar13 != 0) {
      iVar10 = (int)((lVar11 - *(longlong *)(iVar9 + 0x18)) / lVar13);
    }
    uVar12 = iVar10 + uVar12;
    lVar11 = *(longlong *)(iVar9 + 0x18) + (ulonglong)uVar12 * lVar13;
    *plVar2 = lVar11;
  }
  else {
    lVar11 = *plVar2 + uVar15 * lVar13;
    *plVar2 = lVar11;
    uVar12 = *(int *)(iVar9 + ((uVar14 + 6) % 7) * 0x10 + 0x48) + uVar12;
  }
  *(longlong *)(iVar9 + (uVar14 + 4) * 0x10) = lVar11;
  *(uint *)(iVar9 + *puVar1 * 0x10 + 0x48) = uVar12;
  FUN_1001a178(iVar9,&local_198);
  *(int *)(param_1 + 0x2adc) = *(int *)(param_1 + 0x2adc) + 1;
  (*pcVar6)();
  (*extraout_w11_05)(param_1,uVar15);
  return;
}

