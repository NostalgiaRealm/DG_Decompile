/*
 * FUN_1801c5db0 at 1801c5db0
 * undefined FUN_1801c5db0(void)
 * Address ranges: 1801c5db0-1801c5eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c5db0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  
  if (((param_2 < *(uint *)(param_1 + -0x5a00) && param_3 < 2) && param_4 != 0) &&
     (*(char *)(param_1 + -0x1c) == '\0')) {
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
    lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(0x477fff00,uVar3,*(undefined4 *)(lVar4 + 0xec),param_4,param_4 + 0x200,
                    param_4 + 0x400);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}

