/*
 * FUN_10019bcb at 10019bcb
 * bool __stdcall FUN_10019bcb(int param_1, int * param_2)
 * Address ranges: 10019bcb-10019be4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10019bcb(int param_1,int *param_2)

{
  if (param_1 != 0) {
    *param_2 = param_1;
  }
  return param_1 == 0;
}

