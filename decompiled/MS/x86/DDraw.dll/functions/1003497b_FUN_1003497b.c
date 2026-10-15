/*
 * FUN_1003497b at 1003497b
 * undefined __stdcall FUN_1003497b(int param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined4 * param_5, int param_6)
 * Address ranges: 1003497b-100349c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003497b(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 *param_5
                 ,int param_6)

{
  if ((param_4 == (int *)0x0) || (*param_4 != 0x6c)) {
    FUN_100288e0(param_1,param_2,param_3,param_4,param_5,param_6,0,(int *)0x0);
  }
  else {
    FUN_10034932(param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

