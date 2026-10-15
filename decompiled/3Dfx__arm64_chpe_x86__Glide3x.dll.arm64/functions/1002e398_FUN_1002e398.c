/*
 * FUN_1002e398 at 1002e398
 * undefined FUN_1002e398(void)
 * Address ranges: 1002e398-1002e3cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e398(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x20c) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x208) + 0x2c);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return;
}

