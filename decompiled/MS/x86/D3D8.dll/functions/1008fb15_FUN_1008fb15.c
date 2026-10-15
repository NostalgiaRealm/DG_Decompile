/*
 * FUN_1008fb15 at 1008fb15
 * undefined __fastcall FUN_1008fb15(int param_1)
 * Address ranges: 1008fb15-1008fb40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008fb15(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_100920a4(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_100900ca(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

