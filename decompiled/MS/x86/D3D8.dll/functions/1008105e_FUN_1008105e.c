/*
 * FUN_1008105e at 1008105e
 * undefined4 __stdcall FUN_1008105e(int param_1, undefined4 * param_2)
 * Address ranges: 1008105e-1008108a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008105e(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x14);
  param_2[3] = *(undefined4 *)(param_1 + -0x10);
  param_2[4] = *(undefined4 *)(param_1 + -0x3c);
  param_2[1] = 7;
  param_2[2] = *(undefined4 *)(param_1 + -0x18);
  return 0;
}

