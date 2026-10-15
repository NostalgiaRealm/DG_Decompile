/*
 * FUN_1800398e0 at 1800398e0
 * undefined __cdecl FUN_1800398e0(longlong * param_1, undefined4 param_2)
 * Address ranges: 1800398e0-1800398e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800398e0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x58d) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

