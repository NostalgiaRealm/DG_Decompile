/*
 * FUN_10007f00 at 10007f00
 * undefined FUN_10007f00(void)
 * Address ranges: 10007f00-10007f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007f00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10021530(param_1,0x8876086c,0x8007000e);
  if (-1 < iVar1) {
    FUN_100ff690(param_1 + 0x53b0,0,0x400);
    *(undefined8 *)(param_1 + 0x57b0) = 0;
  }
  return iVar1;
}

