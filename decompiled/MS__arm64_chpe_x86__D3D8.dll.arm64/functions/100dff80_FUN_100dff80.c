/*
 * FUN_100dff80 at 100dff80
 * undefined FUN_100dff80(void)
 * Address ranges: 100dff80-100dff97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100dff80(int param_1,uint param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x34) + (param_2 >> 0x10) * 8);
}

