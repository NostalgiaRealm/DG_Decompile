/*
 * FUN_1003ea18 at 1003ea18
 * undefined FUN_1003ea18(void)
 * Address ranges: 1003ea18-1003ea4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ea18(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x58) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x54) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return;
}

