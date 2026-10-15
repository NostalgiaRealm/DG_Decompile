/*
 * FUN_1007b473 at 1007b473
 * int __stdcall FUN_1007b473(int param_1)
 * Address ranges: 1007b473-1007b48e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007b473(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + -0x23) != '\0') {
    iVar1 = (*(char *)(param_1 + -0x22) != '\0') + 0x88760868;
  }
  return iVar1;
}

