/*
 * FUN_100648f0 at 100648f0
 * undefined FUN_100648f0(void)
 * Address ranges: 100648f0-10064a0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100648f0(int *param_1)

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
  FUN_1005c0c8(iVar1);
  FUN_1007bd20(iVar1,iVar2,iVar3,1,0,iVar4,iVar5,iVar6,iVar7);
  if (param_1[0xb] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[0xd],param_1[0xb],param_1[0xc]);
  }
  return;
}

