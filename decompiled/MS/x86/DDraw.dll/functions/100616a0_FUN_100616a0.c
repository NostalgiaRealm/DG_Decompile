/*
 * FUN_100616a0 at 100616a0
 * undefined1 __cdecl FUN_100616a0(char param_1)
 * Address ranges: 100616a0-100616bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_100616a0(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

