/*
 * FUN_1009c9da at 1009c9da
 * undefined __stdcall FUN_1009c9da(int param_1)
 * Address ranges: 1009c9da-1009c9fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009c9da(int param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x10)) =
         *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x10)) + 1;
    UNLOCK();
  }
  return;
}

