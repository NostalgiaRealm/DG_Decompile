/*
 * FUN_10065380 at 10065380
 * undefined FUN_10065380(void)
 * Address ranges: 10065380-1006545b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065380(int *param_1)

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
  FUN_1005c0c8(iVar1);
  FUN_1007ab40(iVar1,iVar2,iVar3,1,0,iVar4,0,iVar5,1);
  if (param_1[6] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

