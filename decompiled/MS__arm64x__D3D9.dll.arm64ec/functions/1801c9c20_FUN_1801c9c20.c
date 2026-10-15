/*
 * FUN_1801c9c20 at 1801c9c20
 * undefined FUN_1801c9c20(void)
 * Address ranges: 1801c9c20-1801ca2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c9c20(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
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
  int iVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  
  uVar19 = (ulonglong)param_2;
  if ((param_2 - 0x10 < 0xf0 || 0x103 < param_2) && (param_2 != 0x104)) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar7 == 0) {
      FUN_1801085c8();
    }
  }
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  iVar7 = 1;
  lVar16 = 0;
  lVar15 = 0;
  if (param_3 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar8 = (*extraout_x11)(param_3);
    if (iVar8 == 3) {
LAB_1801c9d04:
      lVar16 = param_3 + -0x98;
    }
    else if (iVar8 == 4) {
      lVar15 = param_3 + -0x118;
    }
    else if (iVar8 == 5) goto LAB_1801c9d04;
  }
  uVar10 = param_2 - 0x100;
  if (uVar10 < 5) {
    if (lVar16 == 0) {
      lVar17 = 0;
      if (lVar15 != 0) {
        iVar7 = *(int *)(lVar15 + 0x100);
        lVar11 = *(longlong *)(lVar15 + 0x18);
        lVar17 = lVar15;
        goto LAB_1801c9d48;
      }
    }
    else {
      iVar7 = *(int *)(lVar16 + 0x7c);
      lVar11 = *(longlong *)(lVar16 + 0x18);
      lVar17 = lVar16;
LAB_1801c9d48:
      lVar3 = 0;
      if (lVar11 != 0) {
        lVar3 = lVar11 + -0x6838;
      }
      if ((((iVar7 == 3) || ((iVar7 == 2 && (*(int *)(param_1 + -0x59d0) != 3)))) || (lVar3 != 0))
         && (lVar3 != param_1 + -0x6838)) goto LAB_1801ca2a0;
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar11 = param_1 + (ulonglong)uVar10 * 8;
      if (lVar17 == *(longlong *)(lVar11 + -0x5480)) goto LAB_1801ca2a0;
      if (lVar16 == 0) {
        if (lVar15 != 0) {
          uVar18 = *(undefined8 *)(lVar15 + 0xe0);
          iVar7 = *(int *)(lVar15 + 0xf8);
          goto LAB_1801c9e48;
        }
        bVar1 = false;
        uVar18 = (*(code *)puVar6)(0x180225000);
        (*extraout_x11_04)(uVar18,uVar10,0,0,0);
        lVar15 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(lVar16 + 0x58);
        iVar7 = *(int *)(lVar16 + 0x74);
        lVar15 = lVar16;
LAB_1801c9e48:
        bVar1 = iVar7 - 0x28U < 2;
        (*(code *)puVar6)(0x180224000);
        (*extraout_x11_02)(lVar15);
        *(uint *)(lVar15 + 0x38) =
             1 << (ulonglong)(param_2 - 0xf0 & 0x1f) | *(uint *)(lVar15 + 0x38);
        uVar9 = (*(code *)puVar6)(0x180225000);
        (*extraout_x11_03)(uVar9,uVar10,0,uVar18,0);
      }
      lVar16 = *(longlong *)(lVar11 + -0x5480);
      if (lVar16 != 0) {
        *(uint *)(lVar16 + 0x38) =
             *(uint *)(lVar16 + 0x38) & (1 << (ulonglong)(param_2 - 0xf0 & 0x1f) ^ 0xffffffffU);
        (*(code *)puVar6)(0x180224000);
        (*extraout_x11_05)();
      }
      *(longlong *)(lVar11 + -0x5480) = lVar15;
      if ((lVar15 == 0) || (*(char *)(lVar15 + 0x3e) == '\0')) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
      uVar4 = 1 << (ulonglong)(uVar10 & 0x1f);
      *(uint *)(param_1 + -0x3c) =
           iVar7 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + -0x3c) & (uVar4 ^ 0xffffffff);
      if (bVar1) {
        uVar10 = *(uint *)(param_1 + -0x38) | uVar4;
        uVar4 = *(uint *)(param_1 + -0x34) | uVar4;
      }
      else {
        uVar10 = *(uint *)(param_1 + -0x38) & (uVar4 ^ 0xffffffff);
        uVar4 = *(uint *)(param_1 + -0x34) & (uVar4 ^ 0xffffffff);
      }
      *(uint *)(param_1 + -0x38) = uVar10;
      *(uint *)(param_1 + -0x34) = uVar4;
      goto LAB_1801ca2a0;
    }
    if (lVar17 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)(lVar17);
    }
    uVar19 = (ulonglong)uVar10;
    lVar16 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    lVar15 = lVar16 + uVar19 * 8;
    if (*(longlong *)(lVar15 + 0x4fc0) != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_01)();
    }
    *(longlong *)(lVar15 + 0x4fc0) = lVar17;
    lVar16 = lVar16 + ((ulonglong)(uVar10 >> 6) + 0x15a7) * 8;
    param_2 = uVar10;
  }
  else {
    if (lVar16 == 0) {
      if (lVar15 != 0) {
        uVar18 = *(undefined8 *)(lVar15 + 0xe0);
        iVar8 = *(int *)(lVar15 + 0xf8);
        iVar13 = *(int *)(lVar15 + 0x100);
        bVar14 = 0;
        lVar17 = 0;
        if (*(longlong *)(lVar15 + 0x18) != 0) {
          lVar17 = *(longlong *)(lVar15 + 0x18) + -0x6838;
        }
        goto LAB_1801c9ff0;
      }
      lVar15 = 0;
      uVar18 = 0;
      iVar8 = 0;
      bVar14 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(lVar16 + 0x58);
      iVar13 = *(int *)(lVar16 + 0x7c);
      lVar17 = 0;
      if (*(longlong *)(lVar16 + 0x18) != 0) {
        lVar17 = *(longlong *)(lVar16 + 0x18) + -0x6838;
      }
      iVar8 = *(int *)(lVar16 + 0x74);
      bVar14 = (byte)*(undefined4 *)(lVar16 + 0x70) & 1;
      lVar15 = lVar16;
LAB_1801c9ff0:
      if (((iVar13 == 3) || (((iVar13 == 2 && (*(int *)(param_1 + -0x59d0) != 3)) || (lVar17 != 0)))
          ) && (lVar17 != param_1 + -0x6838)) goto LAB_1801ca2a0;
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar16 = param_1 + uVar19 * 8;
      if (lVar15 != *(longlong *)(lVar16 + -0x5500)) {
        if (lVar15 == 0) {
          uVar18 = (*(code *)puVar6)(0x180225000);
          (*extraout_x11_10)(uVar18,param_2,0,0,0,0,0,0);
          uVar10 = 1 << (ulonglong)(param_2 & 0x1f);
        }
        else {
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_08)(lVar15);
          uVar10 = 1 << (ulonglong)(param_2 & 0x1f);
          *(uint *)(lVar15 + 0x38) = *(uint *)(lVar15 + 0x38) | uVar10;
          uVar9 = (*(code *)puVar6)(0x180225000);
          (*extraout_x11_09)(uVar9,param_2,0,uVar18,0,0,0,0);
        }
        bVar1 = lVar15 != 0 && iVar8 - 0x28U < 2;
        lVar16 = *(longlong *)(lVar16 + -0x5500);
        if (lVar16 != 0) {
          *(uint *)(lVar16 + 0x38) = *(uint *)(lVar16 + 0x38) & (uVar10 ^ 0xffffffff);
          (*(code *)puVar6)(0x180224000);
          (*extraout_x11_11)();
        }
        *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x5500) = lVar15;
        lVar16 = param_1 + (ulonglong)param_2;
        *(uint *)(param_1 + -0x5b24) =
             (uint)((lVar15 != 0) != (bool)*(char *)(lVar16 + -0x5b78)) <<
             (ulonglong)(param_2 & 0x1f) | *(uint *)(param_1 + -0x5b24);
        *(bool *)(lVar16 + -0x5b78) = lVar15 != 0;
        uVar4 = *(uint *)(param_1 + -0x44) & (uVar10 ^ 0xffffffff);
        if (bVar1) {
          uVar4 = *(uint *)(param_1 + -0x44) | uVar10;
        }
        uVar2 = *(uint *)(param_1 + -0x40) & (uVar10 ^ 0xffffffff);
        if (bVar1) {
          uVar2 = *(uint *)(param_1 + -0x40) | uVar10;
        }
        *(uint *)(param_1 + -0x44) = uVar4;
        *(uint *)(param_1 + -0x40) = uVar2;
        *(byte *)(param_1 + -0x5b28) = *(byte *)(param_1 + -0x5b28) | bVar14;
        *(undefined1 *)(lVar16 + -0x5b68) = 0;
        lVar15 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x5500);
        if ((lVar15 == 0) || (*(char *)(lVar15 + 0x3e) == '\0')) {
          iVar7 = 0;
        }
        *(uint *)(param_1 + -0x5b20) =
             iVar7 << (ulonglong)(param_2 & 0x1f) |
             *(uint *)(param_1 + -0x5b20) & (uVar10 ^ 0xffffffff);
      }
      goto LAB_1801ca2a0;
    }
    if (lVar15 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_06)(lVar15);
    }
    lVar16 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    lVar17 = lVar16 + uVar19 * 8;
    if (*(longlong *)(lVar17 + 0x5310) != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_07)();
    }
    *(longlong *)(lVar17 + 0x5310) = lVar15;
    lVar16 = lVar16 + ((ulonglong)(param_2 >> 6) + 0x159b) * 8;
  }
  uVar12 = (ulonglong)(param_2 >> 3) & 7;
  *(byte *)(lVar16 + uVar12) = *(byte *)(lVar16 + uVar12) | (byte)(1 << (uVar19 & 7));
LAB_1801ca2a0:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

