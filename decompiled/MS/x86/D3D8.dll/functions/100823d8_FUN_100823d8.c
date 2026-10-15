/*
 * FUN_100823d8 at 100823d8
 * undefined __stdcall FUN_100823d8(int param_1)
 * Address ranges: 100823d8-10082407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100823d8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -0xb4) + 4);
    if (*(int *)(param_1 + -0xb4) == 0) {
      piVar2 = (int *)&DAT_000058e4;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

