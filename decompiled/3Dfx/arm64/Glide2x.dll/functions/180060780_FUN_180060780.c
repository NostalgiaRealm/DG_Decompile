/*
 * FUN_180060780 at 180060780
 * int __cdecl FUN_180060780(int param_1)
 * Address ranges: 180060780-180060793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180060780(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

