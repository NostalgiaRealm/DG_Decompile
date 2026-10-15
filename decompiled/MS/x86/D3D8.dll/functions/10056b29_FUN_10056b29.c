/*
 * FUN_10056b29 at 10056b29
 * undefined __stdcall FUN_10056b29(int * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 10056b29-10056c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056b29(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_4 == 0) {
    FUN_100a138c(piVar1,param_1,0x36);
    FUN_100a138c(piVar1,param_1,0x36);
    FUN_100a138c(piVar1,param_1,0x36);
  }
  else {
    FUN_100a138c(piVar1,param_1,0x11);
    FUN_100a138c(piVar1,param_1,0x11);
    FUN_100a138c(piVar1,param_1,0x11);
  }
  return;
}

