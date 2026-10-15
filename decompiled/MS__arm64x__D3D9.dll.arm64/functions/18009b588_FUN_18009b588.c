/*
 * FUN_18009b588 at 18009b588
 * undefined FUN_18009b588(void)
 * Address ranges: 18009b588-18009b5cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009b588(longlong param_1,uint param_2,uint param_3)

{
  longlong extraout_x14;
  
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_1800f4370(param_1 + 0x10);
    param_1 = extraout_x14;
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_1800f4370(param_1 + 0x10,param_3);
  }
  return 1;
}

