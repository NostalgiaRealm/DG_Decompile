/*
 * FUN_140024c68 at 140024c68
 * int __cdecl FUN_140024c68(int param_1)
 * Address ranges: 140024c68-140024c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_140024c68(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

