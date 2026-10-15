/*
 * FUN_1800bffe0 at 1800bffe0
 * undefined __fastcall FUN_1800bffe0(undefined8 * param_1)
 * Address ranges: 1800bffe0-1800c0002
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800bffe0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x84);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + *(int *)(param_1 + 0x10) == 0) {
    FUN_1800140f0(param_1);
  }
  return;
}

