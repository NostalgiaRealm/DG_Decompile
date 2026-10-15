/*
 * FUN_18003657c at 18003657c
 * undefined __fastcall FUN_18003657c(longlong * param_1, undefined4 param_2)
 * Address ranges: 18003657c-1800365ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003657c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x58d) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

