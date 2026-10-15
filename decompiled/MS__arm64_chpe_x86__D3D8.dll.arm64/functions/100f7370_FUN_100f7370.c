/*
 * FUN_100f7370 at 100f7370
 * undefined FUN_100f7370(void)
 * Address ranges: 100f7370-100f739b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100f7370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + param_2 * 0x16c0 + 0x19c4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2 + 4;
  }
  return iVar1;
}

