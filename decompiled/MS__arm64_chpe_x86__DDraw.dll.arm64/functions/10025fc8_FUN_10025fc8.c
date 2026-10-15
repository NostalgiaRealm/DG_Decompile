/*
 * FUN_10025fc8 at 10025fc8
 * undefined FUN_10025fc8(void)
 * Address ranges: 10025fc8-10025ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10025fc8(int param_1)

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

