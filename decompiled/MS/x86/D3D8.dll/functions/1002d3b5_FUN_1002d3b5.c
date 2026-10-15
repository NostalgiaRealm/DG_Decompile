/*
 * FUN_1002d3b5 at 1002d3b5
 * undefined __fastcall FUN_1002d3b5(int param_1)
 * Address ranges: 1002d3b5-1002d3d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d3b5(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_10092a86(*(void **)(param_1 + 4),*(int *)(param_1 + 8),*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

