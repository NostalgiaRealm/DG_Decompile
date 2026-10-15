/*
 * FUN_1004fae2 at 1004fae2
 * int __stdcall FUN_1004fae2(int param_1)
 * Address ranges: 1004fae2-1004faf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004fae2(int param_1)

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

