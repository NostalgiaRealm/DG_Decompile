/*
 * FUN_1000e69c at 1000e69c
 * undefined __fastcall FUN_1000e69c(int param_1)
 * Address ranges: 1000e69c-1000e6c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e69c(int param_1)

{
  FUN_100264f9(*(undefined4 **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_100ad4c5(*(LPVOID *)(*(int *)(param_1 + 0x24) + -4));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

