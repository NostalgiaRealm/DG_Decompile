/*
 * FUN_1007f8e4 at 1007f8e4
 * undefined4 __stdcall FUN_1007f8e4(int param_1, undefined4 * param_2)
 * Address ranges: 1007f8e4-1007f903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f8e4(int param_1,undefined4 *param_2)

{
  param_2[1] = *(undefined4 *)(param_1 + -0x56f0);
  *param_2 = *(undefined4 *)(param_1 + -0x56f4);
  return 0;
}

