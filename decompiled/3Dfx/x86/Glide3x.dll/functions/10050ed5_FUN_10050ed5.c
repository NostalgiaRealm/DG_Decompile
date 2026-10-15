/*
 * FUN_10050ed5 at 10050ed5
 * int __stdcall FUN_10050ed5(undefined4 * param_1)
 * Address ranges: 10050ed5-10050f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10050ed5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_1005823c;
    thunk_FUN_10052276((LPVOID)param_1[2]);
    FUN_10052276(param_1);
  }
  return iVar2 + -1;
}

