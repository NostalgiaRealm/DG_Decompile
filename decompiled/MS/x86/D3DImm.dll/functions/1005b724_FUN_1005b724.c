/*
 * FUN_1005b724 at 1005b724
 * int __stdcall FUN_1005b724(undefined4 * param_1)
 * Address ranges: 1005b724-1005b75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005b724(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_1005ffcc;
    thunk_FUN_1005c76c((LPVOID)param_1[2]);
    FUN_1005c76c(param_1);
  }
  return iVar2 + -1;
}

