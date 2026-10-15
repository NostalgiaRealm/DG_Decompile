/*
 * FUN_100a39e8 at 100a39e8
 * int __stdcall FUN_100a39e8(undefined4 * param_1)
 * Address ranges: 100a39e8-100a3a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a39e8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_100b5730;
    thunk_FUN_100ad48c((LPVOID)param_1[2]);
    FUN_100ad48c(param_1);
  }
  return iVar2 + -1;
}

