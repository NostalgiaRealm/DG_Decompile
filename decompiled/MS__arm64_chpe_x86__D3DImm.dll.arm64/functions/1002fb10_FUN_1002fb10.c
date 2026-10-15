/*
 * FUN_1002fb10 at 1002fb10
 * undefined FUN_1002fb10(void)
 * Address ranges: 1002fb10-1002fb3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002fb10(int *param_1)

{
  if (*(int *)(*param_1 + 0x2024) == param_1[1]) {
    *(int *)(*param_1 + 0x2024) = 0;
  }
  return;
}

