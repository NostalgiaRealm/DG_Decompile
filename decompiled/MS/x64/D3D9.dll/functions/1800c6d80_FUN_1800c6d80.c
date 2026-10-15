/*
 * FUN_1800c6d80 at 1800c6d80
 * byte __fastcall FUN_1800c6d80(uint param_1, byte param_2)
 * Address ranges: 1800c6d80-1800c6e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800c6d80(uint param_1,byte param_2)

{
  return -((param_2 & 2) != 0) & '\x01' << ((byte)(param_1 >> 0x12) & 3) |
         -((param_2 & 8) != 0) & '\x01' << ((byte)(param_1 >> 0x16) & 3) |
         -((param_2 & 4) != 0) & '\x01' << ((byte)(param_1 >> 0x14) & 3) |
         -((param_2 & 1) != 0) & '\x01' << ((byte)(param_1 >> 0x10) & 3);
}

