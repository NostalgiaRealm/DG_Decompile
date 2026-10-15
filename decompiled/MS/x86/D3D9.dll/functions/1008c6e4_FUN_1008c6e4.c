/*
 * FUN_1008c6e4 at 1008c6e4
 * uint __cdecl FUN_1008c6e4(uint param_1)
 * Address ranges: 1008c6e4-1008c717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1008c6e4(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100893c7(param_1 & 0xf,(param_1 & 0xc00) != 0,(byte)(param_1 >> 7) & 1,
                       (byte)(param_1 >> 8) & 1);
  return uVar1 ^ 1;
}

