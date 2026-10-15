/*
 * FUN_1005f420 at 1005f420
 * undefined FUN_1005f420(void)
 * Address ranges: 1005f420-1005f437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005f420(int param_1,uint param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x34) + (param_2 >> 0x10) * 8);
}

