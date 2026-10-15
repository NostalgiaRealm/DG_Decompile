/*
 * FUN_1800c38e0 at 1800c38e0
 * undefined __fastcall FUN_1800c38e0(longlong * param_1)
 * Address ranges: 1800c38e0-1800c3902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c38e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x124);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + (int)param_1[0x24] == 0) {
    FUN_1800c3ae8(param_1);
  }
  return;
}

