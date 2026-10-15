/*
 * FUN_1800c0664 at 1800c0664
 * int __fastcall FUN_1800c0664(undefined8 * param_1)
 * Address ranges: 1800c0664-1800c06a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c0664(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_1[3];
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar3 + -1;
  if (*(int *)((longlong)param_1 + 0xc) + iVar3 == 0) {
    FUN_1800c04c0(param_1);
  }
  if (iVar3 == 0) {
    FUN_1800b0664(lVar2 + 0x6838);
  }
  return iVar3;
}

