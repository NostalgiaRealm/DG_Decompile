/*
 * FUN_1801daa80 at 1801daa80
 * undefined FUN_1801daa80(void)
 * Address ranges: 1801daa80-1801dab7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801daa80(longlong param_1,uint param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
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
  *param_3 = 0;
  lVar3 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x5500);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x20);
    if (iVar2 == 3) {
      *param_3 = lVar3 + 0x98;
      FUN_1801c1a60();
    }
    else if (iVar2 == 4) {
      *param_3 = lVar3 + 0x118;
      FUN_1801e6020();
    }
    else if (iVar2 == 5) {
      *param_3 = lVar3 + 0x98;
      FUN_1801c1a60();
    }
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

