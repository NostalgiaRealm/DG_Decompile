/*
 * FUN_1002da0b at 1002da0b
 * undefined FUN_1002da0b(void)
 * Address ranges: 1002da0b-1002da22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002da0b(ushort param_1)

{
  if (((param_1 & 0xff0) != 0) && ((param_1 & 0xff0) != 0x200)) {
    return 0;
  }
  return 1;
}

