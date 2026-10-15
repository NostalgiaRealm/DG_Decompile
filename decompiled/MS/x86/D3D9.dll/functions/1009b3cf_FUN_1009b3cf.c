/*
 * FUN_1009b3cf at 1009b3cf
 * undefined4 __stdcall FUN_1009b3cf(int param_1, undefined4 * param_2)
 * Address ranges: 1009b3cf-1009b3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b3cf(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x6cc);
  param_2[1] = *(undefined4 *)(param_1 + 0x6d0);
  param_2[2] = *(undefined4 *)(param_1 + 0x6d4);
  param_2[3] = *(undefined4 *)(param_1 + 0x6d8);
  return 0;
}

