/*
 * FUN_100bbda0 at 100bbda0
 * undefined FUN_100bbda0(void)
 * Address ranges: 100bbda0-100bbdc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bbda0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

