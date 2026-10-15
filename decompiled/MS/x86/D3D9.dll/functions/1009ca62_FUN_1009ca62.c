/*
 * FUN_1009ca62 at 1009ca62
 * int __stdcall FUN_1009ca62(undefined4 * param_1)
 * Address ranges: 1009ca62-1009ca9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009ca62(undefined4 *param_1)

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
    FUN_1009c94a(param_1);
  }
  if (iVar3 == 0) {
    FUN_1009229f(iVar2 + 0x66b4);
  }
  return iVar3;
}

