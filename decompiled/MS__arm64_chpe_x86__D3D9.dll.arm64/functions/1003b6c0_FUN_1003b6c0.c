/*
 * FUN_1003b6c0 at 1003b6c0
 * undefined FUN_1003b6c0(void)
 * Address ranges: 1003b6c0-1003b7af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003b6c0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (DAT_10171374 != 0) {
    do {
      if (*(int *)(DAT_10171370 + uVar1 * 4) == param_1) {
        if (uVar1 != 0xffffffff) {
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_10171374);
  }
  if (DAT_10171374 == DAT_10171378) {
    if (DAT_10171378 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = DAT_10171378 << 1;
    }
    iVar2 = uVar1 * 4;
    if (uVar1 >> 0x1e != 0) {
      iVar2 = -1;
    }
    iVar2 = FUN_101322b0(iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_101325a0(iVar2,DAT_10171370,((ulonglong)DAT_10171378 & 0x3fffffff) << 2);
    FUN_101322d0(DAT_10171370);
    DAT_10171370 = iVar2;
    DAT_10171378 = uVar1;
  }
  *(int *)(DAT_10171370 + DAT_10171374 * 4) = param_1;
  DAT_10171374 = DAT_10171374 + 1;
  return 1;
}

