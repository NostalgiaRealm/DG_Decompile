/*
 * FUN_10021367 at 10021367
 * undefined FUN_10021367(void)
 * Address ranges: 10021367-1002137e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10021367(ushort param_1)

{
  if (((param_1 & 0xff0) != 0) && ((param_1 & 0xff0) != 0x200)) {
    return 0;
  }
  return 1;
}

