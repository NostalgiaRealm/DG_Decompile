/*
 * FUN_1009d76a at 1009d76a
 * int __stdcall FUN_1009d76a(int param_1)
 * Address ranges: 1009d76a-1009d77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009d76a(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xe4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

