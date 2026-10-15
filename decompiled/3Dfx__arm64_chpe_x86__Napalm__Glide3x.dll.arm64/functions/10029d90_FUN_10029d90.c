/*
 * FUN_10029d90 at 10029d90
 * undefined FUN_10029d90(void)
 * Address ranges: 10029d90-10029e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029d90(int *param_1)

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
  *(int *)(iVar1 + 0x43d0) = param_1[5];
  FUN_100101a8(iVar1,iVar2,iVar3,iVar4,(char)iVar5);
  if (param_1[6] != 0) {
    FUN_10076ac0(*(int *)(iVar1 + 0x3688) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

