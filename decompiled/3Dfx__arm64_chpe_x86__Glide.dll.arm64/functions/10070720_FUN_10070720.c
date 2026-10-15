/*
 * FUN_10070720 at 10070720
 * undefined FUN_10070720(void)
 * Address ranges: 10070720-1007075b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10070720(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_100953bc;
  if ((param_2 & 1) != 0) {
    FUN_1007a470(param_1,4);
  }
  return param_1;
}

