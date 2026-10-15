/*
 * FUN_1004e76a at 1004e76a
 * int __stdcall FUN_1004e76a(int param_1)
 * Address ranges: 1004e76a-1004e77c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e76a(int param_1)

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

