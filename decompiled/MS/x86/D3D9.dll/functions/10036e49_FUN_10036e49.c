/*
 * FUN_10036e49 at 10036e49
 * undefined8 __stdcall FUN_10036e49(undefined4 * param_1)
 * Address ranges: 10036e49-10036e82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10036e49(undefined4 *param_1)

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

