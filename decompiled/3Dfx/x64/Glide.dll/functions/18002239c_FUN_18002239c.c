/*
 * FUN_18002239c at 18002239c
 * undefined __fastcall FUN_18002239c(longlong param_1, undefined4 param_2)
 * Address ranges: 18002239c-1800223d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002239c(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x50))(*(longlong **)(param_1 + 0x3180),1,0);
  *(undefined4 *)(param_1 + 0x2c00) = param_2;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return;
}

