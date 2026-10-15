/*
 * FUN_1009eab1 at 1009eab1
 * undefined __stdcall FUN_1009eab1(int param_1)
 * Address ranges: 1009eab1-1009eaed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009eab1(int param_1)

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
      FUN_1009e951((undefined4 *)(param_1 + -0x90));
    }
    FUN_1009ef67(*(int *)(param_1 + -0x30) + 200);
  }
  return;
}

