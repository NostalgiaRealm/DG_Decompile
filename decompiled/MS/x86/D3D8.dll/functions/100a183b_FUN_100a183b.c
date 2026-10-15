/*
 * FUN_100a183b at 100a183b
 * byte __fastcall FUN_100a183b(byte param_1, byte param_2)
 * Address ranges: 100a183b-100a1888
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_100a183b(byte param_1,byte param_2)

{
  return ((param_1 >> (param_2 >> 4 & 3) * '\x02' & 3 | (param_1 >> (param_2 >> 6) * '\x02') << 2)
          << 2 | param_1 >> (param_2 >> 2 & 3) * '\x02' & 3) << 2 |
         param_1 >> (param_2 & 3) * '\x02' & 3;
}

