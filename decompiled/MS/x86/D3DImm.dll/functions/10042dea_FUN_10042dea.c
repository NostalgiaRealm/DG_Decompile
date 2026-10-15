/*
 * FUN_10042dea at 10042dea
 * undefined1 __stdcall FUN_10042dea(int param_1, undefined1 param_2)
 * Address ranges: 10042dea-10042e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10042dea(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    param_2 = *(undefined1 *)(param_1 + 0x136);
  }
  return param_2;
}

