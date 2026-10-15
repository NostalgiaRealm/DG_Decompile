/*
 * FUN_10023440 at 10023440
 * undefined FUN_10023440(void)
 * Address ranges: 10023440-10023e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10023440(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 uint *param_7,undefined4 param_8,byte *param_9)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar15;
  undefined1 auVar16 [16];
  int local_150;
  int local_14c;
  uint local_148;
  uint local_144;
  code *local_140;
  uint local_13c;
  uint local_138;
  undefined4 uStack_134;
  int *local_130;
  code *local_12c;
  int *local_128;
  uint local_124;
  int local_120;
  int local_11c;
  int local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 *local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  int iStack_f8;
  int local_f4;
  uint *local_f0;
  uint *local_ec;
  undefined4 local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int local_98 [6];
  undefined1 auStack_80 [48];
  uint local_50;
  
  local_108 = (undefined4 *)(param_2 + 0xc);
  uVar12 = 0;
  local_12c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_150 = param_2;
  local_120 = param_6;
  local_118 = param_1;
  local_104 = param_5;
  local_fc = param_3;
  iStack_f8 = param_4;
  local_e8 = param_8;
  uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar11 = (*extraout_w11)(uVar10,local_98,0);
  if (iVar11 < 0) {
    return 0;
  }
  local_128 = (int *)(param_1 + 0x2c);
  local_11c = param_3 + *local_128 * param_4;
  FUN_10022718(param_1,&local_148,param_3,param_4);
  uVar8 = local_13c;
  local_100 = *param_7;
  local_10c = param_7[2];
  local_f0 = param_7 + 3;
  local_ec = param_7 + 1;
  local_110 = *local_f0;
  uVar15 = *local_ec;
  *param_9 = 1;
  local_114 = local_138;
  if (((*(int *)(param_1 + 0x34) - 3U < 3) &&
      (*(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x18 + 0x532) == '\0')) &&
     ((local_100 != 0 ||
      (((uVar15 != 0 || (local_10c != local_138)) || (local_110 != local_13c - 1)))))) {
    uVar10 = (*local_12c)();
    (*extraout_w11_00)(uVar10,auStack_80);
    *param_9 = ~(byte)(local_50 >> 1) & 1;
  }
  iVar11 = local_118;
  local_130 = (int *)(local_118 + 0x44);
  if (((*(int *)(*local_130 + 0x12e8) == 0) && (local_98[0] == 4)) &&
     ((2 < *(int *)(param_1 + 0x34) - 3U &&
      (uVar13 = FUN_10078bf8(*(undefined4 *)(*(int *)(local_118 + 0x40) + 0x172c0),*local_108,
                             local_11c), (uVar13 & 1) != 0)))) {
    uVar13 = FUN_100206e0(local_150,local_11c);
    if ((uVar13 & 1) == 0) goto LAB_10023dac;
    local_150 = 0;
    local_128 = (int *)0x0;
    FUN_10022800(iVar11,local_fc,iStack_f8,&local_150,&local_128,0);
    iVar11 = local_120;
    pcVar7 = local_140;
    uVar12 = 1;
    local_124 = local_144;
    local_14c = local_150;
    local_130 = local_128;
    if (local_100 != 0) {
      local_150 = local_104 + uVar15 * local_120 + local_100 * local_144;
      local_e0 = (int)local_140 * local_100;
      local_dc = uVar8 * uVar15;
      local_d4 = local_114;
      if (local_110 == uVar15) {
        local_d4 = local_10c;
      }
      local_d4 = local_d4 * (int)local_140;
      uVar15 = uVar15 + 1;
      local_d8 = 0;
      local_d0 = uVar8 * uVar15;
      uStack_cc = 1;
      auVar16 = (*local_12c)();
      uVar14 = (*extraout_w11_01)(auVar16._0_8_ & 0xffffffff,local_11c,&local_e0,
                                  auVar16._8_8_ & 0xffffffff,iVar11,0);
      uVar12 = ~(uint)uVar14 >> 0x1f;
      if (local_140 == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023724);
        (*(code *)uVar14)();
      }
      local_148 = 0;
      if (local_140 != (code *)0x0) {
        local_148 = local_e0 / (uint)local_140;
      }
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023738);
        (*(code *)uVar14)();
      }
      local_144 = 0;
      if (uVar8 != 0) {
        local_144 = local_dc / uVar8;
      }
      pcVar3 = (code *)0x0;
      if (local_140 != (code *)0x0) {
        pcVar3 = (code *)(local_d4 / (uint)local_140);
      }
      local_13c = 0;
      if (uVar8 != 0) {
        local_13c = local_d0 / uVar8;
      }
      local_140 = pcVar3;
      FUN_10022a50(uVar14,local_150,iVar11,&local_148,local_14c,local_130,local_124);
    }
    uVar2 = local_10c;
    uVar4 = local_110;
    iVar11 = local_120;
    if (uVar15 < local_110) {
      local_c4 = uVar8 * uVar15;
      local_c8 = 0;
      local_bc = (int)pcVar7 * local_114;
      local_c0 = 0;
      local_b8 = local_110;
      if (local_10c == local_114) {
        local_b8 = local_110 + 1;
      }
      local_150 = local_104 + uVar15 * local_120;
      local_b8 = local_b8 * uVar8;
      uStack_b4 = 1;
      auVar16 = (*local_12c)();
      uVar14 = (*extraout_w11_02)(auVar16._0_8_ & 0xffffffff,local_11c,&local_c8,
                                  auVar16._8_8_ & 0xffffffff,iVar11,0);
      uVar12 = uVar12 & ~(uint)uVar14 >> 0x1f;
      if (pcVar7 == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x1002380c);
        (*(code *)uVar14)();
      }
      local_148 = 0;
      if (pcVar7 != (code *)0x0) {
        local_148 = local_c8 / (uint)pcVar7;
      }
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023820);
        (*(code *)uVar14)();
      }
      local_144 = 0;
      if (uVar8 != 0) {
        local_144 = local_c4 / uVar8;
      }
      local_140 = (code *)0x0;
      if (pcVar7 != (code *)0x0) {
        local_140 = (code *)(local_bc / (uint)pcVar7);
      }
      local_13c = 0;
      if (uVar8 != 0) {
        local_13c = local_b8 / uVar8;
      }
      FUN_10022a50(uVar14,local_150,iVar11,&local_148,local_14c,local_130,local_124);
      uVar15 = uVar4;
      if (uVar2 == local_114) {
        uVar15 = uVar4 + 1;
      }
    }
    iVar11 = local_120;
    if (local_110 == uVar15) {
      local_ac = uVar8 * uVar15;
      local_b0 = 0;
      local_a4 = local_10c * (int)pcVar7;
      local_150 = local_104 + uVar15 * local_120;
      local_a8 = 0;
      local_a0 = uVar8 + local_110 * uVar8;
      uStack_9c = 1;
      auVar16 = (*local_12c)();
      uVar14 = (*extraout_w11_03)(auVar16._0_8_ & 0xffffffff,local_11c,&local_b0,
                                  auVar16._8_8_ & 0xffffffff,iVar11,0);
      uVar12 = uVar12 & ~(uint)uVar14 >> 0x1f;
      if (pcVar7 == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x100238f0);
        (*(code *)uVar14)();
      }
      local_148 = 0;
      if (pcVar7 != (code *)0x0) {
        local_148 = local_b0 / (uint)pcVar7;
      }
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023904);
        (*(code *)uVar14)();
      }
      local_144 = 0;
      if (uVar8 != 0) {
        local_144 = local_ac / uVar8;
      }
      local_140 = (code *)0x0;
      if (pcVar7 != (code *)0x0) {
        local_140 = (code *)(local_a4 / (uint)pcVar7);
      }
      local_13c = 0;
      piVar1 = local_130;
      uVar4 = local_124;
      iVar5 = local_150;
      iVar6 = local_14c;
      if (uVar8 != 0) {
        local_13c = local_a0 / uVar8;
      }
      goto LAB_10023d94;
    }
  }
  else {
    uVar12 = 1;
    if (*param_9 == 0) {
      uVar12 = FUN_10022620(local_118);
      uVar12 = uVar12 & 0xff;
      if (uVar12 == 0) goto LAB_10023dac;
    }
    iVar5 = local_118;
    local_150 = 0;
    local_f4 = local_fc + (*(int *)(local_118 + 0x24) + iStack_f8) * *local_128;
    local_124 = *(uint *)(*local_130 + 0x1304);
    local_128 = (int *)0x0;
    uVar14 = FUN_10022800(local_118,local_fc,iStack_f8,&local_150,&local_128,0);
    uVar4 = local_100;
    puVar9 = local_108;
    iVar11 = local_120;
    local_100 = local_144;
    local_12c = local_140;
    if (uVar4 != 0) {
      local_148 = (int)local_140 * uVar4;
      uVar2 = uVar8 * uVar15;
      local_14c = local_104 + uVar15 * local_120 + uVar4 * local_144;
      local_13c = local_114;
      if (local_110 == uVar15) {
        local_13c = local_10c;
      }
      uVar15 = uVar15 + 1;
      local_13c = local_13c * (int)local_140;
      local_138 = uVar8 * uVar15;
      local_140 = (code *)0x0;
      uStack_134 = 1;
      local_144 = uVar2;
      if (*param_9 != 0) {
        uVar14 = FUN_10022b18(iVar5,local_124,*local_108,local_11c,*local_130 + 0x1430,&local_148,
                              local_14c,local_120);
        uVar12 = (uint)uVar14 & 0xff & uVar12;
        if (*(int *)(iVar5 + 0x1c) - 0x19U < 2) {
          uVar14 = FUN_10022b18(iVar5,local_124,*puVar9,local_f4,*local_130 + 0x1430,&local_148,
                                local_14c,iVar11);
          uVar12 = (uint)uVar14 & 0xff & uVar12;
        }
      }
      if (local_12c == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023ad0);
        (*(code *)uVar14)();
      }
      uVar4 = 0;
      if (local_12c != (code *)0x0) {
        uVar4 = local_148 / (uint)local_12c;
      }
      local_148 = uVar4;
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023ae0);
        (*(code *)uVar14)();
      }
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = local_144 / uVar8;
      }
      local_140 = (code *)0x0;
      if (local_12c != (code *)0x0) {
        local_140 = (code *)(local_13c / (uint)local_12c);
      }
      local_13c = 0;
      if (uVar8 != 0) {
        local_13c = local_138 / uVar8;
      }
      local_144 = uVar4;
      uVar14 = FUN_10022a50(uVar14,local_14c,local_120,&local_148,local_150,local_128,local_100);
    }
    puVar9 = local_108;
    iVar5 = local_118;
    iVar11 = local_120;
    if (uVar15 < local_110) {
      local_144 = uVar8 * uVar15;
      local_148 = 0;
      local_13c = (int)local_12c * local_114;
      local_138 = local_110;
      if (local_10c == local_114) {
        local_138 = local_110 + 1;
      }
      local_138 = local_138 * uVar8;
      local_14c = local_104 + uVar15 * local_120;
      local_140 = (code *)0x0;
      uStack_134 = 1;
      if (*param_9 != 0) {
        uVar14 = FUN_10022b18(local_118,local_124,*local_108,local_11c,*local_130 + 0x1430,
                              &local_148,local_14c,local_120);
        uVar12 = (uint)uVar14 & 0xff & uVar12;
        if (*(int *)(iVar5 + 0x1c) - 0x19U < 2) {
          uVar14 = FUN_10022b18(iVar5,local_124,*puVar9,local_f4,*local_130 + 0x1430,&local_148,
                                local_14c,iVar11);
          uVar12 = (uint)uVar14 & 0xff & uVar12;
        }
      }
      if (local_12c == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023c18);
        (*(code *)uVar14)();
      }
      uVar15 = 0;
      if (local_12c != (code *)0x0) {
        uVar15 = local_148 / (uint)local_12c;
      }
      local_148 = uVar15;
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023c28);
        (*(code *)uVar14)();
      }
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = local_144 / uVar8;
      }
      local_140 = (code *)0x0;
      if (local_12c != (code *)0x0) {
        local_140 = (code *)(local_13c / (uint)local_12c);
      }
      local_13c = 0;
      if (uVar8 != 0) {
        local_13c = local_138 / uVar8;
      }
      local_144 = uVar15;
      uVar14 = FUN_10022a50(uVar14,local_14c,local_120,&local_148,local_150,local_128,local_100);
      uVar15 = local_110;
      if (local_10c == local_114) {
        uVar15 = local_110 + 1;
      }
    }
    puVar9 = local_108;
    iVar5 = local_118;
    iVar11 = local_120;
    if (local_110 == uVar15) {
      local_144 = uVar8 * uVar15;
      local_138 = uVar8 + local_110 * uVar8;
      local_148 = 0;
      local_14c = local_104 + uVar15 * local_120;
      local_13c = local_10c * (int)local_12c;
      uStack_134 = 1;
      local_140 = (code *)0x0;
      if (*param_9 != 0) {
        uVar14 = FUN_10022b18(local_118,local_124,*local_108,local_11c,*local_130 + 0x1430,
                              &local_148,local_14c,local_120);
        uVar12 = (uint)uVar14 & 0xff & uVar12;
        if (*(int *)(iVar5 + 0x1c) - 0x19U < 2) {
          uVar14 = FUN_10022b18(iVar5,local_124,*puVar9,local_f4,*local_130 + 0x1430,&local_148,
                                local_14c,iVar11);
          uVar12 = (uint)uVar14 & 0xff & uVar12;
        }
      }
      if (local_12c == (code *)0x0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023d60);
        (*(code *)uVar14)();
      }
      uVar15 = 0;
      if (local_12c != (code *)0x0) {
        uVar15 = local_148 / (uint)local_12c;
      }
      local_148 = uVar15;
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        uVar14 = SoftwareBreakpoint(0xf004,0x10023d70);
        (*(code *)uVar14)();
      }
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = local_144 / uVar8;
      }
      local_140 = (code *)0x0;
      if (local_12c != (code *)0x0) {
        local_140 = (code *)(local_13c / (uint)local_12c);
      }
      local_13c = 0;
      iVar11 = local_120;
      piVar1 = local_128;
      uVar4 = local_100;
      iVar5 = local_14c;
      iVar6 = local_150;
      local_144 = uVar15;
      if (uVar8 != 0) {
        local_13c = local_138 / uVar8;
      }
LAB_10023d94:
      FUN_10022a50(uVar14,iVar5,iVar11,&local_148,iVar6,piVar1,uVar4);
    }
  }
  FUN_100229b8(local_118,local_fc,iStack_f8);
LAB_10023dac:
  uVar15 = *(uint *)(local_118 + 0x14) >> (ulonglong)(local_fc & 0x1f);
  if (uVar15 == 0) {
    uVar15 = 1;
  }
  (*(code *)PTR_FUN_100ba2b8)(local_e8,0,*local_ec * uVar8,uVar15,uVar8 + *local_f0 * uVar8);
  return uVar12;
}

