/*
 * FUN_100695c0 at 100695c0
 * undefined FUN_100695c0(void)
 * Address ranges: 100695c0-100695d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100695c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

