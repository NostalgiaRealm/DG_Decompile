/*
 * FUN_1005deb0 at 1005deb0
 * undefined FUN_1005deb0(void)
 * Address ranges: 1005deb0-1005dee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005deb0(int param_1,int param_2)

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

