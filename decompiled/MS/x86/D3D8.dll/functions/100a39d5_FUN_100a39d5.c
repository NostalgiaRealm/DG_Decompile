/*
 * FUN_100a39d5 at 100a39d5
 * int __stdcall FUN_100a39d5(int param_1)
 * Address ranges: 100a39d5-100a39e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a39d5(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

