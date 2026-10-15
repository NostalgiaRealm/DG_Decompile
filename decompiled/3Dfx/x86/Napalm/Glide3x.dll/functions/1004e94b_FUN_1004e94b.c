/*
 * FUN_1004e94b at 1004e94b
 * byte __fastcall FUN_1004e94b(byte param_1, byte param_2)
 * Address ranges: 1004e94b-1004e998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_1004e94b(byte param_1,byte param_2)

{
  return ((param_1 >> (param_2 >> 4 & 3) * '\x02' & 3 | (param_1 >> (param_2 >> 6) * '\x02') << 2)
          << 2 | param_1 >> (param_2 >> 2 & 3) * '\x02' & 3) << 2 |
         param_1 >> (param_2 & 3) * '\x02' & 3;
}

