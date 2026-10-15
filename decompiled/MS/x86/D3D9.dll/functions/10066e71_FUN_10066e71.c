/*
 * FUN_10066e71 at 10066e71
 * undefined __stdcall FUN_10066e71(int param_1, uint param_2)
 * Address ranges: 10066e71-10066e99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066e71(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x1a4) == 0) {
    FUN_1006ba4f(param_1,param_2);
  }
  else {
    FUN_100c2ed2(param_1 + 0x18,param_2);
  }
  return;
}

