/*
 * FUN_1007c407 at 1007c407
 * undefined4 __stdcall FUN_1007c407(int param_1, undefined4 * param_2)
 * Address ranges: 1007c407-1007c426
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c407(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + -0x56f0) = param_2[1];
  *(undefined4 *)(param_1 + -0x56f4) = *param_2;
  return 0;
}

