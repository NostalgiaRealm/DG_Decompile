/*
 * FUN_10065145 at 10065145
 * undefined __stdcall FUN_10065145(int * param_1, int param_2)
 * Address ranges: 10065145-1006539f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065145(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100c2e34((int)piVar1,1,'\x01');
  uVar3 = FUN_100c2e34((int)piVar1,1,'\x01');
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0);
  FUN_100c3be1(piVar1,param_1,0x10);
  FUN_100c3be1(piVar1,param_1,0x10);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x32);
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c3be1(piVar1,param_1,0x32);
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100c3be1(piVar1,param_1,0x38);
  FUN_100c2ed2((int)piVar1,uVar2);
  FUN_100c2ed2((int)piVar1,uVar3);
  return;
}

