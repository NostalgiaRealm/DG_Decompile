/*
 * FUN_1006fdd0 at 1006fdd0
 * undefined FUN_1006fdd0(void)
 * Address ranges: 1006fdd0-1006fe53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fdd0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_1007a4c0(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_1007ac00(iVar4,iVar2,*piVar1);
  FUN_1007a4e0(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

