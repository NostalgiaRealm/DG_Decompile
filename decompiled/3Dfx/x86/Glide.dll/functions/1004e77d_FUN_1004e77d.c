/*
 * FUN_1004e77d at 1004e77d
 * int __stdcall FUN_1004e77d(undefined4 * param_1)
 * Address ranges: 1004e77d-1004e7b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e77d(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_10054fe4;
    thunk_FUN_1004f9b6((LPVOID)param_1[2]);
    FUN_1004f9b6(param_1);
  }
  return iVar2 + -1;
}

