/*
 * FUN_1801c7988 at 1801c7988
 * undefined FUN_1801c7988(void)
 * Address ranges: 1801c7988-1801c7c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c7988(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  longlong *plVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined4 uVar11;
  
  uVar11 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
    }
  }
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    lVar2 = 0;
    if (param_3 != 0) {
      lVar2 = param_3 + -0x80;
    }
    uVar11 = 0x8876086c;
    if ((param_2 != 0) || (lVar2 != 0)) {
      if (lVar2 != 0) {
        plVar5 = (longlong *)&DAT_00000028;
        if (param_3 != 0) {
          plVar5 = (longlong *)(param_3 + -0x58);
        }
        puVar3 = (uint *)&DAT_00000050;
        if (param_3 != 0) {
          puVar3 = (uint *)(param_3 + -0x30);
        }
        if ((*puVar3 & 1) == 0) goto LAB_1801c7bcc;
        piVar4 = (int *)&DAT_00000054;
        if (param_3 != 0) {
          piVar4 = (int *)(param_3 + -0x2c);
        }
        if (((*piVar4 != 0) && ((*piVar4 != 2 || (*(int *)(param_1 + -0x59d0) != 3)))) ||
           (*plVar5 != param_1 + -0x6838)) goto LAB_1801c7bcc;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(lVar2);
        plVar5 = (longlong *)&DAT_00000030;
        if (param_3 != 0) {
          plVar5 = (longlong *)(param_3 + -0x50);
        }
        if (*plVar5 != 0) {
          (*(code *)puVar8)(0x180224000);
          (*extraout_x11_00)();
        }
      }
      lVar1 = param_1 + (ulonglong)param_2 * 8;
      lVar10 = *(longlong *)(lVar1 + -0x6808);
      if (lVar10 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x30);
        (*(code *)puVar8)();
        (*extraout_x11_01)(extraout_x8);
        if (lVar10 != 0) {
          (*(code *)puVar8)(0x180224000);
          (*extraout_x11_02)();
        }
      }
      if (param_2 == 0) {
        plVar5 = (longlong *)&DAT_00000008;
        if (param_3 != 0) {
          plVar5 = (longlong *)(param_3 + -0x78);
        }
        lVar10 = *plVar5;
        *(undefined8 *)(param_1 + -0x67e0) = 0;
        *(undefined4 *)(param_1 + -0x67d8) = *(undefined4 *)(lVar10 + 0x8c);
        uVar11 = *(undefined4 *)(lVar10 + 0x90);
        *(undefined1 *)(param_1 + 0x5cd3) = 1;
        *(undefined4 *)(param_1 + -0x67d4) = uVar11;
        *(undefined4 *)(param_1 + -0x67d0) = 0;
        *(undefined4 *)(param_1 + -0x67cc) = 0x3f800000;
        uVar11 = *(undefined4 *)(*plVar5 + 0x8c);
        uVar6 = *(undefined4 *)(*plVar5 + 0x90);
        *(undefined8 *)(param_1 + 0x730) = 0;
        *(undefined4 *)(param_1 + 0x738) = uVar11;
        *(undefined4 *)(param_1 + 0x73c) = uVar6;
        *(undefined1 *)(param_1 + 0x5cd4) = 1;
      }
      *(longlong *)(lVar1 + -0x6808) = lVar2;
      uVar11 = 0;
      *(undefined1 *)(param_1 + 0x5cd1) = 1;
    }
  }
LAB_1801c7bcc:
  if (bVar7) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar11;
}

