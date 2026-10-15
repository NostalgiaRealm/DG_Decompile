/*
 * FUN_1005cd17 at 1005cd17
 * undefined __stdcall FUN_1005cd17(int * param_1, int param_2)
 * Address ranges: 1005cd17-1005cd74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cd17(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x20) >> 3 & 1) != 0) {
    FUN_100a1a54(*(uint *)(param_2 + 0x18),param_1);
  }
  if ((*(uint *)(param_2 + 0x20) >> 4 & 1) != 0) {
    FUN_100a1a54(*(uint *)(param_2 + 0x18),param_1);
  }
  return;
}

