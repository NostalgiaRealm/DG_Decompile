/*
 * FUN_1004ecf0 at 1004ecf0
 * undefined FUN_1004ecf0(void)
 * Address ranges: 1004ecf0-1004ed23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004ecf0(int param_1,int param_2)

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

