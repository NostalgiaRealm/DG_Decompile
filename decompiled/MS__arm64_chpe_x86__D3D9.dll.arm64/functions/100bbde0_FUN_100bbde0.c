/*
 * FUN_100bbde0 at 100bbde0
 * undefined FUN_100bbde0(void)
 * Address ranges: 100bbde0-100bbe03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bbde0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

