/*
 * FUN_10053b71 at 10053b71
 * uint __stdcall FUN_10053b71(int * param_1, int param_2, uint param_3)
 * Address ranges: 10053b71-10053c4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10053b71(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_3 == 0) {
    param_3 = FUN_100a05ed((int)piVar1,4,'\x01');
  }
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x32);
  return param_3;
}

