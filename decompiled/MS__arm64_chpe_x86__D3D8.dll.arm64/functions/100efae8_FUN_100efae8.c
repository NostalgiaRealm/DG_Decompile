/*
 * FUN_100efae8 at 100efae8
 * undefined FUN_100efae8(void)
 * Address ranges: 100efae8-100efb63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100efae8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_100ef6d8(param_1,*param_2,param_2[1] - *param_2);
  iVar1 = *param_1;
  *(int *)(iVar1 + 4) = (param_1[1] - iVar1) + -8;
  *(uint *)(iVar1 + 0xc) = ((uint)((param_1[1] - *param_1) - param_3) >> 2) + 2;
  return;
}

