/*
 * FUN_1008f020 at 1008f020
 * undefined FUN_1008f020(void)
 * Address ranges: 1008f020-1008f043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008f020(int param_1)

{
  int iVar1;
  
  iVar1 = 0x18;
  if (*(char *)(param_1 + 0x151) != '\0') {
    iVar1 = 0xe0;
  }
  return *(undefined4 *)(iVar1 + param_1);
}

