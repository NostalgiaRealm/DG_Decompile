/*
 * FUN_1002dd95 at 1002dd95
 * undefined FUN_1002dd95(void)
 * Address ranges: 1002dd95-1002ddac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002dd95(ushort param_1)

{
  if (((param_1 & 0xff0) != 0) && ((param_1 & 0xff0) != 0x200)) {
    return 0;
  }
  return 1;
}

