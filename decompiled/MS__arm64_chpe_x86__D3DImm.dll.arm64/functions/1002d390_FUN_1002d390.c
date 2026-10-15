/*
 * FUN_1002d390 at 1002d390
 * undefined FUN_1002d390(void)
 * Address ranges: 1002d390-1002d4ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d390(int *param_1)

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
  FUN_10024940(iVar1);
  FUN_10038c90(iVar1,iVar2,iVar3,1,0,iVar4,0,iVar5,iVar6);
  if (param_1[10] != 0) {
    FUN_100792a0(*(int *)(iVar1 + 0x1d54) + 0x14f0,param_1[0xc],param_1[10],param_1[0xb]);
  }
  return;
}

