/*
 * _guFogTableIndexToW@4_native at 100047e0
 * undefined _guFogTableIndexToW@4_native(void)
 * Address ranges: 100047e0-10004823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float _guFogTableIndexToW_4_native(int param_1)

{
  uint uVar1;
  double extraout_d0;
  
  uVar1 = FUN_10008e98(0x4000000000000000,(double)((float)(param_1 >> 2) + 3.0));
  return (float)(extraout_d0 / (double)(int)(8 - (uVar1 & 3)));
}

