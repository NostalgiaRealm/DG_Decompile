/*
 * FUN_10021690 at 10021690
 * undefined FUN_10021690(void)
 * Address ranges: 10021690-100216af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10021690(int param_1)

{
  int iVar1;
  
  iVar1 = 0xf0;
  if (*(int *)(param_1 + 0xfc) == 0) {
    iVar1 = 0x48;
  }
  return iVar1 + param_1;
}

