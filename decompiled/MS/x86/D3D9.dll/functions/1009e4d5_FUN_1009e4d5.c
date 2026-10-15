/*
 * FUN_1009e4d5 at 1009e4d5
 * undefined4 __stdcall FUN_1009e4d5(int param_1, undefined4 * param_2)
 * Address ranges: 1009e4d5-1009e508
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e4d5(int param_1,undefined4 *param_2)

{
  *param_2 = 100;
  param_2[5] = *(undefined4 *)(param_1 + -0x30);
  param_2[3] = *(undefined4 *)(param_1 + -0x28);
  param_2[4] = *(undefined4 *)(param_1 + -0x58);
  param_2[1] = 6;
  param_2[2] = *(undefined4 *)(param_1 + -0x34);
  return 0;
}

