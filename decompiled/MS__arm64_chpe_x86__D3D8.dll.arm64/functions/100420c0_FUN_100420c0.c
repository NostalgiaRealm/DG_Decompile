/*
 * FUN_100420c0 at 100420c0
 * undefined FUN_100420c0(void)
 * Address ranges: 100420c0-10042107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100420c0(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_101296c8;
  FUN_10041fd0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FUN_100fec90(param_1,0x38);
  }
  return param_1;
}

