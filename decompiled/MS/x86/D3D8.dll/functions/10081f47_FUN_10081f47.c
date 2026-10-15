/*
 * FUN_10081f47 at 10081f47
 * undefined __stdcall FUN_10081f47(int param_1)
 * Address ranges: 10081f47-10081f62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081f47(int param_1)

{
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  FUN_100823d8(*(int *)(param_1 + -0x34) + 200);
  return;
}

