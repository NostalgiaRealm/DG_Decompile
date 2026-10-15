/*
 * FUN_1004e3da at 1004e3da
 * int __stdcall FUN_1004e3da(int param_1)
 * Address ranges: 1004e3da-1004e3ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e3da(int param_1)

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

