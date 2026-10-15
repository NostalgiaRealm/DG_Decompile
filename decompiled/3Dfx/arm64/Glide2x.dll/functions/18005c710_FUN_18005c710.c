/*
 * FUN_18005c710 at 18005c710
 * undefined8 __cdecl FUN_18005c710(longlong param_1, uint param_2)
 * Address ranges: 18005c710-18005c77b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005c710(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (7 < param_2) {
    uVar2 = 0;
    if (param_2 != 8) {
      do {
        if ((*(int *)(param_1 + uVar2) + DAT_18006b4ec == -0x4625eb46) &&
           (*(int *)(param_1 + 4 + uVar2) + DAT_18006b4e0 == 0xf1bdb2c)) {
          return 0;
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < param_2 - 8);
    }
  }
  return 0;
}

