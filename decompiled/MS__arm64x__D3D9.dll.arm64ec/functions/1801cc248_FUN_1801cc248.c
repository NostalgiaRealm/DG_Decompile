/*
 * FUN_1801cc248 at 1801cc248
 * undefined FUN_1801cc248(void)
 * Address ranges: 1801cc248-1801cc66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801cc248(longlong param_1,ulonglong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *extraout_x8;
  longlong lVar14;
  ulonglong uVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *pcVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  int local_60;
  
  uVar7 = param_2 & 0xffffffff;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar8 = true;
    iVar10 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar10 == 0) {
      FUN_1801085c8();
    }
  }
  puVar9 = __hybrid_os_arm64x_dispatch_icall;
  lVar14 = 0;
  if (param_3 != 0) {
    lVar14 = param_3 + -0x90;
  }
  uVar17 = (uint)param_2;
  uVar19 = 0x8876086c;
  if (0xf < uVar17) goto LAB_1801cc62c;
  if (lVar14 != 0) {
    piVar3 = (int *)&DAT_0000005c;
    if (param_3 != 0) {
      piVar3 = (int *)(param_3 + -0x34);
    }
    if (*piVar3 == 3) goto LAB_1801cc62c;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (lVar14 == 0) {
      local_60 = 0;
    }
    else {
      piVar3 = (int *)&DAT_00000058;
      if (param_3 != 0) {
        piVar3 = (int *)(param_3 + -0x38);
      }
      local_60 = *piVar3;
    }
    lVar18 = param_1 + (param_2 & 0xffffffff) * 8;
    if (((*(longlong *)(lVar18 + -0x170) != lVar14) ||
        (lVar1 = param_1 + (param_2 & 0xffffffff) * 4, *(int *)(lVar1 + -0xf0) != param_5)) ||
       (*(int *)(lVar1 + -0xb0) != param_4)) {
      uVar6 = 1 << (ulonglong)(uVar17 & 0x1f);
      if (lVar14 != 0) {
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11_01)(lVar14);
        *(uint *)(param_1 + -0x30) = uVar6 | *(uint *)(param_1 + -0x30);
      }
      if (*(longlong *)(lVar18 + -0x170) != 0) {
        *(undefined4 *)(*(longlong *)(lVar18 + -0x170) + 0x84) = 0xffffffff;
        (*(code *)puVar9)(0x180224000);
        (*extraout_x11_02)();
      }
      lVar1 = param_1 + uVar7 * 4;
      *(longlong *)(lVar18 + -0x170) = lVar14;
      *(int *)(lVar1 + -0xf0) = param_5;
      *(int *)(lVar1 + -0xb0) = param_4;
      if (lVar14 == 0) {
        *(uint *)(param_1 + -0x70) = *(uint *)(param_1 + -0x70) & (uVar6 ^ 0xffffffff);
        uVar17 = *(uint *)(param_1 + -0x5c) & (uVar6 ^ 0xffffffff);
      }
      else {
        puVar4 = (uint *)&DAT_00000084;
        if (param_3 != 0) {
          puVar4 = (uint *)(param_3 + -0xc);
        }
        *puVar4 = uVar17;
        *(uint *)(param_1 + -0x70) = uVar6 | *(uint *)(param_1 + -0x70);
        plVar13 = (longlong *)&DAT_00000018;
        if (param_3 != 0) {
          plVar13 = (longlong *)(param_3 + -0x78);
        }
        uVar17 = *(uint *)(param_1 + -0x5c) & (uVar6 ^ 0xffffffff);
        if (*plVar13 != 0) {
          uVar17 = *(uint *)(param_1 + -0x5c) | uVar6;
        }
      }
      *(uint *)(param_1 + -0x5c) = uVar17;
      uVar17 = *(uint *)(param_1 + -0x68) & (uVar6 ^ 0xffffffff);
      if (local_60 != 0) {
        uVar17 = *(uint *)(param_1 + -0x68) | uVar6;
      }
      *(uint *)(param_1 + -0x68) = uVar17;
      if (lVar14 == 0) {
LAB_1801cc54c:
        *(uint *)(param_1 + -100) = *(uint *)(param_1 + -100) & (uVar6 ^ 0xffffffff);
        if (lVar14 != 0) goto LAB_1801cc55c;
LAB_1801cc584:
        *(uint *)(param_1 + -0x60) = *(uint *)(param_1 + -0x60) & (uVar6 ^ 0xffffffff);
        if (lVar14 != 0) goto LAB_1801cc594;
        uVar11 = (*(code *)puVar9)(0x180225000);
        param_4 = 0;
        uVar12 = 0;
        pcVar16 = extraout_x11_04;
      }
      else {
        puVar4 = (uint *)&DAT_00000050;
        if (param_3 != 0) {
          puVar4 = (uint *)(param_3 + -0x40);
        }
        if ((*puVar4 >> 4 & 1) == 0) goto LAB_1801cc54c;
        *(uint *)(param_1 + -100) = *(uint *)(param_1 + -100) | uVar6;
LAB_1801cc55c:
        plVar13 = (longlong *)&DAT_00000060;
        if (param_3 != 0) {
          plVar13 = (longlong *)(param_3 + -0x30);
        }
        if (*plVar13 == 0) goto LAB_1801cc584;
        *(uint *)(param_1 + -0x60) = uVar6 | *(uint *)(param_1 + -0x60);
LAB_1801cc594:
        puVar5 = &DAT_00000089;
        if (param_3 != 0) {
          puVar5 = (undefined1 *)(param_3 + -7);
        }
        plVar13 = (longlong *)&DAT_00000060;
        if (param_3 != 0) {
          plVar13 = (longlong *)(param_3 + -0x30);
        }
        lVar14 = *plVar13;
        *puVar5 = 1;
        if (lVar14 == 0) {
          plVar13 = (longlong *)&DAT_00000068;
          if (param_3 != 0) {
            plVar13 = (longlong *)(param_3 + -0x28);
          }
        }
        uVar11 = (*(code *)puVar9)(plVar13);
        uVar12 = *extraout_x8;
        pcVar16 = extraout_x11_03;
      }
      (*pcVar16)(uVar11,param_2 & 0xffffffff,uVar12,param_4,param_5);
    }
  }
  else {
    lVar18 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (lVar14 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar14);
    }
    lVar1 = lVar18 + uVar7 * 8;
    if (*(longlong *)(lVar1 + 0xab60) != 0) {
      (*(code *)puVar9)(0x180224000);
      (*extraout_x11_00)();
    }
    lVar2 = lVar18 + uVar7 * 4;
    *(longlong *)(lVar1 + 0xab60) = lVar14;
    uVar15 = uVar7 >> 3 & 7;
    *(int *)(lVar2 + 44000) = param_4;
    *(int *)(lVar2 + 0xac20) = param_5;
    lVar18 = lVar18 + ((uVar7 >> 6) + 0x159e) * 8;
    *(byte *)(lVar18 + uVar15) = *(byte *)(lVar18 + uVar15) | (byte)(1 << (param_2 & 7));
  }
  uVar19 = 0;
LAB_1801cc62c:
  if (bVar8) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar19;
}

