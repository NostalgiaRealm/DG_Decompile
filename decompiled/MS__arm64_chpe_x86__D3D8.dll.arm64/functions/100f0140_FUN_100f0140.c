/*
 * FUN_100f0140 at 100f0140
 * undefined FUN_100f0140(void)
 * Address ranges: 100f0140-100f01bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100f0140(int param_1,uint param_2)

{
  uint uVar1;
  
  if (7 < param_2) {
    uVar1 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(uVar1 + param_1) + DAT_1013743c == -0x4625eb46) &&
           (((int *)(uVar1 + param_1))[1] + DAT_10137438 == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

