/*
 * FUN_100e1bd0 at 100e1bd0
 * undefined FUN_100e1bd0(void)
 * Address ranges: 100e1bd0-100e1be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100e1bd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

