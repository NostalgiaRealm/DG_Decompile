/*
 * FUN_100295ae at 100295ae
 * int __stdcall FUN_100295ae(int param_1)
 * Address ranges: 100295ae-100295c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100295ae(int param_1)

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

