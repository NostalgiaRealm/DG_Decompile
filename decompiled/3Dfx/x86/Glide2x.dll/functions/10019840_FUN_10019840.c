/*
 * FUN_10019840 at 10019840
 * bool __stdcall FUN_10019840(int param_1, int * param_2)
 * Address ranges: 10019840-10019859
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10019840(int param_1,int *param_2)

{
  if (param_1 != 0) {
    *param_2 = param_1;
  }
  return param_1 == 0;
}

