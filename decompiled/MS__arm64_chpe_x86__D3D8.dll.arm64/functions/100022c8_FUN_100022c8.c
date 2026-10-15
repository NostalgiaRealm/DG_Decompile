/*
 * FUN_100022c8 at 100022c8
 * undefined FUN_100022c8(void)
 * Address ranges: 100022c8-1000234b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100022c8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_100fece0(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_100ff660(iVar4,iVar2,*piVar1);
  FUN_100fed00(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

