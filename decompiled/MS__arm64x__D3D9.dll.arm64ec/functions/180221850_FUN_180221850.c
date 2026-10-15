/*
 * FUN_180221850 at 180221850
 * undefined FUN_180221850(void)
 * Address ranges: 180221850-18022186f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180221850(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_180104210(param_1,1,0);
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar1 = FUN_180104210(param_1,1,0);
  }
  return;
}

