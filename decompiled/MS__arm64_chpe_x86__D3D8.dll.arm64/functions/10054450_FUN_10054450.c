/*
 * FUN_10054450 at 10054450
 * undefined FUN_10054450(void)
 * Address ranges: 10054450-1005456f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054450(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  FUN_1004c8a0(iVar1);
  FUN_10065628(iVar1,iVar2,iVar3,1,0,iVar4,iVar5,iVar6,iVar7);
  if (param_1[0xb] != 0) {
    FUN_100edee8(*(int *)(iVar1 + 0xd9b8) + 0x14f0,param_1[0xd],param_1[0xb],param_1[0xc]);
  }
  return;
}

