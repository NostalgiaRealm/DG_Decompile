/*
 * FUN_1001c640 at 1001c640
 * undefined FUN_1001c640(void)
 * Address ranges: 1001c640-1001cc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001c640(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  code *pcVar16;
  undefined1 auVar17 [16];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  int local_1e0;
  int *local_1dc;
  int *local_1d8;
  code *local_1d4;
  int *local_1d0;
  int *local_1cc;
  int *local_1c8;
  int local_1c4;
  undefined4 *local_1c0;
  undefined4 local_1b8;
  undefined8 *puStack_1b4;
  undefined4 local_1b0;
  undefined *puStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_170 [8];
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong lStack_128;
  undefined4 local_120;
  undefined8 uStack_11c;
  longlong lStack_114;
  undefined4 local_10c;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined4 local_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 uStack_a4;
  longlong lStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  longlong lStack_88;
  undefined4 local_80;
  undefined8 uStack_7c;
  longlong lStack_74;
  undefined4 local_6c;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined8 uStack_54;
  ulonglong uStack_4c;
  undefined4 local_44;
  
  iVar8 = FUN_10070aa0(DAT_100acbc0,&PTR_s_DGD3D12ROOT_100a2020);
  piVar14 = (int *)(param_1 + 0xcc);
  *piVar14 = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0xd0);
  piVar2 = (int *)(param_1 + 0xd4);
  iVar8 = iVar8 + *piVar1 * 0x16c0;
  *piVar2 = iVar8 + 0x6c0;
  local_1d0 = piVar1;
  FUN_100816d8(iVar8 + 0x1880);
  bVar5 = false;
  iVar8 = FUN_10071060(*(undefined4 *)(*piVar2 + 0x15d8),3);
  pcVar16 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  *(int *)(param_1 + 200) = iVar8;
  if (iVar8 != -1) {
    local_1d4 = pcVar16;
    local_1c4 = param_1 + 0xbc;
    uVar15 = 0;
    local_1e0 = param_1;
    local_1dc = piVar14;
    local_1d8 = (int *)(param_1 + 200);
    local_1cc = piVar14;
    local_1c8 = piVar1;
    do {
      local_1a0 = 0x40000001c;
      local_198 = 0x1688;
      local_168[0] = 3;
      local_190 = 0xffffffff00000000;
      uVar13 = 1;
      local_180 = 0;
      switch(uVar15) {
      default:
        goto switchD_1001c75c_caseD_0;
      case 1:
        uVar13 = 6;
        uVar10 = 9;
        local_168[0] = 3;
        break;
      case 2:
        uVar10 = 8;
        local_168[0] = 4;
        uVar13 = 1;
      }
      local_1a0 = CONCAT44(uVar10,0x1c);
switchD_1001c75c_caseD_0:
      uStack_188 = 0;
      local_148 = 0x10000001c;
      uStack_140 = 0;
      local_160 = 0;
      uStack_158 = 1;
      local_150 = 1;
      local_14c = (undefined2)uVar13;
      local_14a = 1;
      local_138 = 0;
      iVar8 = FUN_100719a8(*local_1cc + 0x520,*local_1c8,local_168);
      pcVar16 = local_1d4;
      piVar14 = local_1dc;
      param_1 = local_1e0;
      *(int *)(local_1c4 + uVar15 * 4) = iVar8;
      if (iVar8 == 0) goto joined_r0x1001c8a4;
      local_200 = 0;
      uStack_1f8 = 0x100000000;
      local_1f0 = 0x100000001;
      uVar12 = 0;
      puVar9 = (undefined4 *)(local_1e0 + uVar15 * 4 + 0xbc);
      local_1c0 = puVar9;
      do {
        FUN_10073568(*(undefined4 *)(*piVar2 + 0x130c),*puVar9,uVar12,*piVar2 + 0x1430,&local_200,
                     &DAT_100a22cc,0);
        puVar7 = local_1c0;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      puVar9 = (undefined4 *)
               FUN_100715f0(*(undefined4 *)(*piVar2 + 0x15d8),auStack_170,*local_1d8,uVar15);
      FUN_10071850(*local_1dc + 0x520,*local_1d0,*puVar7,&local_1a0,*puVar9);
      uVar15 = uVar15 + 1;
    } while (uVar15 < 3);
    bVar5 = true;
    param_1 = local_1e0;
    pcVar16 = local_1d4;
    piVar14 = local_1dc;
  }
LAB_1001c94c:
  auVar17 = FUN_10071e00(*(int *)(*piVar2 + 0x130c) + 4,0);
  if (bVar5) {
    auVar17 = FUN_10074010(auVar17._0_8_,auVar17._8_8_,0x1e,&DAT_100a2210,param_1 + 4);
    if ((auVar17._0_8_ & 1) != 0) {
      auVar17 = FUN_10074010(auVar17._0_8_,auVar17._8_8_,0,&DAT_100a4824,param_1 + 0xb0);
      if ((auVar17._0_8_ & 1) != 0) {
        auVar17 = FUN_10074010(auVar17._0_8_,auVar17._8_8_,0xd,&DAT_100a21f0,param_1 + 0x7c);
        if (((auVar17._0_8_ & 1) != 0) &&
           (uVar11 = FUN_10074010(auVar17._0_8_,auVar17._8_8_,1,&DAT_100a21e8,param_1 + 0xb8),
           (uVar11 & 1) != 0)) {
          puVar9 = (undefined4 *)FUN_10081cb0(8);
          uVar11 = uStack_1f8;
          *(int *)(param_1 + 0xb4) = (int)puVar9;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = &PTR_s_POSITION_100a21b0;
            uVar6 = uStack_1f8 >> 0x20;
            uStack_1f8 = uVar6 << 0x20;
            lStack_128 = uStack_1f8;
            local_120 = 0;
            local_10c = 0;
            local_f8 = 0;
            local_e4 = 5;
            *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 2;
            uStack_1f8 = uVar6 << 0x20;
            lStack_114 = uStack_1f8;
            local_130 = 2;
            uVar15 = (uint)(uVar11 >> 0x20);
            uStack_1f8 = uVar6 << 0x20;
            lStack_100 = uStack_1f8;
            local_d0 = 5;
            uStack_11c = 0x100000002;
            uStack_1f8 = CONCAT44(uVar15,1);
            uStack_ec = uStack_1f8;
            local_bc = 5;
            uStack_108 = 0x200000002;
            uStack_1f8 = CONCAT44(uVar15,&DAT_1009d710);
            uStack_d8 = uStack_1f8;
            local_a8 = 5;
            uStack_f4 = 0x300000002;
            uStack_1f8 = CONCAT44(uVar15,&DAT_1009d6f8);
            uStack_c4 = uStack_1f8;
            local_94 = 5;
            local_e0 = 0x100000000;
            uStack_1f8 = CONCAT44(uVar15,&DAT_1009d6e0);
            uStack_b0 = uStack_1f8;
            local_80 = 5;
            uStack_cc = 0x100000000;
            uStack_1f8 = (ulonglong)uVar15 << 0x20;
            lStack_9c = uStack_1f8;
            local_6c = 5;
            uStack_b8 = 0x100000000;
            uStack_1f8 = (ulonglong)uVar15 << 0x20;
            lStack_88 = uStack_1f8;
            local_58 = 5;
            uStack_a4 = 0x1a00000003;
            uStack_1f8 = (ulonglong)uVar15 << 0x20;
            lStack_74 = uStack_1f8;
            local_90 = 0x1b00000003;
            uStack_1f8 = (ulonglong)uVar15 << 0x20;
            uStack_7c = 0x1c00000003;
            local_200 = 0x100000000;
            lStack_60 = uStack_1f8;
            uStack_68 = 0x1d00000003;
            local_44 = 5;
            uStack_1f8 = CONCAT44(uVar15,&DAT_1009d6c8);
            puStack_1b4 = &local_130;
            local_1b8 = 0xc;
            local_1b0 = 1;
            puStack_1ac = &DAT_1009d690;
            uStack_4c = uStack_1f8;
            uStack_54 = 0x100000000;
            local_1a8 = 0xd;
            uVar10 = (*pcVar16)();
            iVar8 = (*extraout_w11_00)(uVar10,*local_1d0,1,&local_1b8,0);
            *(int *)(param_1 + 0xd8) = iVar8;
            if (iVar8 != 0) {
              return 1;
            }
            FUN_1001c5d0(param_1);
          }
        }
      }
      FUN_1001c580(param_1);
    }
    FUN_1001c4d0(param_1);
  }
  FUN_10070b58(*piVar14);
  *piVar14 = 0;
  *piVar2 = 0;
  return 0;
joined_r0x1001c8a4:
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar10 = (*pcVar16)();
    (*extraout_w11)(uVar10);
  }
  iVar8 = *local_1d8;
  if (iVar8 != -1) {
    iVar4 = *(int *)(*piVar2 + 0x15d8);
    iVar3 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_100a1014)(iVar3);
    FUN_10070fd8(iVar4,iVar8,3);
    (*(code *)PTR_FUN_100a1044)(iVar3);
  }
  bVar5 = false;
  *local_1d8 = -1;
  goto LAB_1001c94c;
}

