/*
 * FUN_100a0318 at 100a0318
 * undefined FUN_100a0318(void)
 * Address ranges: 100a0318-100a0343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100a0318(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x1bd) == '\0') || (*(char *)(param_1 + 0x1be) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

