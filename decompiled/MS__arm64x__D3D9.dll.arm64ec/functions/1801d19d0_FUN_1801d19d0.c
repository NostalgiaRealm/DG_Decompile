/*
 * FUN_1801d19d0 at 1801d19d0
 * undefined FUN_1801d19d0(void)
 * Address ranges: 1801d19d0-1801d1aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d19d0(longlong param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if (param_2 + 7U < 0xf) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar3 == 0) {
        FUN_1801085c8();
      }
    }
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar3 = (*extraout_x11)();
    if (iVar3 == 2) {
      uVar5 = 0x88760870;
    }
    else {
      uVar4 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(uVar4,param_2);
      uVar5 = 0;
    }
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar5;
}

