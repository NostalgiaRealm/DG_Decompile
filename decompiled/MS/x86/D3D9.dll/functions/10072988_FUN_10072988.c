/*
 * FUN_10072988 at 10072988
 * undefined __stdcall FUN_10072988(int * param_1, int param_2)
 * Address ranges: 10072988-100729e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072988(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x20) >> 3 & 1) != 0) {
    FUN_100c42a9(*(uint *)(param_2 + 0x18),param_1);
  }
  if ((*(uint *)(param_2 + 0x20) >> 4 & 1) != 0) {
    FUN_100c42a9(*(uint *)(param_2 + 0x18),param_1);
  }
  return;
}

