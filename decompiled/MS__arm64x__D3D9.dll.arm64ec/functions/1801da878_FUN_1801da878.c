/*
 * FUN_1801da878 at 1801da878
 * undefined FUN_1801da878(void)
 * Address ranges: 1801da878-1801da963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da878(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    lVar4 = DAT_180258900;
    if (iVar3 == 0) {
      FUN_1801085c8();
      lVar4 = DAT_180258900;
    }
  }
  uVar5 = 0x8876086c;
  if ((param_2 < 6) && (param_3 != (undefined4 *)0x0)) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x10;
    uVar5 = 0;
    *param_3 = *(undefined4 *)(lVar1 + -0x6420);
    param_3[1] = *(undefined4 *)(lVar1 + -0x641c);
    param_3[2] = *(undefined4 *)(param_1 + ((ulonglong)param_2 + 0x42) * 0x10 + -0x6838);
    param_3[3] = *(undefined4 *)(lVar1 + -0x6414);
  }
  if (bVar2) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return uVar5;
}

