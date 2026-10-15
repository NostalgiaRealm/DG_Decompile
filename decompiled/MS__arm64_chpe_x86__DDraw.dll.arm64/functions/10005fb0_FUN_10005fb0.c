/*
 * FUN_10005fb0 at 10005fb0
 * undefined FUN_10005fb0(void)
 * Address ranges: 10005fb0-10005fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10005fb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005fe8(param_1);
  *(bool *)(param_1 + 0x27) = iVar1 != 0;
  return iVar1 != 0;
}

