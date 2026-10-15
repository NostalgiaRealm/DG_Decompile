/*
 * FUN_10036aab at 10036aab
 * undefined __fastcall FUN_10036aab(int param_1)
 * Address ranges: 10036aab-10036ad6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036aab(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_1003b5f4(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_10048cb8(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

