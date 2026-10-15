/*
 * FUN_100b1d2b at 100b1d2b
 * undefined __fastcall FUN_100b1d2b(int param_1)
 * Address ranges: 100b1d2b-100b1d56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b1d2b(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_100b42a6(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_100b22e0(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

