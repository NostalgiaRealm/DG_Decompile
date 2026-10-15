/*
 * FUN_1801c7f10 at 1801c7f10
 * undefined FUN_1801c7f10(void)
 * Address ranges: 1801c7f10-1801c7fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c7f10(longlong param_1)

{
  bool bVar1;
  int iVar2;
  code *extraout_x11;
  undefined4 uVar3;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar2 == 0) {
      FUN_1801085c8();
    }
  }
  uVar3 = 0x8876086c;
  if (*(char *)(param_1 + -0x5b27) != '\0') {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined1 *)(param_1 + -0x5b27) = 0;
    uVar3 = 0;
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar3;
}

