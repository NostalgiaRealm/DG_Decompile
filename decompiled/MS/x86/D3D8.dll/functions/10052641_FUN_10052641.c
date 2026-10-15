/*
 * FUN_10052641 at 10052641
 * undefined __stdcall FUN_10052641(int * param_1, int param_2)
 * Address ranges: 10052641-1005289b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052641(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100a05ed((int)piVar1,1,'\x01');
  uVar3 = FUN_100a05ed((int)piVar1,1,'\x01');
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0);
  FUN_100a138c(piVar1,param_1,0x10);
  FUN_100a138c(piVar1,param_1,0x10);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a138c(piVar1,param_1,0x32);
  piVar1 = (int *)(param_2 + 0x18);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a068b((int)piVar1,uVar2);
  FUN_100a068b((int)piVar1,uVar3);
  return;
}

