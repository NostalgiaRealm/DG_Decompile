/*
 * FUN_1800ee54c at 1800ee54c
 * undefined1 __fastcall FUN_1800ee54c(longlong param_1, uint param_2)
 * Address ranges: 1800ee54c-1800ee595
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800ee54c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (7 < param_2) {
    uVar2 = 0;
    if (param_2 != 8) {
      do {
        if ((DAT_180110784 + *(int *)(param_1 + uVar2) == -0x4625eb46) &&
           (DAT_180110778 + *(int *)(param_1 + 4 + uVar2) == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

