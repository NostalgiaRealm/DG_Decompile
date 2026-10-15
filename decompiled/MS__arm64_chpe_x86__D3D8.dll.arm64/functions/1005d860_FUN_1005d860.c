/*
 * FUN_1005d860 at 1005d860
 * undefined FUN_1005d860(void)
 * Address ranges: 1005d860-1005d8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1005d860(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1012983c;
  FUN_1005d490(param_1);
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0x80);
  }
  return param_1;
}

