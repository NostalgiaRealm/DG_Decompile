/*
 * FUN_1800c1cf0 at 1800c1cf0
 * int __fastcall FUN_1800c1cf0(undefined8 * param_1)
 * Address ranges: 1800c1cf0-1800c1d39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c1cf0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_1[0x2f];
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x134);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar3 + -1;
  if (*(int *)(param_1 + 0x27) + iVar3 == 0) {
    FUN_1800c1c24(param_1);
  }
  if (iVar3 == 0) {
    FUN_1800b0664(lVar2 + 0x6838);
  }
  return iVar3;
}

