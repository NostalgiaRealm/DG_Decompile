/*
 * FUN_10026360 at 10026360
 * undefined FUN_10026360(void)
 * Address ranges: 10026360-100263f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026360(int *param_1)

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
  *(int *)(iVar1 + 0x4038) = param_1[5];
  FUN_1000e308(iVar1,iVar2,iVar3,iVar4,(char)iVar5);
  if (param_1[6] != 0) {
    FUN_10071420(*(int *)(iVar1 + 0x3308) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

