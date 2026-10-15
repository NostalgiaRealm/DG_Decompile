/*
 * FUN_1800642b8 at 1800642b8
 * int __cdecl FUN_1800642b8(int param_1)
 * Address ranges: 1800642b8-1800642cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800642b8(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

