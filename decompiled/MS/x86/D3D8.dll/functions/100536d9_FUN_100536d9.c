/*
 * FUN_100536d9 at 100536d9
 * uint __stdcall FUN_100536d9(int * param_1, int param_2, uint param_3)
 * Address ranges: 100536d9-10053a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100536d9(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_3 == 0) {
    param_3 = FUN_100a05ed((int)piVar1,4,'\x01');
  }
  uVar2 = FUN_100a05ed((int)piVar1,2,'\x01');
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a138c(piVar1,param_1,0x38);
  uVar3 = FUN_100a05ed((int)piVar1,3,'\x01');
  uVar4 = FUN_100a05ed(param_2 + 0x18,3,'\x01');
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a068b((int)piVar1,uVar3);
  FUN_100a068b((int)piVar1,uVar4);
  FUN_100a068b((int)piVar1,uVar2);
  return param_3;
}

