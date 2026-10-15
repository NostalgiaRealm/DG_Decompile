/*
 * FUN_10049630 at 10049630
 * undefined FUN_10049630(void)
 * Address ranges: 10049630-10049663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10049630(int param_1,int param_2)

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

