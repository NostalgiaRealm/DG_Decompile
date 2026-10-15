/*
 * FUN_1007a898 at 1007a898
 * undefined FUN_1007a898(void)
 * Address ranges: 1007a898-1007a91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a898(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_10081da0(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_10081ee0(iVar4,iVar2,*piVar1);
  FUN_10081dc0(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

