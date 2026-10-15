/*
 * FUN_100ae1a0 at 100ae1a0
 * undefined FUN_100ae1a0(void)
 * Address ranges: 100ae1a0-100ae1c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ae1a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}

