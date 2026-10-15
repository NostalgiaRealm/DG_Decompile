/*
 * FUN_18007e170 at 18007e170
 * undefined __fastcall FUN_18007e170(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18007e170-18007e1dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e170(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
    FUN_1800ee354(*(int *)(param_3 + 0x20),param_2);
  }
  if ((*(byte *)(param_3 + 0x28) & 4) != 0) {
    FUN_1800ee354(*(int *)(param_3 + 0x20),param_2);
  }
  return;
}

