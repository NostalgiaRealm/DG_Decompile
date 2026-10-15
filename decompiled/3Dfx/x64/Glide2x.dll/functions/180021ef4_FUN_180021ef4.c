/*
 * FUN_180021ef4 at 180021ef4
 * undefined __fastcall FUN_180021ef4(longlong param_1, undefined4 param_2)
 * Address ranges: 180021ef4-180021f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021ef4(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(undefined4 *)(param_1 + 0x2c00) = param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

