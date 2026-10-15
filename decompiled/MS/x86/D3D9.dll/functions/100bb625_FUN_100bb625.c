/*
 * FUN_100bb625 at 100bb625
 * undefined __stdcall FUN_100bb625(int param_1, int param_2)
 * Address ranges: 100bb625-100bb65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb625(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 100))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

