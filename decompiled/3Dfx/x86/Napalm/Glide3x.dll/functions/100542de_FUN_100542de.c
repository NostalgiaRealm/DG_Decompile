/*
 * FUN_100542de at 100542de
 * int __stdcall FUN_100542de(undefined4 * param_1)
 * Address ranges: 100542de-10054315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100542de(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_1005b6ec;
    thunk_FUN_10055686((LPVOID)param_1[2]);
    FUN_10055686(param_1);
  }
  return iVar2 + -1;
}

