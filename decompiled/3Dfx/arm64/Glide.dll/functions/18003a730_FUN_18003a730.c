/*
 * FUN_18003a730 at 18003a730
 * undefined __cdecl FUN_18003a730(longlong * param_1, undefined4 param_2)
 * Address ranges: 18003a730-18003a733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a730(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x58d) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

