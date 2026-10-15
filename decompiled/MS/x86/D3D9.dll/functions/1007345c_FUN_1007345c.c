/*
 * FUN_1007345c at 1007345c
 * undefined8 __stdcall FUN_1007345c(int * param_1)
 * Address ranges: 1007345c-100734a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007345c(int *param_1)

{
  return CONCAT44(*param_1 << 0x10 | param_1[1],
                  (param_1[9] & 0xffff0000U |
                  (((param_1[10] << 10 | param_1[8]) << 2 | param_1[7]) << 4 | param_1[5]) << 2) <<
                  5 | param_1[4]);
}

