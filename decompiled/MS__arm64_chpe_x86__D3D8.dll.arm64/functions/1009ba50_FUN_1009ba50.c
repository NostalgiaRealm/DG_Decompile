/*
 * FUN_1009ba50 at 1009ba50
 * undefined FUN_1009ba50(void)
 * Address ranges: 1009ba50-1009ba73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ba50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

