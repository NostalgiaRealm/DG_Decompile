/*
 * FUN_10043af0 at 10043af0
 * undefined FUN_10043af0(void)
 * Address ranges: 10043af0-100440fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10043af0(int param_1)

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
  undefined8 uVar11;
  ulonglong uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  code *pcVar17;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  int local_1f0;
  int *local_1ec;
  int *local_1e8;
  code *local_1e4;
  int *local_1e0;
  int *local_1dc;
  int *local_1d8;
  int local_1d4;
  undefined4 *local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 auStack_190 [8];
  undefined4 local_188;
  undefined8 *puStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170 [2];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined2 local_152;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
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
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 uStack_54;
  ulonglong uStack_4c;
  undefined4 local_44;
  
  iVar8 = FUN_100daef8(DAT_1013d010,&PTR_s_DGD3D12ROOT_10135170,0);
  piVar16 = (int *)(param_1 + 0xc4);
  *piVar16 = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 200);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar8 = iVar8 + *piVar1 * 0x16c0;
  *piVar2 = iVar8 + 0x6c0;
  local_1e0 = piVar1;
  FUN_100fd9e8(iVar8 + 0x1880);
  bVar5 = false;
  iVar8 = FUN_100df3e0(*(undefined4 *)(*piVar2 + 0x15d8),3);
  pcVar17 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  *(int *)(param_1 + 0xc0) = iVar8;
  if (iVar8 != -1) {
    local_1e4 = pcVar17;
    local_1d4 = param_1 + 0xb4;
    uVar14 = 0;
    local_1f0 = param_1;
    local_1ec = piVar16;
    local_1e8 = (int *)(param_1 + 0xc0);
    local_1dc = piVar16;
    local_1d8 = piVar1;
    do {
      local_1c0 = 0x40000001c;
      local_1b8 = 0x1688;
      local_170[0] = 3;
      local_1b0 = 0xffffffff00000000;
      uVar15 = 1;
      local_1a0 = 0;
      switch(uVar14) {
      default:
        goto switchD_10043c10_caseD_0;
      case 1:
        uVar15 = 6;
        uVar10 = 9;
        local_170[0] = 3;
        break;
      case 2:
        uVar10 = 8;
        local_170[0] = 4;
        uVar15 = 1;
      }
      local_1c0 = CONCAT44(uVar10,0x1c);
switchD_10043c10_caseD_0:
      uStack_1a8 = 0;
      local_150 = 0x10000001c;
      uStack_148 = 0;
      local_168 = 0;
      uStack_160 = 1;
      local_158 = 1;
      local_154 = (undefined2)uVar15;
      local_152 = 1;
      local_140 = 0;
      iVar8 = FUN_100e0328(*local_1dc + 0x520,*local_1d8,local_170);
      pcVar17 = local_1e4;
      piVar16 = local_1ec;
      param_1 = local_1f0;
      *(int *)(local_1d4 + uVar14 * 4) = iVar8;
      if (iVar8 == 0) goto joined_r0x10043d5c;
      local_210 = 0;
      uStack_208 = 0x100000000;
      local_200 = 0x100000001;
      uVar13 = 0;
      puVar9 = (undefined4 *)(local_1f0 + uVar14 * 4 + 0xb4);
      local_1d0 = puVar9;
      do {
        FUN_100e5930(*(undefined4 *)(*piVar2 + 0x130c),*puVar9,uVar13,*piVar2 + 0x1430,&local_210,
                     &DAT_10136034,0,0);
        puVar7 = local_1d0;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar15);
      puVar9 = (undefined4 *)
               FUN_100dfee0(*(undefined4 *)(*piVar2 + 0x15d8),auStack_190,*local_1e8,uVar14);
      FUN_100e0168(*local_1ec + 0x520,*local_1e0,*puVar7,&local_1c0,*puVar9);
      uVar14 = uVar14 + 1;
    } while (uVar14 < 3);
    bVar5 = true;
    param_1 = local_1f0;
    pcVar17 = local_1e4;
    piVar16 = local_1ec;
  }
LAB_10043e04:
  uVar11 = FUN_100e1060(*(int *)(*piVar2 + 0x130c) + 4,0);
  if (bVar5) {
    uVar12 = FUN_100e6cd0(uVar11,DAT_1013d010,0x12,&DAT_10135f90,param_1 + 4);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_100e6cd0(uVar12,DAT_1013d010,6,&DAT_10135f48,param_1 + 0x90);
      if ((((uVar12 & 1) != 0) &&
          (uVar12 = FUN_100e6cd0(uVar12,DAT_1013d010,0x11,&DAT_10135f60,param_1 + 0x4c),
          (uVar12 & 1) != 0)) &&
         (uVar12 = FUN_100e6cd0(uVar12,DAT_1013d010,1,&DAT_10135f40,param_1 + 0xb0),
         (uVar12 & 1) != 0)) {
        puVar9 = (undefined4 *)FUN_100febf0(8);
        uVar12 = uStack_208;
        *(int *)(param_1 + 0xac) = (int)puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = &PTR_s_POSITION_10135f08;
          uVar6 = uStack_208 >> 0x20;
          uStack_208 = uVar6 << 0x20;
          lStack_128 = uStack_208;
          uStack_208 = uVar6 << 0x20;
          lStack_114 = uStack_208;
          local_120 = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 2;
          local_130 = 2;
          uVar10 = (undefined4)(uVar12 >> 0x20);
          uStack_208 = uVar6 << 0x20;
          lStack_100 = uStack_208;
          local_10c = 0;
          uStack_11c = 0x100000002;
          uStack_208 = CONCAT44(uVar10,2);
          local_f8 = 0;
          uStack_108 = 0x200000002;
          local_e4 = 0;
          uStack_ec = uStack_208;
          uStack_f4 = 0x300000002;
          if (*(char *)(param_1 + 0xec) == '\0') {
            local_210 = 0x400000002;
            uStack_208 = CONCAT44(uVar10,2);
          }
          else {
            uStack_208 = CONCAT44(uVar10,&DAT_1012bcc8);
            local_210 = 0x100000000;
          }
          uStack_d8 = uStack_208;
          uStack_208 = CONCAT44(uStack_208._4_4_,1);
          uStack_c4 = uStack_208;
          local_bc = 5;
          local_a8 = 5;
          local_e0 = local_210;
          uStack_208 = CONCAT44(uStack_208._4_4_,1);
          uStack_b0 = uStack_208;
          local_94 = 5;
          uStack_cc = 0x300000002;
          uStack_208 = CONCAT44(uStack_208._4_4_,&DAT_1012bcb0);
          uStack_9c = uStack_208;
          local_80 = 5;
          uStack_b8 = 0x400000002;
          uStack_208 = CONCAT44(uStack_208._4_4_,&DAT_1012bc98);
          uStack_88 = uStack_208;
          local_6c = 5;
          uStack_a4 = 0x100000000;
          uStack_208 = CONCAT44(uStack_208._4_4_,&DAT_1012bc80);
          uStack_74 = uStack_208;
          local_58 = 5;
          local_90 = 0x100000000;
          uStack_208 = CONCAT44(uStack_208._4_4_,&DAT_1012bc68);
          uStack_60 = uStack_208;
          local_44 = 5;
          uStack_7c = 0x100000000;
          uStack_208 = CONCAT44(uStack_208._4_4_,&DAT_1012bc50);
          puStack_184 = &local_130;
          local_188 = 0xc;
          local_178 = 0xd;
          uStack_68 = 0x100000000;
          local_210 = 0x100000000;
          local_d0 = 0;
          local_180 = 0;
          uStack_4c = uStack_208;
          uStack_54 = 0x100000000;
          uVar10 = (*pcVar17)();
          iVar8 = (*extraout_w11_00)(uVar10,*local_1e0,1,&local_188,0);
          *(int *)(param_1 + 0xd0) = iVar8;
          if (iVar8 != 0) {
            return 1;
          }
          FUN_10043a88(param_1);
        }
      }
      FUN_10043a38(param_1);
    }
    FUN_10043988(param_1);
  }
  FUN_100dafb0(*piVar16);
  *piVar16 = 0;
  *piVar2 = 0;
  return 0;
joined_r0x10043d5c:
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar10 = (*pcVar17)();
    (*extraout_w11)(uVar10);
  }
  iVar8 = *local_1e8;
  if (iVar8 != -1) {
    iVar4 = *(int *)(*piVar2 + 0x15d8);
    iVar3 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_10134070)(iVar3);
    FUN_100df258(iVar4,iVar8,3);
    (*(code *)PTR_FUN_101340bc)(iVar3);
  }
  bVar5 = false;
  *local_1e8 = -1;
  goto LAB_10043e04;
}

