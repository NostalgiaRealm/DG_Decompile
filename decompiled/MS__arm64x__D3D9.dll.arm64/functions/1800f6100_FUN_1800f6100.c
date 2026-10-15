/*
 * FUN_1800f6100 at 1800f6100
 * undefined FUN_1800f6100(void)
 * Address ranges: 1800f6100-1800f616b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f6100(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (7 < param_2) {
    uVar2 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(param_1 + uVar2) + DAT_18024b1cc == -0x4625eb46) &&
           (*(int *)(param_1 + 4 + uVar2) + DAT_18024b1c0 == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

