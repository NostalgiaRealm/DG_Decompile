/*
 * FUN_1004faf5 at 1004faf5
 * int __stdcall FUN_1004faf5(undefined4 * param_1)
 * Address ranges: 1004faf5-1004fb2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004faf5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 3;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_10066958;
    thunk_FUN_10060be1((LPVOID)param_1[2]);
    FUN_10060be1(param_1);
  }
  return iVar2 + -1;
}

