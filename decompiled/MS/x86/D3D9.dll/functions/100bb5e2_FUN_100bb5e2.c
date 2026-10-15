/*
 * FUN_100bb5e2 at 100bb5e2
 * undefined __stdcall FUN_100bb5e2(int param_1, int param_2)
 * Address ranges: 100bb5e2-100bb624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb5e2(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_100cfed0((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

