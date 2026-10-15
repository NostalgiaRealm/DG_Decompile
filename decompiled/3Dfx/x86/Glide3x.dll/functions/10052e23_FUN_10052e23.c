/*
 * FUN_10052e23 at 10052e23
 * undefined1 __cdecl FUN_10052e23(char param_1)
 * Address ranges: 10052e23-10052e40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_10052e23(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

