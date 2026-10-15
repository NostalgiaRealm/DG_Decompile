/*
 * FUN_1801c5378 at 1801c5378
 * undefined FUN_1801c5378(void)
 * Address ranges: 1801c5378-1801c5943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c5378(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong local_140;
  ulonglong uStack_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_108;
  uint uStack_104;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined1 auStack_d8 [12];
  int local_cc;
  longlong local_c0;
  undefined1 auStack_b8 [12];
  int local_ac;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar15 = 0;
  if (param_4 != 0) {
    lVar15 = param_4 + -0x80;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    bVar4 = false;
  }
  else {
    bVar4 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
      bVar4 = true;
    }
  }
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  if (lVar15 == 0) {
    uVar17 = 0;
    if (*(int *)(param_1 + -0x5a00) != 0) {
      do {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + uVar17 * 8);
        *(undefined8 *)(lVar15 + 0x118) = 0;
        uVar1 = *(uint *)(lVar15 + 0x90);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801c581c);
          (*pcVar7)();
        }
        uVar21 = 0;
        if (uVar1 != 0) {
          uVar21 = *(uint *)(lVar15 + 0xa8) / uVar1;
        }
        uVar21 = uVar21 * *(int *)(lVar15 + 0xb8);
        uVar1 = *(uint *)(lVar15 + 0x94);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x1801c5838);
          (*pcVar7)();
        }
        uVar19 = 0;
        if (uVar1 != 0) {
          uVar19 = *(uint *)(lVar15 + 0xac) / uVar1;
        }
        local_78 = 0;
        uStack_70 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        uVar19 = uVar19 * *(int *)(lVar15 + 0xbc);
        if (uVar19 <= uVar21) {
          uVar21 = uVar19;
        }
        uVar1 = *(uint *)(DAT_18024d928 + 0x8aa);
        if (*(uint *)(DAT_18024d928 + 0x8aa) == 0) {
          uVar1 = uVar21;
        }
        local_68 = uVar1;
        if (0x10 < uVar1) {
          local_68 = 0x10;
        }
        if (uVar1 == 0) {
          local_68 = 1;
        }
        uVar16 = (*(code *)puVar5)(0x180224000);
        (*extraout_x11_00)(uVar16,&local_78);
        lVar15 = **(longlong **)(param_1 + -0x5a08);
        uVar16 = (*(code *)puVar5)(0x180224000);
        (*extraout_x11_01)(uVar16,0);
        *(undefined1 *)(lVar15 + 0x120) = 0;
        uVar1 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -0x5a00));
    }
    if (*(longlong *)(param_1 + -0x59a8) != 0) {
      thunk_FUN_180223c84();
      *(undefined8 *)(param_1 + -0x59a8) = 0;
    }
    uVar11 = 0;
    goto LAB_1801c5900;
  }
  piVar3 = (int *)&DAT_00000048;
  if (param_4 != 0) {
    piVar3 = (int *)(param_4 + -0x38);
  }
  uStack_138 = *(ulonglong *)(piVar3 + 6);
  local_140 = *(ulonglong *)(piVar3 + 4);
  iVar9 = *piVar3;
  FUN_1801083e8(*(undefined8 *)(param_1 + -0x5a10),*(undefined4 *)(param_1 + -0x5990),&local_118);
  uVar17 = uStack_138;
  uVar11 = 0x8876086c;
  uVar1 = (uint)uStack_138;
  if ((((uVar1 != 1) && ((uVar1 - 1 & uVar1) != 0)) ||
      ((uVar21 = (uint)(uStack_138 >> 0x20), uVar21 != 1 && ((uVar21 - 1 & uVar21) != 0)))) ||
     (((iVar9 != 0x15 || (bVar8 = (uint)local_118 <= uVar1, bVar8)) ||
      (bVar8 = local_118._4_4_ <= uVar21, bVar8)))) goto LAB_1801c5900;
  local_f4 = 0;
  local_108 = 0x28;
  local_100 = -uVar21;
  local_fc = 0x200001;
  local_ec = 0;
  local_e4 = 0;
  local_130 = 0;
  uStack_104 = uVar1;
  lVar12 = thunk_FUN_180224224(0,&local_108,0,&local_130,0,0);
  local_118 = lVar12;
  if (lVar12 == 0) goto LAB_1801c5900;
  lVar13 = thunk_FUN_180224224(0,&local_108,0,&local_130,0,0);
  local_120 = lVar13;
  if (lVar13 != 0) {
    iVar9 = thunk_FUN_18022424c(lVar12,0x20,auStack_d8);
    if (((iVar9 != 0) && (iVar9 = thunk_FUN_18022424c(lVar13,0x20,auStack_b8), iVar9 != 0)) &&
       (iVar9 = FUN_180118030(lVar15,&local_140,0,0x10,0), uVar14 = uStack_138, -1 < iVar9)) {
      uVar19 = 1;
      local_128 = local_c0;
      plVar2 = (longlong *)(param_1 + -0x5a08);
      if (*(int *)(param_1 + -0x5a00) == 0) {
LAB_1801c567c:
        uVar20 = 0;
        if (uVar21 != 0) {
          lVar12 = local_128;
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                if (*(byte *)(uVar14 + (uVar10 * 4 + 3)) < 0x80) {
                  *(undefined4 *)(lVar12 + (ulonglong)uVar10 * 4) = 0xffffff;
                  uVar11 = 0;
                }
                else {
                  *(undefined4 *)(lVar12 + (ulonglong)uVar10 * 4) = 0;
                  uVar11 = *(undefined4 *)(uVar14 + (ulonglong)uVar10 * 4);
                }
                *(undefined4 *)(local_a0 + (ulonglong)uVar10 * 4) = uVar11;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar1);
            }
            uVar20 = uVar20 + 1;
            uVar14 = uVar14 + (longlong)(int)local_140;
            lVar12 = lVar12 + local_cc;
            local_a0 = local_a0 + local_ac;
          } while (uVar20 < uVar21);
        }
      }
      else {
        uVar18 = 0;
        do {
          uVar10 = FUN_180119760(*(undefined8 *)(*plVar2 + uVar18 * 8));
          uVar6 = local_140;
          uVar20 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar20;
          uVar19 = uVar10 & 0xff & uVar19;
        } while (uVar20 < *(uint *)(param_1 + -0x5a00));
        if (uVar19 != 0) goto LAB_1801c567c;
        if (*(uint *)(param_1 + -0x5a00) != 0) {
          uVar20 = 0;
          do {
            FUN_1801197e0(*(undefined8 *)(*plVar2 + (ulonglong)uVar20 * 8),lVar15,
                          uVar17 & 0xffffffff,uVar21,param_2,param_3,uVar14,uVar6 & 0xffffffff);
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(param_1 + -0x5a00));
        }
        uVar20 = 0;
        lVar12 = local_128;
        if (uVar21 != 0) {
          do {
            uVar17 = 0;
            if (uVar1 != 0) {
              do {
                *(undefined4 *)(lVar12 + uVar17 * 4) = 0xffffff;
                *(undefined4 *)(local_a0 + uVar17 * 4) = 0;
                uVar10 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar10;
              } while (uVar10 < uVar1);
            }
            uVar20 = uVar20 + 1;
            local_a0 = local_a0 + local_ac;
            lVar12 = lVar12 + local_cc;
          } while (uVar20 < uVar21);
        }
      }
      uVar11 = 0x8876086c;
      FUN_180118100(lVar15);
      local_98 = 0;
      local_88 = local_118;
      lStack_80 = local_120;
      uStack_94 = param_2;
      local_90 = param_3;
      lVar15 = thunk_FUN_180223cc0(&local_98);
      if (lVar15 != 0) {
        if ((uVar19 != 0) && (uVar17 = FUN_18012f210(), (uVar17 & 1) != 0)) {
          FUN_18012f2d0(uVar17,lVar15);
        }
        if (*(longlong *)(param_1 + -0x59a8) == 0) {
          if (uVar19 == 0) {
            uVar11 = FUN_18012f210();
            puVar5 = __hybrid_os_arm64x_dispatch_icall;
            uVar17 = 0;
            if (*(int *)(param_1 + -0x5a00) != 0) {
              do {
                lVar12 = *(longlong *)(*plVar2 + uVar17 * 8);
                uVar16 = (*(code *)puVar5)(0x180224000);
                (*extraout_x11)(uVar16,uVar11);
                *(char *)(lVar12 + 0x120) = (char)uVar11;
                uVar1 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(param_1 + -0x5a00));
            }
          }
        }
        else {
          thunk_FUN_180223c84();
        }
        *(longlong *)(param_1 + -0x59a8) = lVar15;
        uVar11 = 0;
      }
    }
    thunk_FUN_180224288(local_120);
  }
  thunk_FUN_180224288(local_118);
LAB_1801c5900:
  if (bVar4) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar11;
}

