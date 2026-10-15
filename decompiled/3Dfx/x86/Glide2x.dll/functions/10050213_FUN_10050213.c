/*
 * FUN_10050213 at 10050213
 * undefined1 __cdecl FUN_10050213(char param_1)
 * Address ranges: 10050213-10050230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __cdecl FUN_10050213(char param_1)

{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\r')) && (param_1 != '\n')) {
    return 0;
  }
  return 1;
}

