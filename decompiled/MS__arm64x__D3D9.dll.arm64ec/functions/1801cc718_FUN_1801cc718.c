/*
 * FUN_1801cc718 at 1801cc718
 * undefined FUN_1801cc718(void)
 * Address ranges: 1801cc718-1801cc9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cc718(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong extraout_x1;
  longlong extraout_x1_00;
  longlong extraout_x1_01;
  longlong extraout_x1_02;
  longlong *plVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined4 uVar11;
  longlong lVar12;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    lVar12 = param_2;
  }
  else {
    bVar5 = true;
    iVar8 = thunk_FUN_1802236e4(DAT_180258900);
    lVar12 = extraout_x1;
    if (iVar8 == 0) {
      FUN_1801085c8();
      lVar12 = extraout_x1_00;
    }
  }
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0x78;
  }
  if (lVar1 != 0) {
    piVar3 = (int *)&DAT_00000058;
    if (param_2 != 0) {
      piVar3 = (int *)(param_2 + -0x20);
    }
    uVar11 = 0x8876086c;
    if (*piVar3 == 3) goto LAB_1801cc99c;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (*(longlong *)(param_1 + -0x178) != lVar1) {
      if (lVar1 != 0) {
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11_01)(lVar1);
        *(undefined1 *)(param_1 + -0x20) = 1;
        lVar12 = extraout_x1_01;
      }
      if (*(longlong *)(param_1 + -0x178) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + -0x178) + 0x70) = 0;
        (*(code *)puVar6)(0x180224000);
        (*extraout_x11_02)();
        lVar12 = extraout_x1_02;
      }
      *(longlong *)(param_1 + -0x178) = lVar1;
      if (lVar1 == 0) {
LAB_1801cc8c8:
        uVar11 = 0;
      }
      else {
        plVar10 = (longlong *)&DAT_00000060;
        if (param_2 != 0) {
          plVar10 = (longlong *)(param_2 + -0x18);
        }
        if (*plVar10 == 0) goto LAB_1801cc8c8;
        uVar11 = 1;
      }
      *(undefined4 *)(param_1 + -0x58) = uVar11;
      if (lVar1 == 0) {
        uVar9 = (*(code *)puVar6)(0x180224000);
        (*extraout_x11_04)(uVar9,0,0);
        uVar4 = *(uint *)(param_1 + -0x54) & 0xfffffffe;
      }
      else {
        bVar7 = param_2 != 0;
        puVar2 = &DAT_00000070;
        if (bVar7) {
          puVar2 = (undefined1 *)(param_2 + -8);
        }
        *puVar2 = 1;
        puVar2 = &DAT_00000071;
        if (bVar7) {
          puVar2 = (undefined1 *)(param_2 + -7);
        }
        *puVar2 = 1;
        piVar3 = (int *)&DAT_00000054;
        if (bVar7) {
          piVar3 = (int *)(param_2 + -0x24);
        }
        plVar10 = (longlong *)&DAT_00000060;
        if (param_2 != 0) {
          plVar10 = (longlong *)(param_2 + -0x18);
        }
        uVar9 = (*(code *)puVar6)(0x180224000,*(undefined8 *)(param_1 + -0x6810),lVar12,
                                  *piVar3 == 0x66);
        (*extraout_x11_03)(uVar9,*plVar10);
        plVar10 = (longlong *)&DAT_00000018;
        if (param_2 != 0) {
          plVar10 = (longlong *)(param_2 + -0x60);
        }
        uVar4 = *(uint *)(param_1 + -0x54) & 0xfffffffe;
        if (*plVar10 != 0) {
          uVar4 = *(uint *)(param_1 + -0x54) | 1;
        }
      }
      *(uint *)(param_1 + -0x54) = uVar4;
    }
  }
  else {
    lVar12 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (lVar1 != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(lVar1);
    }
    if (*(longlong *)(lVar12 + 0xab58) != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)();
    }
    *(longlong *)(lVar12 + 0xab58) = lVar1;
    *(undefined1 *)(lVar12 + 0xacfa) = 1;
  }
  uVar11 = 0;
LAB_1801cc99c:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar11;
}

