/*
 * FUN_1801b2c40 at 1801b2c40
 * undefined FUN_1801b2c40(void)
 * Address ranges: 1801b2c40-1801b2c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801b2c40(longlong param_1,uint param_2,uint param_3)

{
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_180213800(param_1 + 0x10);
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_180213800(param_1 + 0x10,param_3);
  }
  return 1;
}

