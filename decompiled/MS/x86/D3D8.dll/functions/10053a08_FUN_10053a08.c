/*
 * FUN_10053a08 at 10053a08
 * uint __stdcall FUN_10053a08(int * param_1, int param_2, uint param_3)
 * Address ranges: 10053a08-10053b70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10053a08(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100a05ed((int)piVar1,3,'\x01');
  FUN_100a138c(piVar1,param_1,0x38);
  if (param_3 == 0) {
    param_3 = FUN_100a05ed((int)piVar1,4,'\x01');
  }
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a068b((int)piVar1,uVar2);
  return param_3;
}

