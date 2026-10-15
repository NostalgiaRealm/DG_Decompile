/*
 * FUN_1801c7dd0 at 1801c7dd0
 * undefined FUN_1801c7dd0(void)
 * Address ranges: 1801c7dd0-1801c7eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c7dd0(longlong param_1)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar5;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar4 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar4 == 0) {
      FUN_1801085c8();
    }
  }
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar5 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) == '\0') {
    uVar5 = 0x88760868;
    if (*(longlong *)(param_1 + -0x6808) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      cVar3 = (*extraout_x11)();
      if (cVar3 == '\0') goto LAB_1801c7ec8;
    }
    if (*(longlong *)(param_1 + -0x67e8) != 0) {
      (*(code *)puVar2)(0x180224000);
      cVar3 = (*extraout_x11_00)();
      if (cVar3 == '\0') goto LAB_1801c7ec8;
    }
    *(undefined1 *)(param_1 + -0x5b27) = 1;
    uVar5 = 0;
  }
LAB_1801c7ec8:
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar5;
}

