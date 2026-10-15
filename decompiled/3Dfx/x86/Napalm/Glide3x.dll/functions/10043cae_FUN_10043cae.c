/*
 * FUN_10043cae at 10043cae
 * undefined __stdcall FUN_10043cae(int param_1, int param_2)
 * Address ranges: 10043cae-10043ce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043cae(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

