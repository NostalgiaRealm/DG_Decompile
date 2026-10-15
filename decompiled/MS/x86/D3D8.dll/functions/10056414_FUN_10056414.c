/*
 * FUN_10056414 at 10056414
 * undefined __stdcall FUN_10056414(int * param_1, int param_2)
 * Address ranges: 10056414-10056476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056414(int *param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_100a1a54(*(uint *)(param_2 + 0x18),param_1);
  }
  if ((*(uint *)(param_2 + 0x20) >> 2 & 1) != 0) {
    FUN_100a1a54(*(uint *)(param_2 + 0x18),param_1);
  }
  return;
}

