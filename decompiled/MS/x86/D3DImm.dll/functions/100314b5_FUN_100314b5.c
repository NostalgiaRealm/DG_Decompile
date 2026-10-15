/*
 * FUN_100314b5 at 100314b5
 * undefined __stdcall FUN_100314b5(int * param_1, int * param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100314b5-100315c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100314b5(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  if ((param_5 >> 0x1b & 1) != 0) {
    FUN_10056ee5((int)param_1,4,'\0');
    FUN_10057c8a(param_1,param_2,0x2036);
    FUN_10057c8a(param_1,param_2,0x38);
    FUN_10057c8a(param_1,param_2,0x1c);
    FUN_10057c8a(param_1,param_2,1);
    FUN_10057c8a(param_1,param_2,0x56);
    FUN_10057c8a(param_1,param_2,0x38);
  }
  return;
}

