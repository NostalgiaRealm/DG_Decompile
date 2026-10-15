/*
 * FUN_10021700 at 10021700
 * undefined FUN_10021700(void)
 * Address ranges: 10021700-10021723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10021700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

