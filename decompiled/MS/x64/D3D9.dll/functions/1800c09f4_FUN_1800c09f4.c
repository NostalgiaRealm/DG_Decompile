/*
 * FUN_1800c09f4 at 1800c09f4
 * int __fastcall FUN_1800c09f4(undefined8 * param_1)
 * Address ranges: 1800c09f4-1800c0a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c09f4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)((longlong)param_1 + 0xc) + iVar2 + -1 == 0) {
    *param_1 = &PTR_FUN_1801048f8;
    FUN_1800fbcf0(param_1);
  }
  return iVar2 + -1;
}

