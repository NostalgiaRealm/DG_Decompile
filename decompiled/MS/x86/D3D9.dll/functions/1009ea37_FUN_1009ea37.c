/*
 * FUN_1009ea37 at 1009ea37
 * undefined __stdcall FUN_1009ea37(int param_1)
 * Address ranges: 1009ea37-1009ea52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009ea37(int param_1)

{
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  FUN_1009eec8(*(int *)(param_1 + -0x30) + 200);
  return;
}

