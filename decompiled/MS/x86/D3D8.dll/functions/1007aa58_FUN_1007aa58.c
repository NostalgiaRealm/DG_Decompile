/*
 * FUN_1007aa58 at 1007aa58
 * undefined __stdcall FUN_1007aa58(int param_1)
 * Address ranges: 1007aa58-1007aa84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007aa58(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -100) + 4);
    if (*(int *)(param_1 + -100) == 0) {
      piVar2 = (int *)&DAT_000058e4;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

