/*
 * FUN_10051cf0 at 10051cf0
 * undefined FUN_10051cf0(void)
 * Address ranges: 10051cf0-10052387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10051cf0(int param_1)

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
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  int local_260;
  int *local_25c;
  int *local_258;
  code *local_254;
  int *local_250;
  int *local_24c;
  int *local_248;
  int local_244;
  undefined4 *local_240;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 auStack_200 [8];
  undefined4 local_1f8;
  undefined8 *puStack_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  longlong lStack_198;
  undefined4 local_190;
  undefined8 uStack_18c;
  longlong lStack_184;
  undefined4 local_17c;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined4 local_50;
  
  iVar8 = FUN_1010d638(DAT_10175b50,&PTR_s_DGD3D12ROOT_1016d170,0);
  piVar16 = (int *)(param_1 + 0xc4);
  *piVar16 = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 200);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar8 = iVar8 + *piVar1 * 0x16c0;
  *piVar2 = iVar8 + 0x6c0;
  local_250 = piVar1;
  FUN_10130fb8(iVar8 + 0x1880);
  bVar5 = false;
  iVar8 = FUN_10111c30(*(undefined4 *)(*piVar2 + 0x15d8),3);
  pcVar17 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  *(int *)(param_1 + 0xc0) = iVar8;
  if (iVar8 != -1) {
    local_254 = pcVar17;
    local_244 = param_1 + 0xb4;
    uVar14 = 0;
    local_260 = param_1;
    local_25c = piVar16;
    local_258 = (int *)(param_1 + 0xc0);
    local_24c = piVar16;
    local_248 = piVar1;
    do {
      local_230 = 0x40000001c;
      local_228 = 0x1688;
      local_1e0[0] = 3;
      local_220 = 0xffffffff00000000;
      uVar15 = 1;
      local_210 = 0;
      switch(uVar14) {
      default:
        goto switchD_10051e0c_caseD_0;
      case 1:
        uVar15 = 6;
        uVar10 = 9;
        local_1e0[0] = 3;
        break;
      case 2:
        uVar10 = 8;
        local_1e0[0] = 4;
        uVar15 = 1;
      }
      local_230 = CONCAT44(uVar10,0x1c);
switchD_10051e0c_caseD_0:
      uStack_218 = 0;
      local_1c0 = 0x10000001c;
      uStack_1b8 = 0;
      local_1d8 = 0;
      uStack_1d0 = 1;
      local_1c8 = 1;
      local_1c4 = (undefined2)uVar15;
      local_1c2 = 1;
      local_1b0 = 0;
      iVar8 = FUN_10112b78(*local_24c + 0x520,*local_248,local_1e0);
      pcVar17 = local_254;
      piVar16 = local_25c;
      param_1 = local_260;
      *(int *)(local_244 + uVar14 * 4) = iVar8;
      if (iVar8 == 0) goto joined_r0x10051f58;
      local_280 = 0;
      uStack_278 = 0x100000000;
      local_270 = 0x100000001;
      uVar13 = 0;
      puVar9 = (undefined4 *)(local_260 + uVar14 * 4 + 0xb4);
      local_240 = puVar9;
      do {
        FUN_10118180(*(undefined4 *)(*piVar2 + 0x130c),*puVar9,uVar13,*piVar2 + 0x1430,&local_280,
                     &DAT_1016e374,0,0);
        puVar7 = local_240;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar15);
      puVar9 = (undefined4 *)
               FUN_10112730(*(undefined4 *)(*piVar2 + 0x15d8),auStack_200,*local_258,uVar14);
      FUN_101129b8(*local_25c + 0x520,*local_250,*puVar7,&local_230,*puVar9);
      uVar14 = uVar14 + 1;
    } while (uVar14 < 3);
    bVar5 = true;
    param_1 = local_260;
    pcVar17 = local_254;
    piVar16 = local_25c;
  }
LAB_10052000:
  uVar11 = FUN_101138b0(*(int *)(*piVar2 + 0x130c) + 4,0);
  if (bVar5) {
    uVar12 = FUN_10119520(uVar11,DAT_10175b50,0x12,&DAT_1016e2d0,param_1 + 4);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_10119520(uVar12,DAT_10175b50,6,&DAT_1016e290,param_1 + 0x90);
      if ((((uVar12 & 1) != 0) &&
          (uVar12 = FUN_10119520(uVar12,DAT_10175b50,0x11,&DAT_1016e2a0,param_1 + 0x4c),
          (uVar12 & 1) != 0)) &&
         (uVar12 = FUN_10119520(uVar12,DAT_10175b50,1,&DAT_1016e288,param_1 + 0xb0),
         (uVar12 & 1) != 0)) {
        puVar9 = (undefined4 *)FUN_101321c0(8);
        uVar12 = uStack_278;
        *(int *)(param_1 + 0xac) = (int)puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = &PTR_s_POSITION_1016e250;
          uVar6 = uStack_278 >> 0x20;
          uStack_278 = uVar6 << 0x20;
          lStack_198 = uStack_278;
          uStack_278 = uVar6 << 0x20;
          lStack_184 = uStack_278;
          local_190 = 0;
          *(undefined4 *)(*(int *)(param_1 + 0xac) + 4) = 2;
          local_1a0 = 2;
          uVar10 = (undefined4)(uVar12 >> 0x20);
          uStack_278 = uVar6 << 0x20;
          lStack_170 = uStack_278;
          local_17c = 0;
          uStack_18c = 0x100000002;
          uStack_278 = CONCAT44(uVar10,2);
          local_168 = 0;
          uStack_178 = 0x200000002;
          local_154 = 0;
          uStack_15c = uStack_278;
          uStack_164 = 0x300000002;
          if (*(char *)(param_1 + 0xec) == '\0') {
            local_280 = 0x400000002;
            uStack_278 = CONCAT44(uVar10,2);
          }
          else {
            uStack_278 = CONCAT44(uVar10,&DAT_101616a8);
            local_280 = 0x100000000;
          }
          uStack_148 = uStack_278;
          uStack_278 = CONCAT44(uStack_278._4_4_,1);
          uStack_134 = uStack_278;
          local_140 = 0;
          local_12c = 5;
          local_150 = local_280;
          uStack_278 = CONCAT44(uStack_278._4_4_,1);
          uStack_120 = uStack_278;
          local_118 = 5;
          uStack_13c = 0x300000002;
          uStack_278 = CONCAT44(uStack_278._4_4_,1);
          uStack_10c = uStack_278;
          local_104 = 5;
          uStack_128 = 0x400000002;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161690);
          uStack_f8 = uStack_278;
          local_f0 = 5;
          uStack_114 = 0x500000002;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161678);
          uStack_e4 = uStack_278;
          local_dc = 5;
          local_100 = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161660);
          uStack_d0 = uStack_278;
          local_c8 = 5;
          uStack_ec = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161648);
          uStack_bc = uStack_278;
          local_b4 = 5;
          uStack_d8 = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161630);
          uStack_a8 = uStack_278;
          local_a0 = 5;
          uStack_c4 = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161618);
          uStack_94 = uStack_278;
          local_8c = 0;
          local_b0 = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_10161600);
          uStack_80 = uStack_278;
          local_78 = 0;
          uStack_9c = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_101615e8);
          uStack_6c = uStack_278;
          local_64 = 0;
          uStack_88 = 0x100000000;
          local_280 = 0x100000000;
          uStack_278 = CONCAT44(uStack_278._4_4_,&DAT_101615d0);
          uStack_74 = 0x100000000;
          local_50 = 0;
          puStack_1f4 = &local_1a0;
          local_1f0 = 0;
          local_1f8 = 0x11;
          local_1e8 = 0xd;
          uStack_58 = uStack_278;
          local_60 = 0x100000000;
          uVar10 = (*pcVar17)();
          iVar8 = (*extraout_w11_00)(uVar10,*local_250,1,&local_1f8,0);
          *(int *)(param_1 + 0xd0) = iVar8;
          if (iVar8 != 0) {
            return 1;
          }
          FUN_10051c88(param_1);
        }
      }
      FUN_10051c38(param_1);
    }
    FUN_10051b88(param_1);
  }
  FUN_1010d6f0(*piVar16);
  *piVar16 = 0;
  *piVar2 = 0;
  return 0;
joined_r0x10051f58:
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar10 = (*pcVar17)();
    (*extraout_w11)(uVar10);
  }
  iVar8 = *local_258;
  if (iVar8 != -1) {
    iVar4 = *(int *)(*piVar2 + 0x15d8);
    iVar3 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar3);
    FUN_10111aa8(iVar4,iVar8,3);
    (*(code *)PTR_FUN_1016c0c0)(iVar3);
  }
  bVar5 = false;
  *local_258 = -1;
  goto LAB_10052000;
}

