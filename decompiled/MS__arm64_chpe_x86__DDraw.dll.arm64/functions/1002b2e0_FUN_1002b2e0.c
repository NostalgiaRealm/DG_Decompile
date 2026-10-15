/*
 * FUN_1002b2e0 at 1002b2e0
 * undefined FUN_1002b2e0(void)
 * Address ranges: 1002b2e0-1002b327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002b2e0(int param_1,uint param_2,uint param_3)

{
  int extraout_w11;
  
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_10083ff0(param_1 + 0xc,param_2);
    param_1 = extraout_w11;
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_10083ff0(param_1 + 0xc,param_3);
  }
  return 1;
}

