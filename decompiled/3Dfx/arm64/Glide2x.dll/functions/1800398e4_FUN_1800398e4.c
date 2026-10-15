/*
 * FUN_1800398e4 at 1800398e4
 * undefined __cdecl FUN_1800398e4(longlong * param_1, undefined4 param_2)
 * Address ranges: 1800398e4-18003991b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800398e4(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x58d) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

