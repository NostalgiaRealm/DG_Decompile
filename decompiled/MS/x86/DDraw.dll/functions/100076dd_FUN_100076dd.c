/*
 * FUN_100076dd at 100076dd
 * int __stdcall FUN_100076dd(int param_1)
 * Address ranges: 100076dd-100076f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100076dd(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x88;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

