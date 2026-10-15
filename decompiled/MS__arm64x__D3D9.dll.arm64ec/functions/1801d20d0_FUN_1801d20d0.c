/*
 * FUN_1801d20d0 at 1801d20d0
 * undefined FUN_1801d20d0(void)
 * Address ranges: 1801d20d0-1801d21f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801d20d0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_x11;
  
  iVar4 = 0;
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
  switch(uVar3) {
  case 1:
  case 4:
    iVar4 = -0x7789f78c;
    break;
  case 2:
    iVar4 = -0x7789f790;
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  if (-1 < iVar4) {
    iVar4 = FUN_18010b798(param_1 + -0x6838,param_2,0);
    if (iVar4 < 0) {
      iVar4 = -0x7789f798;
    }
  }
  return iVar4;
}

