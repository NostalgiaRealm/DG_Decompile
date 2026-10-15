/*
 * FUN_10094dc2 at 10094dc2
 * undefined4 __stdcall FUN_10094dc2(int param_1, undefined4 * param_2)
 * Address ranges: 10094dc2-10094de1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10094dc2(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + -0x6320) = param_2[1];
  *(undefined4 *)(param_1 + -0x6324) = *param_2;
  return 0;
}

