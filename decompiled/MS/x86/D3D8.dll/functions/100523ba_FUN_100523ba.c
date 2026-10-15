/*
 * FUN_100523ba at 100523ba
 * undefined __stdcall FUN_100523ba(int * param_1, int param_2)
 * Address ranges: 100523ba-10052640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100523ba(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x49e) != '\0') {
    FUN_10052641(param_1,param_2);
    FUN_10052641(param_1,param_2);
    FUN_10052641(param_1,param_2);
    uVar2 = FUN_100a05ed((int)piVar1,3,'\x01');
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0);
    FUN_100a138c((int *)(param_2 + 0x18),param_1,0x38);
    FUN_100a138c(piVar1,param_1,0x32);
    FUN_100a068b((int)piVar1,uVar2);
  }
  return;
}

