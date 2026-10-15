/*
 * FUN_100542cb at 100542cb
 * int __stdcall FUN_100542cb(int param_1)
 * Address ranges: 100542cb-100542dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100542cb(int param_1)

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

