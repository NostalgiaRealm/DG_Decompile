/*
 * FUN_1007c614 at 1007c614
 * int __stdcall FUN_1007c614(int param_1)
 * Address ranges: 1007c614-1007c630
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007c614(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0xc0;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

