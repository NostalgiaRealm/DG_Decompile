/*
 * FUN_1801dcc40 at 1801dcc40
 * undefined FUN_1801dcc40(void)
 * Address ranges: 1801dcc40-1801dcdbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801dcc40(longlong param_1)

{
  char *pcVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  code *extraout_x11;
  
  puVar2 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    puVar2 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
  }
  if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar6 == 0) {
      FUN_1801085c8();
    }
  }
  if (*(longlong *)(param_1 + -0x60) != 0) {
    if ((*(longlong *)(param_1 + -0x18) != 0) &&
       (((*(uint *)(param_1 + -0x28) >> 9 & 1) != 0 || (*(char *)(param_1 + -5) != '\0')))) {
      pcVar1 = &DAT_00000020;
      if (*(longlong *)(param_1 + -0x38) != 0) {
        pcVar1 = (char *)(*(longlong *)(param_1 + -0x38) + -0x6818);
      }
      if (*pcVar1 != '\0') {
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)();
        *(undefined8 *)(param_1 + -0x60) = 0;
        if (*(char *)(param_1 + -8) != '\0') {
          puVar2 = (uint *)&DAT_000067e4;
          if (*(longlong *)(param_1 + -0x38) != 0) {
            puVar2 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x54);
          }
          *puVar2 = *puVar2 & 0xfffffffe;
        }
        goto LAB_1801dcd8c;
      }
    }
    *(undefined8 *)(param_1 + -0x60) = 0;
    FUN_1801042d0(param_1 + -0x4c);
    lVar7 = *(longlong *)(param_1 + -0x38);
    plVar3 = (longlong *)&DAT_000066c0;
    if (lVar7 != 0) {
      plVar3 = (longlong *)(lVar7 + -0x178);
    }
    if (*plVar3 == param_1 + -0x78) {
      puVar4 = &DAT_00006818;
      if (lVar7 != 0) {
        puVar4 = (undefined1 *)(lVar7 + -0x20);
      }
      *puVar4 = 1;
    }
  }
LAB_1801dcd8c:
  if (bVar5) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

