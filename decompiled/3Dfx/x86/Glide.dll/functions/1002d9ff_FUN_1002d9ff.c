/*
 * FUN_1002d9ff at 1002d9ff
 * undefined __fastcall FUN_1002d9ff(int param_1)
 * Address ranges: 1002d9ff-1002da35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d9ff(int param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    (**(code **)(**(int **)(param_1 + 0xf8) + 8))(*(int **)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(**(int **)(param_1 + 0xf4) + 8))(*(int **)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

