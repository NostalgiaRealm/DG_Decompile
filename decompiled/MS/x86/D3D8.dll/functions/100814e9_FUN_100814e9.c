/*
 * FUN_100814e9 at 100814e9
 * int __stdcall FUN_100814e9(int param_1)
 * Address ranges: 100814e9-100814fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100814e9(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xe0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

