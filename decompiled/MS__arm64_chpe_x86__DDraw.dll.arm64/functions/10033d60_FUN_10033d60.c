/*
 * FUN_10033d60 at 10033d60
 * undefined FUN_10033d60(void)
 * Address ranges: 10033d60-10033d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10033d60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}

