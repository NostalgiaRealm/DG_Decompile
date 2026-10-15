/*
 * FUN_1800601c8 at 1800601c8
 * undefined __cdecl FUN_1800601c8(void)
 * Address ranges: 1800601c8-180060227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800601c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (DAT_18006b85c != 0) {
    puVar1 = DAT_18006b850 + DAT_18006b85c;
    puVar2 = DAT_18006b850;
    while (puVar2 < puVar1) {
      puVar4 = puVar2 + 1;
      pcVar3 = (code *)*puVar2;
      puVar2 = puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
  }
  FUN_1800602d0(DAT_18006b850);
  return;
}

