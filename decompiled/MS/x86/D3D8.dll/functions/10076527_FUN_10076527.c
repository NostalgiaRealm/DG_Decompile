/*
 * FUN_10076527 at 10076527
 * uint __cdecl FUN_10076527(uint param_1)
 * Address ranges: 10076527-1007655a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_10076527(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1007320a(param_1 & 0xf,(param_1 & 0xc00) != 0,(byte)(param_1 >> 7) & 1,
                       (byte)(param_1 >> 8) & 1);
  return uVar1 ^ 1;
}

