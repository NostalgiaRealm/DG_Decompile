/*
 * FUN_100c6230 at 100c6230
 * undefined FUN_100c6230(void)
 * Address ranges: 100c6230-100c6277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100c6230(int param_1,uint param_2,uint param_3)

{
  int extraout_w11;
  
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_10121648(param_1 + 0xc,param_2);
    param_1 = extraout_w11;
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_10121648(param_1 + 0xc,param_3);
  }
  return 1;
}

