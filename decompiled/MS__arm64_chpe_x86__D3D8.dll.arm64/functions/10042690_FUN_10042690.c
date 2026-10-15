/*
 * FUN_10042690 at 10042690
 * undefined FUN_10042690(void)
 * Address ranges: 10042690-100426d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10042690(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_101296c8;
  FUN_10041fd0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0x78);
  }
  return param_1;
}

