/*
 * FUN_180018a38 at 180018a38
 * undefined __fastcall FUN_180018a38(longlong param_1)
 * Address ranges: 180018a38-180018aa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018a38(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  FUN_180016318(param_1);
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x220 + lVar2 * 0x170) != 0) {
      FUN_180022e14(param_1 + 0x148 + lVar2 * 0x170);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  return;
}

