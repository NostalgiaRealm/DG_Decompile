/*
 * FUN_18002667c at 18002667c
 * undefined __fastcall FUN_18002667c(longlong param_1)
 * Address ranges: 18002667c-1800266e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002667c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x668);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042800(puVar1);
    FUN_18005dbc0(puVar1);
  }
  FUN_180023f9c(param_1);
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x220 + lVar2 * 0x170) != 0) {
      FUN_180030864(param_1 + 0x148 + lVar2 * 0x170);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}

