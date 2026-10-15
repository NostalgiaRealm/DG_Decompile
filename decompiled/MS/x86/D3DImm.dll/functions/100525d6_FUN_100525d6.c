/*
 * FUN_100525d6 at 100525d6
 * undefined __stdcall FUN_100525d6(int param_1, int param_2)
 * Address ranges: 100525d6-10052610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100525d6(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_100520d4(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 100))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

