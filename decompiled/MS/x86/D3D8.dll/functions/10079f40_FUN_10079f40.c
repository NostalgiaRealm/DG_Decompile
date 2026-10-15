/*
 * FUN_10079f40 at 10079f40
 * int __stdcall FUN_10079f40(int param_1)
 * Address ranges: 10079f40-10079f52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10079f40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

