/*
 * FUN_100660a2 at 100660a2
 * undefined __fastcall FUN_100660a2(int param_1)
 * Address ranges: 100660a2-100660cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100660a2(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 8))(*(int **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

