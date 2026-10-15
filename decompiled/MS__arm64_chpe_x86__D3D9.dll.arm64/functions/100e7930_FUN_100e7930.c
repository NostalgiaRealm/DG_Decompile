/*
 * FUN_100e7930 at 100e7930
 * undefined FUN_100e7930(void)
 * Address ranges: 100e7930-100e7957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e7930(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(char *)(param_1 + 0x10) = '\x01';
    uVar1 = 0;
  }
  return uVar1;
}

