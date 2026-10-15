/*
 * FUN_180018460 at 180018460
 * undefined __cdecl FUN_180018460(longlong param_1, undefined4 param_2)
 * Address ranges: 180018460-1800184ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018460(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x50))(*(longlong **)(param_1 + 0x3300),1,0);
  *(undefined4 *)(param_1 + 0x2ca0) = param_2;
  *(undefined4 *)(param_1 + 0x2a2c) = param_2;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return;
}

