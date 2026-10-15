/*
 * FUN_1002d694 at 1002d694
 * undefined8 __stdcall FUN_1002d694(undefined4 * param_1)
 * Address ranges: 1002d694-1002d6cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002d694(undefined4 *param_1)

{
  uint uStack_8;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uStack_8 = 0;
  }
  else {
    uStack_8 = 0x80000000;
  }
  return CONCAT44(param_1[1] | uStack_8,*(undefined4 *)*param_1);
}

