/*
 * FUN_10078c90 at 10078c90
 * undefined FUN_10078c90(void)
 * Address ranges: 10078c90-10078d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078c90(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_10083400(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_10083b40(iVar4,iVar2,*piVar1);
  FUN_10083420(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

