/*
 * FUN_100505a3 at 100505a3
 * undefined1 __cdecl FUN_100505a3(char param_1)
 * Address ranges: 100505a3-100505c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_100505a3(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

