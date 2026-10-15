/*
 * FUN_1800261d4 at 1800261d4
 * undefined __fastcall FUN_1800261d4(longlong param_1)
 * Address ranges: 1800261d4-180026240
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800261d4(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x668);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042358(puVar1);
    FUN_18005d720(puVar1);
  }
  FUN_180023af4(param_1);
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x220 + lVar2 * 0x170) != 0) {
      FUN_1800303bc(param_1 + 0x148 + lVar2 * 0x170);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}

