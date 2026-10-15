/*
 * FUN_180093510 at 180093510
 * undefined FUN_180093510(void)
 * Address ranges: 180093510-180093e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180093510(longlong param_1,longlong param_2,uint param_3,int param_4,longlong param_5,
                  int param_6,int *param_7,undefined8 param_8,byte *param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_15c;
  uint local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  undefined8 local_140;
  uint local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  uint local_11c;
  uint local_118;
  undefined4 uStack_114;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [4];
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  int iStack_b8;
  int *local_b0;
  undefined8 uStack_a8;
  int local_a0 [6];
  undefined1 auStack_88 [48];
  uint local_58;
  
  uVar9 = 0;
  local_14c = param_3;
  local_130 = param_4;
  local_b0 = param_7;
  uStack_a8 = param_8;
  iVar7 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x70))
                    (*(longlong **)(param_2 + 0x14),local_a0,0);
  if (iVar7 < 0) {
    return 0;
  }
  uVar14 = (ulonglong)(local_14c + *(int *)(param_1 + 0x3c) * local_130);
  FUN_1800928f0(param_1,auStack_c8,local_14c,local_130);
  iVar7 = *param_7;
  uVar13 = param_7[1];
  iVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_9 = 1;
  local_150 = iStack_b8;
  local_148 = uVar13;
  if (((*(int *)(param_1 + 0x44) - 3U < 3) &&
      (*(char *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6ea
                ) == '\0')) &&
     ((iVar7 != 0 || uVar13 != 0 || ((iVar2 != iStack_b8 || (uVar3 != local_bc - 1)))))) {
    (**(code **)(**(longlong **)(param_2 + 0x14) + 0x50))(*(longlong **)(param_2 + 0x14),auStack_88)
    ;
    *param_9 = ~(byte)(local_58 >> 1) & 1;
  }
  if ((((*(int *)(*(longlong *)(param_1 + 0x58) + 0x14c0) == 0) && (local_a0[0] == 4)) &&
      (2 < *(int *)(param_1 + 0x44) - 3U)) &&
     (uVar10 = FUN_1800f2320(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x1b500),
                             *(undefined8 *)(param_2 + 0x14),uVar14), (uVar10 & 1) != 0)) {
    if (*(char *)(*(longlong *)(param_2 + 0x24) + uVar14 * 0x20 + 0xc) == '\0') {
      local_140 = uVar14;
      iVar8 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x40))
                        (*(longlong **)(param_2 + 0x14),uVar14,0,0);
      *(byte *)(*(longlong *)(param_2 + 0x24) + uVar14 * 0x20 + 0xc) =
           (byte)~(byte)((uint)iVar8 >> 0x18) >> 7;
      if (iVar8 < 0) goto LAB_180093da8;
    }
    local_140 = 0;
    local_15c = 0;
    FUN_180092988(param_1,local_14c,local_130,&local_140,&local_15c,0);
    uVar4 = local_15c;
    uVar9 = 1;
    local_158 = uStack_c0;
    local_154 = local_c4;
    local_110 = local_140;
    if (iVar7 != 0) {
      local_108 = uStack_c0 * iVar7;
      local_104 = local_bc * local_148;
      lVar1 = (ulonglong)(local_148 * param_6) + (ulonglong)(local_c4 * iVar7);
      iVar7 = local_150;
      if (uVar3 == local_148) {
        iVar7 = iVar2;
      }
      local_fc = iVar7 * uStack_c0;
      local_100 = 0;
      local_15c = local_148 + 1;
      local_f8 = local_bc * local_15c;
      uStack_f4 = 1;
      uVar11 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                         (*(longlong **)(param_2 + 0x14),uVar14,&local_108,lVar1 + param_5,param_6,0
                         );
      uVar9 = ~(uint)uVar11 >> 0x1f;
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18009377c);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (local_158 != 0) {
        uVar13 = local_108 / local_158;
      }
      local_140 = CONCAT44(local_140._4_4_,uVar13);
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093790);
        (*pcVar6)();
      }
      uVar5 = 0;
      if (local_bc != 0) {
        uVar5 = local_104 / local_bc;
      }
      local_140 = CONCAT44(uVar5,uVar13);
      local_138 = 0;
      if (local_158 != 0) {
        local_138 = local_fc / local_158;
      }
      local_134 = 0;
      if (local_bc != 0) {
        local_134 = local_f8 / local_bc;
      }
      FUN_180092b58(uVar11,lVar1 + param_5,param_6,&local_140,local_110,uVar4,local_154);
      uVar13 = local_15c;
    }
    if (uVar13 < uVar3) {
      local_dc = local_bc * uVar13;
      local_15c = uVar13 * param_6;
      local_e0 = 0;
      local_d4 = local_158 * local_150;
      local_d8 = 0;
      local_d0 = uVar3;
      if (iVar2 == local_150) {
        local_d0 = uVar3 + 1;
      }
      local_d0 = local_d0 * local_bc;
      uStack_cc = 1;
      uVar11 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                         (*(longlong **)(param_2 + 0x14),uVar14,&local_e0,
                          param_5 + (ulonglong)local_15c,param_6,0);
      uVar9 = uVar9 & ~(uint)uVar11 >> 0x1f;
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093848);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (local_158 != 0) {
        uVar13 = local_e0 / local_158;
      }
      local_140 = CONCAT44(local_140._4_4_,uVar13);
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x18009385c);
        (*pcVar6)();
      }
      uVar5 = 0;
      if (local_bc != 0) {
        uVar5 = local_dc / local_bc;
      }
      local_140 = CONCAT44(uVar5,uVar13);
      local_138 = 0;
      if (local_158 != 0) {
        local_138 = local_d4 / local_158;
      }
      local_134 = 0;
      if (local_bc != 0) {
        local_134 = local_d0 / local_bc;
      }
      FUN_180092b58(uVar11,param_5 + (ulonglong)local_15c,param_6,&local_140,local_110,uVar4,
                    local_154);
      uVar13 = uVar3;
      if (iVar2 == local_150) {
        uVar13 = uVar3 + 1;
      }
    }
    if (uVar3 == uVar13) {
      local_124 = local_bc * uVar13;
      local_118 = local_bc + uVar3 * local_bc;
      local_15c = uVar13 * param_6;
      local_128 = 0;
      local_11c = local_158 * iVar2;
      local_120 = 0;
      uStack_114 = 1;
      uVar11 = (**(code **)(**(longlong **)(param_2 + 0x14) + 0x60))
                         (*(longlong **)(param_2 + 0x14),uVar14,&local_128,
                          param_5 + (ulonglong)local_15c,param_6,0);
      uVar9 = uVar9 & ~(uint)uVar11 >> 0x1f;
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093910);
        (*pcVar6)();
      }
      uVar13 = 0;
      if (local_158 != 0) {
        uVar13 = local_128 / local_158;
      }
      local_140 = CONCAT44(local_140._4_4_,uVar13);
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093924);
        (*pcVar6)();
      }
      uVar3 = 0;
      if (local_bc != 0) {
        uVar3 = local_124 / local_bc;
      }
      local_140 = CONCAT44(uVar3,uVar13);
      puVar12 = (uint *)&local_140;
      local_138 = 0;
      if (local_158 != 0) {
        local_138 = local_11c / local_158;
      }
      local_134 = 0;
      uVar14 = local_110;
      uVar13 = local_15c;
      uVar3 = local_154;
      if (local_bc != 0) {
        local_134 = local_118 / local_bc;
      }
LAB_180093d8c:
      FUN_180092b58(uVar11,param_5 + (ulonglong)uVar13,param_6,puVar12,uVar14,uVar4,uVar3);
    }
  }
  else {
    uVar9 = 1;
    if (*param_9 == 0) {
      uVar9 = FUN_180092718(param_1);
      uVar9 = uVar9 & 0xff;
      if (uVar9 == 0) goto LAB_180093da8;
    }
    local_140 = 0;
    local_15c = 0;
    local_154 = local_14c + (*(int *)(param_1 + 0x34) + local_130) * *(int *)(param_1 + 0x3c);
    local_110 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x1508);
    uVar11 = FUN_180092988(param_1,local_14c,local_130,&local_140,&local_15c,0);
    local_148 = local_c4;
    local_158 = uStack_c0;
    if (iVar7 != 0) {
      local_e8 = (ulonglong)(uVar13 * param_6) + (ulonglong)(local_c4 * iVar7);
      uVar4 = uStack_c0 * iVar7;
      local_124 = local_bc * uVar13;
      iVar7 = local_150;
      if (uVar3 == uVar13) {
        iVar7 = iVar2;
      }
      local_11c = iVar7 * uStack_c0;
      local_12c = uVar13 + 1;
      uVar13 = local_bc + uVar13 * local_bc;
      uStack_114 = 1;
      local_120 = 0;
      local_128 = uVar4;
      local_118 = uVar13;
      local_f0 = local_124;
      local_ec = local_11c;
      if (*param_9 != 0) {
        uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),uVar14,
                               *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,local_e8 + param_5,
                               param_6);
        uVar9 = (uint)uVar11 & 0xff & uVar9;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),local_154,
                                 *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,
                                 local_e8 + param_5,param_6);
          uVar9 = (uint)uVar11 & 0xff & uVar9;
        }
      }
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093ad8);
        (*pcVar6)();
      }
      local_108 = 0;
      if (local_158 != 0) {
        local_108 = uVar4 / local_158;
      }
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093aec);
        (*pcVar6)();
      }
      local_104 = 0;
      if (local_bc != 0) {
        local_104 = local_f0 / local_bc;
      }
      local_100 = 0;
      if (local_158 != 0) {
        local_100 = local_ec / local_158;
      }
      local_fc = 0;
      if (local_bc != 0) {
        local_fc = uVar13 / local_bc;
      }
      uVar11 = FUN_180092b58(uVar11,local_e8 + param_5,param_6,&local_108,local_140,local_15c,
                             local_148);
      uVar13 = local_12c;
    }
    if (uVar13 < uVar3) {
      local_12c = local_bc * uVar13;
      uVar13 = uVar13 * param_6;
      local_128 = 0;
      local_11c = local_158 * local_150;
      local_118 = uVar3;
      if (iVar2 == local_150) {
        local_118 = uVar3 + 1;
      }
      local_120 = 0;
      local_118 = local_118 * local_bc;
      uStack_114 = 1;
      local_124 = local_12c;
      local_f0 = local_118;
      local_ec = local_11c;
      if (*param_9 != 0) {
        uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),uVar14,
                               *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,
                               param_5 + (ulonglong)uVar13,param_6);
        uVar9 = (uint)uVar11 & 0xff & uVar9;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),local_154,
                                 *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,
                                 param_5 + (ulonglong)uVar13,param_6);
          uVar9 = (uint)uVar11 & 0xff & uVar9;
        }
      }
      local_108 = 0;
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093c24);
        (*pcVar6)();
      }
      local_104 = 0;
      if (local_bc != 0) {
        local_104 = local_12c / local_bc;
      }
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093c3c);
        (*pcVar6)();
      }
      local_100 = 0;
      if (local_158 != 0) {
        local_100 = local_ec / local_158;
      }
      local_fc = 0;
      if (local_bc != 0) {
        local_fc = local_f0 / local_bc;
      }
      uVar11 = FUN_180092b58(uVar11,param_5 + (ulonglong)uVar13,param_6,&local_108,local_140,
                             local_15c,local_148);
      uVar13 = uVar3;
      if (iVar2 == local_150) {
        uVar13 = uVar3 + 1;
      }
    }
    if (uVar3 == uVar13) {
      local_12c = local_bc * uVar13;
      uVar13 = uVar13 * param_6;
      uVar3 = local_bc + uVar3 * local_bc;
      local_128 = 0;
      uVar4 = local_158 * iVar2;
      uStack_114 = 1;
      local_120 = 0;
      local_124 = local_12c;
      local_11c = uVar4;
      local_118 = uVar3;
      if (*param_9 != 0) {
        uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),uVar14,
                               *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,
                               param_5 + (ulonglong)uVar13,param_6);
        uVar9 = (uint)uVar11 & 0xff & uVar9;
        if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
          uVar11 = FUN_180092c08(param_1,local_110,*(undefined8 *)(param_2 + 0x14),local_154,
                                 *(longlong *)(param_1 + 0x58) + 0x16d0,&local_128,
                                 param_5 + (ulonglong)uVar13,param_6);
          uVar9 = (uint)uVar11 & 0xff & uVar9;
        }
      }
      local_108 = 0;
      if (local_bc == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093d58);
        (*pcVar6)();
      }
      local_104 = 0;
      if (local_bc != 0) {
        local_104 = local_12c / local_bc;
      }
      if (local_158 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180093d6c);
        (*pcVar6)();
      }
      local_100 = 0;
      if (local_158 != 0) {
        local_100 = uVar4 / local_158;
      }
      local_fc = 0;
      if (local_bc != 0) {
        local_fc = uVar3 / local_bc;
      }
      puVar12 = &local_108;
      uVar14 = local_140;
      uVar3 = local_148;
      uVar4 = local_15c;
      goto LAB_180093d8c;
    }
  }
  FUN_180092af0(param_1,local_14c,local_130);
LAB_180093da8:
  uVar13 = *(uint *)(param_1 + 0x24) >> (ulonglong)(local_14c & 0x1f);
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  (*__imp_USER32_dll_SetRect)
            (uStack_a8,0,local_b0[1] * local_bc,uVar13,local_bc + local_b0[3] * local_bc);
  return uVar9;
}

