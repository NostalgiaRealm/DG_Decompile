/*
 * FUN_1007dd20 at 1007dd20
 * undefined FUN_1007dd20(void)
 * Address ranges: 1007dd20-1007dd37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1007dd20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

