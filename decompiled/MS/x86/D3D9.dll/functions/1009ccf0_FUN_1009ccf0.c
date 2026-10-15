/*
 * FUN_1009ccf0 at 1009ccf0
 * int __stdcall FUN_1009ccf0(int param_1)
 * Address ranges: 1009ccf0-1009cd02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ccf0(int param_1)

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

