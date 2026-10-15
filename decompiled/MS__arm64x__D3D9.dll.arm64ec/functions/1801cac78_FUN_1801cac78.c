/*
 * FUN_1801cac78 at 1801cac78
 * undefined FUN_1801cac78(void)
 * Address ranges: 1801cac78-1801cad5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801cac78(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    lVar3 = DAT_180258900;
    if (iVar2 == 0) {
      FUN_1801085c8();
      lVar3 = DAT_180258900;
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (param_2 != *(int *)(param_1 + -0x48)) {
      *(int *)(param_1 + -0x48) = param_2;
      *(undefined4 *)(param_1 + -0x40) = 0xffff;
      *(undefined4 *)(param_1 + -0x34) = 0x1f;
    }
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(int *)(lVar4 + 0xac60) = param_2;
    *(undefined1 *)(lVar4 + 0xacfb) = 1;
  }
  if (bVar1) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return 0;
}

