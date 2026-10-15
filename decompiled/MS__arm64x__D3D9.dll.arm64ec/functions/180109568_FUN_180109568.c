/*
 * FUN_180109568 at 180109568
 * undefined FUN_180109568(void)
 * Address ranges: 180109568-18010a01b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180109568(longlong param_1,longlong param_2,ulonglong param_3,uint param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong extraout_x10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  longlong extraout_x15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  ulonglong local_120;
  ulonglong local_118;
  code *local_110;
  undefined8 local_108;
  longlong local_100;
  ulonglong local_f8;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined8 local_d8;
  int local_d0;
  uint uStack_cc;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_80;
  longlong local_78;
  uint local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  
  pcVar4 = (code *)__hybrid_os_arm64x_dispatch_icall;
  lVar15 = *(longlong *)(param_2 + 8);
  uStack_58 = *(ulonglong *)(param_2 + 0x60);
  local_60 = *(ulonglong *)(param_2 + 0x58);
  local_e8 = *(undefined4 *)(lVar15 + 0x98);
  local_120 = *(ulonglong *)(lVar15 + 0x70);
  lVar14 = *(longlong *)(param_3 + 8);
  uStack_48 = *(ulonglong *)(param_3 + 0x60);
  local_50 = *(undefined8 *)(param_3 + 0x58);
  local_e4 = *(undefined4 *)(lVar15 + 0x94);
  uVar8 = *(uint *)(lVar14 + 0x94);
  uVar13 = *(uint *)(lVar14 + 0x98);
  local_118 = *(ulonglong *)(lVar14 + 0x70);
  local_128 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  local_138 = (uint)((ulonglong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
  local_13c = uVar8;
  local_134 = param_4;
  local_130 = uVar13;
  local_100 = param_2;
  local_f8 = param_5;
  local_80 = param_6;
  local_78 = param_5;
  local_68 = param_1;
  if (local_128 == 3) {
    if (local_138 == 3) {
      uVar8 = *(uint *)(lVar15 + 0x20);
      if (uVar8 == 0) {
        uVar8 = (uint)*(byte *)(lVar15 + 0x26);
      }
      FUN_1801093e8(local_118,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_3 + 0x40),
                    *(undefined4 *)(lVar15 + 0x18),*(undefined4 *)(lVar14 + 0x18),
                    *(undefined1 *)(lVar15 + 0x24),*(undefined1 *)(lVar15 + 0x25),uVar8,param_4,
                    param_5,param_6);
      return 1;
    }
    if (local_138 != 1) goto LAB_1801096f4;
    bVar3 = true;
    uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar5 = (*extraout_x11)(uVar9,uVar8,uVar13);
    if ((cVar5 == '\0') && (uVar9 = FUN_180117448(param_3,&local_c0,0,0,0,0), -1 < (int)uVar9)) {
      lVar14 = *(longlong *)(param_2 + 8);
      uVar8 = *(uint *)(lVar14 + 0x20);
      if (uVar8 == 0) {
        uVar8 = (uint)*(byte *)(lVar14 + 0x26);
      }
      FUN_1801093e8(uVar9,*(undefined8 *)(param_2 + 0x40),uStack_b8,*(undefined4 *)(lVar14 + 0x18),
                    local_c0 & 0xffffffff,*(undefined1 *)(lVar14 + 0x24),
                    *(undefined1 *)(lVar14 + 0x25),uVar8,param_4,local_f8,param_6);
      FUN_180117e30(param_3,0);
      bVar3 = false;
    }
  }
  else {
LAB_1801096f4:
    bVar3 = true;
    if ((local_128 != 3) && (local_138 == 1)) {
      uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar13 = local_130;
      uVar8 = local_13c;
      cVar5 = (*extraout_x11_00)(uVar9,local_13c,local_130);
      if (cVar5 == '\0') {
        uVar9 = (*pcVar4)(0x180224000);
        cVar5 = (*extraout_x11_01)(uVar9,uVar8,uVar13);
        lVar14 = local_100;
        if (((cVar5 == '\0') && (*(longlong *)(*(longlong *)(local_100 + 8) + 0x28) != 0)) &&
           (iVar6 = FUN_180117448(param_3,&local_d8,0,0,1,0), -1 < iVar6)) {
          local_c0 = 0;
          uStack_b8 = 0;
          uVar9 = FUN_180117448(lVar14,&local_110,&local_c0,0x10,1,0);
          if (-1 < (int)uVar9) {
            lVar15 = *(longlong *)(lVar14 + 8);
            uVar8 = *(uint *)(lVar15 + 0x20);
            if (uVar8 == 0) {
              uVar8 = (uint)*(byte *)(lVar15 + 0x26);
            }
            FUN_1801093e8(uVar9,local_108,CONCAT44(uStack_cc,local_d0),
                          (ulonglong)local_110 & 0xffffffff,local_d8 & 0xffffffff,
                          *(undefined1 *)(lVar15 + 0x24),*(undefined1 *)(lVar15 + 0x25),uVar8,
                          local_134,local_78,local_80);
            bVar3 = false;
            FUN_180117e30(lVar14,1);
          }
          FUN_180117e30(param_3,0);
        }
      }
    }
  }
  uVar19 = local_118;
  if (!bVar3) {
    return 1;
  }
  local_e0 = local_130;
  iVar6 = *(int *)(param_3 + 0x70);
  local_12c = local_13c;
  local_ec = iVar6;
  if ((local_128 == 3) && (local_138 != 3)) {
    uVar9 = (*pcVar4)(0x180224000);
    uVar10 = (*extraout_x11_02)(uVar9,uStack_58 & 0xffffffff,uStack_58 >> 0x20,iVar6,1,0,1);
    local_e8 = 0;
    local_e4 = 0;
    local_f8 = uVar10;
    local_f0 = iVar6;
  }
  else {
    uVar10 = 0;
    iVar6 = *(int *)(local_100 + 0x70);
    local_f8 = local_120;
    local_f0 = iVar6;
    if ((local_128 != 3) && (local_138 == 3)) {
      uVar9 = (*pcVar4)(0x180224000);
      uVar10 = (*extraout_x11_03)(uVar9,uStack_48 & 0xffffffff,uStack_48 >> 0x20,iVar6,1,0,1);
      local_e0 = 0;
      local_12c = 0;
      uVar19 = uVar10;
      local_ec = iVar6;
    }
  }
  if ((local_f8 == 0) || (uVar19 == 0)) {
    uVar8 = 0;
    goto LAB_180109fdc;
  }
  if (((*(int *)(*(longlong *)(*(longlong *)(local_100 + 8) + 0x70) + 8) == 2) &&
      ((local_138 & 0xfffffffd) == 0)) &&
     (lVar14 = *(longlong *)(param_3 + 8), *(int *)(*(longlong *)(lVar14 + 0x70) + 8) != 2)) {
    iVar6 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
    uVar9 = *(undefined8 *)(param_3 + 0x60);
    uVar19 = *(ulonglong *)(param_3 + 0x58);
    lVar15 = *(longlong *)(param_3 + 0x30);
    if ((lVar15 != 0) && (*(short *)(lVar15 + 0x3c) != 0)) {
      lVar15 = **(longlong **)(lVar15 + 0x40);
      iVar6 = (int)((ulonglong)*(undefined8 *)(lVar15 + 0x48) >> 0x20);
      uVar9 = *(undefined8 *)(lVar15 + 0x60);
      uVar19 = *(ulonglong *)(lVar15 + 0x58);
    }
    lVar15 = *(longlong *)(param_3 + 0x28);
    uVar11 = FUN_18010b708(lVar15,&local_d8);
    local_130 = (uint)uVar9;
    if (local_d8._4_4_ == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801099cc);
      (*pcVar4)();
    }
    uVar8 = 0;
    if (local_d8._4_4_ != 0) {
      uVar8 = (local_130 * (int)local_d8) / local_d8._4_4_;
    }
    local_13c = (uint)((ulonglong)uVar9 >> 0x20);
    *(uint *)(param_3 + 0x74) = uVar8;
    if (uStack_cc == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801099ec);
      (*pcVar4)();
    }
    uVar13 = 0;
    if (uStack_cc != 0) {
      uVar13 = (local_13c * local_d0) / uStack_cc;
    }
    *(uint *)(param_3 + 0x78) = uVar13;
    FUN_1801081f0(uVar11,*(undefined4 *)(lVar15 + 0xea8),*(undefined4 *)(lVar15 + 0xe68),
                  uVar19 & 0xffffffff,uVar19 >> 0x20);
    uVar18 = 1;
    local_70 = 6;
    if (iVar6 != 5) {
      local_70 = 1;
    }
    if (extraout_x15 != 0) {
      uVar18 = (uint)*(ushort *)(extraout_x15 + 0x3c);
    }
    uVar19 = *(ulonglong *)(lVar14 + 0x68);
    local_d8 = uVar19;
    FUN_180117fe8(param_3);
    (*pcVar4)(0x180225000);
    lVar14 = (*extraout_x11_04)(uVar19,uVar8,uVar13,local_130,local_13c);
    if (lVar14 != 0) {
      (*pcVar4)(0x180224000);
      (*extraout_x11_05)(param_3);
      *(undefined1 *)(*(longlong *)(param_3 + 8) + 0xee) = 0;
      (*pcVar4)(0x180224000);
      (*extraout_x11_06)(lVar14);
      uVar19 = local_d8;
      uVar13 = local_13c;
      lVar15 = *(longlong *)(param_3 + 8);
      uVar8 = 0;
      local_110 = *(code **)(lVar15 + 0x70);
      *(uint *)(lVar15 + 0x100) = *(uint *)(lVar15 + 0x100) | 1;
      local_84 = 1;
      local_90 = 0;
      local_88 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_120 = param_3;
      local_118 = uVar10;
      do {
        uVar16 = 0;
        if (uVar18 != 0) {
          do {
            uVar1 = local_130 >> (ulonglong)(uVar16 & 0x1f);
            uVar2 = uVar13 >> (ulonglong)(uVar16 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            thunk_FUN_180223c20(&local_a0,0,0,uVar1,uVar2);
            (*pcVar4)(0x180224000);
            (*extraout_x11_07)(uVar19,uVar16,uVar8,uVar16,uVar8,lVar14,local_110,&local_b0);
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar18);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_70);
      lVar15 = *(longlong *)(local_120 + 0x30);
      if (lVar15 == 0) {
        *(longlong *)(*(longlong *)(local_120 + 8) + 0x70) = lVar14;
      }
      else {
        *(longlong *)(lVar15 + 0x58) = lVar14;
        uVar8 = 0;
        if (*(int *)(lVar15 + 0x80) != 0) {
          do {
            uVar13 = 0;
            if (*(short *)(lVar15 + 0x3c) != 0) {
              do {
                lVar17 = *(longlong *)
                          (*(longlong *)(lVar15 + 0x40) + (ulonglong)(uVar13 + uVar8 * 0x10) * 8);
                lVar12 = *(longlong *)(lVar17 + 8);
                uVar9 = (*pcVar4)();
                (*extraout_x11_08)(uVar9,*(undefined4 *)(lVar12 + 0x94),
                                   *(undefined4 *)(lVar12 + 0x98),1);
                uVar13 = uVar13 + 1;
                *(longlong *)(*(longlong *)(lVar17 + 8) + 0x70) = lVar14;
              } while (uVar13 < *(ushort *)(lVar15 + 0x3c));
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(lVar15 + 0x80));
        }
      }
      uVar10 = local_118;
      param_3 = local_120;
      FUN_18010b470(*(undefined8 *)(local_120 + 0x28),local_120);
      (*pcVar4)(0x180224000);
      (*extraout_x11_09)();
    }
    uVar19 = *(ulonglong *)(*(longlong *)(param_3 + 8) + 0x70);
  }
  uVar8 = 1;
  if (local_128 == 3) {
    local_110 = (code *)0x0;
    local_13c = 0;
    (*pcVar4)(0x180224000);
    uVar9 = (*extraout_x11_10)(uVar10,0,0,2,1,&local_110,&local_13c);
    if ((int)uVar9 == 0) {
      lVar14 = *(longlong *)(local_100 + 8);
      uVar13 = *(uint *)(lVar14 + 0x20);
      if (uVar13 == 0) {
        uVar13 = (uint)*(byte *)(lVar14 + 0x26);
      }
      FUN_1801093e8(uVar9,*(undefined8 *)(local_100 + 0x40),local_110,*(undefined4 *)(lVar14 + 0x18)
                    ,local_13c,*(undefined1 *)(lVar14 + 0x24),*(undefined1 *)(lVar14 + 0x25),uVar13,
                    local_134,local_78,local_80);
    }
    else {
      uVar8 = 0;
    }
    FUN_180116f60(param_3,0);
    if (uVar8 != 0) goto LAB_180109d3c;
  }
  else {
    FUN_180116f60(param_3,local_100);
LAB_180109d3c:
    lVar14 = local_78;
    uVar20 = 0;
    if (local_134 != 0) {
      local_110 = pcVar4;
      local_120 = param_3;
      local_118 = uVar10;
      local_d8 = uVar19;
      do {
        lVar15 = uVar20 * 0x10;
        uStack_b8 = ((ulonglong *)(lVar15 + lVar14))[1];
        local_60 = *(ulonglong *)(lVar15 + lVar14);
        local_c0 = local_60;
        if (local_80 != 0) {
          local_c0._0_4_ = (int)local_60;
          local_c0._4_4_ = (int)(local_60 >> 0x20);
          iVar6 = *(int *)(local_80 + 4 + uVar20 * 8) - local_c0._4_4_;
          iVar7 = *(int *)(local_80 + uVar20 * 8) - (int)local_c0;
          uStack_58 = uStack_b8;
          thunk_FUN_180223c5c(&local_c0,iVar7,iVar6);
        }
        local_60 = local_c0;
        uStack_58 = uStack_b8;
        iVar6 = FUN_180107140(*(undefined4 *)(local_100 + 0x48));
        iVar7 = FUN_1801071f0(extraout_x10 & 0xffffffff);
        local_90 = 0;
        local_84 = 1;
        uVar9 = *(undefined8 *)(local_68 + 0xe98);
        uStack_a8 = 0;
        local_b0 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_88 = 0x10100;
        thunk_FUN_180223c20(&local_a0,*(undefined4 *)(lVar15 + lVar14),
                            *(undefined4 *)(lVar14 + 4 + lVar15),
                            *(undefined4 *)(lVar14 + 8 + lVar15),
                            *(undefined4 *)(lVar14 + 0xc + lVar15));
        thunk_FUN_180223c20(&local_b0,local_60 & 0xffffffff,local_60 >> 0x20,uStack_58 & 0xffffffff,
                            uStack_58 >> 0x20);
        if ((local_f0 == local_ec) && (local_f0 - 0xeU < 7)) {
          uVar8 = -iVar6;
          uVar13 = -iVar7;
          local_a0 = CONCAT44(local_a0._4_4_ & uVar13,(uint)local_a0 & uVar8);
          local_98 = CONCAT44((local_98._4_4_ + iVar7) - 1U & uVar13,
                              ((int)local_98 + iVar6) - 1U & uVar8);
          local_b0 = CONCAT44(local_b0._4_4_ & uVar13,(uint)local_b0 & uVar8);
          uStack_a8 = CONCAT44((uStack_a8._4_4_ + iVar7) - 1U & uVar13,
                               ((int)uStack_a8 + iVar6) - 1U & uVar8);
        }
        iVar6 = thunk_FUN_180223d24(&local_a0);
        uVar8 = 1;
        if ((iVar6 == 0) && (iVar6 = thunk_FUN_180223d24(&local_b0), uVar8 = 1, iVar6 == 0)) {
          (*local_110)();
          uVar8 = (*extraout_x11_11)(uVar9,local_12c,local_e0,local_e4,local_e8,local_d8,local_f8,
                                     &local_b0);
          uVar8 = uVar8 & 1;
        }
        uVar13 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar13;
      } while (uVar13 < local_134);
      param_3 = local_120;
      uVar10 = local_118;
      pcVar4 = local_110;
      if (uVar8 == 0) goto LAB_180109fbc;
    }
    if (local_138 == 3) {
      local_110 = (code *)0x0;
      local_12c = 0;
      (*pcVar4)(0x180224000);
      uVar9 = (*extraout_x11_12)(uVar10,0,0,2,1,&local_110,&local_12c);
      if ((int)uVar9 == 0) {
        lVar14 = *(longlong *)(param_3 + 8);
        uVar13 = *(uint *)(lVar14 + 0x20);
        if (uVar13 == 0) {
          uVar13 = (uint)*(byte *)(lVar14 + 0x26);
        }
        FUN_1801093e8(uVar9,local_110,*(undefined8 *)(param_3 + 0x40),local_12c,
                      *(undefined4 *)(lVar14 + 0x18),*(undefined1 *)(lVar14 + 0x24),
                      *(undefined1 *)(lVar14 + 0x25),uVar13,local_134,local_78,local_80);
      }
      else {
        uVar8 = 0;
      }
    }
    if (*(longlong *)(param_3 + 0x30) != 0) {
      *(undefined1 *)(*(longlong *)(param_3 + 0x30) + 0x89) = 0;
    }
  }
LAB_180109fbc:
  if (*(longlong *)(*(longlong *)(param_3 + 8) + 0x70) != 0) {
    FUN_18010b470(*(undefined8 *)(param_3 + 0x28),param_3);
  }
LAB_180109fdc:
  if (uVar10 != 0) {
    (*pcVar4)(0x180224000);
    (*extraout_x11_13)(uVar10);
  }
  return uVar8;
}

