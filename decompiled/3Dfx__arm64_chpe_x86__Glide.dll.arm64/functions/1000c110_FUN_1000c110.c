/*
 * FUN_1000c110 at 1000c110
 * undefined FUN_1000c110(void)
 * Address ranges: 1000c110-1000c143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000c110(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x44) + iVar1;
  }
  return iVar1;
}

