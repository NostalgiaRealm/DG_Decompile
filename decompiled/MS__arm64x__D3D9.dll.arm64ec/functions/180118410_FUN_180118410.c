/*
 * FUN_180118410 at 180118410
 * undefined FUN_180118410(void)
 * Address ranges: 180118410-1801184eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180118410(longlong param_1)

{
  bool bVar1;
  int iVar2;
  code *extraout_x11;
  longlong lVar3;
  
  lVar3 = DAT_18024d928;
  *(undefined1 *)(param_1 + 0x121) = 0;
  if (*(char *)(lVar3 + 0x882) != '\0') {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 0xe78) >> 2 & 1) == 0) &&
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
    lVar3 = *(longlong *)(param_1 + 0x50);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    if (*(char *)(lVar3 + 0xe83) != '\0') {
      *(undefined2 *)(lVar3 + 0x6819) = 1;
    }
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}

