/*
 * FUN_10080e3d at 10080e3d
 * undefined __stdcall FUN_10080e3d(int param_1)
 * Address ranges: 10080e3d-10080e69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10080e3d(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -0x20) + 4);
    if (*(int *)(param_1 + -0x20) == 0) {
      piVar2 = (int *)&DAT_000058e4;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

