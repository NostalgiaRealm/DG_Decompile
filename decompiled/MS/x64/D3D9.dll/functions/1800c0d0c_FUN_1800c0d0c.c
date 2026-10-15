/*
 * FUN_1800c0d0c at 1800c0d0c
 * int __fastcall FUN_1800c0d0c(undefined8 * param_1)
 * Address ranges: 1800c0d0c-1800c0d4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c0d0c(undefined8 *param_1)

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
    FUN_1800c0a50(param_1);
  }
  if (iVar3 == 0) {
    FUN_1800b0664(lVar2 + 0x6838);
  }
  return iVar3;
}

