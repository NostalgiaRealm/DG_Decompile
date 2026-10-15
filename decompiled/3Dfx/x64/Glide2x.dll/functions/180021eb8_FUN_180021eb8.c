/*
 * FUN_180021eb8 at 180021eb8
 * undefined __fastcall FUN_180021eb8(longlong param_1, ushort param_2)
 * Address ranges: 180021eb8-180021ef1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021eb8(longlong param_1,ushort param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(uint *)(param_1 + 0x2c10) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

