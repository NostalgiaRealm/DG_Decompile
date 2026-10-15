/*
 * FUN_1800159c0 at 1800159c0
 * undefined __fastcall FUN_1800159c0(longlong param_1, byte param_2)
 * Address ranges: 1800159c0-1800159f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800159c0(longlong param_1,byte param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x50))(*(longlong **)(param_1 + 0x3300),1,0);
  *(uint *)(param_1 + 0x2ca8) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

