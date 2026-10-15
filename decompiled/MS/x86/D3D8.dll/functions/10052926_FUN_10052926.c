/*
 * FUN_10052926 at 10052926
 * undefined __stdcall FUN_10052926(int * param_1, int param_2)
 * Address ranges: 10052926-10052aee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052926(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)(param_2 + 0x18);
  uVar2 = FUN_100a05ed((int)piVar1,3,'\x01');
  uVar3 = FUN_100a05ed((int)piVar1,1,'\x01');
  uVar4 = FUN_100a05ed((int)piVar1,1,'\x01');
  if (*(char *)(param_2 + 0x49e) == '\0') {
    FUN_100a138c(piVar1,param_1,0);
  }
  FUN_100a138c(piVar1,param_1,0);
  FUN_100a138c(piVar1,param_1,0x10);
  FUN_100a138c(piVar1,param_1,0x10);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a138c(piVar1,param_1,0xe);
  FUN_100a138c(piVar1,param_1,0x32);
  FUN_100a138c(piVar1,param_1,0x10);
  FUN_100a138c(piVar1,param_1,0x44);
  FUN_100a138c(piVar1,param_1,0x38);
  FUN_100a068b((int)piVar1,uVar2);
  FUN_100a068b((int)piVar1,uVar3);
  FUN_100a068b((int)piVar1,uVar4);
  return;
}

