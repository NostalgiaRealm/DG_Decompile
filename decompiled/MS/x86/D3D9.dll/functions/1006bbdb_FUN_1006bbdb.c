/*
 * FUN_1006bbdb at 1006bbdb
 * undefined __stdcall FUN_1006bbdb(int * param_1, int param_2)
 * Address ranges: 1006bbdb-1006bc3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bbdb(int *param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_100c42a9(*(uint *)(param_2 + 0x18),param_1);
  }
  if ((*(uint *)(param_2 + 0x20) >> 2 & 1) != 0) {
    FUN_100c42a9(*(uint *)(param_2 + 0x18),param_1);
  }
  return;
}

