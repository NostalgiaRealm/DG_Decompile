/*
 * FUN_10043520 at 10043520
 * undefined __stdcall FUN_10043520(int param_1, int param_2)
 * Address ranges: 10043520-1004355a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043520(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 100))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

