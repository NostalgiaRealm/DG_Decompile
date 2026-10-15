/*
 * FUN_1006650b at 1006650b
 * uint __stdcall FUN_1006650b(int * param_1, int param_2, uint param_3)
 * Address ranges: 1006650b-10066673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1006650b(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100c2e34((int)piVar1,3,'\x01');
  FUN_100c3be1(piVar1,param_1,0x38);
  if (param_3 == 0) {
    param_3 = FUN_100c2e34((int)piVar1,4,'\x01');
  }
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c2ed2((int)piVar1,uVar2);
  return param_3;
}

