/*
 * FUN_180022360 at 180022360
 * undefined __fastcall FUN_180022360(longlong param_1, ushort param_2)
 * Address ranges: 180022360-180022399
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022360(longlong param_1,ushort param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(uint *)(param_1 + 0x2c10) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

