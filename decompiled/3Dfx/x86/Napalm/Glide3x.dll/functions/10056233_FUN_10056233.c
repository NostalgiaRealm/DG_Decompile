/*
 * FUN_10056233 at 10056233
 * undefined1 __cdecl FUN_10056233(char param_1)
 * Address ranges: 10056233-10056250
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_10056233(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

