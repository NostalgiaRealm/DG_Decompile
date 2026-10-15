/*
 * FUN_10063df0 at 10063df0
 * undefined FUN_10063df0(void)
 * Address ranges: 10063df0-10063ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063df0(int *param_1)

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
  FUN_1005c0c8(iVar1);
  FUN_1007ab40(iVar1,iVar2,iVar3,1,0,iVar4,iVar5,iVar6,0);
  if (param_1[7] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[9],param_1[7],param_1[8]);
  }
  return;
}

