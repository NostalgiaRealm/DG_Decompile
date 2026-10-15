/*
 * FUN_180061018 at 180061018
 * undefined __cdecl FUN_180061018(void)
 * Address ranges: 180061018-180061077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180061018(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (DAT_18006c85c != 0) {
    puVar1 = DAT_18006c850 + DAT_18006c85c;
    puVar2 = DAT_18006c850;
    while (puVar2 < puVar1) {
      puVar4 = puVar2 + 1;
      pcVar3 = (code *)*puVar2;
      puVar2 = puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
  }
  FUN_180061120(DAT_18006c850);
  return;
}

