/*
 * FUN_1801dab80 at 1801dab80
 * undefined FUN_1801dab80(void)
 * Address ranges: 1801dab80-1801dac7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dab80(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
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
  uVar4 = 0x8876086c;
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x21) && param_4 != (undefined4 *)0x0) {
    if (*(char *)(*(longlong *)(param_1 + -0x6828) + (longlong)(int)param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar4 = 0;
      *param_4 = *(undefined4 *)
                  ((longlong)(int)param_3 * 4 + (ulonglong)param_2 * 0x84 + param_1 + -0x6078);
    }
  }
  if (bVar1) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return uVar4;
}

