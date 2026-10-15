/*
 * FUN_10043710 at 10043710
 * undefined FUN_10043710(void)
 * Address ranges: 10043710-10043747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10043710(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1004f590(param_1);
  }
  return *(char *)(param_1 + 8) == '\0';
}

