/*
 * FUN_1800bef78 at 1800bef78
 * undefined __fastcall FUN_1800bef78(undefined8 param_1, longlong param_2)
 * Address ranges: 1800bef78-1800befb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bef78(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1800fbcf0(*(LPVOID *)(param_2 + 0x228));
  FUN_1800fbcf0(*(LPVOID *)(param_2 + 0x10));
  return;
}

