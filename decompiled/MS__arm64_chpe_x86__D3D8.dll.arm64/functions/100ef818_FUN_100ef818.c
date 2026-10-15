/*
 * FUN_100ef818 at 100ef818
 * undefined FUN_100ef818(void)
 * Address ranges: 100ef818-100ef883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ef818(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  while ((iVar1 != 0 && (iVar1 = FUN_100fef80(param_2,param_1[iVar2]), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    iVar1 = param_1[iVar2];
  }
  if (param_1[iVar2] == 0) {
    param_1[iVar2] = param_2;
  }
  return iVar2;
}

