/*
 * FUN_1009c6fc at 1009c6fc
 * undefined __stdcall FUN_1009c6fc(int param_1)
 * Address ranges: 1009c6fc-1009c728
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009c6fc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -0x20) + 8);
    if (*(int *)(param_1 + -0x20) == 0) {
      piVar2 = (int *)&DAT_000066bc;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

