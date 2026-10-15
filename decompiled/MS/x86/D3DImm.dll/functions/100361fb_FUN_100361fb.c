/*
 * FUN_100361fb at 100361fb
 * undefined __stdcall FUN_100361fb(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, byte param_5, int * param_6)
 * Address ranges: 100361fb-1003627c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100361fb(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,byte param_5,
                 int *param_6)

{
  if (param_4 != 0) {
    FUN_10058073(param_5,0);
    FUN_10057c8a(param_1,param_6,1);
  }
  if (param_1[0x92] != 0) {
    FUN_10057c8a(param_1,param_6,0x37);
  }
  return;
}

