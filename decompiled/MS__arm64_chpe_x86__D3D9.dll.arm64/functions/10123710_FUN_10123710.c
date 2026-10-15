/*
 * FUN_10123710 at 10123710
 * undefined FUN_10123710(void)
 * Address ranges: 10123710-1012378b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10123710(int param_1,uint param_2)

{
  uint uVar1;
  
  if (7 < param_2) {
    uVar1 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(uVar1 + param_1) + DAT_1016f9ec == -0x4625eb46) &&
           (((int *)(uVar1 + param_1))[1] + DAT_1016f9e8 == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

