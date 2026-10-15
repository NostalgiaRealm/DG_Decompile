/*
 * FUN_10123060 at 10123060
 * undefined FUN_10123060(void)
 * Address ranges: 10123060-101230db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10123060(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_10122c50(param_1,*param_2,param_2[1] - *param_2);
  iVar1 = *param_1;
  *(int *)(iVar1 + 4) = (param_1[1] - iVar1) + -8;
  *(uint *)(iVar1 + 0xc) = ((uint)((param_1[1] - *param_1) - param_3) >> 2) + 2;
  return;
}

