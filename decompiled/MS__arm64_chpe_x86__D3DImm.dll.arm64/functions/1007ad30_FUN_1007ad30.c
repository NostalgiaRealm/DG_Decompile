/*
 * FUN_1007ad30 at 1007ad30
 * undefined FUN_1007ad30(void)
 * Address ranges: 1007ad30-1007adab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007ad30(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_1007a920(param_1,*param_2,param_2[1] - *param_2);
  iVar1 = *param_1;
  *(int *)(iVar1 + 4) = (param_1[1] - iVar1) + -8;
  *(uint *)(iVar1 + 0xc) = ((uint)((param_1[1] - *param_1) - param_3) >> 2) + 2;
  return;
}

