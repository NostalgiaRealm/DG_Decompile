/*
 * FUN_1801daf80 at 1801daf80
 * undefined FUN_1801daf80(void)
 * Address ranges: 1801daf80-1801db083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801daf80(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *extraout_x11;
  undefined1 auVar5 [16];
  
  if (param_2 < *(uint *)(param_1 + -0x5a00) && param_3 != 0) {
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
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 0xec);
    }
    auVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                       (0x180225000,*(undefined8 *)(param_1 + -0x59a0),uVar3);
    (*extraout_x11)(0x437f0000,auVar5._0_8_,auVar5._8_8_,param_3,param_3 + 0x200,param_3 + 0x400);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}

