/*
 * FUN_1007f1f0 at 1007f1f0
 * undefined FUN_1007f1f0(void)
 * Address ranges: 1007f1f0-1007f26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007f1f0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (7 < param_2) {
    uVar1 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(uVar1 + param_1) + DAT_100aa9e0 == -0x4625eb46) &&
           (((int *)(uVar1 + param_1))[1] + DAT_100aa9dc == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

