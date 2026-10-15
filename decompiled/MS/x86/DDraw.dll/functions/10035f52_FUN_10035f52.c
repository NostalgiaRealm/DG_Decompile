/*
 * FUN_10035f52 at 10035f52
 * undefined4 __stdcall FUN_10035f52(int param_1)
 * Address ranges: 10035f52-10035f68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035f52(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x1dc);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 0;
}

