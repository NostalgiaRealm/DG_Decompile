/*
 * FUN_10037980 at 10037980
 * undefined FUN_10037980(void)
 * Address ranges: 10037980-100379b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10037980(int param_1,undefined4 param_2)

{
  *(bool *)param_2 =
       0xafff < *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x14c) * 0x1510 + 0x520);
  return param_2;
}

