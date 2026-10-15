/*
 * FUN_1007aa60 at 1007aa60
 * undefined FUN_1007aa60(void)
 * Address ranges: 1007aa60-1007aacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007aa60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  while ((iVar1 != 0 && (iVar1 = FUN_10082d20(param_2,param_1[iVar2]), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    iVar1 = param_1[iVar2];
  }
  if (param_1[iVar2] == 0) {
    param_1[iVar2] = param_2;
  }
  return iVar2;
}

