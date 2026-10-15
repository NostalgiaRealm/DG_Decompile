/*
 * FUN_10075208 at 10075208
 * undefined FUN_10075208(void)
 * Address ranges: 10075208-10075787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10075208(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,uint param_9)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 extraout_x1;
  undefined4 *puVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 auStack_104 [4];
  undefined4 local_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined1 auStack_d0 [4];
  undefined4 local_cc;
  int *local_c8;
  int iStack_c4;
  int local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  int local_a8;
  undefined1 auStack_a4 [4];
  undefined4 local_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  int *piStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  
  piVar1 = (int *)(param_2 + 8);
  iVar6 = param_1 + *piVar1 * 0x16c0;
  piVar2 = (int *)(param_2 + 0xd68);
  piVar4 = (int *)(param_2 + (*piVar2 + 0x35c) * 4);
  iVar14 = *piVar4;
  local_108 = *piVar4;
  local_110 = param_5;
  local_10c = param_3;
  local_f4 = iVar6;
  local_f0 = piVar2;
  FUN_10073b50(*(undefined4 *)(iVar6 + 0x1c98),auStack_104,param_4,0);
  uStack_fc = 0xffffffff;
  local_c8 = &local_110;
  uStack_b4 = 0;
  local_bc = 0;
  local_100 = param_6;
  iStack_c4 = param_2;
  local_c0 = param_8;
  FUN_10088228(param_1 + 0x50c,*piVar1,&local_c8);
  piVar4 = (int *)(iVar6 + 0x19c4);
  *(int *)(*piVar4 + 0x634) = *(int *)(*piVar4 + 0x634) + 1;
  *(undefined8 *)(iVar6 + 0x750) = *(undefined8 *)(*piVar4 + 0x938);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (((local_10c != 0) || (local_110 != 0)) &&
     (uVar15 = FUN_10074340(param_1,param_2,&local_110,param_6,param_8,param_9), iVar5 = local_10c,
     (uVar15 & 1) == 0)) {
    if (local_108 != 0) {
      if (local_110 == 0) {
        FUN_1007d820(*piVar4,local_10c,0,0,0x800);
        FUN_1007d820(*piVar4,iVar14,0,0,0x400);
        FUN_1007f780(*piVar4,iVar14,iVar5);
      }
      else {
        FUN_10073c78(uVar15,iVar6 + 0x6c0,iVar14,local_110,param_6);
      }
    }
    if (param_9 != 0) {
      *(int *)(*piVar4 + 0x948) = param_1;
      uVar13 = *(uint *)(param_2 + 0x18);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        uVar11 = SoftwareBreakpoint(0xf004,0x100753d4);
        (*(code *)uVar11)();
      }
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = *(uint *)(param_2 + 0x10) / uVar13;
      }
      uVar13 = *(uint *)(param_2 + 0x1c);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        uVar11 = SoftwareBreakpoint(0xf004,0x100753f4);
        (*(code *)uVar11)();
      }
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = *(uint *)(param_2 + 0x14) / uVar13;
      }
      uStack_dc = CONCAT44(uStack_dc._4_4_,uVar9);
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = uVar8;
      (*pcVar10)();
      (*extraout_w11)(iVar14,auStack_78);
      local_a8 = iVar14;
      FUN_10073b50(*(undefined4 *)(iVar6 + 0x1c9c),auStack_a4,*(undefined4 *)(param_2 + 0xd78),
                   *piVar2);
      local_80 = 0;
      uVar15 = (ulonglong)param_9;
      local_88 = 0x3f800000;
      uStack_84 = 0x3f800000;
      local_a0 = local_58;
      piStack_8c = &local_e8;
      uStack_9c = uVar8;
      local_98 = uVar9;
      uStack_94 = uVar8;
      local_90 = uVar9;
      (*pcVar10)();
      (*extraout_w11_00)(uVar15 & 0xffffffff,&local_a8);
    }
  }
  iVar6 = iStack_c4;
  puVar3 = (uint *)(param_1 + 0x518);
  if (*puVar3 != 0) {
    iVar5 = *piVar1;
    iVar7 = *(int *)(param_1 + 0x510) + iVar5 * 0x16c0;
    if (local_c8[5] != -1) {
      FUN_1007d820(*(undefined4 *)(iVar7 + 0x19c4),local_c8[1],0,0,local_c8[5]);
    }
    local_e8 = iVar6;
    uStack_dc = uStack_b4;
    uStack_e4 = (undefined4)local_bc;
    uStack_e0 = (uint)((ulonglong)local_bc >> 0x20);
    local_d4 = *(undefined4 *)(iVar6 + *(int *)(iVar6 + 0xd68) * 4 + 0xd70);
    FUN_10073b50(*(undefined4 *)(iVar7 + 0x1c9c),auStack_d0,*(undefined4 *)(iVar6 + 0xd78),
                 *(int *)(iVar6 + 0xd68));
    local_cc = FUN_10078a28(*(undefined4 *)(*(int *)(param_1 + 0x510) + 0x172c0),local_d4);
    uVar13 = 0;
    if (*puVar3 != 0) {
      do {
        local_f8 = iVar14;
        uVar12 = (*pcVar10)();
        (*extraout_w11_01)(uVar12,iVar5,&local_e8);
        uVar13 = uVar13 + 1;
        iVar14 = local_f8;
      } while (uVar13 < *puVar3);
    }
  }
  if (*(char *)(param_2 + 0xd5a) != '\0') {
    FUN_10074d10(param_1,param_2,param_8 + 0xc);
  }
  iVar6 = local_f4;
  piVar1 = (int *)(local_f4 + 0x19c4);
  FUN_1007d820(*piVar1,iVar14,0,0,0);
  FUN_1007d440(*piVar1 + 4,1);
  uVar11 = *(undefined8 *)(*piVar1 + 0x938);
  piVar2 = (int *)(iVar6 + 0x19c0);
  FUN_100788c8(*(undefined4 *)(param_1 + 0x172c0),iVar14,0,0,*piVar2,0xffffffff,0,uVar11);
  if (((param_7 == 0) && (*(char *)(param_2 + 0xd5c) != '\0')) &&
     ((*(int *)(param_2 + 0x34) != 2 || (*(char *)(param_2 + 0xd5d) == '\0')))) {
    uVar15 = 0x200;
  }
  else {
    uVar15 = 0;
  }
  iVar14 = *piVar2;
  uVar12 = (*pcVar10)(*(undefined4 *)(param_2 + 4),extraout_x1,uVar15);
  uVar13 = (*extraout_w11_02)(uVar12,param_7,uVar15 & 0xffffffff);
  puVar16 = (undefined4 *)(iVar14 + 0xc);
  uVar12 = (*pcVar10)();
  (*extraout_w11_03)(uVar12,*puVar16,uVar11);
  uVar11 = FUN_10075a80(*piVar2);
  *(undefined8 *)(*piVar1 + 0x938) = uVar11;
  uVar12 = (*pcVar10)();
  iVar14 = (*extraout_w11_04)(uVar12);
  *local_f0 = iVar14;
  return ~uVar13 >> 0x1f;
}

