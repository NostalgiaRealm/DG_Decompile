/*
 * FUN_1003520e at 1003520e
 * undefined __stdcall FUN_1003520e(int param_1, int * param_2)
 * Address ranges: 1003520e-10035236
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003520e(int param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) || (*param_2 != 0x6c)) {
    FUN_10026679(*(void **)(param_1 + 4),param_2);
  }
  else {
    FUN_100349c2((undefined4 *)(param_1 + 4),param_2);
  }
  return;
}

