/*
 * FUN_1003646e at 1003646e
 * undefined __stdcall FUN_1003646e(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, byte param_6, undefined4 param_7, undefined4 param_8, int param_9, int param_10, int * param_11)
 * Address ranges: 1003646e-10036533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003646e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 int param_10,int *param_11)

{
  if (param_10 == 0) {
    FUN_10056ee5((int)param_1,4,'\0');
  }
  FUN_10057c8a(param_1,param_11,0xa7);
  FUN_10057c8a(param_1,param_11,0xa7);
  FUN_10057c8a(param_1,param_11,0);
  FUN_100361fb(param_1,param_2,param_3,param_9,param_6,param_11);
  return;
}

