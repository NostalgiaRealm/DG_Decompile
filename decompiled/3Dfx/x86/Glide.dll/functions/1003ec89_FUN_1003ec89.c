/*
 * FUN_1003ec89 at 1003ec89
 * undefined __stdcall FUN_1003ec89(int param_1, int param_2)
 * Address ranges: 1003ec89-1003ecc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ec89(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

