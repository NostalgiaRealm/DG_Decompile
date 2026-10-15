/*
 * FUN_10122d90 at 10122d90
 * undefined FUN_10122d90(void)
 * Address ranges: 10122d90-10122dfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10122d90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  while ((iVar1 != 0 && (iVar1 = FUN_10132680(param_2,param_1[iVar2]), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    iVar1 = param_1[iVar2];
  }
  if (param_1[iVar2] == 0) {
    param_1[iVar2] = param_2;
  }
  return iVar2;
}

