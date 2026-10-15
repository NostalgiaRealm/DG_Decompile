/*
 * FUN_10114420 at 10114420
 * undefined FUN_10114420(void)
 * Address ranges: 10114420-10114437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10114420(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

