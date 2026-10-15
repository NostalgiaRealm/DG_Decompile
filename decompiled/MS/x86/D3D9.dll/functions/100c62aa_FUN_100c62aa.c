/*
 * FUN_100c62aa at 100c62aa
 * int __stdcall FUN_100c62aa(int param_1)
 * Address ranges: 100c62aa-100c62bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c62aa(int param_1)

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

