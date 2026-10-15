/*
 * FUN_100068c3 at 100068c3
 * undefined8 __stdcall FUN_100068c3(int * param_1)
 * Address ranges: 100068c3-1000690c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100068c3(int *param_1)

{
  return CONCAT44(*param_1 << 0x10 | param_1[1],
                  (param_1[9] & 0xffff0000U |
                  (((param_1[10] << 10 | param_1[8]) << 2 | param_1[7]) << 4 | param_1[5]) << 2) <<
                  5 | param_1[4]);
}

