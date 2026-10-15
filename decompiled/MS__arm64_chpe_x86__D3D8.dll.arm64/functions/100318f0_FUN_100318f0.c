/*
 * FUN_100318f0 at 100318f0
 * undefined FUN_100318f0(void)
 * Address ranges: 100318f0-1003197b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100318f0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_101387ac != 0) {
    do {
      if (*(int *)(DAT_101387a8 + uVar2 * 4) == param_1) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        if (DAT_101387ac <= uVar2) {
          return;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 < DAT_101387ac) {
          do {
            puVar1 = (undefined4 *)(DAT_101387a8 + uVar2 * 4);
            uVar2 = uVar2 + 1;
            puVar1[-1] = *puVar1;
          } while (uVar2 < DAT_101387ac);
        }
        DAT_101387ac = DAT_101387ac - 1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_101387ac);
  }
  return;
}

