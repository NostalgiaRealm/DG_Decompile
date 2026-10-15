/*
 * FUN_10015fb3 at 10015fb3
 * int * __stdcall FUN_10015fb3(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 10015fb3-10015ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10015fb3(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  param_1[2] = 0;
  param_1[5] = 1;
  param_1[1] = param_3 * param_7;
  *param_1 = param_2 * param_6;
  param_1[3] = param_4 * param_6;
  param_1[4] = param_5 * param_7;
  return param_1;
}

