/*
 * FUN_1800af510 at 1800af510
 * undefined __fastcall FUN_1800af510(longlong * param_1)
 * Address ranges: 1800af510-1800af532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af510(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xa4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 + (int)param_1[0x14] == 0) {
    FUN_1800af534(param_1);
  }
  return;
}

