/*
 * FUN_1801d1c10 at 1801d1c10
 * undefined FUN_1801d1c10(void)
 * Address ranges: 1801d1c10-1801d1d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d1c10(longlong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  code *extraout_x11;
  undefined4 uVar4;
  
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
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar3 = (*extraout_x11)();
  if ((uVar3 < 5) && ((0x12U >> (ulonglong)(uVar3 & 0x1f) & 1) != 0)) {
    uVar4 = 0x88760874;
  }
  else if (uVar3 == 2) {
    uVar4 = 0x88760870;
  }
  else {
    uVar4 = 0;
    if (uVar3 == 3) {
      uVar4 = 0x88760868;
    }
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar4;
}

