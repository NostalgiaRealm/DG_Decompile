/*
 * FUN_1801dade0 at 1801dade0
 * undefined FUN_1801dade0(void)
 * Address ranges: 1801dade0-1801daeef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801dade0(longlong param_1,uint param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 < 0x10) {
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
    lVar3 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x170);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x90;
      if (lVar3 != 0) {
        FUN_1801e3118(lVar3);
      }
    }
    param_1 = param_1 + (ulonglong)param_2 * 4;
    *param_3 = lVar3;
    *param_5 = *(undefined4 *)(param_1 + -0xf0);
    *param_4 = *(undefined4 *)(param_1 + -0xb0);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  else {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  return 0;
}

