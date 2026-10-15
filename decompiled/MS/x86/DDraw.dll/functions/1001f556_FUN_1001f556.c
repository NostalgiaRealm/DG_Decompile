/*
 * FUN_1001f556 at 1001f556
 * uint __cdecl FUN_1001f556(uint param_1)
 * Address ranges: 1001f556-1001f589
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1001f556(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1001c1b1(param_1 & 0xf,(param_1 & 0xc00) != 0,(byte)(param_1 >> 7) & 1,
                       (byte)(param_1 >> 8) & 1);
  return uVar1 ^ 1;
}

