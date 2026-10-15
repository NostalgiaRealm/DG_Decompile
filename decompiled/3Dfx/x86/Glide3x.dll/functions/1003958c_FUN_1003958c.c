/*
 * FUN_1003958c at 1003958c
 * undefined __fastcall FUN_1003958c(int param_1)
 * Address ranges: 1003958c-100395b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003958c(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_1003e0d9(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_1004b7a0(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

