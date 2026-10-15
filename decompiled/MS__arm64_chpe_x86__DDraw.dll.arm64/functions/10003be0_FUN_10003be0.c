/*
 * FUN_10003be0 at 10003be0
 * undefined FUN_10003be0(void)
 * Address ranges: 10003be0-10003ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003be0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (DAT_100be13c != 0) {
    do {
      if (*(int *)(DAT_100be138 + uVar1 * 4) == param_1) {
        if (uVar1 != 0xffffffff) {
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_100be13c);
  }
  if (DAT_100be13c == DAT_100be140) {
    if (DAT_100be140 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = DAT_100be140 << 1;
    }
    iVar2 = uVar1 * 4;
    if (uVar1 >> 0x1e != 0) {
      iVar2 = -1;
    }
    iVar2 = FUN_100914b0(iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_100917a0(iVar2,DAT_100be138,((ulonglong)DAT_100be140 & 0x3fffffff) << 2);
    FUN_100914d0(DAT_100be138);
    DAT_100be138 = iVar2;
    DAT_100be140 = uVar1;
  }
  *(int *)(DAT_100be138 + DAT_100be13c * 4) = param_1;
  DAT_100be13c = DAT_100be13c + 1;
  return 1;
}

