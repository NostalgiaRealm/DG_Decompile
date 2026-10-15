/*
 * FUN_180014e68 at 180014e68
 * undefined __cdecl FUN_180014e68(longlong * param_1, undefined4 param_2)
 * Address ranges: 180014e68-180014e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014e68(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + 0x5a1) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

