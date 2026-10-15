/*
 * FUN_10081fc1 at 10081fc1
 * undefined __stdcall FUN_10081fc1(int param_1)
 * Address ranges: 10081fc1-10081ffd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081fc1(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  if (*piVar1 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 8) + iVar2 + -1 == 0) {
      FUN_10081e61((undefined4 *)(param_1 + -0x94));
    }
    FUN_10082477(*(int *)(param_1 + -0x34) + 200);
  }
  return;
}

