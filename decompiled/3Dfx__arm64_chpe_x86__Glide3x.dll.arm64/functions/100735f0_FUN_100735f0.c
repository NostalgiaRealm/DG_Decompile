/*
 * FUN_100735f0 at 100735f0
 * undefined FUN_100735f0(void)
 * Address ranges: 100735f0-10073673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100735f0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_1007dd60(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_1007e4a0(iVar4,iVar2,*piVar1);
  FUN_1007dd80(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

