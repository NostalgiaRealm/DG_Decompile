/*
 * FUN_10029623 at 10029623
 * int __stdcall FUN_10029623(undefined4 * param_1)
 * Address ranges: 10029623-1002965a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10029623(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = param_1 + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_100258dc((void *)param_1[3],(int)param_1);
    FUN_1002957a(param_1);
    FUN_10060be1(param_1);
  }
  return iVar2 + -1;
}

