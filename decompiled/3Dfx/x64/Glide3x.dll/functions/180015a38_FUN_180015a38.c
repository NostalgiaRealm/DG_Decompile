/*
 * FUN_180015a38 at 180015a38
 * undefined __fastcall FUN_180015a38(longlong param_1, undefined4 param_2)
 * Address ranges: 180015a38-180015a76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015a38(longlong param_1,undefined4 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x50))(*(longlong **)(param_1 + 0x3300),1,0);
  *(undefined4 *)(param_1 + 0x2ca0) = param_2;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  *(undefined4 *)(param_1 + 0x2a2c) = param_2;
  return;
}

