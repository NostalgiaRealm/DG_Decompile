/*
 * FUN_1009c91d at 1009c91d
 * undefined4 __stdcall FUN_1009c91d(int param_1, undefined4 * param_2)
 * Address ranges: 1009c91d-1009c949
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009c91d(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x14);
  param_2[3] = *(undefined4 *)(param_1 + -0x10);
  param_2[4] = *(undefined4 *)(param_1 + -0x3c);
  param_2[1] = 7;
  param_2[2] = *(undefined4 *)(param_1 + -0x18);
  return 0;
}

