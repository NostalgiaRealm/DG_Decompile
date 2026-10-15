/*
 * _guFogTableIndexToW@4_native at 100057e0
 * undefined _guFogTableIndexToW@4_native(void)
 * Address ranges: 100057e0-10005823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float _guFogTableIndexToW_4_native(int param_1)

{
  uint uVar1;
  double extraout_d0;
  
  uVar1 = FUN_1004be18(0x4000000000000000,(double)((float)(param_1 >> 2) + 3.0));
  return (float)(extraout_d0 / (double)(int)(8 - (uVar1 & 3)));
}

