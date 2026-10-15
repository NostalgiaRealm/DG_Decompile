/*
 * FUN_1003b7c0 at 1003b7c0
 * undefined FUN_1003b7c0(void)
 * Address ranges: 1003b7c0-1003b84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003b7c0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_10171374 != 0) {
    do {
      if (*(int *)(DAT_10171370 + uVar2 * 4) == param_1) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        if (DAT_10171374 <= uVar2) {
          return;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 < DAT_10171374) {
          do {
            puVar1 = (undefined4 *)(DAT_10171370 + uVar2 * 4);
            uVar2 = uVar2 + 1;
            puVar1[-1] = *puVar1;
          } while (uVar2 < DAT_10171374);
        }
        DAT_10171374 = DAT_10171374 - 1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_10171374);
  }
  return;
}

