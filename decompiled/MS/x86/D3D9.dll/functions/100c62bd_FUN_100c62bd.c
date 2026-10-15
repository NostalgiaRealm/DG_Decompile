/*
 * FUN_100c62bd at 100c62bd
 * int __stdcall FUN_100c62bd(undefined4 * param_1)
 * Address ranges: 100c62bd-100c62f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c62bd(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_100d9188;
    thunk_FUN_100cfd6c((LPVOID)param_1[2]);
    FUN_100cfd6c(param_1);
  }
  return iVar2 + -1;
}

