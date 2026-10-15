/*
 * FUN_10026a10 at 10026a10
 * undefined FUN_10026a10(void)
 * Address ranges: 10026a10-10026aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026a10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  *(int *)(iVar1 + 0x4038) = param_1[6];
  FUN_1000e3b8(iVar1,iVar2,iVar3,iVar4,iVar5,(char)iVar6);
  if (param_1[7] != 0) {
    FUN_10071420(*(int *)(iVar1 + 0x3308) + 0x14f0,param_1[9],param_1[7],param_1[8]);
  }
  return;
}

