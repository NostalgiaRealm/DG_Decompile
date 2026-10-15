/*
 * FUN_100539fd at 100539fd
 * undefined __stdcall FUN_100539fd(int param_1, int param_2)
 * Address ranges: 100539fd-10053a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100539fd(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

