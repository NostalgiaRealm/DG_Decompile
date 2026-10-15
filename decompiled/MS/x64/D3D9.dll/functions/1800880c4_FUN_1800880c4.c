/*
 * FUN_1800880c4 at 1800880c4
 * undefined __fastcall FUN_1800880c4(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800880c4-180088137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800880c4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 8) != 0) {
    FUN_1800ee354(*(int *)(param_3 + 0x20),param_2);
  }
  if ((*(byte *)(param_3 + 0x28) & 0x10) != 0) {
    FUN_1800ee354(*(int *)(param_3 + 0x20),param_2);
  }
  return;
}

