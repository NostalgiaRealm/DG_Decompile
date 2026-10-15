/*
 * FUN_1800c29b8 at 1800c29b8
 * undefined __fastcall FUN_1800c29b8(longlong * param_1)
 * Address ranges: 1800c29b8-1800c29da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c29b8(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x9c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + (int)param_1[0x13] == 0) {
    FUN_180018028(param_1);
  }
  return;
}

