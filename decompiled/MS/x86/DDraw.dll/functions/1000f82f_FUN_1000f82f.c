/*
 * FUN_1000f82f at 1000f82f
 * int __stdcall FUN_1000f82f(int param_1)
 * Address ranges: 1000f82f-1000f84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000f82f(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0xc0;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

