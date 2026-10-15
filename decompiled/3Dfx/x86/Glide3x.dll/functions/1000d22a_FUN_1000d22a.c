/*
 * FUN_1000d22a at 1000d22a
 * bool __stdcall FUN_1000d22a(int param_1, int * param_2)
 * Address ranges: 1000d22a-1000d243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000d22a(int param_1,int *param_2)

{
  if (param_1 != 0) {
    *param_2 = param_1;
  }
  return param_1 == 0;
}

