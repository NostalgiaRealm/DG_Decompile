/*
 * FUN_100e7970 at 100e7970
 * undefined FUN_100e7970(void)
 * Address ranges: 100e7970-100e7993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e7970(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(char *)(param_1 + 0x10) = '\0';
    uVar1 = 0;
  }
  return uVar1;
}

