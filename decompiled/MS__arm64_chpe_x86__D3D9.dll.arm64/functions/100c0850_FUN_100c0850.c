/*
 * FUN_100c0850 at 100c0850
 * undefined FUN_100c0850(void)
 * Address ranges: 100c0850-100c0873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0850(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x138);
  }
  return uVar1;
}

