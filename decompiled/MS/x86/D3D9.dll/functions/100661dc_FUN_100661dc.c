/*
 * FUN_100661dc at 100661dc
 * uint __stdcall FUN_100661dc(int * param_1, int param_2, uint param_3)
 * Address ranges: 100661dc-1006650a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100661dc(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (param_3 == 0) {
    param_3 = FUN_100c2e34((int)piVar1,4,'\x01');
  }
  uVar2 = FUN_100c2e34((int)piVar1,2,'\x01');
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0x38);
  uVar3 = FUN_100c2e34((int)piVar1,3,'\x01');
  uVar4 = FUN_100c2e34(param_2 + 0x18,3,'\x01');
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x32);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  FUN_100c3be1((int *)(param_2 + 0x18),param_1,0x38);
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c2ed2((int)piVar1,uVar3);
  FUN_100c2ed2((int)piVar1,uVar4);
  FUN_100c2ed2((int)piVar1,uVar2);
  return param_3;
}

