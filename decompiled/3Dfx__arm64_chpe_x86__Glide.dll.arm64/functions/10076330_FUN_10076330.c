/*
 * FUN_10076330 at 10076330
 * undefined FUN_10076330(void)
 * Address ranges: 10076330-100763ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10076330(int param_1,uint param_2)

{
  uint uVar1;
  
  if (7 < param_2) {
    uVar1 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(uVar1 + param_1) + DAT_1009f730 == -0x4625eb46) &&
           (((int *)(uVar1 + param_1))[1] + DAT_1009f72c == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

