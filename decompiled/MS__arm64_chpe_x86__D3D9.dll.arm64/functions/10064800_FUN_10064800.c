/*
 * FUN_10064800 at 10064800
 * undefined FUN_10064800(void)
 * Address ranges: 10064800-100648eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064800(int *param_1)

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
  FUN_1005c0c8(iVar3);
  FUN_1007bd20(iVar3,iVar4,iVar5,1,0,iVar1,iVar6,iVar7,iVar1 + iVar2 + 0xfU & 0xfffffff0);
  return;
}

