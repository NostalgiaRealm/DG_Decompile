/*
 * FUN_10084ef8 at 10084ef8
 * undefined FUN_10084ef8(void)
 * Address ranges: 10084ef8-10084f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10084ef8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_100914b0(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_100917a0(iVar4,iVar2,*piVar1);
  FUN_100914d0(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

