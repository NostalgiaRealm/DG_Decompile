/*
 * FUN_1801ddda0 at 1801ddda0
 * undefined FUN_1801ddda0(void)
 * Address ranges: 1801ddda0-1801ddebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801ddda0(longlong param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  
  iVar2 = -0x7789f794;
  if (((param_2 & 0xfffffffc) == 0) &&
     (((param_2 & 2) == 0 || ((*(int *)(param_1 + 0x20) - 9U & 0xfffffffd) == 0)))) {
    iVar2 = -0x7789f798;
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x6819) == '\0') {
      if (((*(uint *)(*(longlong *)(param_1 + 0x18) + 0xe78) >> 2 & 1) == 0) &&
         (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar2 = (*extraout_x11)(uVar3,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20),
                              param_2);
      if (bVar1) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    if (-1 < iVar2) {
      *(bool *)(param_1 + 0x41) = (param_2 & 2) != 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  return iVar2;
}

