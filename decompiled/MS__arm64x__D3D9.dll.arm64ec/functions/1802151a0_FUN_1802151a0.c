/*
 * FUN_1802151a0 at 1802151a0
 * undefined FUN_1802151a0(void)
 * Address ranges: 1802151a0-180215213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802151a0(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (7 < param_2) {
    uVar2 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(param_1 + uVar2) + DAT_18024c6a4 == -0x4625eb46) &&
           (*(int *)(param_1 + 4 + uVar2) + DAT_18024c6a0 == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

