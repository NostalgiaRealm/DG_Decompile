/*
 * FUN_180063d40 at 180063d40
 * undefined __cdecl FUN_180063d40(void)
 * Address ranges: 180063d40-180063d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063d40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (DAT_18006f9bc != 0) {
    puVar1 = DAT_18006f9b0 + DAT_18006f9bc;
    puVar2 = DAT_18006f9b0;
    while (puVar2 < puVar1) {
      puVar4 = puVar2 + 1;
      pcVar3 = (code *)*puVar2;
      puVar2 = puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
  }
  FUN_180063d00(DAT_18006f9b0);
  return;
}

