/*
 * FUN_1001a780 at 1001a780
 * undefined FUN_1001a780(void)
 * Address ranges: 1001a780-1001a7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10033b80(param_1);
  *(bool *)(param_1 + 0x27) = iVar1 != 0;
  if (iVar1 == 0) {
    FUN_100338f8(param_1,0);
  }
  return;
}

