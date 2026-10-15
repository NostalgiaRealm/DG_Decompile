/*
 * FUN_1801cf200 at 1801cf200
 * undefined FUN_1801cf200(void)
 * Address ranges: 1801cf200-1801cf313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801cf200(longlong param_1,longlong param_2)

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
  if (*(char *)(param_1 + -0x642c) == '\0') {
    if (param_2 == *(longlong *)(param_1 + 0x5c60)) goto LAB_1801cf2e0;
    if (param_2 != 0) {
      FUN_1801042e0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0x5c60) != 0) {
      FUN_1801e3bf8();
    }
    *(longlong *)(param_1 + 0x5c60) = param_2;
    lVar3 = 0x5cd2;
  }
  else {
    param_1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 != 0) {
      FUN_1801042e0(param_2 + 0xc);
    }
    if (*(longlong *)(param_1 + 0x4fb8) != 0) {
      FUN_1801e3bf8();
    }
    lVar3 = 0xacfc;
    *(longlong *)(param_1 + 0x4fb8) = param_2;
  }
  *(undefined1 *)(param_1 + lVar3) = 1;
LAB_1801cf2e0:
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

