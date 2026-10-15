/*
 * FUN_1801c7c10 at 1801c7c10
 * undefined FUN_1801c7c10(void)
 * Address ranges: 1801c7c10-1801c7dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c7c10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined4 uVar8;
  longlong lVar9;
  
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
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0x80;
  }
  if (lVar1 != 0) {
    plVar4 = (longlong *)&DAT_00000028;
    if (param_2 != 0) {
      plVar4 = (longlong *)(param_2 + -0x58);
    }
    puVar2 = (uint *)&DAT_00000050;
    if (param_2 != 0) {
      puVar2 = (uint *)(param_2 + -0x30);
    }
    uVar8 = 0x8876086c;
    if ((*puVar2 >> 1 & 1) == 0) goto LAB_1801c7d90;
    piVar3 = (int *)&DAT_00000054;
    if (param_2 != 0) {
      piVar3 = (int *)(param_2 + -0x2c);
    }
    if ((*piVar3 != 0) || (*plVar4 != param_1 + -0x6838)) goto LAB_1801c7d90;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar1);
    plVar4 = (longlong *)&DAT_00000030;
    if (param_2 != 0) {
      plVar4 = (longlong *)(param_2 + -0x50);
    }
    if (*plVar4 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)();
    }
  }
  if (*(longlong *)(param_1 + -0x67e8) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + -0x67e8) + 0x30);
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_01)();
    if (lVar9 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_02)(lVar9);
    }
  }
  *(longlong *)(param_1 + -0x67e8) = lVar1;
  *(undefined1 *)(param_1 + 0x5cd1) = 1;
  uVar8 = 0;
LAB_1801c7d90:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar8;
}

