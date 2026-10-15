/*
 * FUN_1003ddc0 at 1003ddc0
 * undefined __stdcall FUN_1003ddc0(int param_1, int param_2)
 * Address ranges: 1003ddc0-1003ddf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ddc0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

