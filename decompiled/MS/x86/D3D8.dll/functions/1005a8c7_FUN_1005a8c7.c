/*
 * FUN_1005a8c7 at 1005a8c7
 * undefined __stdcall FUN_1005a8c7(int param_1, uint * param_2)
 * Address ranges: 1005a8c7-1005a8ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a8c7(int param_1,uint *param_2)

{
  if ((*param_2 & 0x3f00) == 0) {
    FUN_100a068b(param_1 + 0x18,*param_2);
    *param_2 = 0;
  }
  return;
}

