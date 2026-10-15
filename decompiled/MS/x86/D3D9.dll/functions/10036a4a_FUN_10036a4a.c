/*
 * FUN_10036a4a at 10036a4a
 * undefined __fastcall FUN_10036a4a(int param_1)
 * Address ranges: 10036a4a-10036a69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036a4a(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_100b4c8a(*(void **)(param_1 + 4),*(int *)(param_1 + 8),*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

