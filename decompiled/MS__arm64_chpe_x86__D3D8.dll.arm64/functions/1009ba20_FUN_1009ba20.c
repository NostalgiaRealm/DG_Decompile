/*
 * FUN_1009ba20 at 1009ba20
 * undefined FUN_1009ba20(void)
 * Address ranges: 1009ba20-1009ba3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ba20(int param_1)

{
  int iVar1;
  
  iVar1 = 0xf0;
  if (*(int *)(param_1 + 0xfc) == 0) {
    iVar1 = 0x48;
  }
  return iVar1 + param_1;
}

