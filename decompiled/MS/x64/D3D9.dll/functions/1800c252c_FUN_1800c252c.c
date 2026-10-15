/*
 * FUN_1800c252c at 1800c252c
 * undefined __fastcall FUN_1800c252c(longlong * param_1)
 * Address ranges: 1800c252c-1800c254e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c252c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xa4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + (int)param_1[0x14] == 0) {
    FUN_1800c2550(param_1);
  }
  return;
}

