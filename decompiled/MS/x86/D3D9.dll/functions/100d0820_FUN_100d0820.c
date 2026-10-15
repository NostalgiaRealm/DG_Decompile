/*
 * FUN_100d0820 at 100d0820
 * undefined1 __cdecl FUN_100d0820(char param_1)
 * Address ranges: 100d0820-100d083d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_100d0820(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

