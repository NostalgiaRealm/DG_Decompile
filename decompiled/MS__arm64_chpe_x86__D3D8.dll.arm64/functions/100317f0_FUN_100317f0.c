/*
 * FUN_100317f0 at 100317f0
 * undefined FUN_100317f0(void)
 * Address ranges: 100317f0-100318df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100317f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (DAT_101387ac != 0) {
    do {
      if (*(int *)(DAT_101387a8 + uVar1 * 4) == param_1) {
        if (uVar1 != 0xffffffff) {
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_101387ac);
  }
  if (DAT_101387ac == DAT_101387b0) {
    if (DAT_101387b0 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = DAT_101387b0 << 1;
    }
    iVar2 = uVar1 * 4;
    if (uVar1 >> 0x1e != 0) {
      iVar2 = -1;
    }
    iVar2 = FUN_100fece0(iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_100ff660(iVar2,DAT_101387a8,((ulonglong)DAT_101387b0 & 0x3fffffff) << 2);
    FUN_100fed00(DAT_101387a8);
    DAT_101387a8 = iVar2;
    DAT_101387b0 = uVar1;
  }
  *(int *)(DAT_101387a8 + DAT_101387ac * 4) = param_1;
  DAT_101387ac = DAT_101387ac + 1;
  return 1;
}

