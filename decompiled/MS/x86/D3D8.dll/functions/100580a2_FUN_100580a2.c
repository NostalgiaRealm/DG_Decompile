/*
 * FUN_100580a2 at 100580a2
 * uint __stdcall FUN_100580a2(int * param_1, int param_2, uint param_3)
 * Address ranges: 100580a2-1005816c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100580a2(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_2 + 0x18);
    param_3 = FUN_100a05ed((int)piVar1,3,'\x01');
    FUN_100a138c(piVar1,param_1,0x11);
    FUN_100a138c(piVar1,param_1,0x11);
    FUN_100a138c(piVar1,param_1,0x11);
    if ((*(uint *)(*(int *)(param_2 + 0x19c) + 0x44) >> 0x17 & 1) != 0) {
      FUN_10056c44(param_1,param_2);
    }
  }
  return param_3;
}

