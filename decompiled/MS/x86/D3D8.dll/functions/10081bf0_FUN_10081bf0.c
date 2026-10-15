/*
 * FUN_10081bf0 at 10081bf0
 * undefined __stdcall FUN_10081bf0(int param_1)
 * Address ranges: 10081bf0-10081c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081bf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -0x3c) + 4);
    if (*(int *)(param_1 + -0x3c) == 0) {
      piVar2 = (int *)&DAT_000058e4;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

