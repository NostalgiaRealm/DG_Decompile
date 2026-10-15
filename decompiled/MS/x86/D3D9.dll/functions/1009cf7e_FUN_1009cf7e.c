/*
 * FUN_1009cf7e at 1009cf7e
 * int __stdcall FUN_1009cf7e(undefined4 * param_1)
 * Address ranges: 1009cf7e-1009cfb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009cf7e(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[4];
  piVar1 = param_1 + 1;
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar3 + -1;
  if (param_1[2] + iVar3 == 0) {
    FUN_1009cdc0(param_1);
  }
  if (iVar3 == 0) {
    FUN_1009229f(iVar2 + 0x66b4);
  }
  return iVar3;
}

