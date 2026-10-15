/*
 * FUN_1005b711 at 1005b711
 * int __stdcall FUN_1005b711(int param_1)
 * Address ranges: 1005b711-1005b723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005b711(int param_1)

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

