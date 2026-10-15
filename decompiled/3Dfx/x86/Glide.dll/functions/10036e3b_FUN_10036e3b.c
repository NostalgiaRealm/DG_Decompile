/*
 * FUN_10036e3b at 10036e3b
 * undefined __fastcall FUN_10036e3b(int param_1)
 * Address ranges: 10036e3b-10036e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036e3b(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_1003b984(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_10049048(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

