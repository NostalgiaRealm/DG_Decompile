/*
 * FUN_1009ba90 at 1009ba90
 * undefined FUN_1009ba90(void)
 * Address ranges: 1009ba90-1009bab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ba90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  return iVar1;
}

