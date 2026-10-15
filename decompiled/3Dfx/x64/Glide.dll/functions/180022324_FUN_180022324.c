/*
 * FUN_180022324 at 180022324
 * undefined __fastcall FUN_180022324(longlong param_1, byte param_2)
 * Address ranges: 180022324-18002235d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022324(longlong param_1,byte param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(uint *)(param_1 + 0x2c08) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

