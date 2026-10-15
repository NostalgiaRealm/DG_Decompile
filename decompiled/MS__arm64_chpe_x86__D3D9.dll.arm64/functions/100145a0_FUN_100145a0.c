/*
 * FUN_100145a0 at 100145a0
 * undefined FUN_100145a0(void)
 * Address ranges: 100145a0-100145d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100145a0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x10) != '\0' && *(char *)(param_1 + 0x10) != '\x0f') ||
     (uVar1 = 1, *(char *)(param_1 + 0x13) != -0x3d)) {
    uVar1 = 0;
  }
  return uVar1;
}

