/*
 * FUN_1801cadd0 at 1801cadd0
 * undefined FUN_1801cadd0(void)
 * Address ranges: 1801cadd0-1801caea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801cadd0(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    lVar4 = DAT_180258900;
    if (iVar3 == 0) {
      FUN_1801085c8();
      lVar4 = DAT_180258900;
    }
  }
  bVar2 = true;
  *(int *)(param_1 + 0x5cac) = param_2;
  if ((*(int *)(param_1 + -0x59d0) != 3) && ((*(uint *)(param_1 + -0x59c0) >> 5 & 1) == 0)) {
    if ((*(uint *)(param_1 + -0x59c0) >> 7 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = param_2 != 0;
    }
  }
  *(bool *)(param_1 + -0x1d) = bVar2;
  if (bVar1) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return 0;
}

