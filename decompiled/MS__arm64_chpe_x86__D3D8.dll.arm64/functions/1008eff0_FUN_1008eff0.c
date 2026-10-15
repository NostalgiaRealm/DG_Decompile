/*
 * FUN_1008eff0 at 1008eff0
 * undefined FUN_1008eff0(void)
 * Address ranges: 1008eff0-1008f013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008eff0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xdc;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

