/*
 * FUN_1800615d0 at 1800615d0
 * int __cdecl FUN_1800615d0(int param_1)
 * Address ranges: 1800615d0-1800615e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800615d0(int param_1)

{
  if (param_1 - 0x41U < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

