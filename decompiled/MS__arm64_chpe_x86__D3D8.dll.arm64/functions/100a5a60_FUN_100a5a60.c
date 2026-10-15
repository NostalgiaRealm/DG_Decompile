/*
 * FUN_100a5a60 at 100a5a60
 * undefined FUN_100a5a60(void)
 * Address ranges: 100a5a60-100a5aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100a5a60(int param_1,uint param_2,uint param_3)

{
  int extraout_w11;
  
  if ((param_2 != 0) && ((param_2 & 0x3f00) == 0)) {
    FUN_100ee638(param_1 + 0xc,param_2);
    param_1 = extraout_w11;
  }
  if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
    FUN_100ee638(param_1 + 0xc,param_3);
  }
  return 1;
}

