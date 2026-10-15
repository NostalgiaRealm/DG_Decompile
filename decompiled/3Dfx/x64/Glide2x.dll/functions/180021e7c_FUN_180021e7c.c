/*
 * FUN_180021e7c at 180021e7c
 * undefined __fastcall FUN_180021e7c(longlong param_1, byte param_2)
 * Address ranges: 180021e7c-180021eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021e7c(longlong param_1,byte param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(uint *)(param_1 + 0x2c08) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

