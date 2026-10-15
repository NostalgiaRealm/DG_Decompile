/*
 * FUN_1801198a8 at 1801198a8
 * undefined FUN_1801198a8(void)
 * Address ranges: 1801198a8-180119963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801198a8(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != 0) {
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
    FUN_1801083e8(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xe28),
                  *(undefined4 *)(param_1 + 0xe8),param_2);
    uVar3 = 0;
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar3;
}

