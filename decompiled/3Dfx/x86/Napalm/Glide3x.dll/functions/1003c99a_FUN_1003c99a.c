/*
 * FUN_1003c99a at 1003c99a
 * undefined __fastcall FUN_1003c99a(int param_1)
 * Address ranges: 1003c99a-1003c9c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c99a(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_100414e2(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_1004eba9(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

