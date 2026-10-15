/*
 * FUN_10069345 at 10069345
 * undefined __stdcall FUN_10069345(int param_1, int * param_2)
 * Address ranges: 10069345-100693f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069345(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x474) != -1) {
    FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x37);
    FUN_100c2ed2(param_1 + 0x18,*(uint *)(param_1 + 0x310));
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  return;
}

