/*
 * FUN_1009cd52 at 1009cd52
 * int __stdcall FUN_1009cd52(undefined4 * param_1)
 * Address ranges: 1009cd52-1009cd85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009cd52(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 1;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((param_1[2] + iVar2 + -1 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_100d705c;
    FUN_100cfd6c(param_1);
  }
  return iVar2 + -1;
}

