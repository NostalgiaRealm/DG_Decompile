/*
 * FUN_10090a73 at 10090a73
 * int __stdcall FUN_10090a73(int param_1)
 * Address ranges: 10090a73-10090a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090a73(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

