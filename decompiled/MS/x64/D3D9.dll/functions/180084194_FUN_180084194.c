/*
 * FUN_180084194 at 180084194
 * undefined __fastcall FUN_180084194(undefined8 * param_1, undefined8 param_2, longlong param_3)
 * Address ranges: 180084194-1800841ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180084194(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x1a8) == 0) {
    uVar1 = (**(code **)*param_1)();
    *(undefined4 *)(param_3 + 0x1a8) = uVar1;
  }
  return;
}

