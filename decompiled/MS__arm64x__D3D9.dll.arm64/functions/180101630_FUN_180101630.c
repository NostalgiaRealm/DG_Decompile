/*
 * FUN_180101630 at 180101630
 * undefined FUN_180101630(void)
 * Address ranges: 180101630-180101677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101630(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_180001510(param_1,1,0);
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    iVar1 = FUN_180001510(param_1,1,0);
  }
  return;
}

