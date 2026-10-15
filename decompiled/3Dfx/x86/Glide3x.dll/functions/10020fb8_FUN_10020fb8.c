/*
 * FUN_10020fb8 at 10020fb8
 * undefined __fastcall FUN_10020fb8(int param_1)
 * Address ranges: 10020fb8-10020fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10020fb8(int param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    (**(code **)(**(int **)(param_1 + 0xf8) + 8))(*(int **)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(**(int **)(param_1 + 0xf4) + 8))(*(int **)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

