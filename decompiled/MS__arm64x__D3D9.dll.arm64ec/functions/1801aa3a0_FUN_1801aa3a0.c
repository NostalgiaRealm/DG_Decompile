/*
 * FUN_1801aa3a0 at 1801aa3a0
 * undefined FUN_1801aa3a0(void)
 * Address ranges: 1801aa3a0-1801aad23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801aa3a0(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
                  int param_6,int *param_7,undefined8 param_8,byte *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar13;
  longlong lVar14;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  undefined4 uStack_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  code *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  undefined8 uStack_98;
  int local_90 [6];
  undefined1 auStack_78 [48];
  uint local_48;
  
  uVar8 = 0;
  local_d8 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_fc = param_3;
  local_e0 = param_4;
  local_c8 = param_5;
  local_c0 = param_1;
  local_b0 = param_2;
  local_a0 = param_7;
  uStack_98 = param_8;
  uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar7 = (*extraout_x11)(uVar9,local_90,0);
  if (iVar7 < 0) {
    return 0;
  }
  local_104 = local_fc + *(int *)(param_1 + 0x3c) * local_e0;
  FUN_1801a9690(param_1,&local_128,local_fc,local_e0);
  uVar3 = local_11c;
  *param_9 = 1;
  iVar7 = *local_a0;
  uVar13 = local_a0[1];
  local_10c = local_a0[2];
  local_110 = local_a0[3];
  local_100 = local_118;
  local_f8 = uVar13;
  if (((*(int *)(param_1 + 0x44) - 3U < 3) &&
      (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6ea
                ) == '\0')) &&
     ((iVar7 != 0 || uVar13 != 0 || ((local_10c != local_118 || (local_110 != local_11c - 1)))))) {
    uVar9 = (*local_d8)(0x180224000);
    (*extraout_x11_00)(uVar9,auStack_78);
    *param_9 = ~(byte)(local_48 >> 1) & 1;
  }
  lVar14 = local_c0;
  uVar10 = FUN_180221e50(*(longlong *)(local_c0 + 0x58) + 0x12c0);
  lVar4 = local_b0;
  if (((((uVar10 & 1) == 0) || (local_90[0] != 4)) || (*(int *)(lVar14 + 0x44) - 3U < 3)) ||
     (uVar10 = FUN_18020ea10(*(undefined8 *)(*(longlong *)(lVar14 + 0x50) + 0x1b500),
                             *(undefined8 *)(local_b0 + 0x14),local_104), (uVar10 & 1) == 0)) {
    uVar8 = 1;
    if (*param_9 == 0) {
      uVar8 = FUN_1801a94c8(local_c0);
      uVar8 = uVar8 & 0xff;
      if (uVar8 == 0) goto LAB_1801aacd0;
    }
    lVar4 = local_c0;
    local_f0 = 0;
    local_130 = 0;
    local_b8 = local_fc + (*(int *)(local_c0 + 0x34) + local_e0) * *(int *)(local_c0 + 0x3c);
    local_d8 = *(code **)(*(longlong *)(local_c0 + 0x58) + 0x1508);
    uVar9 = FUN_1801a9730(local_c0,local_fc,local_e0,&local_f0,&local_130,0);
    lVar5 = local_b0;
    lVar14 = local_c8;
    local_108 = local_120;
    local_f8 = local_124;
    if (iVar7 != 0) {
      local_a8 = (ulonglong)(uVar13 * param_6) + (ulonglong)(local_124 * iVar7);
      local_124 = uVar3 * uVar13;
      local_12c = local_120 * iVar7;
      local_11c = local_100;
      if (local_110 == uVar13) {
        local_11c = local_10c;
      }
      local_11c = local_11c * local_120;
      uVar1 = uVar3 + uVar13 * uVar3;
      local_d0 = CONCAT44(local_d0._4_4_,uVar13 + 1);
      local_120 = 0;
      uStack_114 = 1;
      local_128 = local_12c;
      local_118 = uVar1;
      local_dc = local_11c;
      local_b4 = local_124;
      if (*param_9 != 0) {
        uVar9 = FUN_1801a99d0(lVar4,local_d8,*(undefined8 *)(local_b0 + 0x14),local_104,
                              *(longlong *)(lVar4 + 0x58) + 0x16d0,&local_128,local_a8 + local_c8,
                              param_6);
        uVar8 = (uint)uVar9 & 0xff & uVar8;
        if ((*(int *)(lVar4 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar9 = FUN_1801a99d0(lVar4,local_d8,*(undefined8 *)(lVar5 + 0x14),local_b8,
                                *(longlong *)(lVar4 + 0x58) + 0x16d0,&local_128,local_a8 + lVar14,
                                param_6);
          uVar8 = (uint)uVar9 & 0xff & uVar8;
        }
      }
      if (local_108 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa9c8);
        (*pcVar6)();
      }
      local_128 = 0;
      if (local_108 != 0) {
        local_128 = local_12c / local_108;
      }
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa9dc);
        (*pcVar6)();
      }
      local_124 = 0;
      if (uVar3 != 0) {
        local_124 = local_b4 / uVar3;
      }
      local_120 = 0;
      if (local_108 != 0) {
        local_120 = local_dc / local_108;
      }
      local_11c = 0;
      if (uVar3 != 0) {
        local_11c = uVar1 / uVar3;
      }
      uVar9 = FUN_1801a9920(uVar9,local_a8 + local_c8,param_6,&local_128,local_f0,local_130,local_f8
                           );
      uVar13 = (uint)local_d0;
    }
    lVar5 = local_b0;
    lVar4 = local_c0;
    lVar14 = local_c8;
    if (uVar13 < local_110) {
      local_12c = uVar13 * param_6;
      local_124 = uVar3 * uVar13;
      uVar13 = local_110 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,local_124);
      local_128 = 0;
      local_11c = local_108 * local_100;
      local_120 = 0;
      local_118 = local_110;
      if (local_10c == local_100) {
        local_118 = local_110 + 1;
      }
      local_118 = local_118 * uVar3;
      uStack_114 = 1;
      local_dc = local_11c;
      local_b4 = local_118;
      if (*param_9 != 0) {
        uVar9 = FUN_1801a99d0(local_c0,local_d8,*(undefined8 *)(local_b0 + 0x14),local_104,
                              *(longlong *)(local_c0 + 0x58) + 0x16d0,&local_128,
                              local_c8 + (ulonglong)local_12c,param_6);
        uVar8 = (uint)uVar9 & 0xff & uVar8;
        if ((*(int *)(lVar4 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar9 = FUN_1801a99d0(lVar4,local_d8,*(undefined8 *)(lVar5 + 0x14),local_b8,
                                *(longlong *)(lVar4 + 0x58) + 0x16d0,&local_128,
                                lVar14 + (ulonglong)local_12c,param_6);
          uVar8 = (uint)uVar9 & 0xff & uVar8;
        }
      }
      local_128 = 0;
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aab28);
        (*pcVar6)();
      }
      local_124 = 0;
      if (uVar3 != 0) {
        local_124 = (uint)local_d0 / uVar3;
      }
      if (local_108 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aab40);
        (*pcVar6)();
      }
      local_120 = 0;
      if (local_108 != 0) {
        local_120 = local_dc / local_108;
      }
      local_11c = 0;
      if (uVar3 != 0) {
        local_11c = local_b4 / uVar3;
      }
      uVar9 = FUN_1801a9920(uVar9,local_c8 + (ulonglong)local_12c,param_6,&local_128,local_f0,
                            local_130,local_f8);
      if (local_10c != local_100) {
        uVar13 = local_110;
      }
    }
    lVar5 = local_b0;
    lVar4 = local_c0;
    lVar14 = local_c8;
    if (local_110 == uVar13) {
      local_12c = uVar13 * param_6;
      local_124 = uVar3 * uVar13;
      uVar13 = uVar3 + local_110 * uVar3;
      local_d0 = CONCAT44(local_d0._4_4_,local_124);
      local_128 = 0;
      local_11c = local_108 * local_10c;
      uStack_114 = 1;
      local_120 = 0;
      local_118 = uVar13;
      local_dc = local_11c;
      if (*param_9 != 0) {
        uVar9 = FUN_1801a99d0(local_c0,local_d8,*(undefined8 *)(local_b0 + 0x14),local_104,
                              *(longlong *)(local_c0 + 0x58) + 0x16d0,&local_128,
                              local_c8 + (ulonglong)local_12c,param_6);
        uVar8 = (uint)uVar9 & 0xff & uVar8;
        if ((*(int *)(lVar4 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar9 = FUN_1801a99d0(lVar4,local_d8,*(undefined8 *)(lVar5 + 0x14),local_b8,
                                *(longlong *)(lVar4 + 0x58) + 0x16d0,&local_128,
                                lVar14 + (ulonglong)local_12c,param_6);
          uVar8 = (uint)uVar9 & 0xff & uVar8;
        }
      }
      local_128 = 0;
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aac78);
        (*pcVar6)();
      }
      local_124 = 0;
      if (uVar3 != 0) {
        local_124 = (uint)local_d0 / uVar3;
      }
      if (local_108 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aac90);
        (*pcVar6)();
      }
      local_120 = 0;
      if (local_108 != 0) {
        local_120 = local_dc / local_108;
      }
      local_11c = 0;
      if (uVar3 != 0) {
        local_11c = uVar13 / uVar3;
      }
      puVar11 = &local_128;
      uVar12 = local_f0;
      lVar14 = local_c8;
      uVar13 = local_f8;
      uVar1 = local_130;
      uVar2 = local_12c;
LAB_1801aacb4:
      FUN_1801a9920(uVar9,lVar14 + (ulonglong)uVar2,param_6,puVar11,uVar12,uVar1,uVar13);
    }
  }
  else {
    uVar10 = FUN_1801a7430(lVar4,local_104);
    if ((uVar10 & 1) == 0) goto LAB_1801aacd0;
    local_f0 = 0;
    local_130 = 0;
    FUN_1801a9730(lVar14,local_fc,local_e0,&local_f0,&local_130,0);
    uVar1 = local_120;
    uVar8 = 1;
    local_108 = local_124;
    local_d0 = local_f0;
    local_12c = local_130;
    if (iVar7 != 0) {
      lVar14 = (ulonglong)(local_f8 * param_6) + (ulonglong)(local_124 * iVar7);
      local_124 = uVar3 * local_f8;
      local_128 = local_120 * iVar7;
      local_11c = local_100;
      if (local_110 == local_f8) {
        local_11c = local_10c;
      }
      local_11c = local_11c * local_120;
      local_120 = 0;
      local_130 = local_f8 + 1;
      local_118 = uVar3 * local_130;
      uStack_114 = 1;
      uVar9 = (*local_d8)(0x180224000);
      lVar4 = local_c8;
      uVar9 = (*extraout_x11_01)(uVar9,local_104,&local_128,lVar14 + local_c8,param_6,0);
      uVar8 = ~(uint)uVar9 >> 0x1f;
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa620);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (uVar1 != 0) {
        uVar13 = local_128 / uVar1;
      }
      local_f0 = CONCAT44(local_f0._4_4_,uVar13);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa634);
        (*pcVar6)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = local_124 / uVar3;
      }
      local_f0 = CONCAT44(uVar2,uVar13);
      local_e8 = 0;
      if (uVar1 != 0) {
        local_e8 = local_11c / uVar1;
      }
      local_e4 = 0;
      if (uVar3 != 0) {
        local_e4 = local_118 / uVar3;
      }
      FUN_1801a9920(uVar9,lVar14 + lVar4,param_6,&local_f0,local_d0,local_12c,local_108);
      uVar13 = local_130;
    }
    if (uVar13 < local_110) {
      local_130 = uVar13 * param_6;
      local_124 = uVar3 * uVar13;
      local_128 = 0;
      local_11c = uVar1 * local_100;
      local_120 = 0;
      local_118 = local_110;
      if (local_10c == local_100) {
        local_118 = local_110 + 1;
      }
      local_118 = local_118 * uVar3;
      uStack_114 = 1;
      uVar9 = (*local_d8)(0x180224000);
      lVar14 = local_c8;
      uVar9 = (*extraout_x11_02)(uVar9,local_104,&local_128,local_c8 + (ulonglong)local_130,param_6,
                                 0);
      uVar8 = uVar8 & ~(uint)uVar9 >> 0x1f;
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa708);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (uVar1 != 0) {
        uVar13 = local_128 / uVar1;
      }
      local_f0 = CONCAT44(local_f0._4_4_,uVar13);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa71c);
        (*pcVar6)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = local_124 / uVar3;
      }
      local_f0 = CONCAT44(uVar2,uVar13);
      local_e8 = 0;
      if (uVar1 != 0) {
        local_e8 = local_11c / uVar1;
      }
      local_e4 = 0;
      if (uVar3 != 0) {
        local_e4 = local_118 / uVar3;
      }
      FUN_1801a9920(uVar9,lVar14 + (ulonglong)local_130,param_6,&local_f0,local_d0,local_12c,
                    local_108);
      uVar13 = local_110;
      if (local_10c == local_100) {
        uVar13 = local_110 + 1;
      }
    }
    if (local_110 == uVar13) {
      local_130 = uVar13 * param_6;
      local_118 = uVar3 + local_110 * uVar3;
      local_124 = uVar3 * uVar13;
      local_128 = 0;
      local_11c = uVar1 * local_10c;
      local_120 = 0;
      uStack_114 = 1;
      uVar9 = (*local_d8)(0x180224000);
      lVar14 = local_c8;
      uVar9 = (*extraout_x11_03)(uVar9,local_104,&local_128,local_c8 + (ulonglong)local_130,param_6,
                                 0);
      uVar8 = uVar8 & ~(uint)uVar9 >> 0x1f;
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa7f0);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (uVar1 != 0) {
        uVar13 = local_128 / uVar1;
      }
      local_f0 = CONCAT44(local_f0._4_4_,uVar13);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801aa804);
        (*pcVar6)();
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = local_124 / uVar3;
      }
      local_f0 = CONCAT44(uVar2,uVar13);
      puVar11 = (uint *)&local_f0;
      local_e8 = 0;
      if (uVar1 != 0) {
        local_e8 = local_11c / uVar1;
      }
      local_e4 = 0;
      uVar12 = local_d0;
      uVar13 = local_108;
      uVar1 = local_12c;
      uVar2 = local_130;
      if (uVar3 != 0) {
        local_e4 = local_118 / uVar3;
      }
      goto LAB_1801aacb4;
    }
  }
  FUN_1801a98a8(local_c0,local_fc,local_e0);
LAB_1801aacd0:
  uVar13 = *(uint *)(local_c0 + 0x24) >> (ulonglong)(local_fc & 0x1f);
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  thunk_FUN_180223c20(uStack_98,0,local_a0[1] * uVar3,uVar13,uVar3 + local_a0[3] * uVar3);
  return uVar8;
}

