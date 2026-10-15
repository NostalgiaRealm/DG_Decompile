/*
 * FUN_1002c650 at 1002c650
 * undefined FUN_1002c650(void)
 * Address ranges: 1002c650-1002c72b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c650(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  FUN_10024940(iVar1);
  FUN_10037c70(iVar1,iVar2,iVar3,1,0,iVar4,0,iVar5,1);
  if (param_1[6] != 0) {
    FUN_100792a0(*(int *)(iVar1 + 0x1d54) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

